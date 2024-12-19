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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    in(v, n);
    sort(v.begin(), v.end());
    // vector<ll> p(n);
    // p[0] = v[0];
    // for (ll i = 1; i < n; i++)
    // {
    //     p[i] = p[i - 1] + v[i];
    // }
    ll i = 0, j = 0;
    ll ans = 0, score = 0;
    while (j < n)
    {
        if (score == m)
        {
            ct(m);
            return;
        }
        if (score < m)
        {
            if (v[j] - v[i] < 2)
            {
                // score <= m ? (ans = max(ans, score)):1;
                score += v[j++];
                score <= m ? (ans = max(ans, score)) : 1;
            }
            else
            {
                // i++;
                // ans = max(ans, score);
                score -= v[i++];
                score <= m ? (ans = max(ans, score)) : 1;
            }
        }
        else
        {
            // score <= m ? (ans = max(ans, score)):1;
            score -= v[i++];
            score <= m ? (ans = max(ans, score)) : 1;
        }
    }

    while (i < j && score > m)
    {
        score -= v[i];
        score <= m ? (ans = max(ans, score)) : 1;
    }

    if (score <= m)
        ans = max(ans, score);
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
    return 0;
}