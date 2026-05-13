#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int size = 10;
    int target;
    int left = 0;
    int right = size - 1;
    bool found = false;
    cout<<"Enter target number: ";
    cin>>target;
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == target){
            cout<<"Found at index "<<mid;
            found = true;
            break;
        }
        else if(target < arr[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    if(!found){
        cout << "Number not found";
    }
    return 0;
}
