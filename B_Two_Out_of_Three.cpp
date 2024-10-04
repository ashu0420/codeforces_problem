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

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<int> v(n);
    in(v, n);
    vector<int> b(n, 1);
    unordered_map<int, int> mp;
    int count = 0;
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] > 1 && flag < 0)
        {
            count++;
            flag = v[i];
            b[i] = 2;
        }
        if (flag != v[i] && mp[v[i]] > 1)
        {
            count++;
            b[i] = 3;
        }
    }
    if(count<2)
    {
        ct("-1");
        return;
    }
    out(b,n);
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}