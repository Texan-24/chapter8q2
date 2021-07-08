#include <iostream>

using std::cout;
using std::cin;

float number;

int main() {

  cout << "Input number for Factorial:";
  cin >> number;

   if ((number >=2) && (number <=25))
  ;
   unsigned long long n = number, fact = 1, i;

   for(int i=1; i<=n; i++)

   {fact = fact *= i;
   }
   cout<<"Factorial of "<<n<<" is "<<fact;
   
   return 0;
}