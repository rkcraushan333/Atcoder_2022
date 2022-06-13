#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int x, a, d, n;
    cin >> x >> a >> d >> n;
    int f, l;
    if (d >= 0)
    {
        f = a;
        l = a + (n - 1) * d;
    }
    else
    {
        f = a + (n - 1) * d;
        l = a;
    }
    if (x <= f)
        cout << f - x << endl;
    else if (x >= l)
        cout << x - l;
    else
    {
        int a1 = x - f, a2 = l - x;
        cout << min(a1 % abs(d), a2 % abs(d)) << endl;
    }
}

signed main()
{
    inforkc();
    return 0;
}