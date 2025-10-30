#include <iostream> 
#include <vector> 
using namespace std;
class Shopping_List_App
{
	private:
		vector<string> my_list;
	public:
		bool search_item(string item)
		{
			for(string i: my_list)
			{
				if(i==item)
					return  true;
		    }
		    return false;
		}
		
		void add(string item)
		{
			if(search_item(item)==false)
			{
				my_list.emplace_back(item);
		        cout<<"\n"<<item<<" added in list.";
			}
			else
				cout<<"\n"<<item<<" already in list";
		}
		
		void delete1(string list){
			if(search_item(item)==false){
				cout<<"\nItem is not present in the list!!";
			}
			else{
				my_list.erase(item);
				cout<<"\n"<<item<<" Deleted sucessfully!!";
				
			}
		}
		void display(){
			
			if(!my_list.empty()){
		   		cout<<"\nLIST HAS\n";
		   		cout<<"---------------------------------";
				for(int i=0;i<my_list.size();i++)
				{
					cout<<"\n"<<(i+1)<<". "<<my_list[i]<<endl;
				  }
			}    
		}
		
		    
		
			
		
};



int main() {
	int choice;
	
	cout<<"\n----------------------";
	cout<<"\n Smart Shopper app";
	cout<<"\n----------------------";
	
	do{
		cout<<"\n1. Add an element";
		cout<<"\n2. Delete an element";
		cout<<"\n3. Show element";
		cout<<"\n0. Exit";
		cin>>choice;
		switch(choice)
	}(while choice!=0);
}
    
  
