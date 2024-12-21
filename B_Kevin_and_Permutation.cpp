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
    int  n,k;
    cin>>n>>k;
    vector<int> v(n+1,-1);
    int j=1;
    for(int i=k;i<=n;i+=k)
    {
        v[i]=j;
        j++;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==-1)
        {
            v[i]=j;
            j++;
        }
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // for(int i=1;i<n;i++)
    // {
    //     cout
    // }
    
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cout.precision(10);
cout.setf(ios::fixed);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}