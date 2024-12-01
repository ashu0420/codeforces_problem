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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        v[i] = i;
    }
    if (k % 2 == 1)
    {
        pn;
        return;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        if (k == 0)
        {
            break;
        }
        if (k > 2 * (n - ((i - 1) * 2 + 1)))
        {
            swap(v[i], v[n - i + 1]);
            k -= 2 * (n - ((i - 1) * 2 + 1));
        }
        else
        {
            swap(v[i], v[i + (k / 2)]);
            k = 0;
        }
    }
    if(k!=0)
    {
        pn;
        return;
    }
    else
    {
        py;
        for(int i=1;i<n+1;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    // if (n % 2 == 0)
    // {
    //     ll sum = 2 * (n / 2) * (n / 2);
    //     if (k > sum)
    //     {
    //         pn;
    //         return;
    //     }
    // }
    // else
    // {
    //     ll sum = 2*((n + 2) * n) / 4;
    //     if (k > sum)
    //     {
    //         pn;
    //         return;
    //     }
    // }
    // ll f = k / 2;
    // for(ll i=1;i<=n/2;i++)
    // {
    //     if(f>n-i-i+1)
    //     {
    //         swap(v[i],v[n-i+1]);
    //         f-=(n-i-i+1);
    //     }
    //     else
    //     {
    //         swap(v[i],v[i+f]);
    //         f=0;
    //         break;
    //     }
    // }
    // py;
    // for(ll i=1;i<=n;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
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