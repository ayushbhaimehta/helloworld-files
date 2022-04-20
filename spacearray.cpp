#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        selectionSort(arr, n);
        float fplayer = 0;
        float splay = 0.5;
        int ans;

        for (int k = 0; k < n; k++)
        {
            cout << k << endl;
            if (arr[k] == k + 1)
            {
                ans = max(fplayer, splay);
            }
            for (int f = 0; f < k; f++)
            {
                if (arr[k] < k + 1)
                {
                    arr[k]++;
                    if (f % 2 == 0)
                    {
                        fplayer++;
                    }
                    if (f % 2 != 0)
                    {
                        splay++;
                    }
                }
            }
            if (arr[k] > k + 1)
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << fplayer << endl;
        cout << splay << endl;

        if (ans == fplayer)
        {
            cout << "first" << endl;
        }
        else
        {
            cout << "second" << endl;
        }
    }
    return 0;
}
