//��������� � ���������� ���� int.����������� �������� :
//[] � ������� �� �������;
//== -�������� �� ���������;
//> ����� � �������������� ����� ���������
//Money ��� ������ � ��������� �������.����� ������ ���� ������������ ����� ������ :
//���� long ��� ������ � ���� int ��� ������.������� ����� ����� ��� ������ �� ����� ������ ���� �������� �� ����� ����� �������
#include "set.h"
#include "Money.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ���� ��������� ��������� �: ";
	cout << '\n';
	//�������������, ���� � ����� �������� ��������� 
	set<int>A(5, 0);
	cin >> A;
	cout << A << endl;
	cout << "��������� �: ";
	set<int>B(10, 1);
	cout << B << endl;
	if (A[3] == B[3])
		cout << A[3] << "==" << B[3] << "\n�������� �����\n";
	else cout << A[3] << "!=" << B[3] << "\n�������� �� �����\n";
	cout << "�������� �� ������� ����� 4 � ���������\n";
	A > 4;
	A < 4;
	B = A;
	cout << B << endl;
	cout << "������� �� ������� 2 = ";
	cout << A[2] << endl;

	Money t;
	cin >> t;
	cout << t;

	Money q;
	cin >> q;

	Money p;
	cout << "\n����� ����� : ";
	p = t + q;
	cout << p;

	set<Money>R(3, q);
	cin >> R;
	cout << R << endl;

	set<Money>W(5, p);
	cout << W << endl;
	W = R;
	cout << W << endl;
	cout << "������� �� ������� 1 = ";
	cout << W[1] << endl;

}