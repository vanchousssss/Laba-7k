//ћЌќ∆≈—“¬ќ с элементами типа int.–еализовать операции :
//[] Ц доступа по индексу;
//== -проверка на равенство;
//> число Ц принадлежность числа множеству
//Money дл€ работы с денежными суммами.„исло должно быть представлено двум€ пол€ми :
//типа long дл€ рублей и типа int дл€ копеек.ƒробна€ часть числа при выводе на экран должна быть отделена от целой части зап€той
#include "set.h"
#include "Money.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "¬ведите п€ть элементов множества ј: ";
	cout << '\n';
	//инициализаци€, ввод и вывод значений множества 
	set<int>A(5, 0);
	cin >> A;
	cout << A << endl;
	cout << "ћножество ¬: ";
	set<int>B(10, 1);
	cout << B << endl;
	if (A[3] == B[3])
		cout << A[3] << "==" << B[3] << "\nЁлементы равны\n";
	else cout << A[3] << "!=" << B[3] << "\nЁлементы не равны\n";
	cout << "ѕроверим на наличие числа 4 в множестве\n";
	A > 4;
	A < 4;
	B = A;
	cout << B << endl;
	cout << "Ёлемент по индексу 2 = ";
	cout << A[2] << endl;

	Money t;
	cin >> t;
	cout << t;

	Money q;
	cin >> q;

	Money p;
	cout << "\n—умма равна : ";
	p = t + q;
	cout << p;

	set<Money>R(3, q);
	cin >> R;
	cout << R << endl;

	set<Money>W(5, p);
	cout << W << endl;
	W = R;
	cout << W << endl;
	cout << "Ёлемент по индексу 1 = ";
	cout << W[1] << endl;

}