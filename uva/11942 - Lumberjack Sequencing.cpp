#include <bits/stdc++.h>

#define FILE 	0
#define INPUT 	"input"
#define OUTPUT 	"output"

#define MP 	    make_pair
#define MT 	    make_tuple
#define PB 	    push_back
#define FI 	    first
#define SE 	    second

#define MAX 	int( 20 )
#define INF 	INT_MAX
#define EPS 	int(1e-7)
#define MOD 	int(1e7+7)
#define PI 	    acos(-1)

typedef long long ll;

using namespace std;

int n;
int seq[ MAX ];

int main( ) {

	ios_base::sync_with_stdio( 0 );
	cin.tie( 0 );
	cout.tie( 0 );

	if( FILE & 1 ) freopen( INPUT , "r", stdin  );
	if( FILE & 2 ) freopen( OUTPUT, "w", stdout );

    cout << "Lumberjacks:\n";
    cin >> n;
    for( int i = 1; i <= n; i++ ) {
        for( int j = 1; j <= 10; j++ ) cin >> seq[ j ];
        bool ok = false, cur;
        cur = true;
        for( int j = 1; j < 10; j++ ) cur &= ( seq[ j ] < seq[ j+1 ] );
        ok |= cur;
        cur = true;
        for( int j = 1; j < 10; j++ ) cur &= ( seq[ j ] > seq[ j+1 ] );
        ok |= cur;
        cout << ( ok ? "Ordered\n" : "Unordered\n" );
    }

    return 0;
}
