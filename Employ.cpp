#include "Employ.h"
#include "MyForm.h"
#pragma warning(disable:4996)

std::stringstream flow;
Link* first;
////////////////////////////////////////////////////////////////////////////////////////////

Employee::Employee()
{
	strcpy(second_name, "");
	strcpy(name, "");
	strcpy(patronymic, "");
	number = 0; 
	age = 0;
}


Employee::Employee(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag)
{
	strcpy(second_name, sec_name);
	strcpy(name, nm);
	strcpy(patronymic, patr);
	number = num;
	age = ag;
}

void Employee::redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag)
{
	strcpy(second_name, sec_name);
	strcpy(name, nm);
	strcpy(patronymic, patr);
	number = num;
	age = ag;
}

void Employee::display()
{
	flow << second_name << ' ' << name << ' ' << patronymic << ' ' << number << ' ' << age << ' ';
}

int Employee::GetClassSize()
{
	return sizeof(Employee);
}

char* Employee::get_second_name()
{
	return second_name;
}

char* Employee::get_name()
{
	return name;
}

char* Employee::get_patronymic()
{
	return patronymic;
}


////////////////////////////////////////////////////////////////////////////////////////////

Manager::Manager() :Employee()
{
	strcpy(position, "");
	dues = 0.0;
}


Manager::Manager(const char* sec_name, const  char* nm, const  char* patr, unsigned int num, int ag,const  char* pos, double due) :
	Employee(sec_name, nm, patr, num, ag)
{
	strcpy_s(position, pos);
	dues = due;
}


void Manager::redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* pos, double due)
{
	Employee::redact_info(sec_name, nm, patr, num, ag);
	strcpy(position, pos);
	dues = due;
}

void Manager::display()
{
	Employee::display();
	flow << position << ' ' << dues << '\n';
}

int Manager::GetClassSize()
{
	return sizeof(Manager);
}


////////////////////////////////////////////////////////////////////////////////////////////

Scientist::Scientist() :Employee()
{
	strcpy(science, "");
	count_pubs = 0;
}


Scientist::Scientist(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* scien, int pubs) :
	Employee(sec_name, nm, patr, num, ag)
{
	strcpy(science, scien);
	count_pubs = pubs;
}


void Scientist::redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* scien, int pubs)
{
	Employee::redact_info(sec_name, nm, patr, num, ag);
	strcpy(science, scien);
	count_pubs = pubs;
}


void Scientist::display()
{
	Employee::display();
	flow << science << ' ' << count_pubs << '\n';
}

int Scientist::GetClassSize()
{
	return sizeof(Scientist);
}

////////////////////////////////////////////////////////////////////////////////////////////

Laborer::Laborer() :Employee()
{
	strcpy(profession, "");
}


Laborer::Laborer(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof) :
	Employee(sec_name, nm, patr, num, ag)
{
	strcpy(profession, prof);
}


void Laborer::redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof)
{
	Employee::redact_info(sec_name, nm, patr, num, ag);
	strcpy(profession, prof);
}


void Laborer::display()
{
	Employee::display();
	flow << profession << ' ';
}

int Laborer::GetClassSize()
{
	return sizeof(Laborer);
}

////////////////////////////////////////////////////////////////////////////////////////////

Brigadier::Brigadier() :Laborer(), degree_of_qualification(0)
{}


Brigadier::Brigadier(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof, int degree) :
	Laborer(sec_name, nm, patr, num, ag, prof)
{
	degree_of_qualification = degree;
}


void Brigadier::redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof, int degree)
{
	Laborer::redact_info(sec_name, nm, patr, num, ag, prof);
	degree_of_qualification = degree;
}


void Brigadier::display()
{
	Laborer::display();
	flow << degree_of_qualification << '\n';
}

int Brigadier::GetClassSize()
{
	return sizeof(Brigadier);
}

////////////////////////////////////////////////////////////////////////////////////////////

Accountant::Accountant() :Employee(), work_experience(0)
{}


Accountant::Accountant(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, int experience) :
	Employee(sec_name, nm, patr, num, ag)
{
	work_experience = experience;
}


void Accountant::redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, int experience)
{
	Employee::redact_info(sec_name, nm, patr, num, ag);
	work_experience = experience;
}


void Accountant::display()
{
	Employee::display();
	flow << work_experience << '\n';
}

int Accountant::GetClassSize()
{
	return sizeof(Accountant);
}

////////////////////////////////////////////////////////////////////////////////////////////