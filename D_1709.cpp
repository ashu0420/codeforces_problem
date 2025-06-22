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
#define in1(a, n) \
    fr(ll, 1, n + 1) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define out1(a, n)                            \
    fr(ll, 1, n + 1) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
#define vin1(a, n)       \
    vector<ll> a(n + 1); \
    in1(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    int n;
    cn(n);
    vin1(a, n);
    vin1(b, n);

    vector<pair<int, int>> vp;

    for (int cnt = 1; cnt <= 2 * n; cnt++)
    {
        int targetPos = (cnt + 1) / 2;

        if (cnt % 2 == 1)
        {
            // Odd number should go in a[targetPos]
            if (a[targetPos] == cnt) continue;

            int idx = -1;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == cnt)
                {
                    idx = i;
                    break;
                }
                if (b[i] == cnt)
                {
                    vp.push_back({3, i});
                    swap(a[i], b[i]);
                    idx = i;
                    break;
                }
            }

            while (idx > targetPos)
            {
                vp.push_back({1, idx - 1});
                swap(a[idx], a[idx - 1]);
                idx--;
            }
        }
        else
        {
            // Even number should go in b[targetPos]
            if (b[targetPos] == cnt) continue;

            int idx = -1;
            for (int i = 1; i <= n; i++)
            {
                if (b[i] == cnt)
                {
                    idx = i;
                    break;
                }
                if (a[i] == cnt)
                {
                    vp.push_back({3, i});
                    swap(a[i], b[i]);
                    idx = i;
                    break;
                }
            }

            while (idx > targetPos)
            {
                vp.push_back({2, idx - 1});
                swap(b[idx], b[idx - 1]);
                idx--;
            }
        }
    }

    ct(vp.size());
    for (auto [op, i] : vp)
    {
        cout << op << " " << i << "\n";
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}