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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;
// li N = 10e9;
void solve()
{
    int n;
    cn(n);

    int m;
    cn(m);
    li currM = 0;

    li x;
    for (int i = 0; i < n; i++)
    {
        cn(x);

        currM = max(currM, x);
    }
    char c;
    li l, r;
    vector<li> ans;
    for (int i = 0; i < m; i++)
    {
        cin >> c >> l >> r;
        if (c == '+')
        {
            if (currM <= r && currM >= l)
            {
                currM++;
            }
        }
        else
        {
            if (currM <= r && currM >= l)
            {
                currM--;
            }
        }
        ans.push_back(currM);
    }
    out(ans, m);
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}