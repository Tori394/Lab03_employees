#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Intern.h"
#include <string>
using namespace std;

int main()
{
	Manager m("Waldemar", "Gazela", 7000);
	Manager n("Jan", "Berlowski", 8000);
	m.IntroduceYourself();
	m.getPodwladni();
	n.IntroduceYourself();
	n.getPodwladni();
	Intern a("Kamil", "Kulka", 2000, m);
	Intern b("Adam", "Marszalski", 1500, n);
	Intern c("Jan", "Opakowanie", 3000, n);
	a.IntroduceYourself();
	b.IntroduceYourself();
	c.IntroduceYourself();
	m.getPodwladni();
	n.getPodwladni();
	ChangeSalary(6000, n, m);
	m.IntroduceYourself();

	return 0;
}
/*
Jestem Waldemar Gazela zarabiam 7000. Jestem menagerem firmy.
Ilosc podwladnych: 0
Jestem Jan Berlowski zarabiam 8000. Jestem menagerem firmy.
Ilosc podwladnych: 0
Jestem Kamil Kulka. Jestem pracownikiem firmy.
Jestem Adam Marszalski. Jestem pracownikiem firmy.
Jestem Jan Opakowanie. Jestem pracownikiem firmy.
Ilosc podwladnych: 1
Ilosc podwladnych: 2
Jan Berlowski zmienil zarobki Waldemar Gazela z 7000 na 6000
Jestem Waldemar Gazela zarabiam 6000. Jestem menagerem firmy.
*/