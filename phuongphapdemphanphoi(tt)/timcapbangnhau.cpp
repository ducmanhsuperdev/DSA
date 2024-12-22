#include <bits/stdc++.h>
using namespace std; 
#define ll long long
// vì sao đếm phân phối lại dùng tổ hợp?

//c ++ là gì?
int main () {
    // tối ưu tốc độ 
ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int n; cin >> n; 

vector <long long> a(n);   // a[i] <= 10 ^ 9; 
unordered_map <long long, long long> dem;

// nhập mảng;
for (int i = 0; i < n; i++) {
    cin >> a[i]; 
}


// đếm số lần xuất hiện của phần tử
for (int i = 0; i < n; i++) dem[a[i]]++; 

ll res = 0; 
            
// đếm số cặp bằng nhau 
for (pair <long long, long long> x : dem) {
    if (x.second >= 2)  {
        res += (x.second * ( x.second - 1) / 2); 
    }
// số cặp băng nhau; 

}

cout << res;


    return 0; 
}