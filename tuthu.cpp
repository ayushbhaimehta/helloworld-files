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
        long long int D, d, p, q; // creating 4 variables
        cin >> D >> d >> p >> q;  // taking input

        long long int ans = 0; // initializing ans with 0

        long long int n_o_t = D / d; // no of times (

        long long int n = n_o_t - 1; // for all days except remm

        long long int rem = D % d;

        ans = (d) * (((n_o_t)*p) + q * ((n * (n + 1)) / 2));

        ans += (rem) * (p + (q * n_o_t));
        cout << ans << "\n";
    }
}