#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, r, g, b;
        cin >> n >> r >> g >> b;

        if (n > r || n > b)
        {
            if (r > b)
            {
                cout << b << endl;
            }
            else
            {
                cout << r << endl;
            }
        }
        if (n < r && n < b)
        {
            cout << n << endl;
        }
    }
    return 0;
}
