#include <iostream>  
#include <vector>  
#include <algorithm>  
   
using namespace std;  
   
int main()  
{  
  int a[] = {1, 2, 3, 4, 5, 6, 7, 9, 10};  
  vector<int> v(a, a+9);  
  cout <<"\nHere are the values in the vector:\n";  
  for (vector<int>::size_type i=0; i<v.size(); i++)  
    cout <<v.at(i)<<" ";  
   
  if (binary_search(v.begin(), v.end(), 3))  
    cout <<"\nThe value 3 was found.";  
  else  
    cout <<"\nThe value 3 was not found.";  
   
  if (binary_search(v.begin(), v.end(), 8))  
    cout <<"\nThe value 8 was found.";  
  else  
    cout <<"\nThe value 8 was not found.";  
   
  return 0;  
}  


Output:
Here are the values in the vector:
1 2 3 4 5 6 7 9 10 
The value 3 was found.
The value 8 was not found.
