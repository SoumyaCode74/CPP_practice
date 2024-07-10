#include "friendfcn_lec26.h"

void Complex::setNumber(float r, float w){
    a = r;
    b = w;
}

void Complex::printNumber(void){
    cout << "Complex Number: " << a << "+j" << b << endl;
}

Complex sumComplex(Complex c1, Complex c2){
    Complex c3;
    c3.setNumber(c1.a + c2.a, c1.b + c2.b);
    return c3;
}

int main(){
    Complex c1, c2, c3;
    float c1_a, c1_b, c2_a, c2_b;
    cin >> c1_a >> c1_b >> c2_a >> c2_b;
    c1.setNumber(c1_a, c1_b);
    c1.printNumber();
    c2.setNumber(c2_a, c2_b);
    c2.printNumber();
    c3 = sumComplex(c1, c2);
    c3.printNumber();

    return 0;
}