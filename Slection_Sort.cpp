#include <iostream>
using namespace std;

int i, j;
int Urut, Tmp, pil;
int A[9]={10,2,100,50,35,25,70,65,85};
int n = sizeof(A)/sizeof(A[0]);

void display(){
	for(i = 0; i < n; i++) 
	{
		cout<< "["<<A[i]<<"] ";
	}cout<<endl;
}

void ascending(){
	int iMin;
	Urut = 1;
	for(i = 0; i < n - 1; i++) 
	{
		iMin = i;
		for(j = Urut; j < n; j++) 
		{
			if(A[j] < A[iMin]) 
			{
				iMin = j;
				if(A[i] != A[iMin]) 
				{
					Tmp = A[i];
					if(A[i] > A[iMin]) 
					{
						A[i] = A[iMin];
						A[iMin] = Tmp;
					}
				}
			}
		}
		Urut = Urut + 1;
	}
	display();
	cout<<endl;	
}

void descending(){
	int iMin;
	Urut = 1;
	for(i = 0; i < n - 1; i++) 
	{
		iMin = i;
		for(j = Urut; j < n; j++) 
		{
			if(A[j] > A[iMin]) 
			{
				iMin = j;
				if(A[i] != A[iMin]) 
				{
					Tmp = A[i];
					if(A[i] < A[iMin]) 
					{
						A[i] = A[iMin];
						A[iMin] = Tmp;
					}
				}
			}
		}
		Urut = Urut + 1;
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
	cout<<"SELECTION SORT\n";   
	
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

