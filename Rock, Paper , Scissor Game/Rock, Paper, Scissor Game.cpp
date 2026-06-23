#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));
	int userchoice;
	int computerchoice;
	int rounds = 1;
	int userwins = 0;
	int computerwins = 0;
	
	while (rounds <= 6){
	cout<<"\n\n1.Rock"<<endl;
	cout<<"2.Paper"<<endl;
	cout<<"3.Scissor"<<endl;
	cout<<"\nEnter your choice: ";
	cin>>userchoice;
	computerchoice = rand() % 3 + 1;
	
	
	switch(userchoice){
		case 1:
			if (computerchoice==1){
			cout<<"\nYou Choose: Rock";
			cout<<"\nComputer Choose: Rock";
			cout<<"\nIt's a draw!";
			}
			else if (computerchoice==2){
				cout<<"\nYou Choose: Rock";
				cout<<"\nComputer Choose: Paper";
				cout<<"\nComputer Wins!";
				computerwins++;
			}
			else if (computerchoice==3){
				cout<<"\nYou Choose: Rock";
				cout<<"\nComputer Choose: Scissors";
				cout<<"\nYou Wins!";
				userwins++;
			}
			break;
			
		case 2:
			if (computerchoice==1){
			cout<<"\nYou Choose: Paper";
			cout<<"\nComputer Choose: Rock";
			cout<<"\nYou wins!";
			userwins++;
			}
			else if (computerchoice==2){
				cout<<"\nYou Choose: Paper";
				cout<<"\nComputer Choose: Paper";
				cout<<"\nIt's a draw!";
			}
			else if (computerchoice==3){
				cout<<"\nYou Choose: Paper";
				cout<<"\nComputer Choose: Scissors";
				cout<<"\nComputer Wins!";
				computerwins++;
			}
			break;
			
		case 3:
			if (computerchoice==1){
			cout<<"\nYou Choose: Scissor";
			cout<<"\nComputer Choose: Rock";
			cout<<"\nComputer Wins!";
			computerwins++;
			}
			else if (computerchoice==2){
				cout<<"\nYou Choose: Scissor";
				cout<<"\nComputer Choose: Paper";
				cout<<"\nYou wins!";
				userwins++;
			}
			else if (computerchoice==3){
				cout<<"\nYou Choose: Scissor";
				cout<<"\nComputer Choose: Scissors";
				cout<<"\nIt's a draw!";
			}
			break;
		
		default:
			cout<<"\nInvalid Input";
			rounds--;
	}
	rounds++;
	}
	
	if (userwins==computerwins){
		cout<<"\n\n\n\t\t\t\t\tMatch Tied!";
		cout<<"\n\t\t\t\t\tYour Total Points: "<<userwins;
		cout<<"\n\t\t\t\t\tComputer Total Points: "<<computerwins;
	}
	else if (userwins>computerwins){
		cout<<"\n\n\n\t\t\t\t\tYOU WON!";
		cout<<"\n\t\t\t\t\tYour Total Points: "<<userwins;
		cout<<"\n\t\t\t\t\tComputer Total Points: "<<computerwins;
	}
	else if (userwins<computerwins){
		cout<<"\n\n\n\t\t\t\t\tCOPUTER WON!";
		cout<<"\n\t\t\t\t\tYour Total Points: "<<userwins;
		cout<<"\n\t\t\t\t\tComputer Total Points: "<<computerwins;
	}
	
	return 0;	
}