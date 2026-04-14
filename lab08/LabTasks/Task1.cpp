// 1. Friend Functions
// Objective: Practice creating friend functions to access private members and perform operations.

// Tasks:
// Create a class Rectangle with private members length and width.
// Write a friend function to calculate the area and perimeter of the rectangle.
// Modify the program to take input from the user for length and width.
// Add validation: length and width must be positive numbers.
#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int width;
    public:
        void setlength(int len){
            if(len > 0){
                length = len;
            }
            else{
                cout << "Length must be positive (> 0)\n";
            }
        }
        void setwidth(int w){
            if(w > 0){
                width = w;
            }
            else{
                cout << "Width must be positive (> 0)\n";
            }
        }
        int getlength(){
            return length;
        }
        int getwidth(){
            return width;
        }
        friend void calculation(Rectangle &rec);
};
void calculation(Rectangle &rec){
    cout << "Area of Rectangle: " << rec.length * rec.width << endl;
    cout << "Perimeter of Rectangle: " << 2*rec.length + 2*rec.width << endl;
}
int main(){
    Rectangle r1;
    int len, wid;
    
    cout << "Enter length of rectangle: ";
    cin >> len;
    r1.setlength(len);
    
    cout << "Enter width of rectangle: ";
    cin >> wid;
    r1.setwidth(wid);
    
    cout << "\nRectangle :" << endl;
    cout << "Length: " << r1.getlength() << endl;
    cout << "Width: " << r1.getwidth() << endl << endl;
    
    calculation(r1);
    return 0;
}