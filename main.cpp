#include <iostream>
using namespace std;

/// Task 1

int main() {
    //Area of: Square, Rectangle, Circle
    //Structure Programming Style
    const float PI = 3.14159;
    double width, length, side, radius;
    int choice;

    cout<<"\t==================================\n";
    cout<<"\t         Area Calculator          \n";
    cout<<"\t==================================\n";
    for(;;){
        cout<<"Calculate Area Of 1.Square 2.Rectangle 3.Circle \n";
        cout<<"Choose a Number or Press 0 to EXIT: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the Square Side: ";
                cin>>side;
                cout<<"The Area of Your Square is: " << side * side<<endl;
                break;

            case 2:
                cout<<"Enter the Rectangle Width: ";
                cin>>width;
                cout<<"Enter the Rectangle Length: ";
                cin>>length;
                cout<<"The Area of Your Rectangle is: " << width * length<<endl;
                break;

            case 3:
                cout<<"Enter the Circle Radius: ";
                cin>>radius;
                cout<<"The Area of Your Circle is: " << PI * radius * radius<<endl;
                break;

            case 0:
                cout<<"----------------------------------------------"<<endl;
                cout<<"\t\tThank you"<<endl;
                cout<<"----------------------------------------------"<<endl;
                exit(0);

            default:
                cout<<"\nYou Entered invalid Number, Please Try Again\n\n";
                continue;
        }
        cout<<"----------------------------------------------"<<endl;
        cout<<"\t\tThank you"<<endl;
        cout<<"----------------------------------------------"<<endl;
    }
}
