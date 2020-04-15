#pragma once
#include <iostream>
using namespace std;
template <class T> //T - параметр шаблона
class set
{
public:

	set(int s, T k);
	~set();
	set(const set<T>& a);
	set& operator=(const set<T>& a);
	T& operator[](int index);
	set operator>(const T k);
	set operator<(const T k);
	friend bool operator==(const set<T>& b1,const set<T>& b2);
	friend ostream& operator<< <>(ostream& out, const set<T>& a);
	friend istream& operator>> <>(istream& in, set<T>& a);
private:
	int elem;
	T* data;
};

// опрeделение функций
//конструктор с параметрами
template <class T>
set<T>::set(int n, T k)
{
	elem = n;
	data = new T[elem];
	for (int i = 0; i < elem; i++)
		data[i] = k;

}
//конструктор копирования
template <class T>
set<T>::set(const set& a)
{
	elem = a.elem;
	data = new T[elem];
	for (int i = 0; i < elem; i++)
		data[i] = a.data[i];

}
//деструктор
template <class T>
set<T>::~set()

{
	delete[]data;
	data = 0;
}
//операция присваивания
template <class T>
set<T>& set<T>::operator=(const set<T>& a)
{
	if (this == &a)
		return *this;
	elem = a.elem;
	if (data != 0) 
		delete[]data;
	data = new T[elem];
	for (int i = 0; i < elem; i++)
		data[i] = a.data[i];
	return *this;
}
//операция доступа по индексу
template <class T>
T& set<T>::operator[](int index)
{
	if (index < elem) return data[index];
	else cout << "\nОшибка: Индекс больше количества элементов";
}
//операция для поиска элемента
template <class T>
set<T> set<T>::operator>(const T k)
{
	for (int i = elem; i > 0; i--)
	{
		if (k == data[i])
			cout << "Элемент (4) найден в " <<i << "-ом случае\n"; 
	}
	return *this;
}
template <class T>
set<T> set<T>::operator<(const T k)
{
	for (int i = elem; i > 0; i--)
	{
		if (k != data[i])
			cout << "Элемент (4) не найден\n";
	}
	return *this;
}

//операции для ввода-вывода
template <class T>
ostream& operator<< (ostream& out, const set<T>& a)
{
	for (int i = 0; i < a.elem; ++i)
		out << a.data[i] << " ";
	return out;
}
template <class T>
istream& operator>> (istream& in, set<T>& a)
{
	for (int i = 0; i < a.elem; ++i)
		in >> a.data[i];
	return in;
}

//проверка на равенство
template <class T>
bool operator==(const set<T>& b1, const set<T>& b2)
{
	return b1.elem == b2.elem;
}
