#include <iostream>
using namespace std;


struct Name {
string FirstName;
string LastName;
};
Name::Name() {
	FirstName = undefined;
	LastName = undefined;
}

int main() {
// Create two instances of person here, and assign the names.

Name Student1;
cout << "Enter Student 1's First Name" << endl;
cin >> Student1.FirstName;
cout << "Enter Student 1's Last Name" << endl;
cin >> Student1.LastName;
Name Student2;
cout << "Enter Student 2's Fist Name" << endl;
cin >> Student2.FirstName;
cout << "Enter Student 2's Last Name" << endl;
cin >> Student2.LastName;

cout << "\nStudent 1 :" << Student1.FirstName << " " << Student1.LastName << endl;
cout << "\nStudent 2 :" << Student2.FirstName << " " <<
Student2.LastName << endl;







	// Add the prints here




	return 0;
}
