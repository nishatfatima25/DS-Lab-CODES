#include<iostream>
using namespace std;
int main()
{
    int arr[50],n;
    cout<<"enter size of array"<<endl;
    cin>>n;

    cout << "Enter elements" <<endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    cout << "Array elements" << endl;
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

    int pos,e;
    cout << "\nEnter position and value of the element to be deleted" << endl;
    cin>>pos>>e;
    
    int item = e;

    if(pos<=0 || pos>n){
        cout << "Invalid Position"<<endl;
    }

    else{
    // jis pos se del karna hai wahan se loop chalega aur last me n-1 indexx tak jayega
    for(int i = pos-1; i<=n-1; i++){
        arr[i] = arr[i+1]; // aage wale index ke element piche wale index me store honge
    }
     n--;

    cout << "Deleted element = " << item << endl;
    cout<< "Updated Array" << endl;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }    
    
    }
return 0;
}