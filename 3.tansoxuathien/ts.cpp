#include <bits/stdc++.h>
using namespace std; 

int main () {
    // declare variable; 
    int n; 
    cin >> n; 
    vector<int> a(n); 
    vector<int> dem(1000007, 0); // Khởi tạo mảng đếm với tất cả các giá trị bằng 0

    // input
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    // duyệt mảng và đếm số lần xuất hiện 
    for (int i = 0; i < n; i++) { // Chỉnh sửa vòng lặp duyệt mảng
        dem[a[i]]++; 
    }

    // in ra số lần xuất hiện
    for (int i = 0; i < dem.size(); i++) {
        if (dem[i]) { // In ra các phần tử có số lần xuất hiện > 0
            cout << i << " " << dem[i] << endl; 
        }
    }

    return 0; 
}
