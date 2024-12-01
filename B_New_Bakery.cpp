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

using namespace std;

void solve()
{
    // Your code here
    ll n,a,b;
    cin>>n>>a>>b;
    ll k=b-a+1;
    if(k<0)
    {
        k=0;
    }
    else if(k>n)
    {
        k=n;
    }
    ll ans=(b+1)*k-((k*(k+1))/2)+(n-k)*a;
    ct(ans);
    return;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cout.precision(10);
cout.setf(ios::fixed);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}