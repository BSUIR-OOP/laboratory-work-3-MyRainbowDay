#pragma once
#include <string>

namespace Laba3 {

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

	protected:


	private: System::Windows::Forms::Button^ SerializationButton;
	private: System::Windows::Forms::Button^ DeserializationButton;
	private: System::Windows::Forms::Button^ Manager_Button;
	private: System::Windows::Forms::Button^ Scientist_Button;
	private: System::Windows::Forms::Button^ Laborer_Button;
	private: System::Windows::Forms::Button^ Brigadier_Button;
	private: System::Windows::Forms::Button^ Accountant_Button;
	private: System::Windows::Forms::Button^ Show_Button;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ Age;

	private: System::Windows::Forms::TextBox^ Number;

	private: System::Windows::Forms::TextBox^ Patronymic;

	private: System::Windows::Forms::TextBox^ First_Name;

	private: System::Windows::Forms::TextBox^ Last_Name;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::Button^ Add_Manager;
	private: System::Windows::Forms::TextBox^ Dues;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Position;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox3;


	private: System::Windows::Forms::Button^ Add_Scientist;
	private: System::Windows::Forms::TextBox^ Number_of_publications;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Science;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox4;


	private: System::Windows::Forms::Button^ Add_Laborer;
	private: System::Windows::Forms::TextBox^ Profession;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox5;


	private: System::Windows::Forms::Button^ Add_Brigadier;
	private: System::Windows::Forms::TextBox^ Degree_of_qualification;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox6;


	private: System::Windows::Forms::Button^ Add_Accountant;
	private: System::Windows::Forms::TextBox^ Work_experience;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ Profession_Brigadier;
	private: System::Windows::Forms::Button^ Delete_Button;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ EditPatronymic;

private: System::Windows::Forms::TextBox^ EditFirstName;

private: System::Windows::Forms::TextBox^ EditLastName;

private: System::Windows::Forms::Button^ SearchToEdit;
private: System::Windows::Forms::Button^ ManagerEdit;
private: System::Windows::Forms::Button^ ScientistEdit;
private: System::Windows::Forms::Button^ LaborerEdit;
private: System::Windows::Forms::Button^ BrigadierEdit;
private: System::Windows::Forms::Button^ AccountantEdit;





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
			this->SerializationButton = (gcnew System::Windows::Forms::Button());
			this->DeserializationButton = (gcnew System::Windows::Forms::Button());
			this->Manager_Button = (gcnew System::Windows::Forms::Button());
			this->Scientist_Button = (gcnew System::Windows::Forms::Button());
			this->Laborer_Button = (gcnew System::Windows::Forms::Button());
			this->Brigadier_Button = (gcnew System::Windows::Forms::Button());
			this->Accountant_Button = (gcnew System::Windows::Forms::Button());
			this->Show_Button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Age = (gcnew System::Windows::Forms::TextBox());
			this->Number = (gcnew System::Windows::Forms::TextBox());
			this->Patronymic = (gcnew System::Windows::Forms::TextBox());
			this->First_Name = (gcnew System::Windows::Forms::TextBox());
			this->Last_Name = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->ManagerEdit = (gcnew System::Windows::Forms::Button());
			this->Add_Manager = (gcnew System::Windows::Forms::Button());
			this->Dues = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Position = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->ScientistEdit = (gcnew System::Windows::Forms::Button());
			this->Add_Scientist = (gcnew System::Windows::Forms::Button());
			this->Number_of_publications = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Science = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->LaborerEdit = (gcnew System::Windows::Forms::Button());
			this->Add_Laborer = (gcnew System::Windows::Forms::Button());
			this->Profession = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->BrigadierEdit = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Profession_Brigadier = (gcnew System::Windows::Forms::TextBox());
			this->Add_Brigadier = (gcnew System::Windows::Forms::Button());
			this->Degree_of_qualification = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->AccountantEdit = (gcnew System::Windows::Forms::Button());
			this->Add_Accountant = (gcnew System::Windows::Forms::Button());
			this->Work_experience = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Delete_Button = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->EditPatronymic = (gcnew System::Windows::Forms::TextBox());
			this->EditFirstName = (gcnew System::Windows::Forms::TextBox());
			this->EditLastName = (gcnew System::Windows::Forms::TextBox());
			this->SearchToEdit = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// SerializationButton
			// 
			this->SerializationButton->Location = System::Drawing::Point(676, 42);
			this->SerializationButton->Name = L"SerializationButton";
			this->SerializationButton->Size = System::Drawing::Size(141, 49);
			this->SerializationButton->TabIndex = 3;
			this->SerializationButton->Text = L"Serialization";
			this->SerializationButton->UseVisualStyleBackColor = true;
			this->SerializationButton->Click += gcnew System::EventHandler(this, &MyForm::SerializationButton_Click);
			// 
			// DeserializationButton
			// 
			this->DeserializationButton->Location = System::Drawing::Point(859, 42);
			this->DeserializationButton->Name = L"DeserializationButton";
			this->DeserializationButton->Size = System::Drawing::Size(141, 49);
			this->DeserializationButton->TabIndex = 5;
			this->DeserializationButton->Text = L"Deserialization";
			this->DeserializationButton->UseVisualStyleBackColor = true;
			this->DeserializationButton->Click += gcnew System::EventHandler(this, &MyForm::DeserializationButton_Click);
			// 
			// Manager_Button
			// 
			this->Manager_Button->Location = System::Drawing::Point(38, 109);
			this->Manager_Button->Name = L"Manager_Button";
			this->Manager_Button->Size = System::Drawing::Size(141, 49);
			this->Manager_Button->TabIndex = 6;
			this->Manager_Button->Text = L"Manager";
			this->Manager_Button->UseVisualStyleBackColor = true;
			// 
			// Scientist_Button
			// 
			this->Scientist_Button->Location = System::Drawing::Point(38, 186);
			this->Scientist_Button->Name = L"Scientist_Button";
			this->Scientist_Button->Size = System::Drawing::Size(141, 49);
			this->Scientist_Button->TabIndex = 7;
			this->Scientist_Button->Text = L"Scientist";
			this->Scientist_Button->UseVisualStyleBackColor = true;
			// 
			// Laborer_Button
			// 
			this->Laborer_Button->Location = System::Drawing::Point(38, 266);
			this->Laborer_Button->Name = L"Laborer_Button";
			this->Laborer_Button->Size = System::Drawing::Size(141, 49);
			this->Laborer_Button->TabIndex = 8;
			this->Laborer_Button->Text = L"Laborer";
			this->Laborer_Button->UseVisualStyleBackColor = true;
			// 
			// Brigadier_Button
			// 
			this->Brigadier_Button->Location = System::Drawing::Point(38, 347);
			this->Brigadier_Button->Name = L"Brigadier_Button";
			this->Brigadier_Button->Size = System::Drawing::Size(141, 49);
			this->Brigadier_Button->TabIndex = 9;
			this->Brigadier_Button->Text = L"Brigadier";
			this->Brigadier_Button->UseVisualStyleBackColor = true;
			// 
			// Accountant_Button
			// 
			this->Accountant_Button->Location = System::Drawing::Point(38, 427);
			this->Accountant_Button->Name = L"Accountant_Button";
			this->Accountant_Button->Size = System::Drawing::Size(141, 49);
			this->Accountant_Button->TabIndex = 10;
			this->Accountant_Button->Text = L"Accountant";
			this->Accountant_Button->UseVisualStyleBackColor = true;
			// 
			// Show_Button
			// 
			this->Show_Button->Location = System::Drawing::Point(293, 42);
			this->Show_Button->Name = L"Show_Button";
			this->Show_Button->Size = System::Drawing::Size(141, 49);
			this->Show_Button->TabIndex = 11;
			this->Show_Button->Text = L"Show List";
			this->Show_Button->UseVisualStyleBackColor = true;
			this->Show_Button->Click += gcnew System::EventHandler(this, &MyForm::Show_Button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Age);
			this->groupBox1->Controls->Add(this->Number);
			this->groupBox1->Controls->Add(this->Patronymic);
			this->groupBox1->Controls->Add(this->First_Name);
			this->groupBox1->Controls->Add(this->Last_Name);
			this->groupBox1->Location = System::Drawing::Point(293, 109);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 275);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(95, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Age";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(85, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(76, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Patronymic";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Last Name";
			// 
			// Age
			// 
			this->Age->Location = System::Drawing::Point(27, 222);
			this->Age->Name = L"Age";
			this->Age->Size = System::Drawing::Size(182, 22);
			this->Age->TabIndex = 4;
			this->Age->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Number
			// 
			this->Number->Location = System::Drawing::Point(27, 177);
			this->Number->Name = L"Number";
			this->Number->Size = System::Drawing::Size(182, 22);
			this->Number->TabIndex = 3;
			this->Number->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Patronymic
			// 
			this->Patronymic->Location = System::Drawing::Point(27, 132);
			this->Patronymic->Name = L"Patronymic";
			this->Patronymic->Size = System::Drawing::Size(182, 22);
			this->Patronymic->TabIndex = 2;
			this->Patronymic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// First_Name
			// 
			this->First_Name->Location = System::Drawing::Point(27, 87);
			this->First_Name->Name = L"First_Name";
			this->First_Name->Size = System::Drawing::Size(182, 22);
			this->First_Name->TabIndex = 1;
			this->First_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Last_Name
			// 
			this->Last_Name->Location = System::Drawing::Point(27, 42);
			this->Last_Name->Name = L"Last_Name";
			this->Last_Name->Size = System::Drawing::Size(182, 22);
			this->Last_Name->TabIndex = 0;
			this->Last_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->ManagerEdit);
			this->groupBox2->Controls->Add(this->Add_Manager);
			this->groupBox2->Controls->Add(this->Dues);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->Position);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(293, 390);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 170);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Manager";
			// 
			// ManagerEdit
			// 
			this->ManagerEdit->Location = System::Drawing::Point(134, 109);
			this->ManagerEdit->Name = L"ManagerEdit";
			this->ManagerEdit->Size = System::Drawing::Size(75, 23);
			this->ManagerEdit->TabIndex = 12;
			this->ManagerEdit->Text = L"Edit";
			this->ManagerEdit->UseVisualStyleBackColor = true;
			this->ManagerEdit->Click += gcnew System::EventHandler(this, &MyForm::ManagerEdit_Click);
			// 
			// Add_Manager
			// 
			this->Add_Manager->Location = System::Drawing::Point(27, 112);
			this->Add_Manager->Name = L"Add_Manager";
			this->Add_Manager->Size = System::Drawing::Size(75, 23);
			this->Add_Manager->TabIndex = 11;
			this->Add_Manager->Text = L"Add";
			this->Add_Manager->UseVisualStyleBackColor = true;
			this->Add_Manager->Click += gcnew System::EventHandler(this, &MyForm::Add_Manager_Click);
			// 
			// Dues
			// 
			this->Dues->Location = System::Drawing::Point(27, 81);
			this->Dues->Name = L"Dues";
			this->Dues->Size = System::Drawing::Size(182, 22);
			this->Dues->TabIndex = 10;
			this->Dues->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(85, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 17);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Dues";
			// 
			// Position
			// 
			this->Position->Location = System::Drawing::Point(27, 34);
			this->Position->Name = L"Position";
			this->Position->Size = System::Drawing::Size(182, 22);
			this->Position->TabIndex = 10;
			this->Position->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(83, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Position";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->ScientistEdit);
			this->groupBox3->Controls->Add(this->Add_Scientist);
			this->groupBox3->Controls->Add(this->Number_of_publications);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->Science);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Location = System::Drawing::Point(563, 390);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(237, 170);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Scientist";
			// 
			// ScientistEdit
			// 
			this->ScientistEdit->Location = System::Drawing::Point(134, 112);
			this->ScientistEdit->Name = L"ScientistEdit";
			this->ScientistEdit->Size = System::Drawing::Size(75, 23);
			this->ScientistEdit->TabIndex = 13;
			this->ScientistEdit->Text = L"Edit";
			this->ScientistEdit->UseVisualStyleBackColor = true;
			this->ScientistEdit->Click += gcnew System::EventHandler(this, &MyForm::ScientistEdit_Click);
			// 
			// Add_Scientist
			// 
			this->Add_Scientist->Location = System::Drawing::Point(27, 112);
			this->Add_Scientist->Name = L"Add_Scientist";
			this->Add_Scientist->Size = System::Drawing::Size(75, 23);
			this->Add_Scientist->TabIndex = 11;
			this->Add_Scientist->Text = L"Add";
			this->Add_Scientist->UseVisualStyleBackColor = true;
			this->Add_Scientist->Click += gcnew System::EventHandler(this, &MyForm::Add_Scientist_Click);
			// 
			// Number_of_publications
			// 
			this->Number_of_publications->Location = System::Drawing::Point(27, 81);
			this->Number_of_publications->Name = L"Number_of_publications";
			this->Number_of_publications->Size = System::Drawing::Size(182, 22);
			this->Number_of_publications->TabIndex = 10;
			this->Number_of_publications->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(47, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Number of publications";
			// 
			// Science
			// 
			this->Science->Location = System::Drawing::Point(27, 34);
			this->Science->Name = L"Science";
			this->Science->Size = System::Drawing::Size(182, 22);
			this->Science->TabIndex = 10;
			this->Science->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(83, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Science";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->LaborerEdit);
			this->groupBox4->Controls->Add(this->Add_Laborer);
			this->groupBox4->Controls->Add(this->Profession);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Location = System::Drawing::Point(563, 214);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(237, 170);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Laborer";
			// 
			// LaborerEdit
			// 
			this->LaborerEdit->Location = System::Drawing::Point(134, 116);
			this->LaborerEdit->Name = L"LaborerEdit";
			this->LaborerEdit->Size = System::Drawing::Size(75, 23);
			this->LaborerEdit->TabIndex = 14;
			this->LaborerEdit->Text = L"Edit";
			this->LaborerEdit->UseVisualStyleBackColor = true;
			this->LaborerEdit->Click += gcnew System::EventHandler(this, &MyForm::LaborerEdit_Click);
			// 
			// Add_Laborer
			// 
			this->Add_Laborer->Location = System::Drawing::Point(27, 116);
			this->Add_Laborer->Name = L"Add_Laborer";
			this->Add_Laborer->Size = System::Drawing::Size(75, 23);
			this->Add_Laborer->TabIndex = 11;
			this->Add_Laborer->Text = L"Add";
			this->Add_Laborer->UseVisualStyleBackColor = true;
			this->Add_Laborer->Click += gcnew System::EventHandler(this, &MyForm::Add_Laborer_Click);
			// 
			// Profession
			// 
			this->Profession->Location = System::Drawing::Point(27, 43);
			this->Profession->Name = L"Profession";
			this->Profession->Size = System::Drawing::Size(182, 22);
			this->Profession->TabIndex = 10;
			this->Profession->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(83, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 17);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Profession";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->BrigadierEdit);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->Profession_Brigadier);
			this->groupBox5->Controls->Add(this->Add_Brigadier);
			this->groupBox5->Controls->Add(this->Degree_of_qualification);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Location = System::Drawing::Point(859, 214);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(237, 170);
			this->groupBox5->TabIndex = 16;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Brigadier";
			// 
			// BrigadierEdit
			// 
			this->BrigadierEdit->Location = System::Drawing::Point(134, 117);
			this->BrigadierEdit->Name = L"BrigadierEdit";
			this->BrigadierEdit->Size = System::Drawing::Size(75, 23);
			this->BrigadierEdit->TabIndex = 15;
			this->BrigadierEdit->Text = L"Edit";
			this->BrigadierEdit->UseVisualStyleBackColor = true;
			this->BrigadierEdit->Click += gcnew System::EventHandler(this, &MyForm::BrigadierEdit_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(79, 68);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(75, 17);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Profession";
			// 
			// Profession_Brigadier
			// 
			this->Profession_Brigadier->Location = System::Drawing::Point(27, 88);
			this->Profession_Brigadier->Name = L"Profession_Brigadier";
			this->Profession_Brigadier->Size = System::Drawing::Size(182, 22);
			this->Profession_Brigadier->TabIndex = 14;
			this->Profession_Brigadier->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Add_Brigadier
			// 
			this->Add_Brigadier->Location = System::Drawing::Point(27, 116);
			this->Add_Brigadier->Name = L"Add_Brigadier";
			this->Add_Brigadier->Size = System::Drawing::Size(75, 23);
			this->Add_Brigadier->TabIndex = 11;
			this->Add_Brigadier->Text = L"Add";
			this->Add_Brigadier->UseVisualStyleBackColor = true;
			this->Add_Brigadier->Click += gcnew System::EventHandler(this, &MyForm::Add_Brigadier_Click);
			// 
			// Degree_of_qualification
			// 
			this->Degree_of_qualification->Location = System::Drawing::Point(27, 43);
			this->Degree_of_qualification->Name = L"Degree_of_qualification";
			this->Degree_of_qualification->Size = System::Drawing::Size(182, 22);
			this->Degree_of_qualification->TabIndex = 10;
			this->Degree_of_qualification->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(47, 23);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(150, 17);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Degree of qualification";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->AccountantEdit);
			this->groupBox6->Controls->Add(this->Add_Accountant);
			this->groupBox6->Controls->Add(this->Work_experience);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Location = System::Drawing::Point(859, 390);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(237, 170);
			this->groupBox6->TabIndex = 17;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Accountant";
			// 
			// AccountantEdit
			// 
			this->AccountantEdit->Location = System::Drawing::Point(134, 72);
			this->AccountantEdit->Name = L"AccountantEdit";
			this->AccountantEdit->Size = System::Drawing::Size(75, 23);
			this->AccountantEdit->TabIndex = 16;
			this->AccountantEdit->Text = L"Edit";
			this->AccountantEdit->UseVisualStyleBackColor = true;
			this->AccountantEdit->Click += gcnew System::EventHandler(this, &MyForm::AccountantEdit_Click);
			// 
			// Add_Accountant
			// 
			this->Add_Accountant->Location = System::Drawing::Point(27, 72);
			this->Add_Accountant->Name = L"Add_Accountant";
			this->Add_Accountant->Size = System::Drawing::Size(75, 23);
			this->Add_Accountant->TabIndex = 11;
			this->Add_Accountant->Text = L"Add";
			this->Add_Accountant->UseVisualStyleBackColor = true;
			this->Add_Accountant->Click += gcnew System::EventHandler(this, &MyForm::Add_Accountant_Click);
			// 
			// Work_experience
			// 
			this->Work_experience->Location = System::Drawing::Point(27, 34);
			this->Work_experience->Name = L"Work_experience";
			this->Work_experience->Size = System::Drawing::Size(182, 22);
			this->Work_experience->TabIndex = 10;
			this->Work_experience->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(66, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(118, 17);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Work_experience";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(38, 582);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1166, 196);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// Delete_Button
			// 
			this->Delete_Button->Location = System::Drawing::Point(484, 42);
			this->Delete_Button->Name = L"Delete_Button";
			this->Delete_Button->Size = System::Drawing::Size(141, 49);
			this->Delete_Button->TabIndex = 19;
			this->Delete_Button->Text = L"Delete";
			this->Delete_Button->UseVisualStyleBackColor = true;
			this->Delete_Button->Click += gcnew System::EventHandler(this, &MyForm::Delete_Button_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->EditPatronymic);
			this->groupBox7->Controls->Add(this->EditFirstName);
			this->groupBox7->Controls->Add(this->EditLastName);
			this->groupBox7->Controls->Add(this->SearchToEdit);
			this->groupBox7->Location = System::Drawing::Point(1114, 214);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(237, 279);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Edit";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(71, 133);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(78, 17);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Patronymic";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(71, 88);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(76, 17);
			this->label16->TabIndex = 18;
			this->label16->Text = L"First Name";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(71, 43);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(76, 17);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Last Name";
			// 
			// EditPatronymic
			// 
			this->EditPatronymic->Location = System::Drawing::Point(22, 153);
			this->EditPatronymic->Name = L"EditPatronymic";
			this->EditPatronymic->Size = System::Drawing::Size(182, 22);
			this->EditPatronymic->TabIndex = 16;
			this->EditPatronymic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EditFirstName
			// 
			this->EditFirstName->Location = System::Drawing::Point(22, 108);
			this->EditFirstName->Name = L"EditFirstName";
			this->EditFirstName->Size = System::Drawing::Size(182, 22);
			this->EditFirstName->TabIndex = 15;
			this->EditFirstName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EditLastName
			// 
			this->EditLastName->Location = System::Drawing::Point(22, 63);
			this->EditLastName->Name = L"EditLastName";
			this->EditLastName->Size = System::Drawing::Size(182, 22);
			this->EditLastName->TabIndex = 14;
			this->EditLastName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SearchToEdit
			// 
			this->SearchToEdit->Location = System::Drawing::Point(22, 184);
			this->SearchToEdit->Name = L"SearchToEdit";
			this->SearchToEdit->Size = System::Drawing::Size(182, 48);
			this->SearchToEdit->TabIndex = 13;
			this->SearchToEdit->Text = L"Search to edit";
			this->SearchToEdit->UseVisualStyleBackColor = true;
			this->SearchToEdit->Click += gcnew System::EventHandler(this, &MyForm::SearchToEdit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1386, 790);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->Delete_Button);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Show_Button);
			this->Controls->Add(this->Accountant_Button);
			this->Controls->Add(this->Brigadier_Button);
			this->Controls->Add(this->Laborer_Button);
			this->Controls->Add(this->Scientist_Button);
			this->Controls->Add(this->Manager_Button);
			this->Controls->Add(this->DeserializationButton);
			this->Controls->Add(this->SerializationButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	bool checkMainField();
	void MarshalString(String^ s, std::string& os);
	private: System::Void Add_Manager_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Show_Button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_Scientist_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_Laborer_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_Brigadier_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_Accountant_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete_Button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SearchToEdit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ManagerEdit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LaborerEdit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ScientistEdit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void BrigadierEdit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AccountantEdit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SerializationButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DeserializationButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
