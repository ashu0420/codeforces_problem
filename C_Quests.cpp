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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    in(a, n);
    in(b, n);
    ll ans = 0;
    // int i = 0;
    int m = b[0];
    ll sum = 0;
    vector<ll> pre(n);
    vector<int> mx(n);
    pre[0] = a[0];
    mx[0]=b[0];
    for (int i = 1; i< n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
        m=max(m,b[i]);
        mx[i]=m;
    }
// out(mx,n);
    for (int i = 0; i < n && i < k; i++)
    {
    
        sum=pre[i];
        sum+=1LL*(k-1-i)*mx[i];
        ans=max(sum,ans);
    }
    ct(ans);
    // ct(k);
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