#include <iostream>
#include <string>
using namespace std;

class Student {

public:
	//my broken class
	Student(int a, string b) { a = age; b = name; };
	int getage() { return age; };
	string getname() { return name; };

private:
	int age;
	string name;

};

int main()
{
	int i = 1;
	Student S1(5, "Joe");
	Student S2(6, "Jan");
	Student S3(7, "Jac");


	cout << "Student " << i << " name is " << S1.getname() << " and age is " << S1.getage() << "." << endl;
	system("pause");
	return 0;
}