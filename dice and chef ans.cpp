#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int s = 0;
        s = (n / 4) * 44;
        int r = n % 4;
        if (n >= 4)
        {
            if (r == 0)
                s = s + 16;
            if (r == 1)
                s = s + 32;
            if (r == 2)
                s = s + 44;
            if (r == 3)
                s = s + 55;
            cout << s << endl;
        }
        else
        {
            int rs;
            if (r == 1)
                rs = 20;
            if (r == 2)
                rs = 36;
            if (r == 3)
                rs = 51;
            cout << rs << endl;
        }
    }
    return 0;
}
