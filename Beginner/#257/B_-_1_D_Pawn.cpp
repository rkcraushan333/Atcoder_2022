#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n, k, q;
    cin >> n >> k >> q;
    bool arr[n + 1] = {0};
    unordered_map<int, int> m;
    for (int i = 1; i <= k; i++)
    {
        int in;
        cin >> in;
        arr[in] = 1;
        m[i] = in;
    }
    for (int i = 1; i <= q; i++)
    {
        int in;
        cin >> in;
        if (m[in] != n)
        {
            if (arr[m[in] + 1] == 0)
            {
                arr[m[in] + 1] = 1;
                arr[m[in]] = 0;
                m[in] += 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i])
            cout << i << " ";
    }
}

signed main()
{
    inforkc();
    return 0;
}