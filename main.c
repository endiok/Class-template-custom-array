#include <iostream>
using namespace std;
#include "MyArray.hpp"
class Person
{
public:
	Person() {};
	Person(string name,int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void printIntArr(MyArray<int> &arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;
	}
}
void printPersonArr(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << "Name: " << arr[i].m_Name << " Age: " << arr[i].m_Age << endl;
	}
}
void test01() {
	MyArray<int>arr1(5);
	for (int i = 0; i < 5; i++) {
		arr1.Push_Back(i);
	}
	printIntArr(arr1);
}
void test02() {
	MyArray<Person> p(5);
	Person p1("孙悟空",99);
	Person p2("网吧", 52);
	Person p3("哇嘎", 42);
	Person p4("额我", 11);
	Person p5("撒发", 66);
	p.Push_Back(p1);
	p.Push_Back(p2);
	p.Push_Back(p3);
	p.Push_Back(p4);
	p.Push_Back(p5);
	printPersonArr(p);
	cout << p.getCapacity() << endl;
	cout << p.getSize() << endl;
	p.Del_Back();
	printPersonArr(p);
	cout << p.getCapacity() << endl;
	cout << p.getSize() << endl;

}
int main(int argc, char* argv[]) {
	test01();
	test02();
	system("pause");
	return 0;
}
