#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        char S[N];
        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }
        bool check = 0;
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '*')
            {
                count++;
                if (count == K)
                {
                    check = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (S[i] != '*')
            {
                count = 0;
            }
        }
        if (check = 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
