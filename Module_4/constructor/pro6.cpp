//Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	private:
		string name;
		int emp_id,salary;
	public:
		Employee(int emp_id,int salary,string name)
		{
			this->emp_id = emp_id;
			this->salary = salary;
			this->name = name;
		}
		void setsalary(double prate)
		{
			
			int increment;
			increment = salary * (prate / 100);
			salary = salary + increment;
			
		}
		void display()
		{
			cout<<"\nEmployee Id is:"<<emp_id;
			cout<<"\nEmployee Name is:"<<name;
			cout<<"\nEmployee salary is:"<<salary;
		}
};
int main()
{
	cout<<""
	Employee e1(101,1000,"manan");
	
	e1.setsalary(12.5);
	e1.display();
	return 0;
}
