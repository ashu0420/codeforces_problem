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
    int n;
    cn(n);

    vector<ll> v(n);
    in(v, n);

    if (n % 2 == 0)
    {
        ll ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans = max(ans, v[i + 1] - v[i]);
        }
        ct(ans);
        return;
    }
    ll ans = LONG_LONG_MAX;
    for (int i = 1; i < n ; i++)
    {
        int j;
        ll cans = 0;
        for (j = 0; j < i; j += 2)
        {
            j + 1 < i ? cans = max(cans, (v[j + 1] - v[j])) : 1;
        }
        i+1<n?cans = max(cans, (v[i + 1] - v[i]) / 2):1;
        for (j = i + !(i % 2); j < n - 1; j += 2)
        {
            cans = max(cans, (v[j + 1] - v[j]));
        }
        ans = min(ans, cans);
    }
    if (v[0] != 0)
    {
        ll cans = 1;
        for (int i = 1; i < n; i += 2)
        {
            cans = max(ans, v[i + 1] - v[i]);
        }
        ans = min(cans, ans);
    ct(ans);
    }

    // if (n == 1)
    // {
    //     ct("1");
    //     return;
    // }
    // // if(n==3)
    // // {
    // //     if(v[0]!=0)
    // //     {
    // //         ct(min(v[1]-v[0],v[2]-v[1]));
    // //         return;
    // //     }
    // //     else
    // //     {
    // //         ct(v[1]-v[0]);
    // //     }
    // // }
    // if (n % 2 == 0)
    // {
    //     ll ans = 0;
    //     for (int i = 0; i < n; i += 2)
    //     {
    //         ans = max(ans, v[i + 1] - v[i]);
    //     }
    //     ct(ans);
    //     return;
    // }
    // else
    // {
    //     ll ans = LONG_LONG_MAX;
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         ll cans = 0;
    //         bool flag = 1;
    //         for (int j = 0; j < n - 1;)
    //         {
    //             if (i == j && flag)
    //             {
    //                 cans = max(cans, (v[j + 1] - v[j]) / 2);
    //                 j++;
    //                 flag = 0;
    //                 continue;
    //             }
    //             else if (i == j - 1 && flag)
    //             {
    //                 cans = max(cans, (v[j] - v[j - 1]) / 2);
    //                 flag = 0;
    //                 j++;
    //                 continue;
    //             }
    //             else
    //             {
    //                 cans = max(cans, v[j + 1] - v[j]);
    //                 // ct("hi");
    //                 j += 2;
    //             }
    //             // ct(j);
    //             // ct(cans);
    //         }
    //         ans = min(ans, cans);
    //     }
    //     ct(ans);
    //     return;

    // vector<ll> diff(n - 1);
    // vector<ll> pdiff(n - 1);
    // vector<ll> sdiff(n - 1);
    // for (int i = 0; i < n - 1; i++)
    // {
    //     diff[i] = v[i + 1] - v[i];
    //     pdiff[i] = v[i + 1] - v[i];
    //     sdiff[i] = v[i + 1] - v[i];
    // }
    // ll odd = 0, even = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         even = max(diff[i], even);
    //         pdiff[i] = even;
    //     }
    //     else
    //     {
    //         odd = max(diff[i], odd);
    //         pdiff[i] = odd;
    //     }
    // }
    // odd = diff[1], even = diff[0];
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sdiff[i] = even;
    //         even = max(diff[i], even);
    //     }
    //     else
    //     {
    //         sdiff[i] = odd;
    //         odd = max(diff[i], odd);
    //     }
    // }
    // // out(pdiff,n-1);
    // // out(sdiff,n-1);
    // ll ans = 0;
    // if (v[0] != 0)
    // {
    //     ans = sdiff[1];
    // }
    // for (int i = 2; i + 2 < n - 1; i++)
    // {
    //     ll cans;
    //     if (i % 2 == 0)
    //     {
    //         cans = max({pdiff[i - 2], sdiff[i + 1], diff[i] / 2});
    //         ans = min(cans, ans);
    //     }
    //     else
    //     {
    //         cans = max({ans, pdiff[i - 1], sdiff[i + 2], diff[i] / 2});
    //         ans = min(cans, ans);
    //     }
    // }
    // ans = min(ans, pdiff[n - 2]);
    // ans = min(ans,max({ sdiff[1], diff[0] / 2}));
    // ans = min(ans,max({ pdiff[0], sdiff[3], diff[1] / 2}));
    // ans = min(ans,max({ pdiff[n - 3], diff[n - 2] / 2}));
    // ans = min(ans,max({ pdiff[n - 5], sdiff[n - 2], diff[n - 3] / 2}));
    // ct(ans);
    // return;
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