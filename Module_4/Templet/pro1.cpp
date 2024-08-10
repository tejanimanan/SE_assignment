//Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)
#include <iostream>

using namespace std;

class cricketer {

	public:
	string name,team;
    int age;
    
    void input_cricketer() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter team: ";
        cin >> team;
    }

    void display_cricketer() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Team: " << team << endl; 
    }
};

class batsman : public cricketer 
{
	private:
    int total_runs,total_match;
    float average_runs;
    int best_performance;

	public:
    void input_batsman() {
        input_cricketer();
        cout << "Enter total runs: ";
        cin >> total_runs;
        cout<<"Enter Total match:";
        cin>>total_match;
        cout << "Enter best performance: ";
        cin >> best_performance;
    }

    void calculate_average() {
        average_runs = (float)total_runs / total_match;
    }

    void display_batsman() {
        display_cricketer();
        cout << "Total runs: " << total_runs << endl;
        cout << "Average runs: " << average_runs << endl;
        cout << "Best performance: " << best_performance << endl;
    }
};
int main() {
	
    batsman b;
    b.input_batsman(); 
    b.calculate_average();
    b.display_batsman();
    return 0;
} 
