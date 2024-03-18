#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class Manager : public Employee
{
private:
	int m_podwladni;
public:
	Manager(string imie, string nazwisko, int zarobki) : Employee(imie, nazwisko, zarobki) { m_podwladni = 0; };
	void IntroduceYourself() const override { cout << "Jestem " << m_name << " " << m_surname <<" zarabiam "<<m_salary << ". Jestem menagerem firmy." << endl; };
	void getPodwladni() { cout<<"Ilosc podwladnych: " << m_podwladni << endl; }
	void nowyPodwladny() { m_podwladni++; }
	friend void ChangeSalary(int, Manager&, Employee&);
};

void ChangeSalary(int a, Manager& m, Employee& e)
{
	cout << m.m_name << " " << m.m_surname << " zmienil zarobki " << e.m_name << " " << e.m_surname << " z " << e.m_salary << " na " << a << endl;
	e.m_salary = a;
}