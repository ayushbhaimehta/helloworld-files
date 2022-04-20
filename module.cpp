#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr1[n];
        int arr2[n];
        for (int i = 1; i <= n; i++)
        {
            arr1[i] = m % i;
            for (int j = 1; j <= n; j += i)
            {
                arr2[i] = arr1[i] % j;
            }
        }
        int arr3[n];
        int arr4[n];
        for (int i = 1; i <= n; i++)
        {
            arr3[i] = m % i;
            for (int j = 1; j <= i; j++)
            {
                arr4[i] = arr3[i] % j;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] == arr4[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}