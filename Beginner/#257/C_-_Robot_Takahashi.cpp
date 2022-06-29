#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> ad;
    vector<int> ch;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (s[i] == '0')
            ch.push_back(k);
        else
            ad.push_back(k);
    }
    if (ad.empty() || ch.empty())
    {
        cout << n;
        return;
    }
    sort(ad.begin(), ad.end());
    sort(ch.begin(), ch.end());
    int res = 0;
    for (int i = 0; i < ad.size(); i++)
    {
        int p = ad[i];
        int in = lower_bound(ch.begin(), ch.end(), p) - ch.begin();
        in += (ad.size() - i);
        res = max(res, in);
    }
    cout << res;
}

signed main()
{
    inforkc();
    return 0;
}