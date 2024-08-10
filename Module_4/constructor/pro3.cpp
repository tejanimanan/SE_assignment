//Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables
#include<iostream>
using namespace std;
class Car
{
	private:
		string company,model;
		int year;
	public:
		void setdata(string company,string model,int year)
		{
			this->company = company;
			this->model = model;
			this->year = year;
		}
		void getdata()
		{
			cout<<"\nCompany name is:"<<company;
			cout<<"\nModel name is:"<<model;
			cout<<"\nYear is:"<<year;
		}
};
int main()
{
	int year;
	string comp,model;
	cout<<"\nEnter Company Name:";
	cin>>comp;
	cout<<"\nEnter Model name:";
	cin>>model;
	cout<<"\nEnter Year:";
	cin>>year;
	
	Car c1;
	c1.setdata(comp,model,year);
	c1.getdata();
	return 0;	
}
