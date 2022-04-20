#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                n = n / 2;
                a++;
            }
            else if (i % 2 != 0)
            {
                n = n / 2;
                b++;
            }
            if (n == 1)
            {
                if (a > b)
                {
                    cout << "Alice" << endl;
                }
                else if (b > a)
                {
                    cout << "Bob" << endl;
                }
                else if (a == 0 && b == 0)
                {
                    cout << "Bob" << endl;
                }
            }
        }
    }
    return 0;
}
