#include <iostream>

using namespace std;

int main()
{
   float n,m,value=0,vol,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
      cin>>m;
      value=value+m;
      vol=value/n;
   }
   cout<<vol<<endl;
   return 0;
}
