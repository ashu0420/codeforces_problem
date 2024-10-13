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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }


using namespace std;

void solve()
{
    // Your code here
    ll n,k;
    cin>>n>>k;
    ll l=k;
    vector<ll> v(n);
    in(v,n);
    sort(v.begin(),v.end());
    vector<ll> p(n+1);
    for(ll i=0;i<n;i++)
    {
        p[i+1]=p[i]+v[i];
    }
    ll i=2*k,j=0;
    ll ans=0;
    for(i;i>=0;i-=2,j++)
    {
        ans=max(p[n-j]-p[i],ans);
    }

    ct(ans);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}