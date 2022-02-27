#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define lli long long int
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i, j, n, in) for (int i=j ; i<n ; i+=in)
#define vi vector<int>
#define vpii <vector<pair<int,int>>
#define heap priority_queue
#define MOD 1000000007
#define lli long long int
using namespace std;


long fastpow(long a, long b) {
    long res = 1;
    while (b > 0) {

        if ((b & 1) != 0)
            res = (res * a % MOD) % MOD;


        a = (a % MOD * a % MOD) % MOD;
        b = b >> 1;
    }
    return res;
}

long gcd(int a,int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
//prime vector contains all prime numbers
vector<bool> isPrime;
//prime vector contains all prime numbers
void sieve(vector<lli>& prime,lli n){
    isPrime.resize(n+1,true);  //list of all numbers which are prime or not
    isPrime[0] = false;
    isPrime[1] = false;
    for(lli i=2;i*i<=n;i++){
        if(isPrime[i] == 1){

            for(auto j=i*i;j<=n;j+=i){
                isPrime[j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(isPrime[i] == 1)prime.push_back(i);
    }
}
void segmentedSieve(long long int m,lli n){
    if(m==0)m+=2;
    else if(m==1)m++;
    lli sq= floor(sqrt(n));
    vector<lli> prime;//this will store all prime number till sqrt(high)
    sieve(prime,sq);
    vector<bool> v(n-m+1,true);
    for(auto i:prime) {
        int smallMultiple=(m/i)*i;
        if(smallMultiple<m)smallMultiple+=i;
        for(auto j=smallMultiple;j<=n;j+=i){
            if(j==i) continue;
            v[j-m]=0;
        }
    }
    for (lli i = m; i < n; ++i) {
        if(v[i-m]==1) cout<<i<<" ";
    }
}
bool cal(int mask,vector<int> v,lli z){
    int idx=0;
    int sum=0;
    while(idx<v.size()){
        int p=1<<idx;
        if((mask&p)!=0) sum+=v[idx];
        else sum-=v[idx];
        idx++;

    }
    sum=sum%360;
    return sum==0;
}
void solve() {
    int n;
    cin>>n;
    vi v(n);
    for(auto &i:v) cin>>i;
    lli range=pow(2,n);
    lli z= accumulate(all(v),0)*-1;

    for(int i=0;i<range;i++) {
        if (cal(i, v,z) == 1) {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;

    while (t--)
        solve();

    return 0;
}