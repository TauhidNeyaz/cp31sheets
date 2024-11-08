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

    string str; cin >> str;

    int one = 0, zero = 0;
    loop(i, 0, sz(str) - 1) {
        if (str[i] == '1') ++one;
        else ++zero;
    }

    if (one == zero) {
        cout << 0 << endl;
        return;
    } 
    
    int idx = 0;

    for (idx = 0; idx < sz(str); ++idx) {
        if (str[idx] == '1') {
            if (zero > 0) --zero;
            else break;
        } else {
            if (one > 0) --one;
            else break;
        }
    }

    cout << sz(str) - idx << endl;
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