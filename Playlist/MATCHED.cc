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

const int MAXN = int( 2e5 );
const int MOD  = int( 360 );
const int oo   = INT_MAX;

int n;

int main( ) {

  #ifdef LOCAL
    freopen( "input", "r", stdin );
    //freopen( "output", "w", stdout );
  #else
    //freopen( "input", "r", stdin );
    //freopen( "output", "w", stdout );
    ios_base::sync_with_stdio( 0 );
    cin.tie( 0 );
  #endif

  while( cin >> n ) {
    int depth = 0, idx_depth = 0;
    int len = 0, idx_len = 0;
    stack< int > st;
    for( int i = 1; i <= n; ++i ) {
      int x; cin >> x;
      if( x == 1 ) {
        st.push( i );
        if( SIZE( st ) > depth ) {
          depth = SIZE( st );
          idx_depth = i;
        }
      } else {
        int idx = st.top( ); st.pop( );
        if( i-idx+1 > len ) {
          len = i-idx+1;
          idx_len = idx;
        }
      }
    }
    cout << depth << ' ' << idx_depth << ' ' << len << ' ' << idx_len << '\n';
  }

  return 0;
}