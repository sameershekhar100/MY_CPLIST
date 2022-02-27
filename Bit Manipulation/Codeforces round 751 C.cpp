//#include <bits/stdc++.h>
//#include <string>
//#include "math.h"
//#define lli long long int
//#define ll long long
//#define all(x) x.begin(),x.end()
//#define rep(i, j, n, in) for (int i=j ; i<n ; i+=in)
//#define vi vector<int>
//#define vpii <vector<pair<int,int>>
//#define heap priority_queue
//#define MOD 1000000007
//#define lli long long int
//using namespace std;
//
//
//long fastpow(long a, long b) {
//    long res = 1;
//    while (b > 0) {
//
//        if ((b & 1) != 0)
//            res = (res * a % MOD) % MOD;
//
//
//        a = (a % MOD * a % MOD) % MOD;
//        b = b >> 1;
//    }
//    return res;
//}
//
//long gcd(int a,int b) {
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);
//}
////prime vevtor contains all prime numbers
//vector<bool> isPrime;
////prime vevtor contains all prime numbers
//void sieve(vector<lli>& prime,lli n){
//    isPrime.resize(n+1,true);  //list of all numbers which are pime or not
//    isPrime[0] = false;
//    isPrime[1] = false;
//    for(lli i=2;i*i<=n;i++){
//        if(isPrime[i] == 1){
//
//            for(auto j=i*i;j<=n;j+=i){
//                isPrime[j]=0;
//            }
//        }
//    }
//    for(int i=0;i<=n;i++){
//        if(isPrime[i] == 1)prime.push_back(i);
//    }
//}
//void segmentedSieve(long long int m,lli n){
//    if(m==0)m+=2;
//    else if(m==1)m++;
//    lli sq= floor(sqrt(n));
//    vector<lli> prime;//this will store all prime numbesr till sqrt(high)
//    sieve(prime,sq);
//    vector<bool> v(n-m+1,1);
//    for(auto i:prime) {
//        int smallMultiple=(m/i)*i;
//        if(smallMultiple<m)smallMultiple+=i;
//        for(auto j=smallMultiple;j<=n;j+=i){
//            if(j==i) continue;
//            v[j-m]=0;
//        }
//    }
//    for (int i = m; i < n; ++i) {
//        if(v[i-m]==1) cout<<i<<" ";
//    }
//}
//void cal(int mask,vector<int>& v){
//    int cnt=0;
//    while(cnt<31){
//        int z=1<<cnt;
//        if((mask&(1<<cnt))!=0)v[cnt]++;
//        cnt++;
//    }
//    return;
//}
//void solve() {
//    int n;
//    cin>>n;
//    vector<lli> v(n);
//    for(auto &i:v) cin>>i;
//    vi bits(31,0);
//    for(auto i:v){
//        cal(i,bits);
//    }
//
//    for(int k=1;k<=n;k++){
//        bool b=1;
//        for(auto i:bits){
//            if(i%k!=0) {
//                b = 0;
//                break;
//            }
//        }
//        if(b) cout<<k<<" ";
//    }
//    cout<<endl;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin>>t;
//    while (t--)
//        solve();
//
//    return 0;
//}
//
