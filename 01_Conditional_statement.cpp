
Problem no 1:
#include <iostream>
using namespace std;

int main(){
    
    
    float age ;
    cout<<"Enter dogs age as human years :";
    cin>>age;
    if(age <= 2){
		cout<<"the dogs age is :"<<10.5*age;
	}
    else if(age > 2){
		cout<<"the dogs age is :"<<(2*10.5)+((age-2)*4);
	}
    else {
	cout<<"Invalid input";
    }
    return 0;
}


Problem no 2:
#include <iostream>
using namespace std;

int main(){
	int day,month;
	cout<<"\nEnter month: ";
	cin>>month;
	cout<<"Enter date: ";
	cin>>day;
	
	
	
	if ((month==12&&day==21 )|| (month==1 )|| (month==2)|| (month==3 && day==19)){
		cout<<"\n The Season is Winter";
		
	}
	else if ((month==3&&day==20 )|| (month==4 )|| (month==5)|| (month==6 && day==20)){
		cout<<"\n The Season is Spring";
		
	}
	else if ((month==6&&day==21 )|| (month==7 )|| (month==8)|| (month==9 && day==21)){
		cout<<"\n The Season is Summer";
		
	}
	else if ((month==9&&day==22 )|| (month==10 )|| (month==11)|| (month==12 && day==20)){
		cout<<"\n The Season is Autumn";
		
	}
	else{
		cout<<"\n Enter a valid Date and Month!!";
	}
}




Problem no 3:

#include <iostream>
using namespace std;

int main(){
	int dob, mob;
	cout<<"Enter date of birth: ";
	cin>>dob;
	cout<<"\nEnter month of birth: ";
	cin>>mob;
	
	
	
	
	if ((mob == 3 && dob >= 21 && dob <= 31 )|| (mob == 4 && dob >= 1 && dob <= 19)){
		cout<<"\n Your Astrological sign is: Aries";
		
	}
	else if ((mob  == 4 && dob >=20 && dob <= 30 )|| (mob == 5 && dob >= 1 && dob <= 20)){
		cout<<"\n Your Astrological sign is: Taurus";
		
	}
	else if ((mob == 5 && dob >= 21 && dob <= 31 )|| (mob == 6 && dob >= 1 && dob <= 20)){
		cout<<"\n Your Astrological sign is: Gemini";
		
	}
	else if ((mob == 6 && dob >= 21 && dob <= 30 )|| (mob == 7 && dob >= 1 && dob <= 22)){
		cout<<"\n Your Astrological sign is: Cancer";
		
	}
	else if ((mob == 7 && dob >= 23 && dob <= 31 )|| (mob == 8 && dob >= 1 && dob <=  22)){
		cout<<"\n Your Astrological sign is: Leo";
		
	}
	else if ((mob == 8 && dob >= 23 && dob <= 31 )|| (mob == 9 && dob >= 1 && dob <= 22)){
		cout<<"\n Your Astrological sign is: Virgo";
		
	}
	else if ((mob == 9 && dob >= 23 && dob <= 30 )|| (mob == 10 && dob >= 1 && dob <=  22)){
		cout<<"\n Your Astrological sign is: Libra";
		
	}
	else if ((mob == 10 && dob >= 23 && dob <= 31 )|| (mob == 11 && dob >= 1 && dob <= 21)){
		cout<<"\n Your Astrological sign is: Scorpio";
		
	}
	else if ((mob == 11 && dob >= 22 && dob <= 30 )|| (mob == 12 && dob >= 1 && dob <= 21)){
		cout<<"\n Your Astrological sign is: Sagittarius";
		
	}
	else if ((mob == 12 && dob >= 22 && dob <= 31 )|| (mob == 1 && dob >= 1 && dob <= 19)){
		cout<<"\n Your Astrological sign is: Capricorn";
		
	}
	else if ((mob == 1 && dob >= 20 && dob <= 31 )|| (mob == 2 && dob >= 1 && dob <= 19)){
		cout<<"\n Your Astrological sign is: Aquarius";
		
	}
	else if ((mob == 2 && dob >= 19 && dob <= 29)|| (mob == 3 && dob >= 1 && dob <= 20)){
		cout<<"\n Your Astrological sign is: Pisces";
		
	}
	else{
		cout<<"\n Enter a valid Date and Month!!";
	}
}



Problem no 4:

#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"The numbers which are divisible by 7 and Multiple of 5 between 1500 and 2700 are : ";
	for(number=1500;number<=2700;number++){
		
		if(number % 7==0 && number % 5==0){
			
			cout<<"\n"<<number;
		}
	}
}



Problem no 5:


#include <iostream>
using namespace std;

int main(){
    
    int num, odd = 0, even = 0;
    do{
        cout<<"Enter numbers as you wish & to stop, enter -no: ";
        cin>>num;
        if(num%2==0){
            even += 1; 
        }else if(num>0 && num%2!=0) {
            odd += 1;
        }
    } while(num > 0);
    cout<<"Number of evens: "<<even
        <<"\nNumber of odds: "<<odd;
}




Problem no 6 :


#include<iostream>
using namespace std;

int main(){
	int n;
	for(n=0;n<=6;n++){
		if(n==3 || n==6){
			continue;
		}
		else{
			cout<<"\n"<<n;
		}
	}
}


Problem no 7:

#include<iostream>
using namespace std;

int main(){
	int n;
	
	for(n=1;n<=50;n++){
		if(n % 3==0 && n % 5==0){
			cout<<"\nFizzBuzz";
    	}
		else if(n % 3==0 && n % 5!=0){
			cout<<"\nFizz";
		}
		else if(n % 5==0 && n % 3!=0){
			cout<<"\nBuzz";
		}
		
		else{
			cout<<"\n"<<n;
		}
	}
}


Problem no 8:


#include <iostream>
using namespace std;

int main(){
	
    
    int i, temp;
    bool flag = true;

    for(i=100; i<= 400; i++){
        temp = i;
        while(temp>0){
            int digit = temp%10;
            temp = temp/10;
            if (digit%2 == 0){
                flag = true;
                continue;
            }else {
                flag = false;
                break;
            }
        }
        if (flag) cout<<i<<" , ";
    }
}
