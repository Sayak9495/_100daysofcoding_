//Rotate [nxn] matrix by 90 degree.

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	//create_matrix()
	int arr[n][n];
	cout<<"Enter matrix row wise"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
		cout<<endl;
	}

	//show_matrix(arr, n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	//rotate_90() not inplace
	int ans_arr[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			ans_arr[j][n-i-1] = arr[i][j];
		}
	}
	
	
	//show_matrix(arr, n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ans_arr[i][j];
		}
		cout<<endl;
	}
	
	//rotate_90() inplace
	
}
