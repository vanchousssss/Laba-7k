//МНОЖЕСТВО с элементами типа int.Реализовать операции :
//[] – доступа по индексу;
//== -проверка на равенство;
//> число – принадлежность числа множеству
//Money для работы с денежными суммами.Число должно быть представлено двумя полями :
//типа long для рублей и типа int для копеек.Дробная часть числа при выводе на экран должна быть отделена от целой части запятой
#include "set.h"
#include "Money.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите пять элементов множества А: ";
	cout << '\n';
	//инициализация, ввод и вывод значений множества 
	set<int>A(5, 0);
	cin >> A;
	cout << A << endl;
	cout << "Множество В: ";
	set<int>B(5, 1);
	cout << B << endl;
	if (A[3] == B[3])
		cout << A[3] << "==" << B[3] << "\nЭлементы равны\n";
	else cout << A[3] << "!=" << B[3] << "\nЭлементы не равны\n";
	cout << "Проверим на наличие числа 4 в множестве\n";
	A > 4;
	A < 4;
	B = A;
	cout << B << endl;
	cout << "Элемент по индексу 2 = ";
	cout << A[2] << endl;

	Money t;
	cin >> t;
	cout << t;

	Money q;
	cin >> q;

	Money p;
	cout << "\nСумма равна : ";
	p = t + q;
	cout << p;

	set<Money>R(3, q);
	cin >> R;
	cout << R << endl;

	set<Money>W(5, p);
	cout << W << endl;
	W = R;
	cout << W << endl;
	cout << "Элемент по индексу 1 = ";
	cout << W[1] << endl;

}
