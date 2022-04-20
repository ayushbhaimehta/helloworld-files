#include <bits/stdc++.h>

using namespace std;
#define int long long

int Partition(vector<int> &v, int start, int end)
{

    int pivot = end;
    int j = start;
    for (int i = start; i < end; ++i)
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

void Quicksort(vector<int> &v, int start, int end)
{

    if (start < end)
    {
        int p = Partition(v, start, end);
        Quicksort(v, start, p - 1);
        Quicksort(v, p + 1, end);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //declaring vectors and multi set

        vector<pair<int, int>> y;
        vector<pair<int, int>> x;

        //multiset

        multiset<int> Y;
        multiset<int> X;

        //taking inpur for pairs and set
        for (int i = 0; i < n; i++)
        {
            int alpha, beta;
            cin >> alpha >> beta;
            x.push_back({alpha, beta});

            X.insert(alpha);

            y.push_back({beta, alpha});

            Y.insert(beta);
        }

        //sorting
        //Quicksort(v, 0, v.size() - 1);
        //Quicksort(v, 0, v.size() - 1);
        /* multiset<int> s;
  
          s.insert(1);
          s.insert(4);
          s.insert(2);
          s.insert(5);
          s.insert(3);
          s.insert(3);
          s.insert(3);
          s.insert(5);

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
  
    // iterator pointing to
    // position where 2 is
    auto pos = s.find(3);
  
    // prints the set elements
    cout << "\nThe set elements after 3 are: ";
    for (auto it = pos; it != s.end(); it++)
         cout << *it << " ";
              */

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int ans = LONG_MAX;

        int Mingw = LONG_MAX;
        int Maxgw = 0;

        int firstwidth = 0;
        int secondwidth = 0;
        int Mingh = LONG_MAX;
        int Maxgh = 0;

        int firstheight = 0;
        int secondheight = 0;

        for (int i = 0; i < n - 1; i++)
        {
            firstheight = (*Y.rbegin()) - (*Y.begin());
            auto iterator = Y.find(x[i].second);

            Mingh = min(Mingh, x[i].second);
            Maxgh = max(Maxgh, x[i].second);

            secondheight = Maxgh - Mingh;

            int rel_ansh =
                (firstheight * (x[n - 1].first - x[i + 1].first)) + (secondheight * (x[i].first - x[0].first));
            ans = min(ans, rel_ansh);

            Y.erase(iterator);
        }
        for (int i = 0; i < n - 1; i++)
        {
            firstwidth = (*X.rbegin()) - (*X.begin());
            auto iterator = X.find(y[i].second);

            Mingw = min(Mingw, y[i].second);
            Maxgw = max(Maxgw, y[i].second);
            secondwidth = Maxgw - Mingw;

            int rel_answ =
                (firstwidth * (y[n - 1].first - y[i + 1].first)) + (secondwidth * (y[i].first - y[0].first));
            ans = min(ans, rel_answ);

            X.erase(iterator);
        }

        if (ans == LONG_MAX)
            ans = 0;
        cout << ans
             << endl;
    }
    return 0;
}