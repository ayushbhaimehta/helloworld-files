#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> x;
        vector<pair<int, int>> y;
        multiset<int> X;
        multiset<int> Y;
        int height1 = 0;
        int height2 = 0;
        int h1max = 0;
        int h1min = LONG_MAX;
        int area = LONG_MAX;
        int width1 = 0;
        int width2 = 0;
        int w1max = 0;
        int w1min = LONG_MAX;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            x.push_back({a, b});
            y.push_back({b, a});
            X.insert(a);
            Y.insert(a);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        for (int i = 0; i < n - 1; i++)
        {
            h1max = max(h1max, x[i].second);
            h1min = min(h1min, x[i].second);
            height1 = h1max - h1min;
            auto it = Y.find(x[i].second);
            Y.erase(it);
            height2 = *Y.rbegin() - *Y.begin();
            int newarea = (x[i].first - x[0].first) * height1 + (x[n - 1].first - x[i + 1].first) * height2;
            area = min(area, newarea);
        }
        for (int i = 0; i < n - 1; i++)
        {
            w1max = max(w1max, y[i].second);
            w1min = min(w1min, y[i].second);
            width1 = w1max - w1min;
            auto it = X.find(y[i].second);
            X.erase(it);
            width2 = *X.rbegin() - *X.begin();
            int newarea = (y[i].first - y[0].first) * width1 + (y[n - 1].first - y[i + 1].first) * width2;
            area = min(area, newarea);
        }
        if (area == LONG_MAX)
        {
            area = 0;
        }
        cout << area << endl;
    }

    return 0;
}