#include<iostream>
using namespace std;
int main()
{
    int n,arr[50];
    cout << "Enter size of array:" <<endl;
    cin>>n;

    cout<< "Enter elements of array" << endl;
    for(int i=0 ; i<n; i++){
        cin>>arr[i]; 
    }

    cout<< "entered elements are" << endl;
    for(int i=0; i<n; i++){
        cout<< "Index = " << i<< " Value = " <<  arr[i] << " " <<endl;
    }
return 0;
}