#pragma once

namespace StudentsList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ StudentsDataGridView;
	protected:

	protected:


	protected:



















	private: System::Windows::Forms::GroupBox^ DeleteLastMarkBox;
	private: System::Windows::Forms::TextBox^ DeleteMarkSubTextBox;


	private: System::Windows::Forms::TextBox^ DeleteMarkIDTextBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ DeleteMarkButton;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ actionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addMarkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteMarkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentStatisticsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ DeleteStudentBox;
	private: System::Windows::Forms::TextBox^ DeleteStudentTextBox;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ DeleteStudentButton;

	private: System::Windows::Forms::GroupBox^ StudentStatBox;
	private: System::Windows::Forms::TextBox^ StatTextBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ DisplayStatButton;
	private: System::Windows::Forms::GroupBox^ AddStudentBox;
	private: System::Windows::Forms::TextBox^ AddStudentSurnameTextBox;

	private: System::Windows::Forms::TextBox^ AddStudentNameTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AddStudentButton;
	private: System::Windows::Forms::GroupBox^ AddMarkBox;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ AddMarkSubTextBox;

	private: System::Windows::Forms::TextBox^ AddMarkIDTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ AddMarkButton;
	private: System::Windows::Forms::NumericUpDown^ AddMarkNumeric;
	private: System::Windows::Forms::DataGridView^ StatdataGridView;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteSubjectToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ DeleteSubBox;
private: System::Windows::Forms::TextBox^ DeleteSubtextbox;

private: System::Windows::Forms::TextBox^ DeleteSubIDtextbox;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ DeleteSubButton;





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->StudentsDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->DeleteLastMarkBox = (gcnew System::Windows::Forms::GroupBox());
			this->DeleteMarkSubTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteMarkIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->DeleteMarkButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addMarkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteMarkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteSubjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentStatisticsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DeleteStudentBox = (gcnew System::Windows::Forms::GroupBox());
			this->DeleteStudentTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->DeleteStudentButton = (gcnew System::Windows::Forms::Button());
			this->StudentStatBox = (gcnew System::Windows::Forms::GroupBox());
			this->StatTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DisplayStatButton = (gcnew System::Windows::Forms::Button());
			this->AddStudentBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddStudentSurnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddStudentNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddStudentButton = (gcnew System::Windows::Forms::Button());
			this->AddMarkBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddMarkNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AddMarkSubTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddMarkIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AddMarkButton = (gcnew System::Windows::Forms::Button());
			this->StatdataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->DeleteSubBox = (gcnew System::Windows::Forms::GroupBox());
			this->DeleteSubtextbox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteSubIDtextbox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->DeleteSubButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentsDataGridView))->BeginInit();
			this->DeleteLastMarkBox->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->DeleteStudentBox->SuspendLayout();
			this->StudentStatBox->SuspendLayout();
			this->AddStudentBox->SuspendLayout();
			this->AddMarkBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddMarkNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatdataGridView))->BeginInit();
			this->DeleteSubBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// StudentsDataGridView
			// 
			this->StudentsDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StudentsDataGridView->Location = System::Drawing::Point(377, 59);
			this->StudentsDataGridView->Name = L"StudentsDataGridView";
			this->StudentsDataGridView->RowHeadersWidth = 217;
			this->StudentsDataGridView->RowTemplate->Height = 24;
			this->StudentsDataGridView->Size = System::Drawing::Size(651, 269);
			this->StudentsDataGridView->TabIndex = 0;
			this->StudentsDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::StudentsDataGridView_CellContentClick);
			// 
			// DeleteLastMarkBox
			// 
			this->DeleteLastMarkBox->Controls->Add(this->DeleteMarkSubTextBox);
			this->DeleteLastMarkBox->Controls->Add(this->DeleteMarkIDTextBox);
			this->DeleteLastMarkBox->Controls->Add(this->label7);
			this->DeleteLastMarkBox->Controls->Add(this->label8);
			this->DeleteLastMarkBox->Controls->Add(this->DeleteMarkButton);
			this->DeleteLastMarkBox->Location = System::Drawing::Point(12, 59);
			this->DeleteLastMarkBox->Name = L"DeleteLastMarkBox";
			this->DeleteLastMarkBox->Size = System::Drawing::Size(316, 193);
			this->DeleteLastMarkBox->TabIndex = 8;
			this->DeleteLastMarkBox->TabStop = false;
			this->DeleteLastMarkBox->Text = L"Delete last mark";
			this->DeleteLastMarkBox->Visible = false;
			// 
			// DeleteMarkSubTextBox
			// 
			this->DeleteMarkSubTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteMarkSubTextBox->Location = System::Drawing::Point(116, 81);
			this->DeleteMarkSubTextBox->Name = L"DeleteMarkSubTextBox";
			this->DeleteMarkSubTextBox->Size = System::Drawing::Size(168, 30);
			this->DeleteMarkSubTextBox->TabIndex = 5;
			this->DeleteMarkSubTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::DeleteMarkSubTextBox_TextChanged);
			// 
			// DeleteMarkIDTextBox
			// 
			this->DeleteMarkIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteMarkIDTextBox->Location = System::Drawing::Point(116, 33);
			this->DeleteMarkIDTextBox->Name = L"DeleteMarkIDTextBox";
			this->DeleteMarkIDTextBox->Size = System::Drawing::Size(168, 30);
			this->DeleteMarkIDTextBox->TabIndex = 4;
			this->DeleteMarkIDTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::DeleteMarkIDTextBox_TextChanged);
			this->DeleteMarkIDTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::DeleteMarkIDTextBox_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(11, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 25);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Subject";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(11, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 25);
			this->label8->TabIndex = 2;
			this->label8->Text = L"ID";
			// 
			// DeleteMarkButton
			// 
			this->DeleteMarkButton->BackColor = System::Drawing::Color::OrangeRed;
			this->DeleteMarkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteMarkButton->Location = System::Drawing::Point(16, 128);
			this->DeleteMarkButton->Name = L"DeleteMarkButton";
			this->DeleteMarkButton->Size = System::Drawing::Size(268, 46);
			this->DeleteMarkButton->TabIndex = 1;
			this->DeleteMarkButton->Text = L"Delete";
			this->DeleteMarkButton->UseVisualStyleBackColor = false;
			this->DeleteMarkButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteMarkButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actionsToolStripMenuItem,
					this->showToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1102, 30);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// actionsToolStripMenuItem
			// 
			this->actionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addSToolStripMenuItem,
					this->addMarkToolStripMenuItem, this->deleteStudentToolStripMenuItem, this->deleteMarkToolStripMenuItem, this->deleteSubjectToolStripMenuItem
			});
			this->actionsToolStripMenuItem->Name = L"actionsToolStripMenuItem";
			this->actionsToolStripMenuItem->Size = System::Drawing::Size(72, 26);
			this->actionsToolStripMenuItem->Text = L"Actions";
			this->actionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::actionsToolStripMenuItem_Click);
			// 
			// addSToolStripMenuItem
			// 
			this->addSToolStripMenuItem->Name = L"addSToolStripMenuItem";
			this->addSToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->addSToolStripMenuItem->Text = L"Add student";
			this->addSToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addSToolStripMenuItem_Click);
			// 
			// addMarkToolStripMenuItem
			// 
			this->addMarkToolStripMenuItem->Name = L"addMarkToolStripMenuItem";
			this->addMarkToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->addMarkToolStripMenuItem->Text = L"Add mark";
			this->addMarkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addMarkToolStripMenuItem_Click);
			// 
			// deleteStudentToolStripMenuItem
			// 
			this->deleteStudentToolStripMenuItem->Name = L"deleteStudentToolStripMenuItem";
			this->deleteStudentToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->deleteStudentToolStripMenuItem->Text = L"Delete student";
			this->deleteStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteStudentToolStripMenuItem_Click);
			// 
			// deleteMarkToolStripMenuItem
			// 
			this->deleteMarkToolStripMenuItem->Name = L"deleteMarkToolStripMenuItem";
			this->deleteMarkToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->deleteMarkToolStripMenuItem->Text = L"Delete mark";
			this->deleteMarkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteMarkToolStripMenuItem_Click);
			// 
			// deleteSubjectToolStripMenuItem
			// 
			this->deleteSubjectToolStripMenuItem->Name = L"deleteSubjectToolStripMenuItem";
			this->deleteSubjectToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->deleteSubjectToolStripMenuItem->Text = L"Delete subject";
			this->deleteSubjectToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteSubjectToolStripMenuItem_Click);
			// 
			// showToolStripMenuItem
			// 
			this->showToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->studentStatisticsToolStripMenuItem,
					this->listToolStripMenuItem
			});
			this->showToolStripMenuItem->Name = L"showToolStripMenuItem";
			this->showToolStripMenuItem->Size = System::Drawing::Size(59, 26);
			this->showToolStripMenuItem->Text = L"Show";
			this->showToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showToolStripMenuItem_Click);
			// 
			// studentStatisticsToolStripMenuItem
			// 
			this->studentStatisticsToolStripMenuItem->Name = L"studentStatisticsToolStripMenuItem";
			this->studentStatisticsToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->studentStatisticsToolStripMenuItem->Text = L"Student statistics";
			this->studentStatisticsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::studentStatisticsToolStripMenuItem_Click);
			// 
			// listToolStripMenuItem
			// 
			this->listToolStripMenuItem->Name = L"listToolStripMenuItem";
			this->listToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->listToolStripMenuItem->Text = L"List";
			this->listToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::listToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(47, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// DeleteStudentBox
			// 
			this->DeleteStudentBox->Controls->Add(this->DeleteStudentTextBox);
			this->DeleteStudentBox->Controls->Add(this->label9);
			this->DeleteStudentBox->Controls->Add(this->DeleteStudentButton);
			this->DeleteStudentBox->Location = System::Drawing::Point(12, 59);
			this->DeleteStudentBox->Name = L"DeleteStudentBox";
			this->DeleteStudentBox->Size = System::Drawing::Size(316, 148);
			this->DeleteStudentBox->TabIndex = 10;
			this->DeleteStudentBox->TabStop = false;
			this->DeleteStudentBox->Text = L"Delete student";
			this->DeleteStudentBox->Enter += gcnew System::EventHandler(this, &MyForm::DeleteStudentBox_Enter);
			// 
			// DeleteStudentTextBox
			// 
			this->DeleteStudentTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteStudentTextBox->Location = System::Drawing::Point(116, 33);
			this->DeleteStudentTextBox->Name = L"DeleteStudentTextBox";
			this->DeleteStudentTextBox->Size = System::Drawing::Size(168, 30);
			this->DeleteStudentTextBox->TabIndex = 4;
			this->DeleteStudentTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::DeleteStudentTextBox_TextChanged);
			this->DeleteStudentTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::DeleteStudentTextBox_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(11, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 25);
			this->label9->TabIndex = 2;
			this->label9->Text = L"ID";
			// 
			// DeleteStudentButton
			// 
			this->DeleteStudentButton->BackColor = System::Drawing::Color::OrangeRed;
			this->DeleteStudentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteStudentButton->Location = System::Drawing::Point(16, 81);
			this->DeleteStudentButton->Name = L"DeleteStudentButton";
			this->DeleteStudentButton->Size = System::Drawing::Size(268, 46);
			this->DeleteStudentButton->TabIndex = 1;
			this->DeleteStudentButton->Text = L"Delete";
			this->DeleteStudentButton->UseVisualStyleBackColor = false;
			this->DeleteStudentButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteStudentButton_Click);
			// 
			// StudentStatBox
			// 
			this->StudentStatBox->Controls->Add(this->StatTextBox);
			this->StudentStatBox->Controls->Add(this->label6);
			this->StudentStatBox->Controls->Add(this->DisplayStatButton);
			this->StudentStatBox->Location = System::Drawing::Point(12, 59);
			this->StudentStatBox->Name = L"StudentStatBox";
			this->StudentStatBox->Size = System::Drawing::Size(316, 148);
			this->StudentStatBox->TabIndex = 11;
			this->StudentStatBox->TabStop = false;
			this->StudentStatBox->Text = L"Student statistics";
			this->StudentStatBox->Visible = false;
			this->StudentStatBox->Enter += gcnew System::EventHandler(this, &MyForm::StudentStatBox_Enter);
			// 
			// StatTextBox
			// 
			this->StatTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StatTextBox->Location = System::Drawing::Point(116, 33);
			this->StatTextBox->Name = L"StatTextBox";
			this->StatTextBox->Size = System::Drawing::Size(168, 30);
			this->StatTextBox->TabIndex = 4;
			this->StatTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::StatTextBox_TextChanged);
			this->StatTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::StatTextBox_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(11, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"ID";
			// 
			// DisplayStatButton
			// 
			this->DisplayStatButton->BackColor = System::Drawing::Color::SkyBlue;
			this->DisplayStatButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DisplayStatButton->Location = System::Drawing::Point(16, 85);
			this->DisplayStatButton->Name = L"DisplayStatButton";
			this->DisplayStatButton->Size = System::Drawing::Size(268, 46);
			this->DisplayStatButton->TabIndex = 1;
			this->DisplayStatButton->Text = L"Display";
			this->DisplayStatButton->UseVisualStyleBackColor = false;
			this->DisplayStatButton->Click += gcnew System::EventHandler(this, &MyForm::DisplayStatButton_Click);
			// 
			// AddStudentBox
			// 
			this->AddStudentBox->Controls->Add(this->AddStudentSurnameTextBox);
			this->AddStudentBox->Controls->Add(this->AddStudentNameTextBox);
			this->AddStudentBox->Controls->Add(this->label2);
			this->AddStudentBox->Controls->Add(this->label1);
			this->AddStudentBox->Controls->Add(this->AddStudentButton);
			this->AddStudentBox->Location = System::Drawing::Point(12, 59);
			this->AddStudentBox->Name = L"AddStudentBox";
			this->AddStudentBox->Size = System::Drawing::Size(316, 193);
			this->AddStudentBox->TabIndex = 12;
			this->AddStudentBox->TabStop = false;
			this->AddStudentBox->Text = L"Add student";
			this->AddStudentBox->Enter += gcnew System::EventHandler(this, &MyForm::AddStudentBox_Enter);
			// 
			// AddStudentSurnameTextBox
			// 
			this->AddStudentSurnameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddStudentSurnameTextBox->Location = System::Drawing::Point(116, 76);
			this->AddStudentSurnameTextBox->Name = L"AddStudentSurnameTextBox";
			this->AddStudentSurnameTextBox->Size = System::Drawing::Size(168, 30);
			this->AddStudentSurnameTextBox->TabIndex = 5;
			this->AddStudentSurnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::AddStudentSurnameTextBox_TextChanged);
			// 
			// AddStudentNameTextBox
			// 
			this->AddStudentNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddStudentNameTextBox->Location = System::Drawing::Point(116, 30);
			this->AddStudentNameTextBox->Name = L"AddStudentNameTextBox";
			this->AddStudentNameTextBox->Size = System::Drawing::Size(168, 30);
			this->AddStudentNameTextBox->TabIndex = 4;
			this->AddStudentNameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::AddStudentNameTextBox_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(11, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Surname";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(11, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name";
			// 
			// AddStudentButton
			// 
			this->AddStudentButton->BackColor = System::Drawing::Color::ForestGreen;
			this->AddStudentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddStudentButton->Location = System::Drawing::Point(16, 123);
			this->AddStudentButton->Name = L"AddStudentButton";
			this->AddStudentButton->Size = System::Drawing::Size(268, 46);
			this->AddStudentButton->TabIndex = 1;
			this->AddStudentButton->Text = L"Add";
			this->AddStudentButton->UseVisualStyleBackColor = false;
			this->AddStudentButton->Click += gcnew System::EventHandler(this, &MyForm::AddStudentButton_Click);
			// 
			// AddMarkBox
			// 
			this->AddMarkBox->Controls->Add(this->AddMarkNumeric);
			this->AddMarkBox->Controls->Add(this->label5);
			this->AddMarkBox->Controls->Add(this->AddMarkSubTextBox);
			this->AddMarkBox->Controls->Add(this->AddMarkIDTextBox);
			this->AddMarkBox->Controls->Add(this->label3);
			this->AddMarkBox->Controls->Add(this->label4);
			this->AddMarkBox->Controls->Add(this->AddMarkButton);
			this->AddMarkBox->Location = System::Drawing::Point(12, 59);
			this->AddMarkBox->Name = L"AddMarkBox";
			this->AddMarkBox->Size = System::Drawing::Size(316, 295);
			this->AddMarkBox->TabIndex = 13;
			this->AddMarkBox->TabStop = false;
			this->AddMarkBox->Text = L"Add mark";
			this->AddMarkBox->Enter += gcnew System::EventHandler(this, &MyForm::AddMarkBox_Enter);
			// 
			// AddMarkNumeric
			// 
			this->AddMarkNumeric->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddMarkNumeric->Location = System::Drawing::Point(116, 132);
			this->AddMarkNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->AddMarkNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->AddMarkNumeric->Name = L"AddMarkNumeric";
			this->AddMarkNumeric->Size = System::Drawing::Size(85, 30);
			this->AddMarkNumeric->TabIndex = 8;
			this->AddMarkNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->AddMarkNumeric->ValueChanged += gcnew System::EventHandler(this, &MyForm::AddMarkNumeric_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(11, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Mark";
			// 
			// AddMarkSubTextBox
			// 
			this->AddMarkSubTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddMarkSubTextBox->Location = System::Drawing::Point(116, 81);
			this->AddMarkSubTextBox->Name = L"AddMarkSubTextBox";
			this->AddMarkSubTextBox->Size = System::Drawing::Size(168, 30);
			this->AddMarkSubTextBox->TabIndex = 5;
			this->AddMarkSubTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::AddMarkSubTextBox_TextChanged);
			// 
			// AddMarkIDTextBox
			// 
			this->AddMarkIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddMarkIDTextBox->Location = System::Drawing::Point(116, 33);
			this->AddMarkIDTextBox->Name = L"AddMarkIDTextBox";
			this->AddMarkIDTextBox->Size = System::Drawing::Size(168, 30);
			this->AddMarkIDTextBox->TabIndex = 4;
			this->AddMarkIDTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::AddMarkIDTextBox_TextChanged);
			this->AddMarkIDTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::AddMarkIDTextBox_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Subject";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(11, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"ID";
			// 
			// AddMarkButton
			// 
			this->AddMarkButton->BackColor = System::Drawing::Color::ForestGreen;
			this->AddMarkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddMarkButton->Location = System::Drawing::Point(16, 179);
			this->AddMarkButton->Name = L"AddMarkButton";
			this->AddMarkButton->Size = System::Drawing::Size(268, 46);
			this->AddMarkButton->TabIndex = 1;
			this->AddMarkButton->Text = L"Add";
			this->AddMarkButton->UseVisualStyleBackColor = false;
			this->AddMarkButton->Click += gcnew System::EventHandler(this, &MyForm::AddMarkButton_Click);
			// 
			// StatdataGridView
			// 
			this->StatdataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StatdataGridView->Location = System::Drawing::Point(377, 374);
			this->StatdataGridView->Name = L"StatdataGridView";
			this->StatdataGridView->RowHeadersWidth = 51;
			this->StatdataGridView->RowTemplate->Height = 24;
			this->StatdataGridView->Size = System::Drawing::Size(651, 223);
			this->StatdataGridView->TabIndex = 14;
			this->StatdataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::StatdataGridView_CellContentClick);
			// 
			// DeleteSubBox
			// 
			this->DeleteSubBox->Controls->Add(this->DeleteSubtextbox);
			this->DeleteSubBox->Controls->Add(this->DeleteSubIDtextbox);
			this->DeleteSubBox->Controls->Add(this->label11);
			this->DeleteSubBox->Controls->Add(this->label12);
			this->DeleteSubBox->Controls->Add(this->DeleteSubButton);
			this->DeleteSubBox->Location = System::Drawing::Point(12, 59);
			this->DeleteSubBox->Name = L"DeleteSubBox";
			this->DeleteSubBox->Size = System::Drawing::Size(316, 194);
			this->DeleteSubBox->TabIndex = 15;
			this->DeleteSubBox->TabStop = false;
			this->DeleteSubBox->Text = L"Delete subject";
			this->DeleteSubBox->Enter += gcnew System::EventHandler(this, &MyForm::DeleteSubBox_Enter);
			// 
			// DeleteSubtextbox
			// 
			this->DeleteSubtextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteSubtextbox->Location = System::Drawing::Point(116, 81);
			this->DeleteSubtextbox->Name = L"DeleteSubtextbox";
			this->DeleteSubtextbox->Size = System::Drawing::Size(168, 30);
			this->DeleteSubtextbox->TabIndex = 5;
			this->DeleteSubtextbox->TextChanged += gcnew System::EventHandler(this, &MyForm::DeleteSubtextbox_TextChanged);
			// 
			// DeleteSubIDtextbox
			// 
			this->DeleteSubIDtextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteSubIDtextbox->Location = System::Drawing::Point(116, 33);
			this->DeleteSubIDtextbox->Name = L"DeleteSubIDtextbox";
			this->DeleteSubIDtextbox->Size = System::Drawing::Size(168, 30);
			this->DeleteSubIDtextbox->TabIndex = 4;
			this->DeleteSubIDtextbox->TextChanged += gcnew System::EventHandler(this, &MyForm::DeleteSubIDtextbox_TextChanged);
			this->DeleteSubIDtextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::DeleteSubIDtextbox_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(11, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 25);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Subject";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(11, 38);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 25);
			this->label12->TabIndex = 2;
			this->label12->Text = L"ID";
			// 
			// DeleteSubButton
			// 
			this->DeleteSubButton->BackColor = System::Drawing::Color::OrangeRed;
			this->DeleteSubButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteSubButton->Location = System::Drawing::Point(16, 132);
			this->DeleteSubButton->Name = L"DeleteSubButton";
			this->DeleteSubButton->Size = System::Drawing::Size(268, 46);
			this->DeleteSubButton->TabIndex = 1;
			this->DeleteSubButton->Text = L"Delete";
			this->DeleteSubButton->UseVisualStyleBackColor = false;
			this->DeleteSubButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteSubButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1102, 765);
			this->Controls->Add(this->DeleteSubBox);
			this->Controls->Add(this->StatdataGridView);
			this->Controls->Add(this->AddMarkBox);
			this->Controls->Add(this->AddStudentBox);
			this->Controls->Add(this->StudentStatBox);
			this->Controls->Add(this->DeleteStudentBox);
			this->Controls->Add(this->DeleteLastMarkBox);
			this->Controls->Add(this->StudentsDataGridView);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentsDataGridView))->EndInit();
			this->DeleteLastMarkBox->ResumeLayout(false);
			this->DeleteLastMarkBox->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->DeleteStudentBox->ResumeLayout(false);
			this->DeleteStudentBox->PerformLayout();
			this->StudentStatBox->ResumeLayout(false);
			this->StudentStatBox->PerformLayout();
			this->AddStudentBox->ResumeLayout(false);
			this->AddStudentBox->PerformLayout();
			this->AddMarkBox->ResumeLayout(false);
			this->AddMarkBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddMarkNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatdataGridView))->EndInit();
			this->DeleteSubBox->ResumeLayout(false);
			this->DeleteSubBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void actionsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentsDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteStudentBox_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentStatBox_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddStudentBox_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddMarkBox_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addMarkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void deleteStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void deleteMarkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void studentStatisticsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddMarkIDTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddMarkSubTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddMarkButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddStudentNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddStudentSurnameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddStudentButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteMarkIDTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteMarkSubTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteMarkButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteStudentTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteStudentButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddMarkNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void showToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void StatTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void DisplayStatButton_Click(System::Object^ sender, System::EventArgs^ e);
private: Void UpdateTable();
private: Void UpdateTableStat(int id);
private: System::Void AddMarkIDTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void StatTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void DeleteStudentTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void DeleteMarkIDTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void StatdataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void deleteSubjectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteSubBox_Enter(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void DeleteSubButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteSubIDtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteSubIDtextbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void DeleteSubtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
};
}
