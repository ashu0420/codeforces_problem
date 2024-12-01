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
    vector<int> v(n);
    in(v,n);
    int x=v[n-1];
    int y=INT16_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(y<v[i])
        {
            y=v[i];
        }
    }
    ct(x+y);
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