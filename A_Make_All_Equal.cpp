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
    int n;
    cin>>n;
    vector<int> v(101,0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[x]++;
    }
    int ans=0;
    for(int i=0;i<=n;i++)
    {
       ans=max(ans,v[i]);
    }
    ct(n-ans);
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