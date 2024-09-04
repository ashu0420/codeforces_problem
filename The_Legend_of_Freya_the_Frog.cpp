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
    li x, y, k;
    cin >> x >> y >> k;
    li count = 0;
    li a = x / k;
    x % k == 0 ? 1 : a++;
    li b = y / k;
    y % k == 0 ? 1 : b++;
    if (a>b)
    {
        count = a;
        
        count *= 2;
        if (count > 0)
            count--;
    }
    else
    {
        count = b;
      
        count *= 2;
    }
    ct(count);
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