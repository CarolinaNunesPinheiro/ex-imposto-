#include <bits/stdc++.h>

using namespace std;

int main() {
	double  sal, ser, cap, med, edu, salmensal, isal, iser, icap;
	
	cout << fixed << setprecision (2.0);
	
cout << "Renda anual com salario: ";
cin >> sal;
cout << "Renda anual com prestacao de servico: ";
cin >> ser;
cout << "Renda anual com ganho de capital: ";
cin >> cap;
cout << "Gastos medicos: "; 
cin >> med;
cout << "Gastos educacionais: ";
cin >> edu;

salmensal = sal/12;

if (salmensal < 3000) {
	isal == 0.00;
	}
else if (salmensal >= 3000 && salmensal < 5000) {
	isal = sal * 0.1;
}
else {
	isal = sal * 0.2;
}
iser = ser * 0.15;
icap = cap * 0.20;

cout << "Relatorio de imposto de renda" << endl ; 
cout << "Cosolidado de renda :" << endl ;
cout << "Imposto sobre salario:" << isal << endl;
cout << "Imposto sobre servicos:" << iser << endl;
cout << "Imposto sobre ganho de capital:" << icap<< endl;


	return 0;
}
