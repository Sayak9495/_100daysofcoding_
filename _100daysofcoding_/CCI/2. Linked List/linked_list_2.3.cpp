//delete the middle node from linked list

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

int count_list(node* root){
	int i=1;
	while((*root).next!=NULL){
		root = (*root).next;
		i++;
	}
	cout<<i<<endl;
	return i;
}

void delete_kth(node* root, int k){
	int i=0;
	node* prev_node=root;
	while((*root).next!=NULL){
		if (i==k){
			(*prev_node).next = (*root).next;
		}
		prev_node = root;
		root = (*root).next;
		i++;
	}
}


int main(){
	node* list = create_list();
	show_list(list);
	int count = count_list(list);
	delete_kth(list,count/2);
	show_list(list);
}
