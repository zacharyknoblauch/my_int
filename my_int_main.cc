// my_int_main.cc
// Zachry Knoblauch
// 23/April/2019
// main function using the class my_int

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "my_int.h"

using namespace std;

//*********************************************************
// Function: is_prime
// Purpose:  object num contains a valid positive value
//           returns true if num is prime; otherwise
//           returns false
// Params:   num  - the value to be checked for prime
// Calls:    sqrt
// Uses:     cmath
//*********************************************************
bool is_prime(const my_int& num);

int main()
{
  my_int value1;

  //value1.input(cin);

  //value1.output(cout);
  int num, num2 = 0;
  cout << "Enter two numbers: ";
  cin >> num;
  cin >> num2;
  my_int i1(num);
  my_int i2(num2);
  if (i1 > i2) {//if one is greater than two
    cout << i1.get_int() << " is greater than " << i2.get_int() << endl;
  }
  else{//if two is greater than one
    cout << i1.get_int() << " is less than " << i2.get_int() << endl;
  }

//  if (is_prime(value1))
//    cout<<"  is a prime number  \n";
//  else
//   cout<<" is not a prime number \n";

  return 0;
}

bool is_prime(const my_int& num)
{
  double limit;
  int n;      //divisor
  bool prime= true;

  limit = sqrt(static_cast<double>(num.get_int()));

  n = 2;

  while (n <= limit && prime)
  {
    if (num.get_int() % n == 0)
     prime = false;
    else
     n++;
   }
   return prime;
}
