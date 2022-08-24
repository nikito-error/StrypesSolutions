#include<stdio.h>
double radians(double degrees)  // converts degrees to radians
{
    double radians;
    double const pi = 3.14159265358979323846;
    radians = (pi/180)*degrees;
    return radians;
}

double factorial(int x)  //calculates the factorial
{
    double fact = 1;
    for(; x >= 1 ; x--)
    {
        fact = x * fact;
    }
    return fact;
}

double power(double x,double n)  //calculates the power of x
{
    double output = 1;
    while(n>0)
    {
         output =( x*output);
         n--;
    }
    return output;
}

float sin(double radians)  //value of sine by Taylors series
{
   double a,b,c;
   float result = 0;
   for(int y=0 ; y!=9 ; y++)
   {
      a=  power(-1,y);
      b=  power(radians,(2*y)+1);
      c=  factorial((2*y)+1);
      result = result+ (a*b)/c;
   }
   return result;
}

double n,output;

int main()
{
    printf("Enter the value of x:\n");
    scanf("%lf",&n);

    n = radians(n);

    output = sin(n);

    printf("Sine of the given value is: %.2lf\n",output);
    return 0;
}