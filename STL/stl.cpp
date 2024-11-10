#include <bits/stdc++.h>
using namespace std;
void getPower(){
    cout << pow(2,9) << endl;
}
void explainPair(){
    pair<int, int> pr1 = make_pair(4,6);
    cout << pr1.first << " " << pr1.second << endl;

    
    pair<int, char> pr2 = {7,'b'};
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>,int> pr3 = {{4,'h'},8};
    cout << pr3.first.second << " " << pr3.second << endl;
}   
void explainVector(){
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);
    vec.emplace_back(8);

    // cout << vec.size();
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    
}
void autoItrator(){
    vector<int>vec;
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(6);
    auto begiItr = vec.begin();
    auto endItr = vec.end();
    // for(auto i=begiItr;i < endItr;i++){
    //     cout << *i << " ";
    // }
    for(auto i:vec){
        cout << i << " ";
    }
    cout << endl;
}
void reverseItrator(){
    vector <int> vec;
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(10);
    auto begItr = vec.rbegin();
    auto endItr = vec.rend();
    for(auto i=begItr;i<endItr;i++){
        cout << *i <<' ';
    }
    cout << endl;
}
void slicingVector(){
    vector<int>vec={7,8};
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vector<int>dupvec(vec.begin()+1, vec.end()-1);
    for(auto i:dupvec){
        cout << i << ' ';
    }
    cout << endl;
}
void eraseVector(){
    vector<int>vec;
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(10);
    vec.push_back(12);
    vec.push_back(14);
    for(auto i:vec){
        cout << i << " ";
    }
    cout << endl;
    vec.erase(vec.begin()+1);
    vec.erase(vec.begin()+1,vec.end()-1);
    // vec.clear(); // erase everything
    for(auto i:vec){
        cout << i << " ";
    }

}
void swapVector(){
    vector<int>vec1={7,9};
    vector<int>vec2={8,10};
    swap(vec1,vec2);
    for(auto i:vec1){
        cout << i << " ";
    }
    cout << endl;   
}
void insertVector(){
    vector<int>vec = {7,6,5,3,2,1};
    vec.insert(vec.begin()+3,4);
    for(auto i:vec){
        cout << i << " ";
    }
    cout << endl;
}
void expalinList(){
    list<int>lis={6,7};
    lis.push_front(1);
    for(auto i:lis){
        cout << i << " ";
    }
    cout << endl;

}
void explainStack(){
    //LIFO --> Last In First Out
    
}





int main(){
    // getPower();
    // explainPair();
    // explainVector();
    // autoItrator();
    // reverseItrator();
    // slicingVector();
    // eraseVector();
    // swapVector();
    // insertVector();
    // explainList();


    return 0;
}