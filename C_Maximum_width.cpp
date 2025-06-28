#include <bits/stdc++.h>
#define ll long long
#define li long
#define cn(n) cin >> n
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ct(c) cout << c << endl
#define fr(dt, a, b) for (dt i = a; i < b; i++)
#define in(a, n) \
    fr(ll, 0, n) { cn(a[i]); }
#define in1(a, n) \
    fr(ll, 1, n + 1) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define out1(a, n)                            \
    fr(ll, 1, n + 1) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
#define vin1(a, n)       \
    vector<ll> a(n + 1); \
    in1(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int m, n;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<int> pre(m), suff(m);
    int i = 0;
    int j = 0;

    while (j < m)
    {
        if (s[i] == t[j])
        {
            pre[j] = i;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
     i = n - 1;
    j = m - 1;
    while (j >= 0)
    {
        if (s[i] == t[j])
        {
            suff[j] = i;
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    int ans=0;
    for(int i=0;i<m-1;i++)
    {
        ans=max(ans,suff[i+1]-pre[i]);
    }
    // out(pre,m);
    // out(suff,m);
    ct(ans);
    // vector<pair<int, int>> vp(26);
    // vector<int> vis(26, 0);
    // for (auto i : vp)
    // {
    //     i.first = n;
    //     i.second = -1;
    // }
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     // vp[s[i] - 'a'].first = min(i, vp[s[i] - 'a'].first);
    //     vis[s[i] - 'a'] = 1;
    //     vp[s[i] - 'a'].first = i;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     // vp[s[i] - 'a'].first = min(i, vp[s[i] - 'a'].first);
    //     vp[s[i] - 'a'].second = i;
    // }
    // int ans = 0;
    // for (int i = 0; i < m - 1; i++)
    // {
    //     if (vis[t[i + 1] - 'a'] == 1 && vis[t[i] - 'a'] == 1)
    //     {
    //         int k = vp[t[i + 1] - 'a'].second - vp[t[i] - 'a'].first;
    //         ans = max(ans, k);
    //     }
    // }
    // 
    // for(int i=0;i<26;i++)
    // cout<<vp[i].first<<" "<<vp[i].second<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}