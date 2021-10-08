#include "Header.h"



void persons::SS() {
    std::ofstream output(path);
    output << number_of_student << ' ' << id_number;
    for (const auto& it : Person) { // проходим по студентам
        output << std::endl; // переводим строку после каждого студента
        output << it.first << ' ' << it.second.First_name << ' ' << it.second.Second_name;
        if (!Person[it.first].progress.empty()) { // если словарь не пустой
            for (const auto& it_ : Person[it.first].progress) { // проходим по предметам 
                for (const auto& v : it_.second) { // проходим по оценкам
                    output << ' ' << it_.first << ' ' << v;
                }
            }
        }
    }
    output.close();
}

void persons::LS() {
    std::ifstream input(path);
    if (input.is_open()) {
        //input >> number_of_student >> id_number;
        std::string temp;
        getline(input, temp);
        std::stringstream ss(temp);
        ss >> number_of_student >> id_number;
        /*input.ignore(1);*/
        while (getline(input, temp)) {
            std::stringstream ss(temp);
            std::string fname, sname;
            int id;
            ss >> id >> fname >> sname;
            Person[id].First_name = fname;
            Person[id].Second_name = sname;
            std::string stemp;
            while (ss >> stemp)
            {
                int m;
                ss >> m;
                Person[id].progress[stemp].push_back(m);
            }
        }
    }
    input.close();
}

void persons::DeleteSub(int id, std::string s)
{
    Person[id].progress.erase(s);
}

void persons::AddStudent(std::string first_name, std::string second_name) {
    number_of_student++;
    Person[GenID()] = { first_name , second_name };
}

void persons::AddMark(int id, std::string s, int mark) {
    if (CheckID(id)) {
        Person[id].progress[s].push_back(mark);
    }
}

float persons::GetRating(int id, std::string subject) {
    if (CheckID(id)) {
        float r = 0;
        for (const auto& it : Person[id].progress[subject]) {
            r = r + (float)it;
        }
        r = (r / (float)Person[id].progress[subject].size());
        r = round(r * 100) / 100;
        return r;
    }  
}

void persons::DeleteLastMark(int id, std::string subject) {
    if (CheckID(id)) {
        if (Person[id].progress.count(subject) && !Person[id].progress[subject].empty()) {
            Person[id].progress[subject].pop_back();
        }

    }
}

float persons::GetOverallRating(int id) {
    float r = 0;
    int n = 0;
    for (const auto& it : Person[id].progress) {
        for (const auto& it1 : it.second) {
            r = r + (float)it1;
            n++;
        }
    }
    r = r / (float)n;
    r = round(r * 100) / 100;
    return r;
}

struct table1 persons::GetFullList() {
    table1 Table;
    for (const auto& it1 : Person) {
        Table.ID.push_back(it1.first);
        Table.Name.push_back(it1.second.First_name);
        Table.Surname.push_back(it1.second.Second_name);
    }
    return Table;
}

void persons::Delete(int id) {
    if (CheckID(id)) {
        Person.erase(id);
        number_of_student--;
    }
}

struct data persons::MarksInfo(int id)
{
    if (CheckID(id)) {
        return Person[id];
    }
}

int persons::GenID() {
    id_number++;
    return id_number;
}

bool persons::CheckID(int id)
{
    return Person.count(id);
}

