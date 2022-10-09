
#include <iostream>
using namespace std;
bool isBinarysearch(int arr[], int size, int key){
    int s = 0, e = size - 1, mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid]==key){
            return 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of an array -> ";
    cin >> n;
    int arr[n];
    cout <<"Enter elements in an array -> ";
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    cout << "Enter number would you like to search -> ";
    int key;
    cin >> key;
    if(isBinarysearch(arr, n, key)){
        cout << "The values " << key << " was found in given an array" << endl;
    }
    else{
        cout << "The values " << key << " was not found in given an array" << endl;
    }
    

    return 0;
}
output -> 
Enter elements in an array -> 1 2 3 4 5 6 7 9 10 11
Enter number would you like to search -> 12
The values 12 was not found
