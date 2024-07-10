#include <iostream>

using namespace std;

class Complex{
        float a;
        float b;
    public:
        void setNumber(float, float);
        void printNumber(void);
        /*
            * the following function is not a method of the class
            * yet the function can "use" the private members of the class ("use" means get or set the members)
        */
        friend Complex sumComplex(Complex, Complex);
};

Complex sumComplex(Complex, Complex);