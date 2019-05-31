// Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0. 

#include<iostream>
using namespace std;

void create_matrix(int *arr,int m,int n){
	int i,j;
	
	cout<<"Enter matrix row wise"<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>*((arr+i*n) + j);
		}
	}
}

void show_matrix(int *arr,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<*((arr+i*n) + j);
		}
		cout<<endl;
	}
	cout<<endl;
}

void change_row_column_to_zero(int *arr,int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		int flag=0;
		for(j=0;j<n;j++){
			if(*((arr+i*n) + j)==0){
				flag=1;
				break;
			}
		}
		if (flag){
				break;
			}
	}
	for (int x=0;x<n;x++){
		*((arr+i*n) + x) = 0;
		//arr[i][x]=0;
	}
	for (int x=0;x<m;x++){
		*((arr+x*n) + j) = 0;
		//arr[x][j]=0;
	}
}

int main(){
	cout<< "Enter M and N seperated y space for matrix\n";
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	
	create_matrix((int *)arr, m, n);
	
	show_matrix((int *)arr, m, n);
	
	change_row_column_to_zero((int *)arr, m, n);
	
	show_matrix((int *)arr, m, n);
	
	return 1;
}
