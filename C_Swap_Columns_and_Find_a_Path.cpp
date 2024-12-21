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
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    ll n;
    cn(n);
    vector<pair<ll, ll>> vp(n);
    for (ll i = 0; i < n; i++)
    {
        cn(vp[i].first);
    }
    for (ll i = 0; i < n; i++)
    {
        cn(vp[i].second);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += max(vp[i].first, vp[i].second);
    }
    ll fans = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ll temp = ans + min(vp[i].first, vp[i].second);
        fans=max(fans,temp);
    }
    // ll mid = LONG_LONG_MIN;
    // ll mind = -1;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (vp[i].first + vp[i].second > mid)
    //     {
    //         mid = vp[i].first + vp[i].second;
    //         // mind = i;
    //     }
    // }
    // vector<pair<ll, ll>> v;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (vp[i].first + vp[i].second == mid)
    //     {
    //         v.push_back(vp[i]);
    //     }
    // }
    // sort(v);
    // // ct(mid);
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     cout<<v[i].first<<" "<<v[i].second;
    // // }
    // // cout<<endl;
    // pair<ll, ll> p = v.back();
    // for (ll i = 0; i < n; i++)
    // {
    //     if (vp[i] == p)
    //     {
    //         mind = i;
    //         break;
    //     }
    // }
    // ll ans=mid;
    // for (ll i = 0; i < n; i++)
    // {
    //     if(i==mind)
    //     {
    //         continue;;
    //     }
    //     ans+=max(vp[i].first,vp[i].second);
    // }
    ct(fans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}