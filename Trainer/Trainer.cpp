#include <iostream>

using namespace std;

class Circle
{
private:
	const double Pi;
	double r;

public:
	
	Circle(double R_value) : r(R_value), Pi(3.14)
	{
		
	}
	double Area()
	{
		return Pi * r * r;
	}
	double Perimetr()
	{
		return 2 * Pi * r;
	}
};


int main()
{
	cout << "Enter radius: " << endl;
	double r = 0;
	cin >> r;
	Circle cir1(r);
	cout << "Perimetr= " << cir1.Perimetr() << endl;
	cout << "Area= " << cir1.Area() << endl;
	

	

	system("pause");
	return 0;
}

