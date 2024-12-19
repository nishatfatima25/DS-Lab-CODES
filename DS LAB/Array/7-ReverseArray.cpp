#include<iostream>
using namespace std;

void revArray(int arr[], int n){
    int start =0;
    int end = n-1;  

    while(start<=end){
    swap(arr[start],arr[end]); 
        start++;  
        end--;
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
int main()
{   
    int n, arr[50];
    cout << "Enter size of array:" <<endl;
    cin>>n;

    cout<< "Enter elements of array" << endl;
    for(int i=0 ; i<n; i++){
        cin>>arr[i]; 
    }
     
    cout << "Reversed array:" << endl;
    revArray( arr,  n);
    printArray( arr,  n);

return 0;
}
