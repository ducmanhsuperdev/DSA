#include <bits/stdc++.h>
using namespace std;
int main (){
    

    long long n; cin >> n; 
   long long sum = 0; 
    


// duyet tu 1 den can bac 2 cua n; 
for (int i = 1; i <= sqrt(n); i++){
    if (n % i == 0){
       sum+=i;
        if (i != (n / i)){
            
           sum+=(n/i); 
        }
    }
}

cout << sum; 
return 0; 
}
