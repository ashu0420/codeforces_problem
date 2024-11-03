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
    fr(ll, 0, n) { cout << a[i] << " "; }cout<<endl;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    map<int,int> mp;
    for(int i=0;i<2*n;i++)
    {
        int x;
        cn(x);
        mp[x]++;
    }
    int s,b;
    s=mp[1]%2;
    if(mp[1]<=n)
    {
        b=mp[1];
    }
    else
    {
        b=2*n-mp[1];
    }
    cout<<s<<" "<<b<<endl;
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