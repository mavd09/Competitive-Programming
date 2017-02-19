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

typedef complex< lf >       pt;

const int MAXN = int( 1e5 );
const int MOD  = int( 360 );
const int oo   = INT_MAX;

int n;
int mx[ MAXN ], mn[ MAXN ];

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
    int a = 0, b = 0;
    for( int i = 0; i < n; i++ ) {
      int x; cin >> x;
      if( i == 0 )
        mx[ i ] = mn[ i ] = x;
      else {
        if( x > mx[ i-1 ] ) a++;
        if( x < mn[ i-1 ] ) b++;
        mx[ i ] = max( mx[ i-1 ], x );
        mn[ i ] = min( mn[ i-1 ], x );
      }
    }
    cout << a << " " << b << "\n";
  }

  return 0;
}