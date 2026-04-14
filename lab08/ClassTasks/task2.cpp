// 3.6 Class Tasks
// 1. Create classes LibraryBook and Librarian.

// 2. Allow Librarian to access private details of the book (e.g., title, availability).

// 3. Implement logic to issue and return books.

// 4. Add condition: a book cannot be issued if it is already issued.
#include <iostream>
#include <string>
using namespace std;
class Librarian;
class LibraryBook{
	private:
		int isIssued;
		string title;
	public:
		string gettitle(){
			return title;
		}
		bool getStatus(){
			return isIssued;
		}
		LibraryBook(string title){
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
		void issueBook(LibraryBook &b){
			if(!b.isIssued){
				b.isIssued = 1;
				cout << "Book '" << b.title << "' is now issued\n";
			}
			else{
				cout << "Book '" << b.title << "' is already issued\n";
			}
		}
		void returnBook(LibraryBook &b){
			if(b.isIssued){
				b.isIssued = 0;
				cout << "Book '" << b.title << "' has been returned\n";
			}
			else{
				cout << "Book '" << b.title << "' was not issued\n";
			}
		}
		
};
int main(){
	LibraryBook b1("The Taha");
	Librarian lib("Taha's kutub khana");
   	
   	lib.issueBook(b1);
   	cout << "Book name: " << b1.gettitle() << endl;
   	cout << "Book status : " << b1.getStatus() << endl << endl;
   	
   
   	lib.issueBook(b1);
   	cout << endl;
   	
  
   	lib.returnBook(b1);
   	cout << "Book status after return: " << b1.getStatus() << endl;
}
