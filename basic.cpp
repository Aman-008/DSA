#include <bits/stdc++.h>
using namespace std;

void print(){
    cout << "I am a pring function" << endl;
}


void inputTwoNumbersAndPrintAddOfThem(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << num1 + num2 << endl;
}


int sumOfTwoNumbers(int num1, int num2){
    int res = num1 + num2;
    return res;
}

// void explainPassByValueAndReference(int x){
void explainPassByValueAndReference(int &x){
    x = x + 10;
}
void explainPassByValueAndReferenceByPassingArray(int arr[]){
    arr[1] = 100;
}
int main(){
    // inputTwoNumbersAndPrintAddOfThem();
    // inputTwoNumbersAndPrintAddOfThem();

    // cout << sumOfTwoNumbers(5,7) << endl;

    // int num = 5;
    // explainPassByValueAndReference(num);
    // cout << num;

    int arr[] = {1,2,3,5,6,7};
    explainPassByValueAndReferenceByPassingArray(arr);
    cout << arr[1];
    return 0;
}
// int main()
// {
//     // range --> (-10^9 , 10^9)
//     // int numInt = INT_MAX;
//     // int numInt = INT_MIN;
//     // cout << numInt << endl;


//     // long long numLong = LONG_LONG_MAX;
//     // cout << numLong << endl;



//     // int bdate , num;
//     // cin >> bdate >> num;
//     // cout << bdate << " " << num << endl;
//     // cout << bdate << endl << num << endl;



//     // string str1 , str2;
//     // getline(cin,str1);
//     // getline(cin,str2);
//     // cout << str1 << endl << str2;
//     // cout << str1 << endl;
//     // cout << str2 << endl;




//     // if else
//     // int age;
//     // cin >> age;
//     // if (age >= 18){
//     //     cout << "Adult" << endl;
//     // }
//     // // else if (age < 18 and age >= 10)
//     // else if (age < 18 && age >= 10)
//     // {
//     //     cout << "Teen" << endl;
//     // }
    
//     // else{
//     //     cout << "Child" << endl;
//     // }



//     // int marks;
//     // cin >> marks;
//     // if(marks >= 90){
//     //     cout << "A" << endl;
//     // }
//     // else if(marks >= 70){
//     //     cout << "B";
//     // }
//     // else if(marks >= 50){
//     //     cout << "C";
//     // }
//     // else if (marks >= 35){
//     //     cout << "D"; 
//     // }
//     // else{
//     //     cout << "Fail" << endl;
//     // }









//     // Switch Case

//     // int day;
//     // cin >> day;
//     // switch (day)
//     // {
//     // case 1:
//     //     cout << "Monday";
//     //     break;
//     // case 2:
//     //     cout << "Tuesday";
//     //     break;
//     // case 3:
//     //     cout << "Wednesday";
//     //     break;
//     // case 4:
//     //     cout << "Thursday";
//     //     break;
//     // case 5:
//     //     cout << "Friday";
//     //     break;
//     // case 6:
//     //     cout << "Saturday";
//     //     break;
//     // case 7:
//     //     cout << "Sunday";
//     //     break;
//     // default:
//     //     cout << "Invalid Number";
//     //     break;
//     // }












//     // for loop

//     // for (int i=1;i<=10;i++){
//     //     cout << i << endl;
//     // }

//     // for (int i=10;i>=1;i--){
//     //     cout << i << endl;
//     // }

//     // int n;
//     // cin >> n;
//     // for(int i=5;i<=n;i+=5){
//     //     cout << i << endl;
//     // }

//     // While Loop

//     // int i = 5;
//     // while(i<=100){
//     //     cout << i << endl;
//     //     i+=5;
//     // }




//     // string str = "tufplus";
//     // // cout << str.size();
//     // for(int i=0;i<str.size();i++){
//     //     cout << str[i];
//     // }


//     // cout << "Before the print function" << endl;
//     // print();
//     // cout << "After the print fucntion";


//     return 0;
// }



