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
    fr(ll, 0, n) { cout << a[i] << " "; }cout<<endl;
#define sort(a)  sort(a.begin(),a.end());
#define vin(a,n) vector<ll> a(n); in(a,n);
const  int MOD =1e9+7;

using namespace std;

void solve()
{
    // Your code here
    ll n;
    cn(n);
    vin(v,n);
    for(ll i=0;i<n-1;i++)
    {
        ll temp=min(v[i],v[i+1]);
        v[i]-=temp;
        v[i+1]-=temp;
    }
    for(ll i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            pn;
            return;
        }
    }
    py;
    return;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cout.precision(10);
cout.setf(ios::fixed);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}