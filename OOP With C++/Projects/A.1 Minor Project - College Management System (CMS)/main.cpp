// Learning objectives
// Develop menu-driven applications in c++
// Apply authentication in menu-driven projects
// Apply file handling concepts

/* CMS application code3 makes use of a wide array of C++ programming features : */

// concept of inheritance for code re-usability
// concept of function overloading that enhances the code readability
// handling simple exception
// applications for file handling concepts for performing operations, such as read, write, append, check for various i/o errors, etc
// use of various i/o manipulators to display output in formatted manner

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<fstream>
#include<conio.h>

using namespace std;

char un[20];

class Admin{
    char name[20];
    int totalsub;
    char subject[10][10];
    char mobile[15], mail[50], fname[20];
    char passwd[20],rpasswd[20];
public:
    char rollno[15];

    //this function is used to get the student data entry from the ADMIN portal... all the records entries are made by this method
    void getstdata(){

        cout << "\nEnter the student Name : ";
        gets(name);

        cout << "\nEnter student ID/roll number : ";
        cin >> rollno;

        cout << "\nEnter student Father's name : ";
        gets(fname);

        cout << "\nEnter the Mobile Number : ";
        gets(mobile);

        cout << "\nEnter E-mail id of student : ";
        cin >> mail;

        cout << "\nEnter the total subject : ";
        cin >> totalsub;

        for(int i=0;i<totalsub;i++){
            cout << "\nEnter the subject "<<i+1<<" name : ";
            cin>> subject[i];
        }

        cout << "\nCreate a login Password : ";
        cin >> passwd;

        cout << "\nEnter the Unique keyword to recover Password : ";
        cin >> rpasswd;

        cout << "\n\nPlease Note your Username is ID/Roll no.\n";
    }
};

int main(){

}
