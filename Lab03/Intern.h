#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
#include "Manager.h"
using namespace std;

class Intern : public Employee
{
public:
	Intern(string imie, string nazwisko, int zarobki, Manager& m) : Employee(imie, nazwisko, zarobki) { m.nowyPodwladny(); };
	void IntroduceYourself() const override { cout << "Jestem " << m_name << " " << m_surname << ". Jestem pracownikiem firmy." << endl; };
};