#include<iostream>
using namespace std;
class book
{
  private:
	string author,title;
	int book_id;
	float amount;
	static int book_id_generator;	
  public:

	void addNew(string t,string a)
		{
			title=t;
			author=a;
			
			book_id=++book_id_generator;
			
		}
	void display_book()
	{
		cout<<"\n Book Id:"<<book_id;
		cout<<"\n Title:"<<title;
		cout<<"\n Author:"<<author;
	}
	void search_book(int b_id){
			b_id==book_id;
			cout<<"\nBook with book id "<<book_id<<" found";
		
		
	}
	

	
	int get_book_id()
	{
		return book_id;
	}
	
	
};

int book::book_id_generator=100;
	
int main() 
{
 int books=0;
 book b[100];
 string author,title;
 int book_id;
 int choice;
 bool flag;
 int acc_no;
 
 do
 {
 	cout<<"\n---------------";
 	cout<<"\n Library";
 	cout<<"\n---------------";
 	cout<<"\n1.Add a new book";
 	cout<<"\n2.Display all books";
 	cout<<"\n3.Search for a book";
 	cout<<"\n0.Exit";
 	cout<<"\n---------------";
 	cout<<"\n:";
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 				cout<<"\nEnter Title,Author: "	;
 				cin>>title>>author;
 				
 				b[books].addNew(title,author);
 				cout<<"New book added!!";
 			
 				books++;
 				break;
 		case 2:
 				
 				 if (books == 0) {
        			cout << "\nNo books in library!!";
    			 }
				 else 
				 {
				 	for (int i = 0; i < books; i++) {
                      b[i].display_book();
        			}
    			}
    break;
 		case 3:
 				flag=false;
 				cout<<"\nEnter Book Id:";
 				cin>>book_id;
 				for(int i=0;i<books;i++)
 				  {
				if(book_id==b[i].get_book_id())
 						{
 						 flag=true;
 						 b[i].search_book(book_id);
 						 b[i].display_book();
						 break;
					}
			 	if(flag==false)
						cout<<endl<<book_id<<" Not found....";
 					}
 		
 				break;
 		case 0:
 				cout<<"Exiting....";
 				break;
 		default:
 				cout<<"Wrong choice given..";
 				break;
	 }
 }while(choice!=0);


}