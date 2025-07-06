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
#define in1(a, n) \
    fr(ll, 1, n + 1) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define out1(a, n)                            \
    fr(ll, 1, n + 1) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
#define vin1(a, n)       \
    vector<ll> a(n + 1); \
    in1(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{

    ll n, k, l, r;
    cin >> n >> l >> r >> k;
    if (n % 2)
    {
        ct(l);
        return;
    }
    else
    {
        // ll x = l;
        // for (ll i = l + 1; i <= r; i++)
        // {
        //     x = x & i;
        // }
        // if (x)
        // {
        //     ct(-1);
        //     return;
        // }
        ll j = l;
        ll tw = 1;
        while (j > 0)
        {

            tw *= 2;
            j /= 2;
        }
        // ct(tw);
        if (tw <= r && n > 2)
        {
            if (n - k >= 2)
            {
                ct(l);
                return;
            }
            else
            {
                ct(tw);
                return;
            }
        }
        else
        {
            ct(-1);
        }
        // if(n-k>=2)
        // {
        //     ct(l);
        //     return;
        // }
        // else
        // {
        //     ct(tw);
        //     return;
        // }
        // if (n % 4 == 0)
        //     for (ll i = l; i <= r; i++)
        //     {
        //         ll j = i;
        //         vector<ll> bin;
        //         ll tw = 1;
        //         while (j > 0)
        //         {

        //             tw *= 2;
        //             bin.push_back((j % 2));
        //             j /= 2;
        //         }

        //         if (tw <= r)
        //         {
        //             if (k <= n / 2)
        //             {
        //                 ct(i);
        //             }
        //             else
        //             {
        //                 ct(tw);
        //             }
        //             return;
        //         }
        //     }
        // ct(-1);
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