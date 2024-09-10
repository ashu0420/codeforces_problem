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
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    in(a, n);
    in(b, m);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    int k=m-n;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=abs(a[i]-b[m-1-i]);
    }
    ans=max(ans,sum);
    for(int i=0;k+i<m;i++)
    {
        sum-=abs(a[n-1-i]-b[k+i]);
        sum+=abs(a[n-1-i]-b[i]);
        ans=max(ans,sum);
    }
    ct(ans);

    return;
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