  
#include <iostream>
using namespace std;

int main()
{
    int n, count=1, result=1;
    cin >> n;
    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (i > 0)
            if (s[i] >= s[i - 1])
            {
                count++;
                result = max(result, count);
            }
            else
                count = 1;
    }

    cout << result << endl;
    return 0;
}
