#include <bits/stdc++.h>

#define loop(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define rloop(i, l, r) for (int i = (int)(r); i >= (int)(l); --i)

#define pb push_back
#define fi first
#define se second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(a) int((a).size())

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pp;
typedef vector<pp> vpp;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
typedef pair<ll, ll> pll;
typedef unordered_map<int, vi> uG;
typedef unordered_map<int, vpp> wG;

const int inf = 1e9;
const ll INF = 1e18;
const int MOD = 1e9 + 7;

void Tauhid() {
    // write your code here...

    int n, k; 
    cin >> n >> k;

    vi v(n);
    loop(i, 0, n-1) cin >> v[i];

    int ans = 100;
    int ev = 0;
    loop(i, 0, n-1) {
        int diff;
        if (v[i] <= k) {
            diff = k - v[i];
        } else {
            diff = (k - (v[i] % k)) % k;
        }

        ans = min(ans, diff);
        if (v[i] % 2 == 0) ++ev;
    }

    if (k == 4) {
        if (ev >= 2) ans = 0;
        else if (ev == 1) {
            ans = min(ans, 1);
        } else {
            ans = min(ans, 2);
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin >> testcase;
    while (testcase--) {
       Tauhid();
    }
    return 0;
}