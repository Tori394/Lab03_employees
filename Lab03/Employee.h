#pragma once
#include <iostream>
#include <string>
using namespace std;

class Manager;

class Employee
{
private:
	int m_salary;
public:
	string m_name;
	string m_surname;
	Employee(string imie, string nazwisko, int zarobki) : m_name(imie), m_surname(nazwisko), m_salary(zarobki) {};
	virtual void IntroduceYourself() const = 0;
	friend class Manager;
	friend void ChangeSalary(int, Manager&, Employee&);

};