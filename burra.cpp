#include <bits/stdc++.h>
using namespace std;

int maxXorSum(int n, int k)
{
    if (k == 1)
        return n;

    int res = 1;
    while (res <= n)
        res <<= 1;

    return res - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        //int maxvalue = maxXorSum(n, k);
        //cout << maxvalue << endl;
        // cout << maxXorSum(n, k) << endl;
        int ans = 0;
        vector<int> v;
        vector<int> result;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        for (int i = 0; i < k; i++)
        {
            for (int j = *v.end(); j >= *v.begin(); j--)
            {
                if (j == n)
                {
                    ans += j;
                }
                else
                {
                    int temp = ans;
                }
            }
        }
    }

    return 0;
}