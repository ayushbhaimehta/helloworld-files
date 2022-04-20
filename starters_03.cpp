#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[k];
        vector<int> my;
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + k);
        int stud = k - m;
        int dis = 0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i] <= stud)
            {
                if (std::find(my.begin(), my.end(), arr[i]) != my.end())
                {
                    continue;
                }
                else
                {
                    my.push_back(arr[i]);
                    //cout << dis << "-dis " << j << "-j" << endl;
                    // cout << arr[i] << " " << dis << endl;
                    dis++;
                }
            }
        }
        cout << dis;

        for (auto it = my.begin(); it != my.end(); ++it)
            cout << ' ' << *it;

        cout << endl;
    }

    return 0;
}