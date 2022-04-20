#include <iostream>
using namespace std;
float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int main()
{
    int T;
    cin >> T;
    int i = 0;
    while (i < T)
    {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        float Vfinal, t;
        Vfinal = k1 * k2 * k3 * v;
        t = round(100 / Vfinal);
        cout << t << endl;
        double k = 9.58;
        if (t < k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}