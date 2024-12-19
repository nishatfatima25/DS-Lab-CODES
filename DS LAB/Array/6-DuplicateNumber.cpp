#include<iostream>
using namespace std;
int main()
{
    int n,arr[50];
    cout << "Enter size of array" << endl;
    cin>>n;

    cout << "Enter elements of array" << endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }


    cout << "Duplicate Number = " ;
    for (int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }

return 0;
}

