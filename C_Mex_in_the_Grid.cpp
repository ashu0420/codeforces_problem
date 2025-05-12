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
void printCenterSpiralGrid(int n) {
    vector<vector<int>> grid(n, vector<int>(n, 0));

    // Starting point: true center for odd, upper-left of center for even
    int row = n / 2;
    int col = n / 2;
    if (n % 2 == 0) {
        row -= 1;
        col -= 1;
    }

    // Directions: right, up, left, down
    int dir[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    int d = 0;
    int steps = 1;
    int value = 0;

    grid[row][col] = value++;

    while (value < n * n) {
        for (int i = 0; i < 2; ++i) { // two legs per spiral layer
            for (int j = 0; j < steps; ++j) {
                row += dir[d][0];
                col += dir[d][1];
                if (row >= 0 && row < n && col >= 0 && col < n) {
                    grid[row][col] = value++;
                    if (value > n * n) break;
                }
            }
            d = (d + 1) % 4;
        }
        steps++;
    }

    // Print the grid
    for (const auto& r : grid) {
        for (int val : r) {
            cout << val<<" ";
        }
        cout << '\n';
    }
}

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<vector<int>> v(n, vector<int>(n));
   printCenterSpiralGrid(n);
    // v[0][0]=0;
    // int k=1;
    // int cnt=1;
    // while(k<n)
    // {
    //     int i=0;
    //     int j=0;
    //     while(i<k)
    //     {
    //         v[k][i++]=cnt++;
    //     }
    //     while(j<=k)
    //     {
    //         v[j++][k]=cnt++;
    //     }
    //     k++;
    // }
    // for(auto i:v)
    // {
    //     for(auto j:i)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
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