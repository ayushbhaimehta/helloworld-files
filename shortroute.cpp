#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int temp = n;
        vector<int> v;
        v.push_back(n);

        for (int i = 0; i < k - 1; i++)
        {
            int index;
            for (int j = n - 1; j >= 1; j--)
            {
                temp = max(j ^ temp, temp);
                index = j;
            }
            v.push_back(index);
        }
        for (auto i = v.begin(); i != v.end(); ++i)
            cout << *i << " ";
        cout << endl;
    }
}