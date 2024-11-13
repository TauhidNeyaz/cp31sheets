#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
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

#define loop(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define rloop(i, l, r) for (int i = (int)(r); i >= (int)(l); --i)

#define fi             first
#define se             second
#define ln               "\n"
#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define Fi(p)          get<0>(p)
#define Sc(p)          get<1>(p)
#define sz(x)          int((x).size())
#define all(x)         (x).begin(), (x).end()
#define read_v(x)      for(auto &i: x) cin >> i
#define lbd(a, x)      lower_bound(all(a), x)
#define ubd(a, x)      upper_bound(all(a), x)
#define minE(a)        (*min_element(all(a)))
#define maxE(a)        (*max_element(all(a)))
#define mem(a, v)      memset(a, v, sizeof a)
#define msg(x)         cout << (#x) << ln
#define bug(x)         cout << (#x) << ": " << (x) << ln
#define printv(v)      for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)     for(auto i: v) { for(auto j: i) cout << j << ' '; cout << ln; }
#define printm(m)      for(auto i: m) cout << Fi(i) << " -> " << Sc(i) << ln
#define prints(s)      for(auto i: s) cout << i << ' '; cout << ln
#define uceil(a, b)    ((a + b - 1) / (b))
#define gcd(a, b)      __gcd(a, b)
#define mk_upper(s)    transform(s.begin(), s.end(), s.begin(), ::toupper)
#define mk_lower(s)    transform(s.begin(), s.end(), s.begin(), ::tolower)
#define valid(nx, ny)  (nx >= 1 && nx <= row && ny >= 1 && ny <= col)

const int dx[]{+1, -1, +0, +0};
const int dy[]{+0, +0, +1, -1};
const int ddx[]{+0, +0, +1, -1, -1, +1, -1, +1};
const int ddy[]{-1, +1, +0, +0, +1, +1, -1, -1};
const ll  INF = 1e18;
const int inf = 1e9;
const int MOD = 1e9 + 7;


void Tauhid() {
    // write your here... 
    int n; cin >> n;

    vi A(n), B(n);
    read_v(A); read_v(B);

    map<int, int> mpp1, mpp2;
    int cnt = 1, mxx = 0;

    loop(i, 1, n-1) {
        if (A[i] == A[i-1]) {
            ++cnt;
        } else {
            mpp1[A[i-1]] = max(mpp1[A[i-1]], cnt);
            mxx = max(mxx, mpp1[A[i-1]]);
            cnt = 1;
        }
    }
    mpp1[A[n-1]] = max(mpp1[A[n-1]], cnt);
    mxx = max(mxx, mpp1[A[n-1]]);
    cnt = 1;

    loop(i, 1, n-1) {
        if (B[i] == B[i-1]) {
            ++cnt;
        } else {
            mpp2[B[i-1]] = max(mpp2[B[i-1]], cnt);
            mxx = max(mxx, mpp2[B[i-1]]);
            mxx = max(mxx, mpp2[B[i-1]] + mpp1[B[i-1]]);
            cnt = 1;
        }
    }
    mpp2[B[n-1]] = max(mpp2[B[n-1]], cnt);
    mxx = max(mxx, mpp2[B[n-1]]);
    mxx = max(mxx, mpp2[B[n-1]] + mpp1[B[n-1]]);

    cout << mxx << ln;
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