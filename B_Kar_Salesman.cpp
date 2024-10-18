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
    int n, x;
    cin >> n >> x;
    
    vector<ll> a(n);
    in(a, n);
    ll sum=0;
    ll m=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        m=max(m,a[i]);
    }
    ll r=sum/x;
    sum%x?r++:r;
    ct(max(r,m));
    // sort(a.begin(), a.end());
    // int i = 0;
    // int count=0;
    // while (a[0] != 0)
    // {
    //     for (int j = 0; j < x && j + i < n; j++)
    //     {
    //         a[j+i]--;
    //     }
    //     count++;
    //     while(a[i]==0)
    //     {
    //         i++;
    //     }

    // }
    // ct(count);
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