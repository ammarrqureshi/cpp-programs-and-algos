#include <iostream>
using namespace std;

int main(){
	int MIN= 8;
	int MAX= 15;
	
	int total_players, total_teams, playerPerTeam, leftOvers;
	
	cout<<"How many players per team: "<<endl;
	cin>>playerPerTeam;
	while(playerPerTeam < MIN || playerPerTeam > MAX){
		cout<<"Player count for each team should be between 8 and 15!"<<endl;
		cout<<"How many players per team: "<<endl;
		cin>>playerPerTeam;
	}
	cout<<"Availaible number of players: "<<endl;
	
	cin>>total_players;
	
	cout<<"Total No. of Teams would be: "<<endl;
	total_teams = total_players/playerPerTeam;
	cout<<total_teams<<endl;
	leftOvers = total_players%playerPerTeam;
	if(leftOvers >8 && leftOvers<15){
		total_teams++;
		leftOvers =- leftOvers; 
	}
	else{
		
	cout<<"Left Overs: "<<leftOvers<<endl;
	}
	
}
