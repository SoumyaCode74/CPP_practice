#include <iostream>

using namespace std;

class Complex;

class ComplexSum{
    public:
        float sumReal(Complex, Complex);
        float sumImaginary(Complex, Complex);
};

class Complex{
        float a;
        float b;

        /* Declaring member functions of another class as friends of this class*/
        // friend float ComplexSum::sumReal(Complex, Complex);       
        // friend float ComplexSum::sumImaginary(Complex, Complex);        
        /* If all member functions of another class are to be treated as friends of this class */
        friend class ComplexSum;

    public:
        void setNumber(float, float);
        void printNumber(void);
};