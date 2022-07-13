#include<bits/stdc++.h>
using namespace std;


//vecrtors 
void exploreVector(){
    vector<int> v;
    //Adding eelments in vector
    v.push_back(3);
    v.push_back(9);
    v.push_back(4);
    v.push_back(1);
    v.emplace_back(6);

    // deleting in vector
    // v.erase(v.begin());
    // v.erase(v.begin()+1, v.begin()+3);

   //insert function in vector
   v.insert(v.begin()+1,30); // inserting one element
   v.insert(v.begin(),2,100); // inserting multiple elements 

   v.size(); // size of the vector
   v.pop_back(); // Delete the last element from the vector


  // printing using loops
  // auto automaticly assings the datatype of any data
      for(auto a:v)
        cout << a << " ";
    cout << endl;

  // printing using iterator
  // vector<int>::iterator it = v.begin();
  // it++;
  // cout<< *(it)<<" ";
  // it = it +2;
  // cout<< *(it)<<" ";


    vector<pair<int,int>> vec;
    vec.push_back({1,6});
    vec.emplace_back(3,7); // we don't have to put {} in here p

   vector<int> v1(5,100);// it will store 5 100 in the vector

  v1.swap(v); // swaps the elements of the vector
  v.clear(); // erase the entire vector 
  v.empty(); //bool d=funtion that returns if the vector is empty or not
  
 
  // printing using loops
   for(auto a:v1)
        cout << a << " ";
    cout << endl;

    


}

int main(){

exploreVector();


return 0;
}