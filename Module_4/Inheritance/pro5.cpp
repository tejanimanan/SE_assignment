//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class Student
{
	public:
		int rno;
		void getdata(int rollno)
		{
			rno = rollno;
		}
};
class Test
{
	public:
		int sub1,sub2;
		
		void setdata(int s1,int s2)
		{
			sub1 = s1;
			sub2 = s2;
		}
};
class Result:public Student,public Test
{
	public:
	
		void display()
		{
			cout<<"\nRoll no is:"<<rno;
			cout<<"\nSubject 1 mark:"<<sub1;
			cout<<"\nSubject 2 mark:"<<sub2;
			cout<<"\nTotal Mark:"<<sub1+sub2;
			cout<<"\nper is:"<<(sub1+sub2/200);
		}
};
int main()
{
	Result r1;
	r1.getdata(133);
	r1.setdata(80,90);
	r1.display();
}
