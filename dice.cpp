#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int a = 0, b = 0;
        if (n == 1)
        {
            cout << 20 << endl;
        }
        if (n == 2)
        {
            cout << 40 << endl;
        }
        if (n == 3)
        {
            cout << 54 << endl;
        }
        if (n == 4)
        {
            cout << 68 << endl;
        }
        else if (n > 4)
        {
            a++;
            b++;
            int count = 0;
            count = n - 2;
            a += count;
            int sum;
            sum = b * 20 + (a - 1) * 14 + 20;
            cout << sum << endl;
        }
    }
    return 0;
}
