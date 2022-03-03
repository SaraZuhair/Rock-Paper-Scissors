#include <iostream>
#include<cstdlib>
#include<ctime>

//this is a program that if the real user wins 3 times they win the game if they lose 
//even once they will lose the whole game so they need to start again if they wanted.
//ROCK PAPER SCISSORS GAME

using namespace std;


int computerCh(){

    srand(time(0));
	int random = (rand() % 3)+1;
	return random;
}

int main() {
	
	int userChoice,computerChoice;
	int rock=1,paper=2,scissors=3;
	int count=0;
	bool x=false;
	char option;
	
		cout<<"--------------------------------------------------ROCK PAPER SCISSORS--------------------------------------------------"<<endl;
	while(count<3){
	

    cout<<"please Select one of the options below to play:"<<endl;
    cout<<"1-Rock"<<endl;
    cout<<"2-paper"<<endl;
    cout<<"3-scissors"<<endl;
    cin>>userChoice;
    
//    computerChoice=computerCh();
computerChoice=1;

 
				if(userChoice==1){
					cout<<"you chose Rock"<<endl;
				}
				
				else if(userChoice==2){
					cout<<"you chose Paper"<<endl;
				}
				
				else if(userChoice==3){
					cout<<"you chose Scissors"<<endl;
				}
				
				else{
					cout<<"invalid"<<endl;
					cout<<"please select from 1-3"<<endl<<endl;
					main();
					break;
					
				}
				
/////////////////
				if(computerChoice==1){
					cout<<"computer chose Rock"<<endl;
				}
				
				else if(computerChoice==2){
					cout<<"computer chose Paper"<<endl;
				}
				
				else if(computerChoice==3){
					cout<<"computer chose Scissors"<<endl;
				}
				
				else{
					cout<<"invalid"<<endl;
					break;
				}
	
////////////////
			if(userChoice==1 && computerChoice==1){
				cout<<"tied"<<endl;
				x=false;
			}
			
			else if(userChoice==1 && computerChoice==2){
				cout<<"computer wins"<<endl;
				x=false;
			}
			
			else if(userChoice==1 && computerChoice==3){
				cout<<"you win"<<endl;
				x=true;
			}
			
//////////////////
			
			else if(userChoice==2 && computerChoice==2){
				cout<<"tied"<<endl;
				x=false;
			}
			
			else if(userChoice==2 && computerChoice==1){
				cout<<"you win"<<endl;
				x=true;
			}
			
			else if(userChoice==2 && computerChoice==3){
				cout<<"computer wins"<<endl;
				x=false;
			}
///////////////
			
			else if(userChoice==3 && computerChoice==3){
				cout<<"tied"<<endl;
				x=false;
			}
			
			else if(userChoice==3 && computerChoice==1){
				cout<<"computer wins"<<endl;
				x=false;
			}
			
			else if(userChoice==3 && computerChoice==2){
				cout<<"you win"<<endl;
				x=true;
			}
			
			
			if(x==true&&count<3)
			{	
			   cout<<"its your "<<count+1<<" win"<<endl;
			
			}
			
		
			
			
			else if(x==false){
				
				cout<<"you have already lost"<<endl;
				cout<<"you need to win three times to win the game"<<endl;
				cout<<"you need to start again!"<<endl;
				system("pause");
				cout<<"do you want to start again? y/n"<<endl;
				cin>>option;
				cout<<endl<<endl;
				
				
				if(option=='y')
				{
				main();	
				}
				
				
				else if(option=='n'){
					
					cout<<"enjoy your day, good bye"<<endl;
					break;
				}
				
				else{
					cout<<"invalid option"<<endl;
					
				}
				
				
			}
			
			else{
				cout<<"fine"<<endl;
			}
			
			
			cout<<endl<<endl;
			count++;
			
		}	
			
	
	return 0;
}


