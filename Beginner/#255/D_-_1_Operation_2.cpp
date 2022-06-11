#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    s[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        s[i] = v[i] + s[i - 1];
    }
    int x;
    while (q--)
    {
        cin >> x;
        int res = 0;
        if (x <= s[0])
        {
            res = s[n - 1] - x * n;
        }
        else if (x >= s[n - 1])
        {
            res = x * n - s[n - 1];
        }
        else
        {
            int l = upper_bound(v.begin(), v.end(), x) - v.begin();
            int a = s[l - 1];
            int b = s[n - 1] - s[l - 1];
            res += (l * x) - a;
            res += b - ((n - l) * x);
        }
        cout
            << res << endl;
    }
}

signed main()
{
    inforkc();
    return 0;
}