#include<iostream>
using namespace std;

int main(){

int wicket=0,ball=0,over=0,runs=0;
int w=0,r=0,current_runs,total_runs=0;
char choice;

cout<<"~~~~~SCORE IS~~~~~~~"<<endl;

while(wicket<10 && ball<=6){
	

cout<<"enter w  for wicket and r for runs:";
cin>>choice;

if(choice=='w'){
	wicket++;
}else if(choice=='r'){
	cout<<"enter you run\n";
	cin>>current_runs;
	total_runs=total_runs + current_runs;
}else{
	cout<<"invalid choice:\n";
	continue;
}


ball++;
if(ball==6){
	over++;
	ball=0;
}

cout<<"wicket:"<<wicket<<endl;
cout<<"ball:"<<ball<<endl;
cout<<"over:"<<over<<endl;
cout<<"total runs:"<<total_runs<<endl;

}
return 0;
}
