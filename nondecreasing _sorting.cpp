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
        float fplay = 0;
        float splay = 0.5;
        int ans;
        for (int k = 0; k < n; k++)
        {

            if (arr[k] == k + 1)
            {
                ans = max(fplay, splay);
            }
            else if (arr[k] < k + 1)
            {
                if (k == 0 || k % 2 == 0)
                {
                    fplay++;
                }
                else if (k % 2 != 0)
                {
                    splay++;
                }
            }
            else if (arr[k] > k + 1)
            {
                ans = splay;
            }
        }
        if (ans == fplay)
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