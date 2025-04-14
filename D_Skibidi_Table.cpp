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
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    int q;
    cn(q);
    while (q--)
    {
        string s;
        cn(s);
        if (s == "->")
        {
            int x, y;
            cin >> x >> y;
            ll k = 1;
            ll ans = 0;

            while (x > 2 || y > 2)
            {
                k = 1;
                while (k < max(x, y))
                {
                    k *= 2;
                }
                // sqrt(k);
                k /= 2;
                ans += (k * k);
                if (x <= k && y > k)
                {
                    ans += 2 * (k * k);
                }
                else if (x > k && y <=k)
                {
                    ans += (k * k);
                }
                if (x > k)
                {
                    x -= k;
                }
                if (y > k)
                {
                    y -= k;
                }
            }
            if (x == 1 && y == 1)
            {
                ans++;
            }
            else if (x == 2 && y == 2)
            {
                ans += 2;
            }
            else if (y == 2 && x == 1)
            {
                ans += 4;
            }
            else
            {
                ans += 3;
            }
            ct(ans);
        }
        else
        {
            ll d;
            cn(d);
            ll x = 1, y = 1;

            ll tot = pow(2, n) * pow(2, n);
            ll sz = pow(2, n );
            while (tot > 0)
            {
                // ct(tot);
                // ct(sz);
                if (d > 3 * tot)
                {
                    x += sz;
                    d -= 3 * tot;
                }
                else if (d <= 3 * tot && d > 2 * tot)
                {
                    y += sz;
                    d -= 2 * tot;
                }
                else if (d > tot && d <= 2 * tot)
                {
                    x += sz;
                    y += sz;
                    d -= tot;
                }
                tot /= 4;
                sz /= 2;
            }
            // while (d > 4)
            // {
            //     int k = 2;
            //     while (d > k)
            //     {
            //         k = k * k;
            //     }

            //     int l = sqrt(k);
            //     k = sqrt(l);

            //     if (d > 3 * l)
            //     {
            //         y += k;
            //         d -= 3 * l;
            //     }
            //     else if (d > 2 * l && d <= 3 * l)
            //     {
            //         x += k;
            //         d -= 2 * l;
            //     }
            //     else if (d > l)
            //     {
            //         x += k;
            //         y += k;
            //     }
            // }
            // if (d == 4)
            // {
            //     x += 1;
            //     y += 2;
            // }
            // else if (d == 3)
            // {
            //     x += 2;
            //     y += 1;
            // }
            // else if (d == 2)
            // {
            //     x += 2;
            //     y += 2;
            // }
            // else
            // {
            //     x++;
            //     y++;
            // }
            cout << y << " " << x << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}