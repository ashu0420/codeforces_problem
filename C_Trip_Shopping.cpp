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
    fr(ll, 1, n+1) { cn(a[i]); }
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; } cout << endl;
#define out1(a, n) \
    fr(ll, 1, n+1) { cout << a[i] << " "; } cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a,n) vector<ll> a(n); in(a,n);
#define vin1(a,n) vector<ll> a(n+1); in1(a,n);
const int MOD = 1e9 + 7;

using namespace std;

ll mod_pow(ll x, ll y) {
    ll result = 1;
    x = x % MOD;
    while (y > 0) {
        if (y & 1)
            result = (result * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return result;
}

ll modular_inverse(ll denom) {
    return mod_pow(denom, MOD - 2);
}

void solve() {
    // Your code here
    int n,k;
    cin>>n>>k;
    vin(a,n);
    vin(b,n);
    
    vector<pair<int,int>> vp(n);
    for(int i=0;i<n;i++)
    {
        vp[i].first=min(a[i],b[i]);
        vp[i].second=max(a[i],b[i]);
    }
    srt(vp);
    bool flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(vp[i].second>=vp[i+1].first)
        {
            flag=1;
            break;
        }
    }
    ll ans=0;
    for(auto i:vp)
    {
        ans+=i.second-i.first;
    }
    ll minchange=LONG_LONG_MAX;
    for(int i=0;i<n-1;i++)
    {
        ll nw=vp[i+1].second+vp[i+1].first-vp[i].first-vp[i].second;
        ll curr=vp[i+1].second-vp[i+1].first+vp[i].second-vp[i].first;
        minchange=min(minchange,nw-curr);
    }
    if(flag)
    {
        ct(ans);
    }
    else{
        // ct(minchange);
        ct(ans+minchange);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}