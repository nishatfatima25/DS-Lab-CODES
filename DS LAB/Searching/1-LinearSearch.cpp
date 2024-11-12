#include<iostream>
using namespace std;
int main()
{
    int n,arr[50],e,count=0;

    cout << "Enter size of array" <<endl;
    cin>>n;

    cout<< "Enter elements of array" <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<< "Enter element to be searched" << endl;
    cin>>e;

    for(int i=0; i<n ; i++){
        if(e == arr[i]){
            count++;
            break;
        }
    }

    if(count==0){
        cout << "Element not found";
    }
    else{
        cout << "element found";
    }
return 0;
}