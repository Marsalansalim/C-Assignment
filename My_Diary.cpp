
Problem no 1:


#include <iostream>
#include <fstream>
#include <string>
#include<chrono>
#include<ctime>

using namespace std;

string secure(string line,int key){
	string processed_data="";
	for(char c:line){
		int d=c;
		processed_data+=char(d^key);
	}
	return processed_data;
	 
}

int main(){
	string name ,data,line;
	int key,choice;
	
	cout<<"\n -------- MY DIARY--------";
	
	do{
		cout<<endl<<"  Select the choice: ";
		cout<<"\n  1. Read a file . ";
		cout<<"\n  2. Write a file . ";
		cout<<"\n  0. Exit";
		cout<<"\n  Your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:{
			
			
				cout <<"Enter username: ";
				cin>>name;
				ifstream myFile(name+".txt");
				if(!myFile.is_open()){
					cerr<<"Couldn't find file with"<<name<<".txt"<<endl;
					return 1;
				}
				else{
					cout<<"\nEnter Secure key:";
					cin>>key;
					while(getline(myFile,data)){
					
						cout<<secure(data,key)<<endl;
						
					}
				    myFile.close();
				}
				break;
				}
			
			case 2:{
				
			
				
				cout<<"\nEnter username:";
				cin>>name;
				ofstream myFile(name+".txt",ios::app);
				if(!myFile.is_open()){
					cerr<<"Couldn't find file with"<<name<<".txt"<<endl;
					return 1;
				}else{
					cout<<"\nEnter secure key:";
					cin>>key;
					getline(cin,data);
					auto now = chrono::system_clock::now();
					time_t now_time = chrono::system_clock::to_time_t(now);
					myFile<<"\n <----------New Entry Added on Time :"<< ctime(&now_time)<<"---------->"<<endl;
					
					cout<<"\n File is ready to write.\n";
					cout << "\n(Type QUIT on a new line to finish writing)\n\n";
					
					while(true){
					
					getline(cin,data);
					if(data=="QUIT"){
						cout<<"Terminatting the writing process.Storing the file...";
						break;
					}
					myFile<<secure(data,key)<<endl;
					}
					myFile.close();
				}
				break;
				}
			case 0:
				cout<<"Exiting the process...";
				break;
				
			default:
				cout<<"Wrong choice selected!!";
				break;
				
				
				
				
				
		}
		
	}while(choice!=0);
	
    

    
}



