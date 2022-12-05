#include <iostream>
#include <string>



using namespace std;

class MyString
{
private:
	char* buffer;

public:

	MyString(const char* initString)
	{
		buffer = new char[strlen(initString)+1] {0};
		
		cout << "buffer " << (double*)buffer << " strlen " << &initString << endl;
		
		strcpy_s(buffer, strlen(initString)+1, initString);

		cout << "buffer " << &buffer[0] << " strlen " << &initString << endl;
	}
	~MyString()
	{
		delete[] buffer;
	}
	int GetLength()
	{
		return strlen(buffer);
	}
	const char* GetString()
	{
		return buffer;
	}
};

int main()
{
	MyString sayHello("Hello Man!");
	cout << sayHello.GetString() << endl;
	cout << sayHello.GetLength() << endl;


	system("pause");
	return 0;
}