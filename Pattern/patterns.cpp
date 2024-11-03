#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     void pattern1(int n) {
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// };


// class Solution {
// public:
//     void pattern2(int n) {
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// };

// class Solution {
// public:
//     void pattern3(int n) {
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout << j;
//             }
//             cout << endl;
//         }
//     }
// };

// class Solution {
// public:
//     void pattern4(int n) {
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout << i;
//             }
//             cout << endl;
//         }
//     }
// };



// class Solution {
// public:
//     void pattern5(int n) {
//         for(int i=0;i<n;i++){
//             for(int j=1;j<=n-i;j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// };


// class Solution {
// public:
//     void pattern6(int n) {
//         for(int i=0;i<n;i++){
//             for(int j=1;j<=n-i;j++){
//                 cout << j;
//             }
//             cout << endl;
//         }
//     }
// };



// class Solution {
// public:
//     void pattern7(int n) {
//         for(int i=0;i<n;i++){
//             for(int j=1;j<=n-i-1;j++){
//                 cout << " ";
//             }
//             for(int k=1;k<=2*i+1;k++){
//                 cout << "*";
//             }
//             for(int l=1;l<=n-i-1;l++){
//                 cout << " ";
//             }
//             cout << endl;
            
//         }
        
//     }
// };


// class Solution {
// public:
//     void pattern8(int n) {
//         for(int i=0;i<n;i++){
//             for(int j=1;j<=i;j++){
//                 cout << " ";
//             }
//             for(int k=1;k<=(2*n)-(2*i+1);k++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// };



// class Solution {
// public:
//     void pattern9(int n) {
//         for(int i=0;i<n;i++){
//             for(int j=1;j<n-i;j++){
//                 cout << " ";
//             }
//             for(int k=1;k<=2*i+1;k++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//         for(int i=0;i<n;i++){
//             for(int j=1;j<=i;j++){
//                 cout << " ";
//             }
//             for(int l=1;l<=(2*n)-(2*i+1);l++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// };





// class Solution {
// public:
//     void pattern10(int n) {
//         for(int i=0;i<n;i++){
//             for(int j=1;j<=i+1;j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//         for(int i=1;i<n;i++){
//             for(int j=1;j<=n-i;j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }

//     }
// };



class Solution {
public:
    void pattern11(int n) {
        for(int i=0;i<n;i++){
            int start = 1;
            if (i%2) start = 0;

            for(int j=0;j<=i;j++){
                cout << start << " ";
                start = !start;
            }
            cout << endl;
        }
    }
};



int main(){
    int n;
    cin >> n;
    Solution sl;
    sl.pattern11(n);
}