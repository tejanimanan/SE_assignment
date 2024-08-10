//10. Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;
class concatenate
{
	public :
		string real;
		concatenate(string r)
		{
			real=r;
		}
		
         concatenate() 
     	{
		real="";
     	} 
		void display()
		{
			cout<<"Concate String is = "<<real;
		}
		concatenate operator +(concatenate obj)
		{
			concatenate temp;
			temp.real=real+obj.real;
			
			return temp;
		}
};
int main()
{
	string s1,s2;
	cout<<"Enter String 1 :";
	cin>>s1;
	cout<<"Enter String 2 :";
	cin>>s2;
	
	concatenate c1(s1);
	concatenate c2(s2);
	
	concatenate c3=c1+c2;
	c3.display();
	
		return 0;
		
}
