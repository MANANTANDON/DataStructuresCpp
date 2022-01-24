using namespace std;
#include<iostream>

int main(){
    int n, ele, first, any, pos;
    //array Traversal.....
    cout<<"How many elements you want to enter: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"data is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    //array insertion at the end......
    cout<<"\n\n**INSERTION AT THE END**";
    cout<<endl<<"Enter the element: ";
    cin>>ele;
    arr[n] = ele;
    int m = n + 1;
    cout<<"Array after insertion: ";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    
    //array insertion at the start....
    cout<<"\n\n**INSERTION AT THE BEGINNING**";
    cout<<endl<<"Enter the element: ";
    cin>>first;
    for(int i = m; i >=0 ; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = first;
    int k = m+1;
    cout<<"Array after insertion: ";
    for(int i = 0; i < k ;i++){
        cout<<arr[i]<<" ";
    }
    
    //array insertion at any position...
    cout<<"\n\n**INSERTION AT ANY POSITION**";
    cout<<endl<<"Enter the element: ";
    cin>>any;
    cout<<endl<<"Enter the position: ";
    cin>>pos;
    for(int i = k; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = any;
    int z = k + 1;
    cout<<"Array after insertion: ";
    for(int i = 0;i < z; i++){
        cout<<arr[i]<<" ";
    }
}
