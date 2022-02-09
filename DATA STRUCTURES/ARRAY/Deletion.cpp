using namespace std;
#include<iostream>

void display(int n, int a[]){
    cout <<endl<<"Array after deletion: ";
    for (int i=0; i<n; i++){
	    cout<<a[i]<<" ";
	}
}

int main(){

	int n,i;
	cout<<"How many elements you want to enter: ";
	cin>>n;
	int a[n];

	cout<<"Enter "<<n<<" elements: ";
	for(i=0;i<n;i++){
	    cin>>a[i];
	}
	cout<<endl<<"INITIAL ARRAY : ";
	for(i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	
	cout<<"\n\n*** DELETING FROM LAST POSITION ***";
    n = n - 1;
	display(n, a);
	
	cout<<"\n\n*** DELETING FROM FIRST POSITION ***";
	n = n - 1;
    for (i=0; i<n; i++){
        a[i] = a[i+1];
    }
	display(n, a);
	
	cout<<"\n\n*** DELETING FROM ANY POSITION ***";
	int ele;
	cout<<"\nEnter the element you want to enter: ";
	cin>>ele;
	
    for (i=0; i<n; i++){
        if (a[i] == ele){
            break;
        }
    }
    n = n - 1;
    for (int j=i; j<n; j++){
        a[j] = a[j+1];
    }
    display(n, a);
	
}
