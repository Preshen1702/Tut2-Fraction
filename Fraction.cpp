#include <iostream>
using namespace std;

class fraction{
public:
	fraction();
	void setFraction(int a, int b);
	int getNum();
	int getDen();
	int add(fraction a);
	int sub(fraction a);
	int multiply(fraction a);
	int divide(fraction a);
	void input();
	void print();
private:
	int num, den;
};
int main()
{
	fraction obj1,obj2;

}
fraction::fraction()
{
	num = 0;
	den = 0;
}
int fraction::getNum()
{
	return num ;
}
int fraction::getDen()
{
	return den;
}
void fraction::setFraction(int a, int b)
{
	num = a;
	den = b;
}
int fraction::add(fraction a)
{
	return a.getNum()+num;
}
int fraction::sub(fraction a)
{
	return a.getNum() - num;
}
int fraction::multiply(fraction a)
{
	return a.getNum() * num;
}
int fraction::divide(fraction a)
{
	return a.getNum() / num;
}

void fraction::input()
{
	float a,s;
	cout << "Ennter a numerator and denomenator" << endl;
	cin >> a >> s;
	setFraction(a, s);
}