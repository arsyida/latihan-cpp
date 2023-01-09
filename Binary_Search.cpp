#include <iostream>
using namespace std;

int i, j, x;
int Urut, Tmp, pil;
int A[] = {3, 25, 75, 5, 10, 1, 18, 50, 35, 25};
int n = sizeof(A) / sizeof(A[0]);
void display();

void selectionSort(){
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
}

int binarySearch(int A[], int kiri, int kanan, int x)
{
	while (kiri <= kanan) {
        int mid = kiri + (kanan - kiri) / 2;

		if (A[mid] == x)
			return mid;

		if (A[mid] < x)
			kiri = mid + 1;

		else
			kanan = mid - 1;
	}
	return -1;
}

void display(){
	int result = binarySearch(A, 0, n - 1, x);
	(result == -1)
		? cout << "Element tidak ada dalam array" 
		: cout << "Element ada di index " << result;
	cout<<"\n\n";
}

int addChoice(){
	switch(pil){
		case 1 :
			cout << "Cari : "; cin >> x;
			selectionSort();
			binarySearch(A, 0, n - 1, x);
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
	cout<<"BINARY SEARCH\n";   
	
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

