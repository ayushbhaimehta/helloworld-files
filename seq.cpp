#include <bits/stdc++.h>
using namespace std;

int gcd(int a[], int b[])
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    // base case
    if (a == b)
        return a;
    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int main()
{
    long long int t;
    scanf("%d", &t);

    while (t--)
    {
        int k;
        cin >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        int ans = gcd(arr[2], arr[3]);
        cout << ans;
    }

    return 0;
}
