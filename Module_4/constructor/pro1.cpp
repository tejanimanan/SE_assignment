#include <iostream>
using namespace std;
inline int multi(int a, int b)
{
    return a * b;
}
inline int cube(int a) 
{
    return a * a * a;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    int multip = multi(num1, num2);
    cout << "Multiply: " << multip << endl;
    cout << "Enter a number to find its cube: ";
    cin >> num1; 
    int cub = cube(num1);
    cout << "Cube: " << cub << endl;
    return 0;
}
