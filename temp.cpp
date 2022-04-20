#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // your code goes here
    int a[200005];
    int t, n, flag_break;
    long long int diff = 0;

    cin >> t;
    for (int m = 0; m < t; m++)
    {
        cin >> n;
        diff = 0;
        flag_break = 0;
        for (int k = 0; k < n; k++)
        {
            cin >> a[k];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] > i + 1)
            {
                flag_break = 1;
                break;
            }
            if (a[i] <= i + 1)
            {

                diff += ((i + 1) - a[i]);
            }
        }
        if (flag_break == 1)
            cout << "Second" << endl;
        else
        {
            if (diff % 2 == 0)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
    }
    return 0;
}