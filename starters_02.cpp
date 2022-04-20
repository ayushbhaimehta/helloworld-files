#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*char a = 'a';
    char n = 'n';
    char M = 'M';
    char Z = 'Z';
    cout << a - 0 << " " << n - a << endl;
    cout << M - 0 << " " << Z - M << endl;
    */
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string str[k];
        bool flag = 0;

        for (int i = 0; i < k; i++)
        {
            cin >> str[i];
        }
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < str[i].size() + 1; j++)
            {
                if (str[i][j + 1] - str[i][j] > 13 && str[i][j] != '\n' && str[i][j] != ' ')
                {
                    flag = 1;
                    break;
                }
                else if (str[i][j + 1] - str[i][j] < 0 && str[i][j] != '\n' && str[i][j] != ' ')
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}