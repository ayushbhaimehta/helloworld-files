#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int arr[n]=a[n];
    for (int i=0;i<n;i++){
        if (a[i] >0){
            arr[n-i-1]=a[i];


        }
    }

    return 0;
}
