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
    int n,k;
    cin>>n>>k;
    int ans=1;
    if(k==0)
    {
        ct("0");
        return;
    }
    if(k<=n)
    {
        ct("1");
        return;
    }
    k-=n;
    n--;
    while(k>0)
    {
        k-=n;
        ans++;
        if(k>0)
        {
            k-=n;
            ans++;
            n--;
        }
    }
    // float ans=(2*n-1-sqrt(pow(2*n-1,2)-4*k));
    // ans++;
    // // float ans2=(2*n-1-sqrt(pow(2*n-1,2)-4*k))/2;
    // // if(ans>0)
    // {
    //     if(ans/1.0==0.0)
    //     {
    //         ct(int(ans));

    //         return;
    //     }
    //     else
    //     {
    //         ct(int(++ans));
    //         return;
    //     }
    // }
    // // if(ans2/1.0==0.0)
    // //     {
    // //         ct(int(ans2));
    // //         return;
    // //     }
    // //     else
    // //     {
    // //         ct(int(++ans2));
    // //         return;
    // //     }
    ct(ans);
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