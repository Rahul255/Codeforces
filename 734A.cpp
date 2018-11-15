#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   int n,i,a=0,b=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>s;
       if(s[i]=='D')
       {
           b++;
       }
       else if(s[i]=='A')
       {
           a++;
       }
   }
   if(a<b)
   {
       cout<<"Danik"<<endl;
   }
   else if(a>b)
   {
       cout<<"Anton"<<endl;
   }
   else
   {
       cout<<"Friendship"<<endl;
   }
   return 0;
}
