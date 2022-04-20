#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, f;
    cin >> n >> f;
    int arr[n];
    int a[f];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < f; j++)
        {
            if (a[j] == arr[i])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
