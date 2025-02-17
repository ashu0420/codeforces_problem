// #include <bits/stdc++.h>
// #define ll long long
// #define li long
// #define cn(n) cin >> n
// #define py cout << "YES" << endl
// #define pn cout << "NO" << endl
// #define ct(c) cout << c << endl
// #define fr(dt, a, b) for (dt i = a; i < b; i++)
// #define in(a, n) \
//     fr(ll, 0, n) { cn(a[i]); }
// #define out(a, n)                         \
//     fr(ll, 0, n) { cout << a[i] << " "; } \
//     cout << endl;
// #define X ct('X')
// #define sort(a) sort(a.begin(), a.end());
// #define vin(a, n)    \
//     vector<ll> a(n); \
//     in(a, n);
// const int MOD = 1e9 + 7;

// using namespace std;

// void solve()
// {
//     // Your code here
//     ll n;
//     cn(n);
//     vector<ll> mp(200005, 0);
//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         mp[v[i]]++;
//     }
//     // if (n == 1)
//     // {
//     //     ct("1 1");
//     //     return;
//     // }
//     ll ans = 0;
//     ll l, r;
//     ll temp = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         if (mp[v[i]] == 1)
//         {
//             temp++;
//         }
//         else
//         {
//             if (ans < temp)
//             {
//                 r = i;
//                 ans = temp;
//                 temp = 0;
//             }
//         }
//     }
//     // ct(ans);
//     if (temp > ans)
//     {
//         r = n;
//         ans = temp;
//     }
//     if (ans > 0)
//     {
//         cout << r - ans + 1 << " " << r << endl;
//     }
//     else
//     {
//         ct(0);
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     cout.precision(10);
//     cout.setf(ios::fixed);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
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
    ll n;
    cn(n);
    map<ll, ll> mp;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    // if (n == 1)
    // {
    //     ct("1 1");
    //     return;
    // }
    ll ans = 0;
    ll l, r;
    ll temp = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mp[v[i]] == 1)
        {
            temp++;
        }
        else
        {
            if (ans < temp)
            {
                r = i;
                ans = temp;
            }
            temp = 0;
        }
        // ct(temp);
    }
    // ct(ans);
    if (temp > ans)
    {
        r = n;
        ans = temp;
    }
    // ct(ans);
    // ct(r);
    if (ans > 0)
    {
        cout << r - ans + 1 << " " << r << endl;
    }
    else
    {
        ct(0);
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