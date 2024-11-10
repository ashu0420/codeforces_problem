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
    string a, b;
    cin >> a >> b;
    int c1 = 0, c0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(c1==0||c0==0)
        {
            break;
        }
        if(b[i]=='0')
        {
            c1--;
        }
        else
        {
            c0--;
        }
    }
    if(c1+c0>1)
    {
        pn;
    }
    else
    {
        py;
    }
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