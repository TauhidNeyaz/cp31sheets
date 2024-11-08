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
    ll n; cin >> n;
    vector<vll> nums(n);
    
    ll ans = 0;
    vll sec(n);

    loop(i, 0, n-1) {
        ll x; cin >> x;
        nums[i].resize(x);
        loop(j, 0, x-1) {
            cin >> nums[i][j];
        }

        sort(all(nums[i]));
        ans += nums[i][1];
        sec[i] = nums[i][1];
    }

    ll mnn = 1e9 + 5;
    loop(i, 0, n-1) {
        mnn = min(mnn, nums[i][0]);
    }

    ans -= *min_element(all(sec));
    ans += mnn;

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


