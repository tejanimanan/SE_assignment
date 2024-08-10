//Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class Date
{
	private:
	int	day,month,year;
	public:
		void setdata(int day,int month,int year)
		{
			this->day = day;
			this->month = month;
			this->year = year;
		}
		void getdata()
		{
			if(day>=1 && day <=31 && month>=1 && month <=12)
			{
				cout<<day<<"-"<<month<<"-"<<year;
			}
			else
			{
				cout<<"\nEnter valid date";
			}
		}
};
int main()
{
	Date d1;
	int date,month,year;
	cout<<"\nEnter Date:";
	cin>>date;
	cout<<"\nEnter month:";
	cin>>month;
	cout<<"\nEnter Year:";
	cin>>year;
	d1.setdata(date,month,year);
	d1.getdata();
}
