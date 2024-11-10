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
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //Access the Stack
    while(st.empty() == false){
        cout << st.top() << " ";
        st.pop();
    }

}
void explainQueue(){
    // FIFO --> First In First Out
    queue<int>qu;
    qu.push(5);
    qu.push(53);
    qu.push(51);
    qu.push(55);
    qu.push(50);
    while(qu.empty()==false){
        cout << qu.front() << " ";
        qu.pop();
    }
}
void explainPriorityQueue(){
    // Store the highest element at the  top
    priority_queue<int>pq;
    // min heap
    // priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(10);
    pq.push(1000);
    pq.push(100);
    pq.push(101);
    while(pq.empty()==false){
        cout << pq.top() << " ";
        pq.pop();
    }
}
void explainSet(){
    // Stores only unique element 
    // and in ascending order
    set <int>st;
    st.insert(5);
    st.insert(75);
    st.insert(63);
    st.insert(6);
    st.insert(5);
    // Return 1 if the value present in the set 
    // Return 0 if the value not present in the set
    // cout << st.count(5) << endl;


    for(auto i:st){
        cout << i << " ";
    }
    cout << endl;

    //Erase
    // auto it1 = st.begin();
    // it1++;
    // auto it2 = st.end();
    // it2--;
    // st.erase(it1,it2);
    // for(auto i: st){
    //     cout << i << " ";
    // }
    // cout << endl;


    // LowerBound
    // Return an Iterator 
    // that is >= given number
    auto it = st.lower_bound(5);
    cout << *it << endl;


    // UpperBound
    //Return an Iterator
    // that is > given number
    auto it1 = st.upper_bound(5);
    cout << *it1 << endl;
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
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    explainSet();


    return 0;
}