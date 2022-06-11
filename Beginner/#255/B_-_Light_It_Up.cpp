#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
const int mod = 1e9 + 7;
int fastpow(int a, int b)
{
    if (b == 0)
        return 1;
    int t = fastpow(a, b / 2);
    if (b % 2 == 0)
        return (t * t);
    else
        return (a * t * t);
}
// by inforkc
void inforkc()
{
    int n, k;
    cin >> n >> k;
    double res = 0.0;
    unordered_set<int> v;
    for (int i = 0; i < k; i++)
    {
        int in;
        cin >> in;
        v.insert(in);
    }
    vector<pair<int, int>> v1;
    vector<pair<int, int>> v2;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (v.count(i))
            v1.push_back(make_pair(a, b));
        else
            v2.push_back(make_pair(a, b));
    }
    for (auto i : v2)
    {
        double p = (double)INT_MAX;
        for (auto j : v1)
        {
            double k = 0.0;
            int x = abs(i.first - j.first);
            int y = abs(i.second - j.second);
            k = sqrt((double)x * x + y * y);
            p = min(p, k);
        }
        res = max(res, p);
    }
    cout << fixed << setprecision(15) << res << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    inforkc();
    return 0;
}