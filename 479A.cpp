#include <iostream>

using namespace std;

int main()
{
   int a,b,c,sum;
   cin>>a;
   cin>>b;
   cin>>c;
   sum= max((a + b + c), max((a * (b + c)), max((a*b + c), max(a + b * c, max(a * b * c, (a + b)*c)))));
   cout<<sum;
   
   return 0;
}   
