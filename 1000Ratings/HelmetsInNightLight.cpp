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
    int n, p;
    cin >> n >> p;

    vi a(n), b(n);
    loop(i, 0, n-1) cin >> a[i];
    loop(i, 0, n-1) cin >> b[i];

    vpp sorted_pairs;

    loop(i, 0, n-1) {
        sorted_pairs.push_back({b[i], a[i]});
    }

    sort(sorted_pairs.begin(), sorted_pairs.end());

    ll ans = 0;
    int reach_till = -1;
    bool ok = false;
    int max_cost = -1;

    loop(i, 0, n-1) {
        int people = sorted_pairs[i].second;
        int cost = sorted_pairs[i].first;

        while (people--) {
            reach_till++;
            
            if (p > cost) {
                ans += cost;
            } else {
                ans += p;
                ok = true;
            }
            max_cost = max(max_cost, cost);

            if (reach_till == n-1) {
                if (!ok) {
                    ans -= max_cost;
                    ans += p;
                }
                cout << ans << endl;
                return;
            }
        }
    }
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