#include <iostream>
#include <vector>
using namespace std;


void disply(vector<int> &v){
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout << endl;
    
  }


int main() {

  int element;
  cout << "Enter the sie of array: ";
  int a;
  cin >> a;
  vector<int> vec1;
  for(int i=1;i<=a;i++){
    cout << "Enter the number to add to vector  : ";
    cin >> element;
    vec1.push_back(element);
    
  }
  disply(vec1);
  }