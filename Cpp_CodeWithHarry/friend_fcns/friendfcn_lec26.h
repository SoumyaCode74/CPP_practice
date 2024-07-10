#include <iostream>

using namespace std;

class Complex{
        float a;
        float b;
        /*
            * the following function is not a method of the class
            * yet the function can "use" the private members of the class ("use" means get or set the members)
        */
        friend Complex sumComplex(Complex, Complex);        
    public:
        void setNumber(float, float);
        void printNumber(void);
};

Complex sumComplex(Complex, Complex);