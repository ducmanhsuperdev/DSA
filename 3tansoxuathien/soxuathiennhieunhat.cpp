#include <bits/stdc++.h>
using namespace std; 



int main () {

    int n; cin >> n; 


// khai báo vector; 
    vector <long long> a(n); 
    vector <long long> dem(1000007, 0); 

// nhập mảng; 
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }


// xử lý duyệt phương pháp đếm phân phối; 
for (auto i : a)  {

    dem[i]++; 
}

int max = 0; 
// tìm số lần xuất hiện lớn nhất;
for (int i = 0 ; i < dem.size();i++) {
   if (dem[i] > 0){
    

    if (dem[i] > max){
       max = dem[i]; 
    }
   }

}

// cout << max; 

for (int i = 0; i < dem.size(); i++) {
if (dem[i] == max) {
    cout << i; 
    break;
}
}

    return 0; 
}