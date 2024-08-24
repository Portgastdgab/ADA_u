#include <iostream>
using namespace std;

float Addition(float a, float b)
{
  return a+b;
}

float Subtraction(float a, float b)
{
  return a-b;
}

float Multiplication(float a, float b)
{
  return a*b;
}

float Division(float a, float b)
{
  if (b != 0)
  {
    return a/b;
  } 
    cout<<"error cannot divide by 0\n";
    return 0;
}

int main()
{
    typedef float (*lpfnOperation)(float, float);
    lpfnOperation vpf[4] = {&::Addition, &::Subtraction,
    &::Multiplication, &::Division};
  
    float a, b, c; int opt;
  cout<<"enter the operands: ";
    cin >> a >> b;
    cout<<"--------------------------\n"
        <<"0-Addition\n1-Subtraction\n2-Multiplication\n3-Division\n"
        <<"select an opcion: ";
    cin >> opt;
    c = (*vpf[opt])(a, b);
    cout<<"result: "<<c<<endl;

  return 0;
}