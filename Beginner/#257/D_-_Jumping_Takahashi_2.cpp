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
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[i].push_back(a);
        v[i].push_back(b);
        v[i].push_back(c);
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = INT_MAX;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int t = abs(v[i][0] - v[j][0]) + abs(v[i][1] - v[j][1]);
                t = (t + v[i][2] - 1) / v[i][2];
                arr[j] = min(t, arr[j]);
            }
        }
    }
    sort(arr.begin(), arr.end());
    cout << arr[n - 1];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t_e_s_t;
    // cin>>t_e_s_t;
    // while(t_e_s_t--)
    // {
    inforkc();
    // }
    return 0;
}