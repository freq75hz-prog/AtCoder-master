#include "bits/stdc++.h"
using namespace std;

namespace {
    using ll = long long;
    using ull = unsigned long long;
    using ld = long double;

    constexpr auto INF = 1000000000000;
    constexpr auto EPS = (int)1e-9;
    constexpr auto MOD = 1000000007LL;
    constexpr auto PI = 3.1415926535897932384626433832795;
    #define FOR(i, j, k, step) for (int i=j; i<k; i+=step)
    #define RFOR(i, j, k, step) for (int i=j; i>=k; i-=step)
    #define REP(i, k) for(int i = (0); i < (k); i++ ) 
    #define RREP(i, k) for(int i = j; i >= (k); i-- )
    #define FOREACH(it, l) for(auto it=l.begin(); it != l.end(); it++)
    #define ALL(cont) cont.begin(), cont.end()
    #define RALL(cont) cont.rbegin(), cont.rend()
    #define REV(cont)  reverse(ALL(cont))
    #define SORT(cont) sort(ALL(cont))
    #define RSORT(cont) sort(RALL(cont))
    template<typename C>ll SZ(const C& c) { return static_cast<ll>(c.size()); }   
    template<typename T, typename U, typename Comp = less<>>
    static inline bool chmax(T& maxv, const U& value, Comp comp = {}) { if (comp(maxv, value)) { maxv = value; return true; } return false; }
    template<typename T, typename U, typename Comp = less<>>
    static inline bool chmin(T& minv, const U& value, Comp comp = {}) { if (comp(value, minv)) { minv = value; return true; } return false; }
    int ctoi(const char c) {
        if ('0' <= c && c <= '9') return (c - '0');
        return -1;
    }
}

// 自動呼び出し
struct fast_io {
    static constexpr int IOS_PREC = 15; static constexpr bool AUTOFLUSH = false;
    fast_io() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(IOS_PREC); if (AUTOFLUSH) cout << unitbuf; }
} fast_io;

void solve() {
    int k;
    cin >> k;
    int a, b;
    cin >> a >> b;
    FOR(i, a, b + 1, 1) {
        if (i % k == 0) {
            cout << "OK" << "\n";
            return;
        }
    }
    cout << "NG" << "\n";
}

signed main()
{    
    solve();
    return 0;
}
