#include <bits/stdc++.h>
using namespace std;
int main (){
    

    long long n; cin >> n; 
   int count = 0; 

// duyet tu 1 den can bac 2 cua n; 

for (int i = 1; i <= sqrt(n); i++){
    if (n % i == 0){ // neu i la uoc cua n thi n / i cung la uoc cua n; 
        count++;  
        if (i != (n / i)){  // xu ly trung lap uoc
            count++;
        }
    }
}




cout << count; 
return 0; 
}
