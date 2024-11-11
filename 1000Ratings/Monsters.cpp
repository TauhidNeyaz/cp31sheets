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

struct Compare {
    bool operator()(const pp& a, const pp& b) {
        if (a.first == b.first) {
            return a.second > b.second; 
        }
        return a.first < b.first; 
    }
};

void Tauhid() {
    // write your code here...
    int n, dmg;
    cin >> n >> dmg;

    vi v(n);
    loop(i, 0, n-1) cin >> v[i];

    vpp map;
    loop(i, 0, n-1) {
        ll res = v[i] % dmg;
        if (res == 0) res += dmg;
        map.pb({-res, i});
    }

    sort(all(map));

    for (auto &i : map) {
        cout << i.se + 1 << " ";
    }
    cout << endl;
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

/*

2 8 3 5
-2 -2 -3 -2

3 1 2 4

*/