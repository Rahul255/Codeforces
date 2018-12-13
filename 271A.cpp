#include <iostream>

using namespace std;

int main()
{
   int n,i,j,k,l;
   cin>>n;
   while(true)
   {
       n=n+1;
       i=n/1000;
       j=n/100%10;
       k=n/10%10;
       l=n%10;\
       if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
       {
           break;
           
       }
   }
   cout<<n<<endl;
   return 0;
}
