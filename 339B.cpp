
#include <iostream>
using namespace std;
int main()
{
    int n, m,value;
    cin>>n>>m;
    int count=0;
    int pos = 1; 
    for(int i=0;i!=m;i++)
    {
        cin>>value;
        if (value<pos)
        {
            count=count+(n-pos+value);
        }
        else
        {
            count=count+(value-pos);
        }
        pos=value;
    }
    cout<<count;
    return 0;
}
