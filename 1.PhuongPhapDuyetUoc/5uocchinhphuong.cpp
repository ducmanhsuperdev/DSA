#include <bits/stdc++.h>
using namespace std; 
using ll  = long long; 
vector <long long> Uocarr; 


int main (){
ll n; cin >> n; 

for (int i = 1; i <= sqrt(n); i++){
    if (n % i == 0){
        long long k = sqrt(i);
        if ( i == k * k ){
    Uocarr.push_back(i); 
        }
        
        if ( i != n / i) {
            long long f = sqrt(n/i); 
            if (n/i == f * f ) Uocarr.push_back(n/i); 
        }
    }
}

sort(Uocarr.begin(), Uocarr.end());  // sort in vector 


for (auto i : Uocarr){
    cout << i << " "; 
}
    return 0; 
}