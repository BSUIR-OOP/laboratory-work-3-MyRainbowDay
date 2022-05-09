#include "MyForm.h"
#include "Employ.h"
#include <Windows.h>
#include <fstream>

using namespace Laba3; 
using namespace std;

extern stringstream flow;
extern Link* first;
string SaveName;
string SaveLastName;
string SavePatronymic;
int _size;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

bool MyForm::checkMainField()
{
	if (Last_Name->Text == "" || First_Name->Text == "" || Patronymic->Text == ""
		|| Number->Text == "" || Age->Text == "")
	{
		MessageBox::Show("Fill in all the fields");
		return false;
	}
	return true;
}

void MyForm::MarshalString(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

System::Void MyForm::Show_Button_Click(System::Object^ sender, System::EventArgs^ e)
{	
	Link* current = first;
	while (current)
	{
		current->data->display();
		current = current->next;
	}
	richTextBox1->Text= gcnew String((flow.str()).c_str());
	if (richTextBox1->Text == "")
		MessageBox::Show("Empty");
	flow.str("");
}

void add_in_list(Link* newlink)
{
	if (first)
	{
		Link* current = first;
		while (current->next)
			current = current->next;
		current->next = newlink;
	}
	else
		first = newlink;
}

System::Void MyForm::Add_Manager_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkMainField() == false)
		return;
	if (Position->Text == "" || Dues->Text == "")
	{
		MessageBox::Show("Fill in all the fields");
		return;
	}
	string last_name, first_name, patronymic, position;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Position->Text, position);
	
	Link* newlink = new Link;
	newlink->data = new Manager(last_name.c_str(),first_name.c_str(),patronymic.c_str(),INT32::Parse(Number->Text), INT32::Parse(Age->Text),position.c_str(), INT32::Parse(Dues->Text));
	newlink->_etype = tmanager;
	newlink->next = NULL;
	add_in_list(newlink);
}

System::Void MyForm::Add_Scientist_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkMainField() == false)
		return;
	if (Science->Text == "" || Number_of_publications->Text == "")
	{
		MessageBox::Show("Fill in all the fields");
		return;
	}
	string last_name, first_name, patronymic, science;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Science->Text, science);
	Link* newlink = new Link;
	newlink->data = new Scientist(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), science.c_str(), INT32::Parse(Number_of_publications->Text));
	newlink->_etype = tscientist;
	newlink->next = NULL;
	add_in_list(newlink);
}

System::Void MyForm::Add_Laborer_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkMainField() == false)
		return;
	if (Profession->Text == "")
	{
		MessageBox::Show("Fill in all the fields");
		return;
	}
	string last_name, first_name, patronymic, profession;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Profession->Text, profession);
	Link* newlink = new Link;
	newlink->data = new Laborer(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), profession.c_str());
	newlink->_etype = tlaborer;
	newlink->next = NULL;
	add_in_list(newlink);
}

System::Void MyForm::Add_Brigadier_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkMainField() == false)
		return;
	if (Degree_of_qualification->Text == "" || Profession_Brigadier->Text == "")
	{
		MessageBox::Show("Fill in all the fields");
		return;
	}
	string last_name, first_name, patronymic,profession;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Profession_Brigadier->Text, profession);
	Link* newlink = new Link;
	newlink->data = new Brigadier(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), profession.c_str(), INT32::Parse(Degree_of_qualification->Text));
	newlink->_etype = tbrigadier;
	newlink->next = NULL;
	add_in_list(newlink);
}

System::Void MyForm::Add_Accountant_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkMainField() == false)
		return;
	if (Work_experience->Text == "")
	{
		MessageBox::Show("Fill in all the fields");
		return;
	}
	string last_name, first_name, patronymic;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	Link* newlink = new Link;
	newlink->data = new Accountant(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), INT32::Parse(Work_experience->Text));
	newlink->next = NULL;
	newlink->_etype = taccountant;
	add_in_list(newlink);
}

System::Void MyForm::Delete_Button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Last_Name->Text == "" || First_Name->Text == "" || Patronymic->Text == "")
	{
		MessageBox::Show("Fill in the full name");
		return;
	}
	string last_name, first_name, patronymic;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	Link* current = first;
	Link* previous = NULL;
	while (current)
	{
		if (current->data->get_second_name() == last_name && current->data->get_name() == first_name && current->data->get_patronymic() == patronymic)
		{
			//if first
			if (previous == NULL)
			{
				first = current->next;		//pointer shift
				delete current->data;		//delete dynamic data
				delete current;				//delete a dynamic pointer
				break;
			}
			else
			{
				previous->next = current->next;
				delete current->data;		
				delete current;		
				break;
			}
		}
		previous = current;
		current = current->next;
	}
}

System::Void MyForm::SearchToEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
	MarshalString(Last_Name->Text, SaveLastName);
	MarshalString(First_Name->Text, SaveName);
	MarshalString(Patronymic->Text, SavePatronymic);
	MessageBox::Show("Enter new data");
}

Link* _SearchToEdit()
{
	Link* current = first;	
	while (current)
	{
		if (current->data->get_second_name() == SaveLastName && current->data->get_name() == SaveName && current->data->get_patronymic() == SavePatronymic)
			return current;
		current = current->next;
	}
	MessageBox::Show("There is no such person");
	return NULL;
}

System::Void MyForm::ManagerEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Link* current = _SearchToEdit();
	string last_name, first_name, patronymic, position;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Position->Text, position);
	Manager* ptr = dynamic_cast<Manager*>(current->data);
	ptr->redact_info(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), position.c_str(), INT32::Parse(Dues->Text));
}

System::Void MyForm::LaborerEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Link* current = _SearchToEdit();
	string last_name, first_name, patronymic, profession;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Profession->Text, profession);
	Laborer* ptr = dynamic_cast<Laborer*>(current->data);
	ptr->redact_info(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), profession.c_str());
}

System::Void MyForm::ScientistEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Link* current = _SearchToEdit();
	string last_name, first_name, patronymic, science;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Science->Text, science);
	Scientist* ptr = dynamic_cast<Scientist*>(current->data);
	ptr->redact_info(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), science.c_str(), INT32::Parse(Number_of_publications->Text));
}

System::Void MyForm::BrigadierEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Link* current = _SearchToEdit();
	string last_name, first_name, patronymic, profession;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	MarshalString(Profession_Brigadier->Text, profession);
	Brigadier* ptr = dynamic_cast<Brigadier*>(current->data);
	ptr->redact_info(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), profession.c_str(), INT32::Parse(Degree_of_qualification->Text));
}

System::Void MyForm::AccountantEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Link* current = _SearchToEdit();
	string last_name, first_name, patronymic;
	MarshalString(Last_Name->Text, last_name);
	MarshalString(First_Name->Text, first_name);
	MarshalString(Patronymic->Text, patronymic);
	Accountant* ptr = dynamic_cast<Accountant*>(current->data);
	ptr->redact_info(last_name.c_str(), first_name.c_str(), patronymic.c_str(), INT32::Parse(Number->Text), INT32::Parse(Age->Text), INT32::Parse(Work_experience->Text));
}

System::Void MyForm::SerializationButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Link* current = first;
	ofstream outfile;
	outfile.open("EMPLOY.txt",ios::binary);
	if (!outfile)
	{
		MessageBox::Show("The File is not opened");
		return;
	}
	
	while (current)
	{
		outfile.write((char*)&(current->_etype), sizeof(current->_etype));
		outfile.write((char*)(current->data), current->data->GetClassSize());
		current = current->next;
	}
	outfile.close();
}

System::Void MyForm::DeserializationButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	ifstream infile;
	employee_type etype;
	int size;
	infile.open("EMPLOY.txt",ios::binary);
	if (!infile)
	{
		MessageBox::Show("The File is not opened");
		return;
	}

	while (true)
	{
		infile.read((char*)&etype, sizeof(etype));
		if (infile.eof())
			break;
		if (!infile)
		{
			MessageBox::Show("ERROR: Read #1");
			return;
		}

		Link* newlink = new Link;
		newlink->next = NULL;

		switch (etype)
		{
		case tmanager:
			newlink->data = new Manager;
			newlink->_etype = tmanager;
			break;
		case tscientist:
			newlink->data = new Scientist;
			newlink->_etype = tscientist;
			break;
		case tlaborer:
			newlink->data = new Laborer;
			newlink->_etype = tlaborer;
			break;
		case tbrigadier:
			newlink->data = new Brigadier;
			newlink->_etype = tbrigadier;
			break;
		case taccountant:
			newlink->data = new Accountant;
			newlink->_etype = taccountant;
			break;
		default:
			MessageBox::Show("ERROR: etype");
			return;
		}

		infile.read((char*)newlink->data, newlink->data->GetClassSize());
		if (!infile)
		{
			MessageBox::Show("ERROR: read #2");
			return;
		}
		add_in_list(newlink);
	}
	infile.close();
}