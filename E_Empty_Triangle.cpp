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
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    random_device rd;
    mt19937 mt(rd());

    uniform_int_distribution uni(1, 3);
    int n;
    cn(n);

    int ii = 1, jj = 2, kk = 3;

    while (1)
    {
        cout << "? " << ii << " " << jj << " " << kk << endl;
        int id;
        cin >> id;
        if (id < 0)
            return;
        if (id == 0)
            break;
        int sw = uni(mt);
        if (sw == 1)
            ii = id;
        else if (sw == 2)
            jj = id;
        else
            kk = id;
    }

    cout << "! " << ii << " " << jj << " " << kk << endl;
    cout.flush();
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