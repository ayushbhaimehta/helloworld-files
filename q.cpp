#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World anujjj" << endl;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = 1000;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minx = 999999;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minx = min(minx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minx == 999999)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minx + 1 << endl;
    }
    cout << "exited";
    return 0;
}