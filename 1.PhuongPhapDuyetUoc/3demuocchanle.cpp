#include <bits/stdc++.h>
using namespace std;
int main (){
    

    long long n; cin >> n; 
   int uocChan = 0; 
   int uocLe = 0; 
    


// duyet tu 1 den can bac 2 cua n;  // big(sqrt(n)) ---> 10 ^ 16 max

for (int i = 1; i <= sqrt(n); i++){
    if (n % i == 0){
      if ( i % 2 == 0) 
      uocChan++; 
      else
       uocLe++;
        if (i != (n / i)){

   if ( (n/i) % 2 == 0) 
      uocChan++; 
      else
       uocLe++;
        }
    }
}

cout << uocChan << " " << uocLe; 
return 0; 
}