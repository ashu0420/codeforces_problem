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
    int x, y;
    cin >> x >> y;
    ll k = 1073741824;
    if(x==y)
    {
        ct(-1);
        return;
    }
    ct(k-max(x,y));
    // vector<int> xbit, ybit;
    // while (x > 0)
    // {
    //     xbit.push_back(x % 2);
    //     x /= 2;
    // }
    // while (y > 0)
    // {
    //     ybit.push_back(y % 2);
    //     y /= 2;
    // }
    // int r = (xbit.size() - ybit.size());
    // if (xbit.size() > ybit.size())
    // {
    //     for (int i = 0; i < r; i++)
    //     {
    //         ybit.push_back(0);
    //     }
    // }
    // else if (xbit.size() < ybit.size())
    // {
    //     for (int i = 0; i < (-1 * r); i++)
    //     {
    //         xbit.push_back(0);
    //     }
    // }
    // // xbit.push_back(0);
    // // ybit.push_back(0);
    // int f11 = 0, f01 = 0;
    // for (int i = 0; i < xbit.size(); i++)
    // {
    //     if (xbit[i] == 1 && ybit[i] == 1)
    //     {
    //         f11++;
    //     }
    //     if (xbit[i] + ybit[i] == 1)
    //     {
    //         f01++;
    //     }
    // }
    // // if (f11 > f01)
    // // {
    // //     ct(-1);
    // //     return;
    // // }
    // vector<int> ans(ybit.size(), 1);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     if (ybit[i] == 0 && xbit[i] == 0)
    //     {
    //         ans[i] = 0;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // if((f01)%2==0)
    // ans[ans.size() - 1] = 0;
    // ll res = 0;
    // ll k = 1;
    // for (auto i : ans)
    // {
    //     res += k * i;
    //     k *= 2;
    // }
    // ct(res);
    // // reverse(ybit.begin(), ybit.end());
    // // reverse(xbit.begin(), xbit.end());
    // // out(xbit, xbit.size());
    // // out(ybit, ybit.size());
    // // X;
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