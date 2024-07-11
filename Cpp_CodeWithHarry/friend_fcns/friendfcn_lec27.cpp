#include "friendfcn_lec27.h"

void Complex::setNumber(float r, float w){
    a = r;
    b = w;
}

void Complex::printNumber(){
    cout << "Complex number: " << a << "+j" << b << endl;
}

float ComplexSum::sumReal(Complex n1, Complex n2){
    return n1.a + n2.a;
}

float ComplexSum::sumImaginary(Complex n1, Complex n2){
    return n1.b + n2.b;
}

int main(){
    Complex c1, c2, c3;
    ComplexSum sum;
    c1.setNumber(4, 5);
    c2.setNumber(6, 7);
    c1.printNumber();
    c2.printNumber();
    c3.setNumber(sum.sumReal(c1, c2), sum.sumImaginary(c1, c2));
    c3.printNumber();

    return 0;
}