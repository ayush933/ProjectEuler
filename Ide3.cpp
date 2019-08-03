#pragma GCC optimize("O3")  
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define mem(z,i) memset(z,i,sizeof(z))
#define eps 1e-7
#define I (int)
#define mod 1000000007
const long long INF = 1000000000000000000LL;
//const int WASTE=∞;
//#define int unsigned long long
ll power(ll a,ll b){
	ll i=1;
	while(b){
		if(b%2)
			i=(i*a)%mod;
		b/=2;
		a=(a*a)%mod;
	}
	return i;
}
ll mulmod(ll a, ll b) { 
    ll res = 0;
    a = a % mod; 
    while (b > 0) {
        if (b % 2 == 1) 
            res = (res + a) % mod; 
        a = (a * 2) % mod; 
        b /= 2; 
    }
    return res % mod; 
} 
const int N=1e5+5;
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    #define int long long
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; int bk=n;
        while(!(n%2)) n/=2;
        if(n==1){
            cout<<2<<endl;
            continue;
        }
        int x;
        for( x=3;x<=sqrt(n);x+=2){
            if(!(n%x)){
                n/=x;
                x=1;
            }
        }
        if(n>2){
            cout<<n<<endl;
            continue;
        }
        else cout<<x<<endl;
    }
	return 0;
}
