#include <iostream>

using namespace std;

int main()
{
  int n,l,a[10000],i,count=0,count1=0,value=0;
  cin>>n>>l;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
      if(a[i]>l)
      {
          count=count+2;
      }
      if(a[i]<=l)
      {
          count1=count1+1;
      }
  }
  value=value+count+count1;
   cout<<value;
   return 0;
}
