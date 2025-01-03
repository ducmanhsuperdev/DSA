#include <bits/stdc++.h>
using namespace std; 

int main (){

int n; cin >> n; 
 bool flag = true;


// duyệt for từ 1 đến căn bậc 2 của n  // big(sqrt(n) ----> 10 ^ 16 max )
for (int i = 2;  i <= sqrt(n); i++){
    if (n % i == 0) {    
        flag = false;
        break;
    }
}

if (flag == true) {
    cout << "YES"; 
}
else {
    cout << "NO"; 
}



return 0; 
}