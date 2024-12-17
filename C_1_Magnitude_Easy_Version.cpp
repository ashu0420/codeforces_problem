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
// ll sum = 0;
// int n;

// void add(ll c, int i, vector<ll> v)
// {
//     if (i == n)
//     {
//         sum = max(sum, c);
//         return;
//     }
//     c += v[i];
//     if (c < 0)
//         add(abs(c), i + 1, v);
//     add(c, i + 1, v);
// }
void solve()
{
    // Your code here
    int n;
    cin >> n;
    vector<ll> v(n);
    in(v, n);
    ll sum=0;
    vector<ll> suff(n+1);
    suff[n]=0;
    ll tot=0;
    for(int i=n-1;i>=0;i--)
    {
        tot+=v[i];
        suff[i]=tot;
    }
    ll temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=v[i];
        sum=max(sum,abs(temp)+suff[i+1]);
    }
    // ll c = 0;
    // add(c, 0, v);
    ct(sum);
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
        // sum=0;
        solve();
    }
    return 0;
}