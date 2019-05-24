//print kth to last node in linked list.

#include<iostream>
using namespace std;


struct node{
	int data;
	node *next;
};

node* create_list(){
	int x;
	cin>>x;
	
	node* list;
	list = NULL;
	
	while (x--){
		node* temp = new node();
		cin>>(*temp).data;
		if (list==NULL){
			list=temp;
		}
		else{
			node* temp_ = list;
			while((*temp_).next!=NULL){
				temp_ = (*temp_).next; 
			}
			(*temp_).next = temp;
		}
	}
	return list;
}

void show_list(node* root){
	cout<<"-----------"<<endl;
	while((*root).next!=NULL){
		cout<<(*root).data<<endl;
		root = (*root).next;
	}
	cout<<(*root).data<<endl<<endl;
}

void show_kth(node* root,int k){
	int i=0;
	cout<<"-----------"<<endl;
	while((*root).next!=NULL){
		if (i>=k){
			cout<<(*root).data<<endl;
		}
		root = (*root).next;
		i++;
	}
	cout<<(*root).data<<endl;
}


int main(){
	node* list = create_list();
	show_list(list);
	int k;
	cin>>k;
	show_kth(list,k);
}
