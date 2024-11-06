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
    string a, b;
    cin >> a >> b;
    int ans = a.size()+b.size();
    for (int i = 0; i < b.size(); i++)
    {
        int cans = a.size() + i;
        int k = i;
        for (int j = 0; j < a.size() && k < b.size(); j++)
        {
            if (a[j] == b[k])
            {
                k++;
            }
        }
        cans += (b.size() - k);
        ans=min(ans,cans);
    }
    ct(ans);
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