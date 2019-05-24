// rempve dups from unsorted linked list.

#include<iostream>
#include<map>
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

void remove_dups(node* root){
	map <int, int> dict;
	node* prev_node=root;
	while((*root).next!=NULL){
		int data = (*root).data;
		if(dict[data]){
			(*prev_node).next = (*root).next;
		}
		else{
			dict[data]=1; 
			prev_node = root;
		}
		root = (*root).next;
	}
	if(dict[(*root).data]){
		(*prev_node).next = (*root).next;
	}
}


int main(){
	node* list = create_list();
	show_list(list);
	remove_dups(list);
	show_list(list);
}
