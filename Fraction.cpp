#include <iostream>
using namespace std;

class fraction{
public:
	fraction()
	{
		num = 0;
		den = 0;
	}
	fraction(int n1, int n2)
	{
		num = n1;
		den = n2;
	}
	int getNum()
	{
		return num;
	}
	int getDen()
	{
		return den;
	}
	void setFraction(int a, int b)
	{
		num = a;
		den = b;
	}
	fraction add(fraction a)
	{
		fraction ret;
		ret.setFraction((a.getNum() + num), (a.getDen() + den));
		return ret;
	}
	fraction sub(fraction a)
	{
		fraction ret;
		ret.setFraction((a.getNum() - num), (a.getDen() - den));
		return ret;
	}
	fraction multi(fraction a)
	{
		fraction ret;
		ret.setFraction((a.getNum() * num), (a.getDen() * den));
		return ret;
	}
	fraction divide(fraction a)
	{
		fraction ret;
		ret.setFraction((a.getNum() / num), (a.getDen() / den));
		return ret;
	}
private:
	int num, den;
};
int main()
{
	int n1, n2;
	cout << "Enter a numerator and denomenator" << endl;
	cin >> n1 >> n2;
	fraction obj = fraction(n1,n2);
	fraction temp1, temp2, temp3, temp4;

	int no1, no2;
	cout << "Enter a numerator and denomenator to add" << endl;
	cin >> no1 >> no2;
	fraction obj1 = fraction(no1, no2);
	temp1 = obj.add(obj1);
	temp2 = obj.sub(obj1);
	temp3 = obj.multi(obj1);
	temp4 = obj.divide(obj1);
	cout << obj1.getNum() << "/" << obj1.getDen() << "+" << obj.getNum() << "/" << obj.getDen() <<" = "<< temp1.getNum() << "/" << temp1.getDen() << endl;
	cout << obj1.getNum() << "/" << obj1.getDen() << "-" << obj.getNum() << "/" << obj.getDen() << " = " << temp2.getNum() << "/" << temp2.getDen() << endl;
	cout << obj1.getNum() << "/" << obj1.getDen() << "*" << obj.getNum() << "/" << obj.getDen() << " = " << temp3.getNum() << "/" << temp3.getDen() << endl;
	cout << obj1.getNum() << "/" << obj1.getDen() << "/" << obj.getNum() << "/" << obj.getDen() << " = " << temp4.getNum() << "/" << temp4.getDen() << endl;
}
