#include <iostream>
#include <string>

using namespace std;

string name = "outer";
string *ptr_name = &name;

int main(){
	string name = "inner";			// shadows the variable name defined outside main fcn
	string *ptr_name = &name;		// shadows the pointer name defined outside main fcn

	cout << "Outer variable value: " << ::name << "; Inner variable value: " << name << endl;
	cout << "Outer pointer value: " << *::ptr_name << "; Inner pointer value: " << *ptr_name << endl;

	return 0;
}


