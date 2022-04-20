#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, edheight, duck, jump, l, passed = 0;
        cin >> b >> edheight >> duck >> jump >> l;
        int type[b], brh[b];

        for (int i = 0; i < b; i++)
        {
            cin >> type[i] >> brh[i];
        }
        for (int i = 0; i < b && l > 0; i++)
        {
            if (type[i] == 1 && brh[i] >= edheight - duck)
            {
                passed++;
            }
            else if (type[i] == 2 && brh[i] <= jump)
            {
                passed++;
            }
            else
            {

                l--;
                passed += l > 0;
            }
        }
        cout << passed << endl;
    }
    return 0;
}