#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int i;
int milih[3];
int yagak = 1;

void pilihan()
{
	for(int i = 0; i <= 3; i++)
	{
		if(milih[i] == 1){
			cout<<" Anda = BATU"<<endl;
			srand(time(NULL)); 
        	int com = rand() % 10;
        	if (com<=3 && com>=1){
                cout << " Computer = BATU" << "\n\n";
                cout << " ==============" << endl;
                cout << " ==> SERI ! <==" << endl;
                cout << " ==============" << endl;
            }
			else if (com<=6 && com>=4){
                cout << " Computer = GUNTING" << "\n\n";
                cout << " =====================" << endl;
                cout << " ==> Anda Menang ! <==" << endl;
                cout << " =====================" << endl;
            }
        	else{
                cout << " Computer = KERTAS" << "\n\n";
                cout << " ====================" << endl;
                cout << " ==> Anda Kalah ! <==" << endl;
                cout << " ====================" << endl;
            } cout << endl;
    	}
		if(milih[i] == 2){
			cout<<" Anda = GUNTING"<<endl;
			srand(time(NULL)); 
        	int com = rand() % 10;
        	if (com<=3 && com>=1){
                cout << " Computer = GUNTING" << "\n\n";
                cout << " ==============" << endl;
                cout << " ==> SERI ! <==" << endl;
                cout << " ==============" << endl;
            }
        	else if (com<=6 && com>=4){
                cout << " Computer = KERTAS" << "\n\n";
                cout << " =====================" << endl;
                cout << " ==> Anda Menang ! <==" << endl;
                cout << " =====================" << endl;
            }
        	else{
                cout << " Computer = BATU" << "\n\n";
                cout << " ====================" << endl;
                cout << " ==> Anda Kalah ! <==" << endl;
                cout << " ====================" << endl;
            } cout << endl;
    	}
		if(milih[i] == 3){
			cout<<" Anda = KERTAS"<<endl;
			srand(time(NULL)); 
        	int com = rand() % 10;
        	if (com<=3 && com>=1)
            {
                cout << " Computer = KERTAS" << "\n\n";
                cout << " ==============" << endl;
                cout << " ==> SERI ! <==" << endl;
                cout << " ==============" << endl;
            }
        	else if (com<=6 && com>=4)
            {
                cout << " Computer = BATU" << "\n\n";
                cout << " =====================" << endl;
                cout << " ==> Anda Menang ! <==" << endl;
                cout << " =====================" << endl;
            }
        	else
            {
                cout << " Computer = GUNTING" << "\n\n";
                cout << " ====================" << endl;
                cout << " ==> Anda Kalah ! <==" << endl;
                cout << " ====================" << endl;
            } cout << endl;
		}	
	}
}
	

int main()
{
    a:cout << " =============================" << endl;
    cout << "  Selamat Datang di GAME SUIT " << endl;
    cout << " =============================" << "\n\n";
    cout << " Ayo Pilih!"<< endl;
    cout << " 1. BATU \n 2. GUNTING \n 3. KERTAS\n\n";
    cout << " Pilihan Anda?  1/2/3 : ";
    while(yagak){
    cin >> milih[i];
    cout<< endl;
    pilihan();
    
    cout <<"Main Lagi?"<<endl;
    cout <<"1. Ya, \n2. Tidak \n -> ";
    cin >> yagak;
    
    if(yagak == 1){
		cout << " \nAyo Pilih!" << endl;
    	cout << " 1. BATU \n 2. GUNTING \n 3. KERTAS\n\n";
    	cout << " Pilihan Anda?  1/2/3 : ";
    	cin >> milih[i];
    	cout<< endl;
    	pilihan();
		}
	}else{
		break;
	}
	}	
}
