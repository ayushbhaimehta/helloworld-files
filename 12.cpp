#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)

    {
        string str;
        int ans = 0;
        cin >> str;

        for (int i = 0; i < str.length() - 1; i++)
        {

            if (str[i] == '0' && str[i + 1] == '1')
            {
                ans++;
            }
        }
        if (str[0] == '1')
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
