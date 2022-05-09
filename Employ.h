#pragma once
#include <string>
#include <sstream>
using namespace std;

class Employee;

enum employee_type {tmanager, tscientist, tlaborer, tbrigadier, taccountant};
const int MAXLEN = 20;

struct Link
{
	Employee* data;
	Link* next;
	employee_type _etype;
};


class Employee
{
private:
	char second_name[MAXLEN];
	char name[MAXLEN];
	char patronymic[MAXLEN];
	unsigned int number;
	int age;
public:

	Employee();

	Employee(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag);

	virtual void redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag);

	virtual void display();

	virtual int GetClassSize();

	char* get_second_name();

	char* get_name();

	char* get_patronymic();
};


class Manager : public Employee
{
private:
	char position[MAXLEN];
	double dues;
public:

	Manager();

	Manager(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* pos, double due);

	void redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* pos, double due);

	void display();

	int GetClassSize();
};


class Scientist : public Employee
{
private:
	char science[MAXLEN];
	int count_pubs;
public:

	Scientist();

	Scientist(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* scien, int pubs);

	void redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* scien, int pubs);

	void display();

	int GetClassSize();
};


class Laborer : public Employee
{
protected:
	char profession[MAXLEN];
public:

	Laborer();

	Laborer(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof);

	virtual void redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof);

	virtual void display();

	virtual int GetClassSize();
};


class Brigadier : public Laborer
{
private:
	int degree_of_qualification;
public:

	Brigadier();

	Brigadier(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof, int degree);

	void redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, const char* prof, int degree);

	void display();

	int GetClassSize();
};


class Accountant :public Employee
{
private:
	int work_experience;
public:

	Accountant();

	Accountant(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, int experience);

	void redact_info(const char* sec_name, const char* nm, const char* patr, unsigned int num, int ag, int experience);

	void display();

	int GetClassSize();
};