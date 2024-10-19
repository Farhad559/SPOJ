#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define cntp cout << cnt << nl
 
const int N=1e8;
vector<bool>primes(N+1,true);

void sieve() {
vector<int>v;
primes[0]=primes[1]=false;
for(int i=2;i*i<=N;i++) {
    if(primes[i]) {
        for(int j=i*i;j<=N;j+=i) primes[j]=false;
    }
}
for(int i=2;i<=N;i++) {
    if(primes[i]) v.push_back(i);
}
for(int i=0;i<v.size();i+=100) cout << v[i]<< nl;
}
 
int main() {
optimize();
sieve();
}
