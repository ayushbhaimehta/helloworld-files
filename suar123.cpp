#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int train[n];
        for (int i = 0; i < n; i++)
        {
            cin >> train[i];
        }
        int city[m];
        for (int i = 0; i < m; i++)
        {
            cin >> city[i];
        }
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            int right = INT_MAX, left = INT_MAX;
            bool l = 0, r = 0;
            int ans;
            if (train[city[i]] == 1 || train[city[i]] == 2)
            {
                ans = 0;
            }
            else
            {
                cout << "value of ans before chcking=" << ans << endl;
                //check right side,kl
                for (int j = city[i] + 1; j <= n; j++)
                {
                    if (train[j] == 2)
                    {
                        right = j - i;
                        r = 1;
                        cout << "value of right=" << right << endl;
                        break;
                    }
                }

                //check left side
                for (int j = city[i] - 1; j >= 1; j--)
                {
                    if (train[j] == 1)
                    {
                        left = i - j;
                        l = 1;
                        cout << "value of left=" << left << endl;
                        break;
                    }
                }
                if (l == 0 && r == 0)
                {
                    ans = -1;
                }
                else
                {
                    ans = min(left, right);
                }
            }
            v.push_back(ans);
        }
        for (auto i = v.begin(); i != v.end(); ++i)
            cout << *i << " ";
        cout << endl;
    }
    return 0;
}