#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid + 1;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
int last(int arr[], int low, int high, int x, int n)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid + 1;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}
int count_occ(int arr[], int low, int high, int x, int n)
{
    if (first(arr, low, high, x, n) == -1)
    {
        return 0;
    }
    else
    {
        return (last(arr, low, high, x, n) - first(arr, low, high, x, n) + 1);
    }
}

int main()
{
    int n, x, l, h;
    cin >> n >> x;
    l = 0;
    h = n - 1;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << first(a, l, h, x, n) << endl;
    cout << last(a, l, h, x, n) << endl;
    cout << count_occ(a, l, h, x, n) << endl;

    return 0;
}