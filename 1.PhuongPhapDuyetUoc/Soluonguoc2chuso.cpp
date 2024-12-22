#include <bits/stdc++.h>
using namespace std; 
using ll  = long long; 



int main (){

    int count = 0; 

ll n; cin >> n; 

for (int i = 10; i <= 99; i++){
    if (n % i == 0) count++;
}
    

cout << count; 
    return 0; 
}