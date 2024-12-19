#include<iostream>
using namespace std;
int main()
{

   int n, arr[50];
    cout << "Enter size of array:" <<endl;
    cin>>n;

    cout<< "Enter elements of array" << endl;
    for(int i=0 ; i<n; i++){
        cin>>arr[i]; 
    }
    cout<< "entered elements are" << endl;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " " ;
    }

    int e,pos;
    cout << "\nEnter element to be added and the req position" << endl;
    cin>>e >> pos;

     
    for(int i =  n-1 ; i>=pos-1; i--){
       
        arr[i+1] = arr[i];  
        

    }
    arr[pos -1] = e;  /
    cout << "updated array" << endl;
    for(int i=0; i<=n; i++){
        cout<< arr[i] << " ";
    }




return 0;
}
