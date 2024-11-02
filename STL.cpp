#include<bits/stdc++.h>
using namespace std;

void explainArray(){

    int arr[5] = {1,2,3,4,5};

    array<int,5> arr2 = {1,2,3,4,5};

    int size = arr2.size();

    for(int i=0;i<size;i++){
        cout << arr2[i] << " ";
    }

    cout << "element at index 2 is " << arr2.at(2) << endl; // access element at index 2

    cout << "empty or not " << arr2.empty() << endl; // empty or not
}

void explainDeque(){

    // insertion and deletion from both ends
    // random access possible and is implemented using array and is dynamic

    deque<int> dq;

    dq.push_back(1);
    dq.push_front(2);
    dq.push_front(3);   
    for(int i : dq){
        cout << i << " ";
    }

    cout <<"print first index element" << dq.at(0) << endl;



    cout << "size of deque is " << dq.size() << endl;



}

void explainList(){

    // implementation because of doubly linked list

    list<int> l;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);

    l.pop_front();

    for(int i : l){
        cout << i << " ";
    }

    l.erase(l.begin());

    for(int i : l){
        cout << i << " ";
    }

    list<int> n(5,100);

    list<int> copy = l;

}

void explainStack(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;

    s.pop();

    cout << s.size() << endl;

    cout << "empty or Not" << s.empty() << endl;
    


}



void explainPair(){

    pair<int,int> p = {1,3};

    cout << p.first << " " << p.second << endl;

    pair<int , pair<int ,int>> a = {1,{2,3}};

    cout << a.first << " " << a.second.first << " " << a.second.second << endl;

    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};

    cout << arr[1].first;

}

void explainVector(){

    //increases it size dynamically like if the size was 2 then it goes to 4 etc

    vector<int> v;

    

    v.push_back(1);
    v.emplace_back(2);

    cout << "size -> " << v.capacity() << endl;

    v.push_back(3);

    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }


    v.clear();

    vector<pair<int,int>> vp;

    vp.push_back({1,3});
    vp.emplace_back(1,2);  //without curly braces it automatically considers it as a pair

    cout << vp[1].first << " " << vp[1].second << endl;

    vector<int> v(5,100);  //container of 5 elements with value 100

    vector<int> v2(v);  //copy of v

}

int main(){
    cout<<"Hello World"<<endl; //endl - end that line and makes new line
    cout<<"Hello Arya!";

    int x = 0;
    float y = 2.34;
    
    explainPair();
}


