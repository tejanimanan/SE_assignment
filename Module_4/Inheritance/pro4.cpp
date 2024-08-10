#include <iostream>
#include <string>

using namespace std;

class Student 
{
	
    
	public:
		string name;
	    int roll_no;
	    string class_name;	
	
    void getPersonalDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Enter Class: ";
        getline(cin, class_name);
    }
};

class Subject {

		public:
			string subject_name;
		    int max_marks, obtained_marks;
		    void getSubjectDetails() {
		        cout << "Enter Subject Name: ";
		    	cin>>subject_name;
		    	cin.ignore();
		        cout << "Enter Maximum Marks: ";
		        cin >> max_marks;
		        cout << "Enter Obtained Marks: ";
		        cin >> obtained_marks;
		    }
};

class Subject1 : public Subject {};
class Subject2 : public Subject {};
// ... Add more subject classes as needed

class MarkSheet : public Student, public Subject1, public Subject2 {
public:
	
		    int max_marks, obtained_marks;
    void Display() {
    	max_marks = Subject1::max_marks;
    	obtained_marks = Subject1::obtained_marks;
        int total_marks = obtained_marks + Subject2::obtained_marks; // Assuming two subjects
        float percentage = (float)total_marks / (max_marks + Subject2::max_marks) * 100;

        cout << "\n\n---------------Mark Sheet-------------------\n\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Class: " << class_name << endl;

        cout << "\nSubject\tMax Marks\tObtained Marks" << endl;
        cout << Subject1::subject_name << "\t" << max_marks << "\t\t" << obtained_marks << endl;
        cout << Subject2::subject_name << "\t" << Subject2::max_marks << "\t\t" << Subject2::obtained_marks << endl;

        cout << "\nTotal Marks: " << total_marks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    MarkSheet s1;
    s1.getPersonalDetails();
    s1.Subject1::getSubjectDetails();
    s1.Subject2::getSubjectDetails();
    s1.Display();

    return 0;
}

