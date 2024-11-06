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
    cn(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;
    int k = 0;
    // int r=n-1;
    vector<int> l, r;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            l.push_back(i);
        }
        if (s[n - i - 1] == 'R')
        {
            r.push_back(n - 1 - i);
        }
    }
    int msize = 0;
    for (int i = 0; i < min(l.size(), r.size()); i++)
    {
        if (l[i] < r[i])
        {
            msize++;
        }
    }
    vector<ll> p(n + 1);
    p[0] = 0;
    for (int i = 0; i < n; i++)
    {
        p[i + 1] = v[i] + p[i];
    }
    ll sum=0;
    
    for(int i=0;i<msize;i++)
    {
        sum+=p[r[i]+1]-p[l[i]];
    }
    ct(sum);

    // li sum = 0;

    // if(msize==0)
    // {
    //     sum=0;
    // }else
    // if (msize == 1)
    // {
    //     for (int i = l[0]; i <= r[0]; i++)
    //     {
    //         sum += v[i];
    //     }
    // }
    // else
    // {

    //     for (int i = l[0]; i < l[msize - 1]; i++)
    //     {

    //         if (i <= l[k])
    //         {
    //             sum += (k + 1) * v[i];
    //         }
    //         else
    //         {
    //             k++;
    //             if (k == msize-1)
    //             {
    //                 sum += (k ) * v[i];
    //                 break;
    //             }
    //             sum += (k + 1) * v[i];
    //         }
    //     }
    //     for (int i = l[msize - 1]; i <= r[msize - 1]; i++)
    //     {

    //         sum += k * v[i];
    //     }
    //     k--;
    //     for (int i = l[msize - 1]; i <= r[0]; i++)
    //     {

    //         {
    //             if (i <= r[k])
    //             {
    //                 sum += (k + 1) * v[i];
    //             }
    //             else
    //             {
    //                 k--;
    //                 sum += (k + 1) * v[i];
    //             }
    //         }
    //     }
    // }
    // ct(sum);
    // return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {

        solve();
    }
    return 0;
}