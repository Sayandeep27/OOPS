#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }

    // Binary + operator overloading
    Complex operator + (const Complex &obj) {
       
        Complex res(0,0);
        
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    // Unary - operator overloading
    Complex operator - () {
      
        Complex res(0,0);
        res.real = -real;
        res.imag = -imag;
        return res;
    }
};

int main() {
   
    Complex c1(3, 4);
    Complex c2(1,2);
    
    Complex c3=c1+c2;  // binary operation
    
    cout<<c3.real<<" "<<c3.imag<<endl;
    
    
    Complex c4 = -c1;   // uniary operation
    
    cout<<c4.real<<" "<<c4.imag<<endl;
    
  
    return 0;
}
