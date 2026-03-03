
#include <iostream>
using namespace std;
class Media{
    private:
    string title;
    public:
    Media(string t):title(t){}
    void showTitle(){
        cout << "Title: " << title << endl;
    }
};
class Book:public Media{
    private:
    string author;
    public:
    Book(string t,string a):Media(t),author(a){}
    void showBookDetails(){
        showTitle();
        cout << "Author: " << author << endl;
    }
};
class Vedio:public Media{
    private:
    int duration;
    public:
    Vedio(string t,int d):Media(t),duration(d){}
    void showVedioDetails(){
        showTitle();
        cout << "Duration: " << duration << " minutes" << endl;
    }
};
class Audio:public Media{
    private:
    string artist;
    public:
    Audio(string t,string a):Media(t),artist(a){}
    void showAudioDetails(){
        showTitle();
        cout << "Artist: " << artist << endl;
    }
};
int main(){
    Book b1("Intersatller","Christopher Nolan");
    Vedio v1("Vedio",148);
    Audio a1("Lecture","Miss Hijaab");
    
    cout << "Book Details:" << endl;
    b1.showBookDetails();
    
    cout << "\nVedio Details:" << endl;
    v1.showVedioDetails();
    
    cout << "\nAudio Details:" << endl;
    a1.showAudioDetails();
    
    return 0;

}