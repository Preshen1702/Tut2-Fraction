#include <iostream>
using namespace std;

class fraction{
public:
	fraction(int n1, int n2);
	fraction();
	void setFraction(int a, int b);
	int getNum();
	int getDen();
	fraction add(fraction a);
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
	int n1, n2;
	cout << "Enter a numerator and denomenator" << endl;
	cin >> n1 >> n2;
	fraction obj = fraction(n1,n2);
	fraction temp;

	int no1, no2;
	cout << "Enter a numerator and denomenator to add" << endl;
	cin >> no1 >> no2;
	fraction obj1 = fraction(no1, no2);
	temp = obj.add(obj1);
	cout << "The addition is " << temp.getNum() << "/" << temp.getDen() << endl;
}
fraction::fraction(int n1, int n2)
{
	num = n1;
	den = n2;
}
fraction::fraction()
{

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
fraction fraction::add(fraction a)
{
	fraction ret;
	ret.setFraction((a.getNum()+num),(a.getDen()+den));
	return ret;
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