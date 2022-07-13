#include<bits/stdc++.h>
using namespace std;

void exploreList(){
list<int> ls;
ls.push_back(2);
ls.emplace_back(10);

ls.push_front(70);
ls.emplace_front(50);

//rest functions are same as vector

for(auto a:ls)
    cout<< a<< " ";
cout<<endl;



}

int main(){

exploreList();

    return 0;
}