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
    int n, r;
    cin >> n >> r;
    vector<int> v(n);
    in(v, n);
    int hap = 0;
    int rem = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        rem += v[i] % 2;
        hap += v[i] - v[i] % 2;
        count += v[i] / 2;
    }
    int ans = hap ;
    int rs=r-count;
    // ct(rs);
    if(rem>rs)
    {
        ans+=(2*rs-rem);
    }
    else
    {
        ans+=rem;
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