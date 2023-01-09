#include <iostream>
using namespace std;

string nama;
string npm; 
int nilai;
int pil; 


struct check{
    string npm, nama;
    int nilai;
    check *next;
}; 

check *head = NULL, *tail, *cur, *newNode;

string kelulusan(int nilai){
    string hasil = (nilai >= 60) ? "Selamat Anda Lulus" : "Maaf Anda Gagal";
	return hasil;
}

void data(){
	cout<<"Masukkan Data Anda Dibawah"<<endl;
	cout<<"Nama	: ";
	cin.ignore();
	getline(cin, nama);
    cout<<"NPM	: "; 
	cin>>npm;
    cout<<"Nilai	: "; 
	cin>>nilai;
}

void display(){
	if (head==NULL)
		cout<<"Data Kosong! Silahkan Masukkan Data\n\n";     
	else{   
		cur = head;
	    while(cur != NULL){
	        cout<<"Nama	: "<<cur->nama<<endl;
	        cout<<"NPM	: "<<cur->npm<<endl;
	        cout<<"Nilai	: "<<cur->nilai<<endl;
			cout<<kelulusan(cur->nilai);
			cout<<"\n\n";
	        cur = cur->next;
		}
	}
}

void baru(){
	newNode = new check();
	newNode->nama = nama;
    newNode->npm = npm;
    newNode->nilai = nilai;
    newNode->next = NULL;
}

void addFirst(){
	baru();
	if(head==NULL){
		head=newNode;
		tail=newNode;
		tail->next=NULL;
	}else{
		newNode->next = head;
		head = newNode;
	}cout<<endl;
}

void addLast(){
	baru();
	if(head == NULL){
		head = newNode;
	}else{
		tail->next = newNode;
	}
	tail = newNode;
	tail->next = NULL;
	cout<<endl;
}

int addChoice(){
	if(pil == 1){
		data();
		addFirst();
	}
	else if(pil==2){
		data();
		addLast();
	}
	else if(pil==3){
		display();
	}
	else{
		cout<<"*** ARIGATOGOZAIMASU ***";
	} 
} 

int main(){
	cout<<"=============================\n";
	cout<<"Nama	: Ajeng Indar Arsyida\n";
	cout<<"NPM	: 2213025034\n";     
	
	do{
		cout<<"============================="<<endl;
		cout<<"Pilih salah satu!"<<endl;
		cout<<"1. Add First   "<<endl;
		cout<<"2. Add Last  "<<endl;
		cout<<"3. Display    "<<endl;
		cout<<"4. End    "<<endl;
		cout<<"Inputkan Pilihan Anda : ";
		cin>>pil;
		cout<<"============================="<<endl;
		cout<<endl;
        addChoice();
		}while(pil!=4);
	return 0; 
} 


 
