#include <bits/stdc++.h>
using namespace std;

int maxXorSum(int n, int k)
{
    // If k is 1 then maximum
    // possible sum is n
    if (k == 1)
        return n;

    // Finding number greater than
    // or equal to n with most significant
    // bit same as n. For example, if n is
    // 4, result is 7. If n is 5 or 6, result
    // is 7
    int res = 1;
    while (res <= n)
        res <<= 1;

    // Return res - 1 which denotes
    // a number with all bits set to 1
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
        int ans = n;
        for (int i = k; i > 0; i++)
        {
            for (int j = 0; j < n; j++)
            {
            }
        }
        cout << maxXorSum(n, k) << endl;
    }
    return 0;
}