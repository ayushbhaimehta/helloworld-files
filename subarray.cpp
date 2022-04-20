#include <bits/stdc++.h>
using namespace std;

/*int subArray(int arr[], int n)
{
    map<string, int> tap;
    int tempSum = 0;
    string subarray = "";
    // Pick starting point
    for (int i = 0; i < n; i++)
    {
        // Pick ending point
        for (int j = i; j < n; j++)
        {
            tempSum = 0;
            subarray = "";

            for (int k = i; k <= j; k++)
            {
                subarray += arr[k];
                tempSum += arr[k];
            }
            if (tap[subarray])
            {
                tap[subarray] = tap[subarray] + tempSum;
            }
            else
            {
                tap[subarray] = tempSum;
            }
        }
    }
    std::vector<int> value;
    for (auto it = tap.begin(); it != tap.end(); ++it)
    {
        value.push_back(it->second);
    }
    int max = 0;
    for (auto it = value.begin(); it != value.end(); ++it)
    {
        max = (*it, max);
    }

    return max;
   } */

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //cout << subArray(arr, n) << endl;
        map<string, int> tap;
        int tempSum = 0;
        string subarray = "";
        // Pick starting point
        for (int i = 0; i < n; i++)
        {
            // Pick ending point
            for (int j = i; j < n; j++)
            {
                tempSum = 0;
                subarray = "";

                for (int k = i; k <= j; k++)
                {
                    subarray += arr[k];
                    tempSum += arr[k];
                }
                if (tap[subarray])
                {
                    tap[subarray] = tap[subarray] + tempSum;
                }
                else
                {
                    tap[subarray] = tempSum;
                }
            }
        }
        std::vector<int> value;
        for (auto it = tap.begin(); it != tap.end(); ++it)
        {
            value.push_back(it->second);
        }
        cout << *max_element(value.begin(), value.end()) << endl;
    }

    return 0;
}