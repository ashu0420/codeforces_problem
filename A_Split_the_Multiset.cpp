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
    li n, k;
    cin >> n >> k;
    if (n == 1)
    {
        ct("0");
        return;
    }
    if (n == k)
    {
        ct("1");
        return;
    }
    li ans = 0;
    // ans = ((n / ((k - 1) * k)) + n / k);
    ans = (n-1)/(k-1);
    if((n-1)%(k-1))
    ans++;
    ct(ans);
    return;
    if(n<k*k)
    {
        ct(n/k+1);
        return;
    }
    if (n % ((k - 1) * k) > k)
    {

        ans += 2;
    }
    else if (n % ((k - 1) * k) == 0 || n % ((k - 1) * k) == 1)
    {
        ans;
    }
    else if (n % ((k - 1) * k) < k)
    {
        ans++;
    }
    ct(ans);
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
}