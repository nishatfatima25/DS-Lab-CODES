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

    // i= n-1 last element ke index se jo element enter hua uske index tak loop run hoga i.e pos-1 
    for(int i =  n-1 ; i>=pos-1; i--){
       
        arr[i+1] = arr[i];  // aage wale index me piche wali value assign
        

    }
    arr[pos -1] = e;  // arr inc karne ke baad finally us pos pe element insert kar denge
    //n++;  // n ki value bhi badha denge qki element increase hua

    cout << "updated array" << endl;
    for(int i=0; i<=n; i++){
        cout<< arr[i] << " ";
    }




return 0;
}