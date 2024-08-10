//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
		
		void getdata(string name,int age)
		{
			this->name = name;
			this->age = age;
		}
		void putdata()
		{
			cout<<"\nName is:"<<name;
			cout<<"\nAge is :"<<age;
		}
		
};
class Student:public Person
{
	public:
		int percentage;
		
		void setdata1(int per)
		{
			percentage = per;
		}
		void display()
		{
			putdata();
			cout<<"\nPercentage is:"<<percentage;
		}
};
class Teacher:public Student
{
	public:
		double salary;
		
		void setdata(double sal)
		{
			salary = sal;
		}
		void display1()
		{
			display();
			cout<<"\nsalary is:"<<salary;	
		} 
	
};
int main()
{
	Teacher t1;
	string name;
	int age,per;
	double salary;
	
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"\nEnter age:";
	cin>>age;
	cout<<"\nEnter Per:";
	cin>>per;
	cout<<"\nEnter salary:";
	cin>>salary;
	t1.getdata(name,age);
	t1.setdata1(per);
	t1.setdata(salary);
	t1.display1();
}
