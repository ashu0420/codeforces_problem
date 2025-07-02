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
    ll n, m;
    cin >> n >> m;
    ll mex = 0;
    for (int i = 0; i < n; i++)
    {
        int nn;

        cn(nn);
        set<ll> s;
        for (int i = 0; i < nn; i++)
        {
            int x;
            cn(x);
            s.insert(x);
        }
        ll cnt = 0;
        for (auto i : s)
        {
            if (i - cnt >= 2)
            {
                mex = max(cnt + 1, mex);
                break;
            }
            cnt++;
        }

        if (*s.rbegin() - cnt == -1)
        {
    
            mex = max(*s.rbegin() + 2, mex);
        }
        else if (*s.rbegin() - cnt == 0)
        {
            mex = max(*s.rbegin() + 1, mex);
        }
        
        // ct(mex);
    }
    // ll ans=0;
    // for(ll i=0;i<=m;i++)
    // {
    //     ans+=max(mex,i);
    // }
    // ct(ans);
    if (m > mex)
    {
        ll ans = m * (m + 1) / 2;
        ans += mex * (mex + 1) / 2;
        ct(ans);
    }
    else
    {
        ct(mex*(m+1));
    }
    
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