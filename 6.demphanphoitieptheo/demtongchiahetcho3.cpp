#include <bits/stdc++.h>
using namespace std; 




int main () {
// toi ưu tốc độ 
 ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
 // khoi tao mang a; 

 map <long long, long long> a; 
 long long dem0 = 0; 
 long long dem1 = 0; 
 long long dem2 = 0; 
 

int n; cin >> n; 
for (int i = 0; i < n; i++) {
    cin >> a[i]; 
}

for (int i = 0; i < n; i++) {
    if (a[i] % 3 == 0) dem0++; 
    if (a[i] % 3 == 1) dem1++; 
    if (a[i] % 3 == 2) dem2++; 
 }


long long doubleS = 0; 

doubleS += dem0 * (dem0 - 1) / 2; 
doubleS += dem1 * dem2; 

 cout <<  doubleS; 
 
     return 0;
}