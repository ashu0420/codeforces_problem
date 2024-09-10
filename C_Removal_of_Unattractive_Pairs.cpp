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
    string s;
    cn(s);
    vector<int> v(26, 0);
    fr(int, 0, n)
    {
        v[s[i] - 'a']++;
    }
    multiset<int> se;

    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            se.insert(v[i]);
        }
    }
    int ans = 0;
    while (se.size() > 1)
    {

        while (*se.begin() == 0)
        {
            se.erase(se.begin());
            continue;
        }

        auto it = se.begin();
        int k = *it;
        se.erase(it);
        auto itb = (--se.end());
        int j = *itb;
        se.erase(itb);
        if(--k>0)
        se.insert(k);
        if(--j>0)
        se.insert(j);
    }
    ans = *se.begin();
    ct(ans);
    return;
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