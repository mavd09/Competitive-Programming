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

const int MAXN = int( 1e5 )+10;
const int MOD  = int( 1e9 )+7;
const int oo   = INT_MAX;

void read( int** &p, int i, int j ) {
  cin >> p[i][j];
}

int main( ) {

#ifdef LOCAL
  //freopen( "input", "r", stdin );
  //freopen( "output", "w", stdout );
#else
  //freopen( ".in", "r", stdin );
  //freopen( ".out", "w", stdout );
  ios_base::sync_with_stdio( 0 );
  cin.tie( 0 );
#endif

  int** arr = new int*[3];

  for( int i = 0 ; i < 3; ++i ) arr[i] = new int[i+1];

  read( arr, 1, 1 );
  cout << arr[1][1] << endl;

  for( int i = 0; i < 3; ++i ) free( arr[i] );
  free( arr );

  cout << sizeof(short) << endl;

  return 0;
}

