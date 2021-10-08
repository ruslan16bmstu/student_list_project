#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <cmath>

struct table1
{
    std::vector<int> ID;
    std::vector<std::string> Name;
    std::vector<std::string> Surname;
};

struct data {
    std::string First_name;
    std::string Second_name;
    std::map<std::string, std::vector<int>> progress;
};

class persons {
public:

    bool CheckID(int id);

    const std::string path = "students.txt";

    void SS();

    void LS();

    void DeleteSub(int id, std::string s);

    void AddStudent(std::string first_name, std::string second_name);

    void AddMark(int id, std::string s, int mark);

    void DeleteLastMark(int id, std::string subject);

    float GetRating(int id, std::string subject);

    float GetOverallRating(int id);

    struct table1 persons::GetFullList();

    void Delete(int id);

    struct data MarksInfo(int id);

private:
    int number_of_student;
    int id_number;
    int GenID();
    std::map<int, struct data> Person;
};