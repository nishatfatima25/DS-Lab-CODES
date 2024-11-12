#include<iostream>
using namespace std;
int main()
{
    int arr[50],n,t;
    
    
    cout<< "Enter size and elements of array:" <<endl;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>> arr[i];
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++ ){
            if(arr[j] > arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    cout<< "Sorted array" << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    int e,pos;
    cout <<  "\nEnter element to be added and the req position" << endl;
    cin>>e >> pos;

     
    for(int i =  n-1 ; i>=pos-1; i--){
       
        arr[i+1] = arr[i];
        
    }
    arr[pos -1] = e;



    cout << "updated array" << endl;
    for(int i=0; i<=n; i++){
        cout<< arr[i] << " ";
    }



    
return 0;
}