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
    in(v,n);
    fr(int,0,n)
    {
        if(v[i]==n)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<v[i]+1<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    // cin >> t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}