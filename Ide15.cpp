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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        n++; m++;
        int dp[501][500+1];
        for(int x=1;x<=n;x++) dp[x][1]=1;
        for(int y=1;y<=m;y++) dp[1][y]=1;
        for(int x=2;x<=n;x++){
            for(int y=2;y<=m;y++){
                dp[x][y]=(dp[x-1][y]+dp[x][y-1])%mod;
            }
        }
        cout<<dp[n][m]<<endl;
        // for(int x=1;x<=n;x++){
        //     for(int y=1;y<=m;y++){
        //         cout<<dp[x][y]<<' ';
        //     }
        //     cout<<endl;
        // }
    }
	return 0;
}
