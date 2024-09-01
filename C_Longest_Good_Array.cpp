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
    int l, r;
    cin >> l >> r;
    ll count=0;
    // for(int i=1;l<=r;i++)
    // {
    //     count++;
    //     l+=i;
    // }
    ll k=r-l;
    ll ans=8*k;
    ans++;
    // cout<<k;
    ans=sqrt(ans);
    count=ans-1;
    count/=2;
    // count=(-1+sqrt(1+8*k))/2;
    ct(++count);
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