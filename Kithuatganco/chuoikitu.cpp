#include <bits/stdc++.h>
using namespace std; 


int main (){


int check = 0; 
string s; getline(cin,s); 
for (int i = 0; i < s.size(); i++) {
//    #pragma endregion

if (s[i] >= 'A' && s[i] <= 'Z') {
    cout << s[i]; 
    check = 1; 
}
}


if (check == 0){
    cout << "-1"; 
}
 return 0; 
}

