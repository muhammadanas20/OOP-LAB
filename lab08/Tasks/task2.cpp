#include <iostream>
using namespace std;
class Librarian;
class libraryBook{
	private:
		int isIssued;
		string title;
	public:
		string gettitle(){
			return title;
		}
		libraryBook(string title){
			this->title = title;
			isIssued = 0;
		}
		friend class Librarian;
};
class Librarian{
	private:
		string name;
	public:
		Librarian(string name){
			this->name = name;
		}
		libraryBook issueBook(libraryBook b){
			if(!b.isIssued){
				b.isIssued = 1;
				cout << "BOOK is issued\n";
			}
			else{
				cout << "Already issued\n";
			}
			return b;
		}
		
};
int main(){
	libraryBook b1("The Taha");
	Librarian lib("Taha's kutub khana");
   	libraryBook issued = lib.issueBook(b1);
   	cout << "Issued Book name:" << issued.gettitle() << endl;
}
