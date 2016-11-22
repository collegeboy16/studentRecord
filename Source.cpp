#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	string name;
	string lastName;
	int age;
	string profession;
	

	// Functions
	string fullname(string, string);

	// Constructor
	Person();
	
};

class Student : public Person {
public:
	float gpa;
	string degree;
	bool isStudent(char);

};

int main(){

	// Creating an instance of the class that is going to create a person
	Student student;
	int studentCount;
	char yesNo;

	cout << "Enter number of students you will enter: " << endl;
	cin >> studentCount;
	
	for (int i = 1; i <= studentCount; i++){
		cout << "Enter name: ";
		cin >> student.name;
		cout << "Last name: ";
		cin >> student.lastName;
		cout << "Age: ";
		cin >> student.age;
		cout << "student? (y/n): ";
		cin >> yesNo;
		student.isStudent(yesNo);
		
	}



	return 0;
}

// Member functon defitnitions include the constructors

// This is being called once the objec is being created 
	Person::Person(void){
		cout << "Creating the object..." << endl;
	}

	string Person::fullname(string name, string lName){
		string full = name + lName;
		return full;
	}

	bool Student::isStudent(char isStudent){
		if (isStudent == 'y' || isStudent == 'Y'){
			cout << "GPA: ";
			
			return true;
		}
		else {
			return false;
		}
	}