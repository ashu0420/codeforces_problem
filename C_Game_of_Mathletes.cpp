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
    ll n, k;
    cin >> n >> k;
    vin(v, n);
    sort(v);
    ll j=n-1;
    ll i=0;
    ll ans = 0;
    while(j>i)
    {
        if(v[i]+v[j]==k)  
        {
            i++;
            j--;
            ans++;
        } 
        else if(v[i]+v[j]<k)
        {
            i++;
        }
        else
        {
            j--;
        }

    }
    // unordered_map<int, int> mp;
    // for (ll i = 0; i < n; i++)
    // {
    //     mp[v[i]]++;
    // }
    // for (ll i = 0; i < n; i++)
    // {
    //     if (mp[k - v[i]] > 0 && mp[v[i]] > 0)
    //     {
    //         ans++;
    //         mp[v[i]]--;
    //         mp[k - v[i]]--;
    //     }
    // }
    ct(ans);
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