#include<iostream>
using namespace std;
int main()
{
    int n,arr[50],e,mid,count=0;
    

    cout << "Enter size and elements of array"<<endl;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

//     cout << "Enter element to be searched" << endl;
//     cin>>e;

//    int f=0;
//     int l = n-1;
//     while(f<=l){
//          mid = (f+l)/2;
//         if(e==arr[mid]){
//             count++;
//             break;
//         }
//         else if(e < arr[mid]){
//             l = mid-1;
//         }
//         else{
//             f =mid + 1;
//         }
//     }

//     if(count==1){
//         cout << "Element found";
//     }
//     else{
//         cout << "element not found";
//     }
// return 0;


cout<< "enter element to be searched" <<endl;
    cin>>e;
    int f=0,l=n-1;

    while(f<=l){
        int mid = (f+l)/2;
        if(e == arr[mid]){
            count++;
            break;
        }
        else if(e < arr[mid]){
            l= mid -1;
        }
        else{
            f = mid +1;
        }

        //mid = (f+l)/2;
    }

    if(count ==0){
        cout << "element not found" <<endl;
    }
    else{
        cout << "element found" <<endl;
    }
return 0;
}

