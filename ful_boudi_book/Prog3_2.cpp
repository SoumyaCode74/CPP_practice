#include "Prog3_2.h"

void Prog3_2::print_data(int a, string b){
	cout << "Value of a: " << a << endl;
	cout << "Value of b: " << b << endl;
}

int main(){
    Prog3_2 *objects = new Prog3_2[3];
    cout << "=======Values of the objects=======" << endl;
    objects[0].print_data(10, "Object 1");
    objects[1].print_data(20, "Object 2");
    objects[2].print_data(30, "Object 3");
    delete [ ]objects;

    return 0;
}

