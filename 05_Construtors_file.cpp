


Problem no 1:
#include<iostream>
using namespace std;

class Student{
	private:
		int id ;
		string name;
		float score;
	public:
		void set_data(int id,string name ,float score){
			this->id=id;
			this->name=name;
			this->score=score;
			
		}
		void display_details(){
			cout<<endl<<"Student Details: "<<endl<<" Id: "<<id<<endl<<"Name: "<<name<<endl<<" Score: "<<score;
		}
};

int main(){
	Student s;
	s.set_data(101,"Arsalan",88.9);
	s.display_details();
	
}



Problem no 2:

#include<iostream>
using namespace std;

class LibraryBook{
	private:
		string title,author;
		string isbn;
	public:
		LibraryBook(string title,string author,string isbn){
			
			this->title=title;
			this->author=author;
			this->isbn=isbn;
			
			cout<<endl<<" Book "<<title<<"  by "<<author<<"  with ISBN "<<isbn<<" is created";
			
		}
		LibraryBook(string title,string author){
			
			this->title=title;
			this->author=author;
			
			cout<<endl<<" Book "<<title<<" by "<<author<<" is created ";
			
		}
		
		~LibraryBook(){
			cout<<"\nBook "<<title<<" is being destroyed. ";
		}
};


int main(){
	LibraryBook("The Hobbit","J.R.R. Tolkien");
	LibraryBook("C++ Primer","Stanley B. Lippman","978-0-321-71411-4");




Problem no 3:


#include<iostream>
using namespace std;

class Product{
	private:
		string name;
		int id ;
		float price;
	public:
		Product(string name,int id,float price){
			this->name=name;
			this->id=id;
			this->price=price;
		}
		void display_details(int i){
			cout<<"\nProduct: "<<i+1<<":"<<name<<"(ID:"<<id<<", Price: $"<<price<<")";
		}
};

int main(){
	
	 Product p[3] =
	{
        Product("Laptop", 101, 1200.50),Product("Mouse", 102, 25.00),Product("Keyboard", 103, 75.75)
    };
     for (int i = 0; i < 3; i++) {
        p[i].display_details(i);
    }
	
}


Problem no 4:


#include<iostream>
using namespace std;
class Calculator{
	public:
		
		int add(int a,int b){
			return a+b;
		}
		double add(double a,double b){
			return a+b;
		}
		double add(int a,int b,double c){
			return a+b+c;
		}
};

int main(){
	Calculator c;
	
	cout<<"\nThe sum  of (5,10) : "<<c.add(5,10);
	cout<<"\nThe sum of (5.5,10.5) : "<<c.add(5.5,10.5);
	cout<<"\nThe sum of (5,10,2.5) : "<<c.add(5,10,2.5);
	
}



Problem no 5:

#include <iostream>
using namespace std;

class Vector2D {
private:
    double x, y;

public:
   
    Vector2D(double xVal = 0.0, double yVal = 0.0) {
        x = xVal;
        y = yVal;
    }

    
    Vector2D operator+(const Vector2D& other) {
        return Vector2D(x + other.x, y + other.y);
    }

    
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    
    Vector2D v1(3.5, 4.5);
    Vector2D v2(1.5, 2.5);

   
    Vector2D result = v1 + v2;

    
    cout << "v1 + v2 = ";
    result.display();

    return 0;
}


Problem no: 6

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int employee_id;

public:
   
    Employee(string n, int id) {
        name = n;
        employee_id = id;
    }

    
    void display_info() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
    }
};


class Manager : public Employee {
private:
    int team_size;

public:
    
    Manager(string n, int id, int t_size) : Employee(n, id) {
        team_size = t_size;
    }

    void display_info() {
        
        Employee::display_info();
        cout << "Team Size: " << team_size << endl;
    }
};

int main() {
 
    Manager m1("Pratik Sadakal", 101, 5);
    
    cout << "Manager Information:" << endl;
    m1.display_info();

    return 0;

}

Problem no :7

#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
   
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
protected:
    int student_id;

public:
  
    Student(string n, int a, int id) : Person(n, a) {
        student_id = id;
    }

    
    void display_info() {
        Person::display_info(); // 
        cout << "Student ID: " << student_id << endl;
    }
};


class GraduateStudent : public Student {
private:
    string thesis_title;

public:
   
    GraduateStudent(string n, int a, int id, string thesis)
        : Student(n, a, id) {
        thesis_title = thesis;
    }

    
    void display_info() {
        Student::display_info(); // Call Student's display_info()
        cout << "Thesis Title: " << thesis_title << endl;
    }
};

int main() {
  
    GraduateStudent grad("Arsalan", 25, 2023001, "AI in Healthcare");

    cout << "Graduate Student Information:" << endl;
    grad.display_info();

    return 0;
}


Problem no:9



#include<iostream>
using namespace std;
class BankAccount;
void perform_audit(BankAccount & account);
class BankAccount{
	private:
		double balance;
	public:
		BankAccount(){
			balance = 0;
			cout<<"initial balance:"<<endl;
		}
		void deposit(double amount){
			cout<<"Depositing "<<amount<<"...."<<endl;
			balance+=amount;
			cout<<"currebt balance:"<<balance<<endl;
		}
		
		friend void perform_audit(BankAccount & account);
			
};

void perform_audit(BankAccount & account){
	cout<<"Audit performed. Audit Balance:"<<account.balance<<endl;
}
int main(){
	BankAccount account;
	account.deposit(500.0);
	perform_audit(account);
	return 0;
}



Problem no: 10


#include<iostream>
using namespace std;
class Document{
	public:
		virtual void print()=0;
		virtual ~Document() {
		}
		
};
class PDFDocument:public Document{
	   public:
	   	  void print() override{
			 cout<<"Printing PDF Document...."<<endl;
			 }
};
class WordDocument:public Document{
	    public:
	    	void print() override{
			cout<<"Printing Word Document..."<<endl;
			}
		
};

int main(){
  Document* pdfDoc= new PDFDocument();
  Document* wordDoc= new WordDocument();
  
  pdfDoc->print();
  wordDoc->print();
  delete pdfDoc;
  delete wordDoc;
  return 0;	
}









