#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int r = 0;
    int c = n - 1;
    bool flag = 0;
    while (r < m && c >= 0)
    {
        if (arr[r][c] == target)
        {
            flag = 1;
        }
        if (arr[r][c] > target)
        {
            c--;
        }
        else if (arr[r][c] < target)
        {
            r++;
        }
    }
    if (flag == 1)
    {
        cout << "found\n";
    }
    else
    {
        cout << "not found\n";
    }

    return 0;
}
