//Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		string name,grad;
		char cls;
		int rno,mark;  
	public:
		void setdata(string name,char cls,int rno,int mark)
		{
			this->name = name;
			this->cls = cls;
			this->rno = rno;
			this->mark = mark;
		}
		void grade()
		{
			if(mark>=40 && mark <=50)
			{
				grad = "c";
			}
			else if(mark>=50 && mark<=60)
			{
				
				grad = "B";
			}
			else if(mark>=60 && mark<=70)
			{
				
				grad = "A";
			}
			else if(mark>=70)
			{
				
				grad = "A";
			}
			else
			{
				grad = "fail";
			}
		}
		void display()
		{
			cout<<"\n\nRoll no is:"<<rno;
			cout<<"\nName is:"<<name;
			cout<<"\nClass is:"<<cls;
			cout<<"\nMark is :"<<mark;
			cout<<"\nGrade is:"<<grad;
		}
			 
};
int main()
{
	string name,grad;
	char cls;
	int rno,marks;
	
	Student s1;
	cout<<"\nEnter Name:";
	cin>>name;
	cout<<"\nEnter Roll no:";
	cin>>rno;
	cout<<"\nEnter Class:";
	cin>>cls;
	cout<<"\nEnter Marks:";
	cin>>marks;
	s1.setdata(name,cls,rno,marks);
	s1.grade();
	s1.display();
	
}
