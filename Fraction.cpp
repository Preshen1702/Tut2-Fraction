#include <iostream>
using namespace std;

class fraction{
public:
	fraction();
	void setFraction(float a, float b, float c, float d);
	float getFraction1();
	float getFraction2();
	float add();
	float sub();
	float multiply();
	float divide();
	void input();
	void print();
private:
	float num, num2;
	float den, den2;
};
int main()
{
	fraction objFrac;
	objFrac.input();
	objFrac.add();
	objFrac.sub();
	objFrac.multiply();
	objFrac.divide();
	objFrac.print();
}
fraction::fraction()
{
	num = 0;
	den = 0;
	num2 = 0;
	den2 = 0;
}
float fraction::getFraction1()
{
	return num / den;
}
float fraction::getFraction2()
{
	return num2 / den2;
}
void fraction::setFraction(float a, float b, float c, float d)
{
	num = a;
	den = b;
	num2 = c;
	den2 = d;
}
float fraction::add()
{
	return getFraction1() + getFraction2();
}
float fraction::sub()
{
	return getFraction1() - getFraction2();
}
float fraction::multiply()
{
	return getFraction1() * getFraction2();
}
float fraction::divide()
{
	return getFraction1() / getFraction2();
}

void fraction::print()
{
	cout << "Addition : " << add() << endl;
	cout << "Subtraction :" << sub() << endl;
	cout << "Multiplication : " << multiply() << endl;
	cout << "Division : " << divide() << endl;
}
void fraction::input()
{
	float a,s,d,f;
	cout << "Ennter a numerator and denomenator" << endl;
	cin >> a >> s >> d >> f;
	setFraction(a, s, d, f);
}