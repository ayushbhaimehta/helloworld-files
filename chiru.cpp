#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = 8;
    if (n < t)
    {
        cout << "go higher" << endl;
    }
    else if (n > t)
    {
        cout << "go lower" << endl;
    }
    else if (n == t)
    {
        cout << "correct answer" << endl;
    }
    return 0;
}