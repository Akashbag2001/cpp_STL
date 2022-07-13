#include<bits/stdc++.h>
using namespace std;


//pairs 
void explorePairs(){
    //single pair
    pair<int,int> p ={1,4};
    cout<<p.first<<" "<<p.second<<endl;
    //double pair 
    pair<int,pair<int,int>> q ={9,{2,3}};
    cout<<q.first<<" "<<q.second.second<< " "<< q.second.second<<endl;

    pair<int,int> arr[] = {{1,4},{1,7},{4,9}};
    cout<<arr[1].second;


}

int main(){

explorePairs();


return 0;
}