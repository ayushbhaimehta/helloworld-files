#include <bits/stdc++.h>

using namespace std;
long long int Partition(vector<long long int> &v, long long int start, long long int end)
{

    long long int pivot = end;
    long long int j = start;
    for (long long int i = start; i < end; ++i)
    {
        if (v[i] < v[pivot])
        {
            swap(v[i], v[j]);
            ++j;
        }
    }
    swap(v[j], v[pivot]);
    return j;
}

void Quicksort(vector<long long int> &v, long long int start, long long int end)
{

    if (start < end)
    {
        long long int p = Partition(v, start, end);
        Quicksort(v, start, p - 1);
        Quicksort(v, p + 1, end);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int t;
    cin >> t;
    long long int _ = 1;
    while (t--)
    {
        long long int n;
        cin >> n;

        vector<pair<long long int, long long int>> x;
        vector<pair<long long int, long long int>> y;
        multiset<long long int> X;
        multiset<long long int> Y;
        for (long long int i = 0; i < n; i++)
        {
            long long int a, b;
            cin >> a >> b;
            x.push_back({a, b});
            y.push_back({b, a});
            X.insert(a);
            Y.insert(b);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        long long int firstheight = 0;
        long long int secondheight = 0;

        long long int Mingh = LONG_MAX;
        long long int Maxgh = 0;

        long long int ans = LONG_MAX;
        long long int firstwidth = 0;
        long long int secondwidth = 0;

        long long int Mingw = LONG_MAX;
        long long int Maxgw = 0;

        for (long long int i = 0; i < n - 1; i++)
        {
            Mingw = min(Mingw, y[i].second);
            Maxgw = max(Maxgw, y[i].second);
            auto it = X.find(y[i].second);
            X.erase(it);
            firstwidth = *X.rbegin() - *X.begin();
            secondwidth = Maxgw - Mingw;

            long long int tempw = (firstwidth * (y[n - 1].first - y[i + 1].first)) + (secondwidth * (y[i].first - y[0].first));
            ans = min(ans, tempw);
        }
        for (long long int i = 0; i < n - 1; i++)
        {
            Mingh = min(Mingh, x[i].second);
            Maxgh = max(Maxgh, x[i].second);
            auto it = Y.find(x[i].second);
            Y.erase(it);
            firstheight = *Y.rbegin() - *Y.begin();
            secondheight = Maxgh - Mingh;

            long long int temph = (firstheight * (x[n - 1].first - x[i + 1].first)) + (secondheight * (x[i].first - x[0].first));
            ans = min(ans, temph);
        }
        if (ans == LONG_MAX)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}