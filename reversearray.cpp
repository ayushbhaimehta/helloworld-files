#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = arr[n - 1 - i];
    }
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}
