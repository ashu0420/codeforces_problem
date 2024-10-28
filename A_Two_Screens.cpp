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
    string s, q;
    cin >> s >> q;
    int k1, k2;
    k1 = s.size();
    k2 = q.size();

    // if (k1 <= k2 && s == q.substr(0, k1))
    // {
    //     ct(k2+1);
    //     return;
    // }

    // if (k1 > k2 && q == s.substr(0, k2))
    // {
    //     ct(k1+1);
    //     return;
    // }
    int i;
    for( i=0;i<min(k1,k2);i++)
    {
        if(s[i]!=q[i])
        {
            break;
        }
    }
    if(i>0)
    ct(1+k1+k2-i);
    else
    ct(k1+k2);
    return;
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