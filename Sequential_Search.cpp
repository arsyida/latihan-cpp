#include <iostream>
using namespace std;

int x, pil;
int A[] = {3, 25, 75, 5, 10, 1, 18, 50, 35, 25};
int n = sizeof(A) / sizeof(A[0]);

int sequentialSearch(int A[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (A[i] == x)
			return i;
	return -1;
}

void display(){
	int result = sequentialSearch(A, n, x);
	(result == -1)
		? cout << "Element tidak ada dalam array"
		: cout << "Element ada di index " << result;
	cout<<"\n\n";
}

int addChoice(){
	switch(pil){
		case 1 :
			cout << "Cari : "; cin >> x;
			sequentialSearch(A, n, x);
			display();
			break;
			
		case 2 :
			cout<<"*** ARIGATOGOZAIMASU ***";
			break;
	} 
} 

int main()
{
	cout<<"=============================\n";
	cout<<"Nama	: Ajeng Indar Arsyida\n";
	cout<<"NPM	: 2213025034\n";  
	cout<<"SEQUENTIAL SEARCH\n";   
	
	do{
		cout<<"============================="<<endl;
		cout<<"Pilih salah satu!"<<endl;
		cout<<"1. Search   "<<endl;
		cout<<"2. End    "<<endl;
		cout<<"Inputkan Pilihan Anda : ";
		cin>>pil;
		cout<<"============================="<<endl;
		cout<<endl;
        addChoice();
	}while(pil!=2);
	return 0;
}

