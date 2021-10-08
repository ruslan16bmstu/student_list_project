#include "MyForm.h"
#include "Header.h"
#include <msclr/marshal_cppstd.h>


using namespace System;

using namespace System::Windows::Forms;

persons Persons;


void main(array<String^>^ args)

{
    Persons.LS();

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    StudentsList::MyForm form;

    Application::Run(% form);

    Persons.SS();
}

System::Void StudentsList::MyForm::StudentsDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    
}

//
// Закрытие окна
//

System::Void StudentsList::MyForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void StudentsList::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Hide();
    StudentsDataGridView->Hide();
    DeleteLastMarkBox->Hide();
    DeleteStudentBox->Hide();
    StudentStatBox->Hide();
    AddStudentBox->Hide();
    AddMarkBox->Hide();
    StatdataGridView->Hide();

    UpdateTable();
}

System::Void StudentsList::MyForm::addMarkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Hide();
    StatdataGridView->Show();
    StudentsDataGridView->Show();
    DeleteLastMarkBox->Hide();
    DeleteStudentBox->Hide();
    StudentStatBox->Hide();
    AddStudentBox->Hide();
    AddMarkBox->Show();
}

System::Void StudentsList::MyForm::addSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Hide();
    StatdataGridView->Show();
    StudentsDataGridView->Show();
    DeleteLastMarkBox->Hide();
    DeleteStudentBox->Hide();
    StudentStatBox->Hide();
    AddMarkBox->Hide();
    AddStudentBox->Show();
}

System::Void StudentsList::MyForm::deleteStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Hide();
    StatdataGridView->Show();
    StudentsDataGridView->Show();
    DeleteLastMarkBox->Hide();
    StudentStatBox->Hide();
    AddStudentBox->Hide();
    AddMarkBox->Hide();
    DeleteStudentBox->Show();
}

System::Void StudentsList::MyForm::deleteMarkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Hide();
    StatdataGridView->Show();
    StudentsDataGridView->Show();
    DeleteStudentBox->Hide();
    StudentStatBox->Hide();
    AddStudentBox->Hide();
    AddMarkBox->Hide();
    DeleteLastMarkBox->Show();
}

System::Void StudentsList::MyForm::studentStatisticsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Hide();
    StudentsDataGridView->Hide();
    DeleteLastMarkBox->Hide();
    DeleteStudentBox->Hide();
    StudentStatBox->Show();
    AddStudentBox->Hide();
    AddMarkBox->Hide();
    StatdataGridView->Show();
}

System::Void StudentsList::MyForm::listToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Hide();
    StudentsDataGridView->Hide();
    DeleteLastMarkBox->Hide();
    DeleteStudentBox->Hide();
    StudentStatBox->Hide();
    AddStudentBox->Hide();
    AddMarkBox->Hide();
    StudentsDataGridView->Show();
}

//
// Добавление оценки
//

System::Void StudentsList::MyForm::AddMarkIDTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
   
}

System::Void StudentsList::MyForm::AddMarkSubTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    
}

System::Void StudentsList::MyForm::AddMarkNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void StudentsList::MyForm::AddMarkIDTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!(e->KeyChar >= 47 && e->KeyChar <= 58) && ch != 8)
    {
        e->Handled = true;
    }
}

System::Void StudentsList::MyForm::StatTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!(e->KeyChar >= 47 && e->KeyChar <= 58) && ch != 8)
    {
        e->Handled = true;
    }
}

System::Void StudentsList::MyForm::DeleteStudentTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!(e->KeyChar >= 47 && e->KeyChar <= 58) && ch != 8)
    {
        e->Handled = true;
    }
}

System::Void StudentsList::MyForm::DeleteMarkIDTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!(e->KeyChar >= 47 && e->KeyChar <= 58) && ch != 8)
    {
        e->Handled = true;
    }
    return System::Void();
}

System::Void StudentsList::MyForm::DeleteSubIDtextbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!(e->KeyChar >= 47 && e->KeyChar <= 58) && ch != 8)
    {
        e->Handled = true;
    }
    return System::Void();
}

System::Void StudentsList::MyForm::DeleteSubButton_Click(System::Object^ sender, System::EventArgs^ e)
{ // удаление предмета

    std::string str, strID;// предмет
    String^ s;// буффер
    int ID;

    s = DeleteSubIDtextbox->Text;
    strID = msclr::interop::marshal_as<std::string>(s);

    s = DeleteSubtextbox->Text;
    str = msclr::interop::marshal_as<std::string>(s);

    if (str == "" || strID == "") {
        MessageBox::Show("Пустое поле ввода!", "Ошибка");
    }
    else {

        s = DeleteSubIDtextbox->Text;
        ID = Convert::ToInt32(s);
        if (Persons.CheckID(ID)) {
            if (Persons.MarksInfo(ID).progress.count(str)) {
                Persons.DeleteSub(ID, str);
                UpdateTableStat(ID);
                UpdateTable();
                StatdataGridView->Show();
            }
            else {
                MessageBox::Show("Нет такого предмета!", "Ошибка");
            }

        }
        else {
            MessageBox::Show("Неверный ID!", "Ошибка");
        }

    }

    return System::Void();
}

System::Void StudentsList::MyForm::DeleteSubIDtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}


System::Void StudentsList::MyForm::StatdataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    return System::Void();
}

System::Void StudentsList::MyForm::deleteSubjectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    DeleteSubBox->Show();
    DeleteLastMarkBox->Hide();
    DeleteStudentBox->Hide();
    StudentStatBox->Hide();
    AddStudentBox->Hide();
    AddMarkBox->Hide();
    StudentsDataGridView->Show();
    return System::Void();
}



System::Void StudentsList::MyForm::AddMarkButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string str, strID;// предмет
    String^ s;// буффер
    int ID, mark;
    s = AddMarkIDTextBox->Text;
    strID = msclr::interop::marshal_as<std::string>(s);

    s = AddMarkNumeric->Text;
    mark = Convert::ToInt32(s);

    s = AddMarkSubTextBox->Text;
    str = msclr::interop::marshal_as<std::string>(s);

    if (str == "" || strID == "") {
        MessageBox::Show("Пустое поле ввода!", "Ошибка");
    }
    else {
        s = AddMarkIDTextBox->Text;
        ID = Convert::ToInt32(s);

        if (Persons.CheckID(ID)) {
            Persons.AddMark(ID, str, mark);
            UpdateTableStat(ID);
            UpdateTable();
            StatdataGridView->Show();
        }

        
    }
}



//
// Статистика студента
//

System::Void StudentsList::MyForm::StatTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void StudentsList::MyForm::DisplayStatButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    

    int ID;
    std::string strID;
    String^ s;// буффер
    s = StatTextBox->Text;
    strID = msclr::interop::marshal_as<std::string>(s);

    if (strID == "") {
        MessageBox::Show("Пустое поле ввода!", "Ошибка");
    }
    else {
        ID = Convert::ToInt32(s);
        UpdateTableStat(ID);

    }
   

}

Void StudentsList::MyForm::UpdateTable()
{
    struct table1 Table;
    Table = Persons.GetFullList();

    StudentsDataGridView->RowCount = Table.ID.size();
    StudentsDataGridView->ColumnCount = 4;

    for (int i = 0; i < Table.ID.size(); i++) {
        StudentsDataGridView->TopLeftHeaderCell->Value = "StudentList";
        StudentsDataGridView->Columns[0]->HeaderCell->Value = msclr::interop::marshal_as<System::String^>("ID");
        StudentsDataGridView->Columns[1]->HeaderCell->Value = msclr::interop::marshal_as<System::String^>("Name");
        StudentsDataGridView->Columns[2]->HeaderCell->Value = msclr::interop::marshal_as<System::String^>("Surname");
        StudentsDataGridView->Columns[3]->HeaderCell->Value = msclr::interop::marshal_as<System::String^>("Rating");

        StudentsDataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

        StudentsDataGridView->Rows[i]->Cells[0]->Value = Convert::ToString(Table.ID[i]);
        StudentsDataGridView->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<System::String^>(Table.Name[i]);
        StudentsDataGridView->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<System::String^>(Table.Surname[i]);

        if (!Persons.MarksInfo(Table.ID[i]).progress.empty()) {
            StudentsDataGridView->Rows[i]->Cells[3]->Value = Convert::ToString(Persons.GetOverallRating(Table.ID[i]));
        }
        else {
            StudentsDataGridView->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<System::String^>("no marks");
        }
    }


    StudentsDataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders); //ячейки
    StudentsDataGridView->AutoResizeColumns();
}

Void StudentsList::MyForm::UpdateTableStat(int id)
{
    StatdataGridView->Rows->Clear();

    if (Persons.CheckID(id)) {
        
        struct data& M = Persons.MarksInfo(id);

        if (!M.progress.empty()) {
            std::string str = M.First_name + " " + M.Second_name;
            int x = 0;
            int y = 0;

            for (const auto& it : M.progress) {
                y++;
                if (x < it.second.size()) {
                    x = it.second.size();
                }
            }

            StatdataGridView->RowCount = y;
            StatdataGridView->ColumnCount = x + 1;

            StatdataGridView->Columns[x]->HeaderCell->Value = msclr::interop::marshal_as<System::String^>("Avarage");

            StatdataGridView->TopLeftHeaderCell->Value = msclr::interop::marshal_as<System::String^>(str);

            y = 0;

            for (const auto& it : M.progress) {

                StatdataGridView->Rows[y]->Cells[x]->Value = Convert::ToString(Persons.GetRating(id, it.first));
                StatdataGridView->Rows[y]->HeaderCell->Value = msclr::interop::marshal_as<System::String^>(it.first);
                for (int i = 0; i < it.second.size(); i++) {
                    StatdataGridView->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);



                    StatdataGridView->Rows[y]->Cells[i]->Value = it.second[i];
                }
                y++;
            }
        }
        else {
            MessageBox::Show("Нет оценок!", "Ошибка");
        }

        
    
    }
    else {
        MessageBox::Show("Неверный ID!", "Ошибка");
    }

    

    StatdataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders); //ячейки
    StatdataGridView->AutoResizeColumns();

    return Void();
}



//
// Добавление студента
//

System::Void StudentsList::MyForm::AddStudentNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void StudentsList::MyForm::AddStudentSurnameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void StudentsList::MyForm::AddStudentButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string str1, str2;// имя и фамилия
    String^ s;// буффер

    s = AddStudentNameTextBox->Text;
    str1 = msclr::interop::marshal_as<std::string>(s);

    s = AddStudentSurnameTextBox->Text;
    str2 = msclr::interop::marshal_as<std::string>(s);

    if (str1 == "" || str2 == "") {
        MessageBox::Show("Пустое поле ввода!", "Ошибка");
    }
    else {
        Persons.AddStudent(str1, str2);
    }

    UpdateTable();
}

//
// Удаление оценки
//

System::Void StudentsList::MyForm::DeleteMarkIDTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    
}

System::Void StudentsList::MyForm::DeleteMarkSubTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
   
}

System::Void StudentsList::MyForm::DeleteMarkButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string str, strID;// предмет
    String^ s;// буффер
    int ID;

    s = DeleteMarkIDTextBox->Text;
    strID = msclr::interop::marshal_as<std::string>(s);

    s = DeleteMarkSubTextBox->Text;
    str = msclr::interop::marshal_as<std::string>(s);

    if (str == "" || strID == "") {
        MessageBox::Show("Пустое поле ввода!", "Ошибка");
    }
    else {
        
        s = DeleteMarkIDTextBox->Text;
        ID = Convert::ToInt32(s);
        if (Persons.CheckID(ID)) {
            if (Persons.MarksInfo(ID).progress.count(str)) {
                Persons.DeleteLastMark(ID, str);
                UpdateTableStat(ID);
                UpdateTable();
                StatdataGridView->Show();
            }
            else {
                MessageBox::Show("Нет такого предмета!", "Ошибка");
            }
            
        }
        else {
            MessageBox::Show("Неверный ID!", "Ошибка");
        }
        
    }
}

//
// Удаление студента
//

System::Void StudentsList::MyForm::DeleteStudentTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    
}

System::Void StudentsList::MyForm::DeleteStudentButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string strID;
    int ID;
    String^ s;// буффер

    s = DeleteStudentTextBox->Text;
    strID = msclr::interop::marshal_as<std::string>(s);


    if (strID == "") {
        MessageBox::Show("Пустое поле ввода!", "Ошибка");
    }
    else {
        ID = Convert::ToInt32(s);

        Persons.Delete(ID);

        UpdateTable();
    }
    
}

// обработка НЕ цифр в поле ID
// studentstat