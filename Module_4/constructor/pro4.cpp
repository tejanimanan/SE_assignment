//Write a C++ program to implement a class called Bank .Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account
#include<iostream>
using namespace std;
class BankAccount
{
	private:
		double acc_number,balance;
		int deposit;
	public:
		BankAccount(double acc_number,double balance)
		{
			this->acc_number = acc_number;
			this->balance = balance;
		}
		void deposite(int d)
		{
			deposit = d;
			cout<<"\nBefore deposite balance is:"<<balance;
			cout<<"\nAfter deposite balance is:"<<balance+deposit;
		}
		void withdraw(int w)
		{
			cout<<"\nBefore withdraw balance is:"<<balance;
			cout<<"\nAfter withdraw balance is:"<<(balance+deposit)-w;
		}
};
int main()
{
	double acc_num,bal;
	int deposite,withdraw;
	cout<<"\nEnter Account number:";
	cin>>acc_num;
	cout<<"\nEnter Account Balance:";
	cin>>bal;
										
	cout<<"\nEnter Deposite value:";
	cin>>deposite;
	cout<<"\nEnter Withdraw value:";
	cin>>withdraw;
	BankAccount b1(acc_num,bal);
	b1.deposite(deposite);
	b1.withdraw(withdraw);
	return 0;
}
