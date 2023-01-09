#include <iostream>
using namespace std;

int A[9]={10,2,100,50,35,25,70,65,85};
int i,j,simpan,k,pil;
int n = sizeof(A)/sizeof(A[0]);

void swap(int a,int b){
	int temp;
	temp=A[b];
	A[b]=A[a];
	A[a]=temp;
}

void display(){
	for (int i=0; i < n ; i++)
	{
		cout<<"["<<A[i]<<"] ";
	}cout<<endl;
}


void ascending(){
	for (int i=1; i<n;i++)
	{
		for (int j=n-1; j>=i;j--)
		{
			if (A[j]<A[j-1]){
				swap(j,j-1);
			}
		}
	}
	display();
	cout<<endl;
}

void descending(){
	for (int i=1; i<n; i++)
	{
		for (int j=n-1; j>=i; j--)
		{
			if (A[j]>A[j-1]){
				swap(j,j-1);
				/*simpan=A[j];
				A[j]=A[j+1];
				A[j+1]=simpan;*/
			}
		}
	}
	display();
	cout<<endl;
}

int addChoice(){
	switch(pil){
		case 1 :
			ascending();
			break;
		case 2 :
			descending();
			break;
		case 3 :
			cout<<"*** ARIGATOGOZAIMASU ***";
			break;
	} 
} 

int main(){
	
cout<<"=============================\n";
	cout<<"Nama	: Ajeng Indar Arsyida\n";
	cout<<"NPM	: 2213025034\n";  
	cout<<"BUBBLE SORT\n";   
	
	do{
		cout<<"============================="<<endl;
		cout<<"Pilih salah satu!"<<endl;
		cout<<"1. Ascending   "<<endl;
		cout<<"2. Descending  "<<endl;
		cout<<"3. End    "<<endl;
		cout<<"Inputkan Pilihan Anda : ";
		cin>>pil;
		cout<<"============================="<<endl;
		cout<<endl;
        addChoice();
		}while(pil!=3);

return 0;
}

