using namespace std;
#include<iostream>

void bubbleSort(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n-1; i++){
	    for (j = 0; j < n-i-1; j++){
	        if (a[j] > a[j+1]){
	            temp = a[j];
	            a[j] = a[j+1];
	            a[j+1] = temp;
	        }
	    }
	}	
}

void display(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int n;
	cout<<"Enter the size of the Array: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	bubbleSort(a, n);
	cout<<"Array after sorting: \n";
    display(a, n);
	return 0;
}