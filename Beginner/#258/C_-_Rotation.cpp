#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n, q;
    cin >> n >> q;
    string k;
    cin >> k;
    int i = 0;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            i = (i + (n - b)) % n;
        }
        else
        {
            cout << k[((b - 1) + i) % n] << endl;
        }
    }
}

signed main()
{
    inforkc();
    return 0;
}