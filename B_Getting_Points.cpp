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
    ll n, P, l, t;
    cin >> n >> P >> l >> t;
    ll reqT = P / t;
    P % t ? reqT++ : 1;
    ll avT = n / 7;
    n % 7 ? avT++ : 1;
    ll ans = n;
    ll T = min(reqT, avT);
    ll d = T / 2;
    T % 2 ? d++ : 1;
    ll cS = T * t + d * l;
    if (cS < P)
    {
        ll diff = P - cS;
        d += (diff / l);
        diff % l ? d++ : 1;
        ct(n - d);
        return;
    }
    else
    {
        ll rd = d;
        ll ld = P / (2 * t + l);
        ll csx = ld * (2 * t + l);
        // Formula Approach
        // if (P > csx)
        // {
        //     ld++;
        // }
        // ct(n - ld);
        // Binary approach
        ll cd = (rd + ld) / 2;
        while (rd - ld > 1)
        {
            cd = (rd + ld) / 2;
            ll csx = (2 * t);
            csx += l;
            csx *= 1LL * cd;

            if (csx < P)
            {
                ld = cd;
            }
            else
            {
                rd = cd;
            }
        }
        ct(n - rd);
    }

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