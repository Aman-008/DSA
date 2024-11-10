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
void explainMultiSet(){
    multiset<int>ml;
    ml.insert(1);
    ml.insert(1);
    ml.insert(1);
    ml.insert(3);
    ml.insert(2);
    ml.insert(5);
    ml.insert(2);
    for(auto i : ml){
        cout << i << " ";
    }
    cout << endl;

    auto it = ml.erase(ml.find(1)); // delete the first location of 1
    for(auto it: ml){
        cout << it << " ";
    }
    cout << endl;
}
void explainUnOrderedSet(){
    // Return random but unique element 
    // it has fastest Complexcity
    unordered_set<int>us;
    us.insert(1);
    us.insert(1);
    us.insert(11);
    us.insert(12);
    us.insert(10);
    us.insert(11);
    us.insert(10);
    for(auto it : us){
        cout << it << " ";
    }
    cout << endl;
}
void explainMap(){
    map<int, string>mpp;
    mpp[4] = "raj";
    mpp[1]="abc";
    mpp[2]="bcd";
    mpp[3]="edf";
    mpp.insert({5,"aman"});
    for(auto it: mpp){
        cout << it.first << "-->" << it.second << endl;
    }

    auto it = mpp.find(4);
    cout << (*it).first << "-->" << (*it).second << endl;

}
void unOrderdMap(){
    unordered_map<int, string>mpp;
    mpp[4] = "raj";
    mpp[1]="abc";
    mpp[2]="bcd";
    mpp[3]="edf";
    mpp.insert({5,"aman"});
    for(auto it: mpp){
        cout << it.first << "==>" << it.second << endl;
    }
}
void multiMap(){
    multimap<int, char>mpp;
    mpp.insert({1,'a'});
    mpp.insert({1,'a'});
    mpp.insert({1,'b'});
    mpp.insert({3,'a'});
    mpp.insert({3,'b'});
    mpp.insert({2,'b'});
    mpp.insert({2,'a'});
    mpp.insert({1,'b'});
    mpp.insert({2,'c'});
    auto it = mpp.equal_range(2);
    for(auto i = it.first; i!=it.second;i++){
        cout << (*i).first << "-->" << (*i).second << endl;
    }
}
void explainSort(){
    int arr[5] = {2,4,6,3,2};
    sort(arr,arr+5);
    for(auto i=0; i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int>vec={4,3,2,9,7};
    sort(vec.begin(),vec.end());
    for(auto i:vec){
        cout << i << " ";
    }
    cout << endl;



}
void explainAccumulate(){
    int arr[5] = {2,4,6,3,2};
    // accumulate return  totalSum of array + given number
    cout << accumulate(arr,arr+5,6);
}
void explainCount(){
    int arr[5] = {2,4,6,3,2};
    int num = 2;
    cout << count(arr,arr+5,num);
}
void explainFind(){
    int arr[5] = {2,4,6,3,2};
    // int num = 2;
    auto it = find(arr,arr+5,4);
    cout << *it << " ";
}
void explainPermutation(){
    string str = "abc";
    do{
        cout << str << endl;
    }while(next_permutation(str.begin(),str.end()));
}
void explainPrePermutation(){
    string str = "cba";
    do{
        cout << str << endl;
    }while(prev_permutation(str.begin(),str.end()));
    // This is not work for integer?
}
void explainMaxElement(){
    int arr[] = {2,3,5,7,9};
    auto it = *max_element(arr,arr+5);
    cout << it << endl;
}
void explainMinElement(){
    int arr[] = {2,3,5,7,9};
    auto it = *min_element(arr,arr+5);
    cout << it << endl;
}
void explainReverse(){
    int arr[] = {2,3,5,7,9};
    reverse(arr,arr+5);
    for(auto i = 0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
bool internalComparator(pair<int,int>el1,pair<int,int>el2){
    if(el1.second > el2.second) return true;
    if(el1.second < el2.second) return false;
    if(el1.first < el2.first) return true;
    return false;
}
void explainComperator(){
    pair<int,int>arr[] = {{1,6}, {1,5}, {2,6}, {2,9}, {3,9}};
    sort(arr,arr+5,internalComparator);
    for(auto i=0;i<5;i++){
        cout << "{" <<arr[i].first << "," << arr[i].second << "} ";
    }
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
    // explainSet();
    // explainMultiSet();
    // explainUnOrderedSet();
    // explainMap();
    // unOrderdMap();
    // multiMap();
    // explainSort();
    // explainAccumulate();
    // explainCount();
    // explainFind();
    // explainPermutation();
    // explainPrePermutation();
    // explainMaxElement();
    // explainMinElement();
    // explainReverse();
    explainComperator();


    return 0;
}