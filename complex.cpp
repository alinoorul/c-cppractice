#include <iostream> 

using namespace std;

class complex_number
{
   public :
      int real, imag;
   complex_number add(complex_number num2)
   {
      complex_number sum;
      sum.real = real + num2.real;
      sum.imag = imag + num2.imag;
      return sum;
   }
   void printc()
   {
      if ( imag >= 0 )
         cout << "Sum of two complex numbers = " << real << " + " << imag << "i\n`";
      else
         cout << "Sum of two complex numbers = " << real << " - " << imag << "i\n";
   }
   void prod(complex_number c2)
   {
      real=(real*c2.real) - (imag*c2.imag);
      imag=(real*c2.imag) + (imag+c2.real);
   }
};

int main()
{
   complex_number num1, num2;

   //getting the value of first complex number from user
   cout << "Enter real and imaginary parts of first complex number:"<<endl; 
   cin >> num1.real >> num1.imag;

   //getting the value of second complex number from user
   cout << "Enter real and imaginary parts of second complex number:"<<endl; 
   cin >> num2.real >> num2.imag;

   complex_number sum=num1.add(num2);
   num1.prod(num2);

   sum.printc();
   num1.printc();

   return 0;
}