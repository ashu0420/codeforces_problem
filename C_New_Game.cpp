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
    int n, k;
    cin >> n >> k;
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cn(x);
        a[x]++;
    }
 
    int ans = 0;
    auto last = a.begin();
    int cans = 0;
    for (auto it = (a.begin()); it != a.end(); it++)
    {
        if (it->first - prev(it)->first > 1 && it != a.begin())
        {
            ans = max(ans, cans);
            last=it;
            cans = it->second;
        }
        else if (it->first - last->first < k)
        {
            cans += it->second;
        }
        else
        {
            ans = max(ans, cans);
            cans -= last->second;
            last++;
            cans += it->second;
        }
    }
    ans = max(ans, cans);
    ct(ans);
    //  for(ll i=s;i<=b;i++)
    // {
    //     ct(a[i]);
    // }
    // out(a,n);
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