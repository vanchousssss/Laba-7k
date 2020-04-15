#pragma once

#include <iostream>
using namespace std;

class Money
{
public:
	virtual ~Money(void);
	Money(void);
	Money(long, int);
	Money(const Money&);
	Money& operator=(const Money&);
	Money operator+(Money k);
	//перегруженные операции ввода-вывода
	friend ostream& operator<< (ostream& out, const Money&);
	friend istream& operator>> (istream& in, Money&);
protected:
	long rub;
	int kop;
};

