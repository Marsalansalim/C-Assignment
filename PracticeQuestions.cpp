

Problem no 1:

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

	



Problem no 2:

#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
	int i,j,space,s,n;

	for(space=4,i=1;space>=1 && i<=8;space--,i+=2)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" X";	
		//next line
		cout<<"\n";
	}
	
	for(space=2,i=5;space<= && i>=1;space++,i-=2)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" X";	
		//next line
		cout<<"\n";
	}	
}

Problem no 3:

#include<iostream>
using namespace std;

class Shape{
	
	virtual void calculate_area()=0;
};

class rectangle:public Shape{
	protected:
		int l,b;
	public:
		void set_data(int l,int b){
			this->l=l;
			this->b=b;
		}
		void calculate_area(int l,int b){
			cout<<"\n The Area of rectangle is"<<l*b;
		}
	
};

class circle:public Shape{
	protected:
		int r;
	public:
		void_setr(int r){
			this->r=r;
		}
		void calculate_area(int r){
			cout<<"\n The Area of circle is"<<3.14*r*r;
		}
		
	
};

	
int main() {
    Shape   *shapes[2];//array of pointers
    shapes[0] = new rectangle(5.0, 4.0);//allocated memory 
    shapes[1] = new circle(3.0);//allocated memory

    for (int i = 0; i < 2; i++) {
        cout << "The area is: " << shapes[i]->calculate_area() << endl;
                                  //pointer to method
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];//free
    } 

    return 0;
}





