#include <bits/stdc++.h>

#define PB          push_back
#define PF          push_front
#define MP          make_pair
#define FI          first
#define SE          second
#define SIZE( A )   int( ( A ).size( ) )
#define ALL( A )    ( A ).begin( ), ( A ).end( )
#define ALLR( A )   ( A ).rbegin( ), ( A ).rend( )

using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         lf;
typedef pair< int, int >    pii;
typedef pair< ll, ll >      pll;
typedef vector< bool >      vb;
typedef vector< lf >        vd;
typedef vector< ll >        vll;
typedef vector< int >       vi;
typedef vector< pii >       vpii;

const int MAXN = int( 5e3 )+10;
const int MOD  = int( 1e9 )+7;
const int oo   = INT_MAX;

int t, n, m;
vector<pii> graph[ MAXN ];

int main( ) {

#ifdef LOCAL
  freopen( "input", "r", stdin );
  //freopen( "output", "w", stdout );
#else
  //freopen( ".in", "r", stdin );
  //freopen( ".out", "w", stdout );
  ios_base::sync_with_stdio( 0 );
  cin.tie( 0 );
#endif

  cin >> t;
  for( int test = 1; test <= t; ++test ) {
    cin >> n >> m;
    for( int i = 0; i < m; ++i ) P
      int u,v,c; cin >> u >> v >> c; --u; --v;
      graph[u].PB( MP(v,c) );
      graph[v].PB( MP(u,c) );
    }
    
  }
  return 0;
}

