#include "Money.h"
Money::Money(void)
{
	rub = kop = 0;
}
Money::~Money(void)
{

}
Money::Money(long R, int K)
{
	rub = R; 
	kop = K;
}
Money::Money(const Money& money)
{
	rub = money.rub;
	kop = money.kop;
}
Money& Money::operator =(const Money& m)
{
	if (&m == this) return *this;
	rub = m.rub;
	kop = m.kop;
	return*this;
}
ostream& operator<<(ostream& out, const Money& m)
{

	out << m.rub << " , " << m.kop;
	out << "\n";
	return out;
}
istream& operator>>(istream& in, Money& m)
{
	cout << "\nРубли: "; in >> m.rub;
	cout << "\nКопейки: "; in >> m.kop;
	return in;
}
Money Money::operator+(Money k)
{
	int t = rub * 100 + kop;
	int kt = k.rub * 100 + k.kop;
	t += kt;
	Money temp(t / 100, t % 100);
	return temp;
}
