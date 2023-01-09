#include <iostream>
using namespace std;

// membuat struktur dari sebuah node
struct node{
    int data;
    node *right;
	node *left;
}; 

// membuat sebuah node menggunakan struktur
node* create(int data){
	node* tmp = new node();
	tmp->data = data;
	tmp->right = tmp->left = NULL;
	return tmp;
}

// memasukkan create node kedalam tree
void insert(node* &root, int data){
	if(root == NULL)
		root = create(data);
	else if(root->data > data)
		insert(root->left, data);
	else
		insert(root->right, data);
}

// menampilkan secara Preorder
void preOrder(node* root){
	if(root != NULL){
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

// menampilkan secara Inorder
void inOrder(node* root){
	if(root != NULL){
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

// menampilkan secara Postorder
void postOrder(node* root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

int main(){
	node* root = NULL;
	int n;
	int pil;
	
	cout<<"=============================\n";
	cout<<"Nama	: Ajeng Indar Arsyida\n";
	cout<<"NPM	: 2213025034\n";     
	
	do{
		cout<<"============================="<<endl;
		cout<<"Pilih salah satu!"<<endl;
		cout<<"1. Insert Node "<<endl;
		cout<<"2. Traverse Preorder   "<<endl;
		cout<<"3. Traverse Inorder  "<<endl;
		cout<<"4. Traverse Postorder "<<endl;
		cout<<"5. End "<<endl;
		cout<<"Inputkan Pilihan Anda : ";
		cin>>pil;
		cout<<"============================="<<endl;
		cout<<endl;
		
		if(pil == 1){
			cout<<"Input : ";
			cin>>n;
			insert(root, n);
			cout<<endl;	
		}
		else if(pil==2){
			if(root != NULL){
            	preOrder(root);
				cout<<"\n\n";
			}else{
    			cout<<"Masih kosong!\n\n";
			}
		}
		else if(pil==3){
			if(root != NULL){
            	inOrder(root);
				cout<<"\n\n";
			}else{
    			cout<<"Masih kosong!\n\n";
			}
		}
		else if(pil==4){
			if(root != NULL){
            	postOrder(root); 
				cout<<"\n\n";
			}else{
    			cout<<"Masih kosong!\n\n";
			}
		}
		else{
			cout<<"*** ARIGATOGOZAIMAS ***";
		}
	}while(pil!=5);
	return 0; 
}
		



