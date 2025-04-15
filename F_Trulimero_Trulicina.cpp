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
    ll n, m, k;
    cin >> n >> m >> k;
    if (m % k == 0)
    {
        vector<int> v(m);
        // if (m == k)
        // {
           
            ll cnt = 1;
            for (ll j = 0; j < m; j++)
            {
                cout << cnt << " ";
                v[j] = cnt;
                if (cnt == k)
                {
                    cnt = 0;
                }
                cnt++;
            }
            cout << endl;
            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (v[j] == k)
                    {
                        cout << "1 ";
                        v[j] = 1;
                    }
                    else
                    {
                        cout << ++v[j] << " ";
                    }
                }
                cout << endl;
            }
            return;
        // }
        // for (ll i = 0; i < n; i++)
        // {
        //     if (i % 2 == 0)
        //     {
        //         ll cnt = 1;
        //         for (ll j = 0; j < m; j++)
        //         {
        //             cout << cnt << " ";
        //             if (cnt == k)
        //             {
        //                 cnt = 0;
        //             }
        //             cnt++;
        //         }
        //     }
        //     else
        //     {
        //         ll cnt = k;
        //         for (ll j = 0; j < m; j++)
        //         {
        //             cout << cnt << " ";
        //             if (cnt == 1)
        //             {
        //                 cnt = k + 1;
        //             }
        //             cnt--;
        //         }
        //     }
        //     cout << endl;
        // }
    }
    else
    {
        ll cnt = 1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << cnt << " ";
                if (cnt == k)
                {
                    cnt = 0;
                }
                cnt++;
            }
            cout << endl;
        }
        // cout<<endl;
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