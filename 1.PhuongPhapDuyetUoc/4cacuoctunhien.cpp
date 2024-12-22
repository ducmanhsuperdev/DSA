#include <bits/stdc++.h>
using namespace std; 
using ll  = long long; 
vector <long long> Uocarr; 


int main (){
ll n; cin >> n; 

for (int i = 1; i <= sqrt(n); i++){
    if (n % i == 0){
       Uocarr.push_back(i); 
        if ( i != n / i) Uocarr.push_back(n/i); 
    }
}

sort(Uocarr.begin(), Uocarr.end());  // sort in vector


for (auto i : Uocarr){
    cout << i << " "; 
}
    return 0; 
}