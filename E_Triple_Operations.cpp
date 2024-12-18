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

using namespace std;

void solve()
{
    // Your code here
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll temp = l;
    ll k = 0;
    ll curr = 1;
    while (temp > 0)
    {
        temp /= 3;
        k++;
        curr*=3;
    }
    ans += k;
    ll last = l;
    while (curr <= r)
    {
        ans += (curr - (last)) * (k);
        k++;
        last = curr;
        curr *= 3;
    }
    ans += (r - last) * (k);
    ans += k;
    // for (int i = l + 1; i <= r; i++)
    // {
    //     k=(log(i)/ log(3));
    //     ans += (k + 1);

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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}