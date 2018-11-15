#include <iostream>

using namespace std;

int main()
{
   int n,a[100],c=0,d,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
       if(a[i]!=a[i+1])
       {
           c++;
       }
      
   }
   cout<<c;
   return 0;
}
