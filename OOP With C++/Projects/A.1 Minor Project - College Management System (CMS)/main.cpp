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

    // This function is used to get the student data entry from the ADMIN portal... all the records entries are made by this method
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

    // This function authenticates the login of both the students and faculties with their reference to their reference to their unique ID/PASSWORD login is provided
    int login(){
        if((strcmp(::un,rollno))==0){
        cout << "Enter the login password : ";
        int len=0;
        len=strlen(passwd);

        char inputpasswd[20];
        int i=0;
        for(i;i<len;i++){
            inputpasswd[i]=getch();
            cout << "#";
        }
        inputpasswd[i]=NULL;
        //cout <<"\nThe Entered Password is " << inputpasswd;

        if((strcmp(::un,rollno)==0)&&(strcmp(passwd,inputpasswd))==0){
            return 1;
        }else
            return 0;
        }else
            return 0;
    }

    // This function displays the faculty profile to the faculty at their respective portal
    int faprofile(){
        if((strcmp(::un,rollno)==0)){
            cout << "\nFaculty Name          : " << name;
            cout << "\nFaculty Father's Name : " << fname;
            cout << "\nFaculty Mobile NO.    : " << mobile;
            cout << "\nFaculty E-mail ID     : " << mail;
            return 1;
        }else{
            return 0;
        }
    }

    // This function represents different subjects of the faculty at their portal
    int knowfasub(){
        if((strcmp(::un,rollno))==0){
            cout << "\nFaculty Total subject : " << totalsub;
            for(int i=0;i<totalsub;i++){
                cout << "\n\tSubject " << i+1 << subject[i];
            }
            return 1;
        }else{
            return 0;
        }
    }

    // This function help a faculty to add a subject in their profile;
    void addfasub(){
        if((strcmp(::un,rollno))==0){
            cout << "\nEnter the new subject : ";
            cin >> subject[totalsub];
            totalsub++;
            cout << "\n\nNew Subject added Successfully...";
        }
    }

    // This  functions helps faculty to delete the subject from their module
    void delfasub(){
        knowfasub();
        int del =0; // variable for number of subjects to be deleted
        if((strcmp(::un,rollno))==0){
                if(totalsub ==0 || totalsub <0){
                    totalsub=0;
                    cout << "\nNone subject exits...";
                    getch();
                    exit(0);
                }

                cout << "\nEnter Subjects numbers to be deleted : "; cin >> del;
                if(del==totalsub){

                    totalsub--;
                    strcpy(subject[totalsub]," ");

                }else if(totalsub==1)
                {
                    totalsub=0;
                    strcpy(subject[totalsub]," ");
                }else{
                    del--;
                    strcpy(subject[totalsub]," ");
                    for(int p=del;p<totalsub;p++){
                        strcpy(subject[p],subject[p+1]);
                    }
                    totalsub--;
                }
                cout << "Records updated Successfully...";
        }
    }

    // This Function helps a faculty to modify his personal profile
    void modfaprofile(){
        if((strcmp(::un,rollno))==0){
            cout << "\nThe Profile Details are : ";
            cout << "\n 1. Faculty E-mail : " << mail;
            cout << "\n 2. Faculty Mobile : " << mobile;

            int g=-1;
            cout << "\nEnter Detail Number to Modify : ";
            cin >> g;

            if(g==1){
                char nmail[50];
                cout << "\nEnter mew email address : ";
                cin >> nmail;
                strcpy(mail,nmail);
                cout << "\nRecords Updated Successfully...";
            }

            if(g==2){
                char nmobile[15];
                cout << "\nEnter the new mobile Number : ";
                gets(nmobile);
                strcpy(mobile,nmobile);
                cout << "\nRecords Updated Successfully...";
            }else
                cout << "\nInvalid input Provided...";
        }
    }

    // This Function displays the student profile at the student portal
    int stprofile(){
        if((strcmp(::un,rollno))==0){
            cout << "\nStudent Name          : " << name;
            cout << "\nStudent Father's Name : " << fname;
            cout << "\nStudent Mobile Number : " << mobile;
            cout << "\nStudent E-mail ID     : " << mail;
        }else
            return 0;
    }

    // This Function display the different enrolled subjects of the respective students...according to their profile.
    int knowstsub(){
        if((strcmp(::un,rollno))==0){
            cout << "\nStudent Total subject : " << totalsub;
            for(int i=0;i<totalsub;i++){
                cout << "\n\tSubject " << i+1 << subject[i];
            }
            return 1;
        }else{
            return 0;
        }
    }

    // This function help a student to add a subject in their profile;
    void addstsub(){
        if((strcmp(::un,rollno))==0){
            cout << "\nEnter the new subject : ";
            cin >> subject[totalsub];
            totalsub++;
            cout << "\n\nNew Subject added Successfully...";
        }
    }

    // This  functions helps students to delete the subject from their module
    void delstsub(){
        knowstsub();
        int del =0; // variable for number of subjects to be deleted
        if((strcmp(::un,rollno))==0){
                if(totalsub ==0 || totalsub <0){
                    totalsub=0;
                    cout << "\nNone subject exits...";
                    getch();
                    exit(0);
                }

                cout << "\nEnter Subjects numbers to be deleted : "; cin >> del;
                if(del==totalsub){

                    totalsub--;
                    strcpy(subject[totalsub]," ");

                }else if(totalsub==1)
                {
                    totalsub=0;
                    strcpy(subject[totalsub]," ");
                }else{
                    del--;
                    strcpy(subject[totalsub]," ");
                    for(int p=del;p<totalsub;p++){
                        strcpy(subject[p],subject[p+1]);
                    }
                    totalsub--;
                }
                cout << "Records updated Successfully...";
        }
    }

    // This Function helps a student to modify his personal profile
    void modfstrofile(){
        if((strcmp(::un,rollno))==0){
            cout << "\nThe Profile Details are : ";
            cout << "\n 1. Student E-mail : " << mail;
            cout << "\n 2. Student Mobile : " << mobile;

            int g=-1;
            cout << "\nEnter Detail Number to Modify : ";
            cin >> g;

            if(g==1){
                char nmail[50];
                cout << "\nEnter mew email address : ";
                cin >> nmail;
                strcpy(mail,nmail);
                cout << "\nRecords Updated Successfully...";
            }

            if(g==2){
                char nmobile[15];
                cout << "\nEnter the new mobile Number : ";
                gets(nmobile);
                strcpy(mobile,nmobile);
                cout << "\nRecords Updated Successfully...";
            }else
                cout << "\nInvalid input Provided...";
        }
    }

    // This Function allow the admin to make a new record entry for the different new faculties...new faculty records are uploaded with the help of this functions
    void getfadata(){

        cout << "\nEnter the Faculty Name : ";
        gets(name);

        cout << "\nEnter Faculty ID/roll number : ";
        cin >> rollno;

        cout << "\nEnter Faculty Father's name : ";
        gets(fname);

        cout << "\nEnter the Mobile Number : ";
        gets(mobile);

        cout << "\nEnter E-mail id : ";
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

        cout << "\n\nPlease Note your User-name is ID/Roll no.\n";

    }

    // This function display all the relevant information to the admin related to the students at the admin portal
    void stdisplay(){
        cout << "\nStudent Name : " << name ;
        cout << "\nStudent ID/Roll no. : " << rollno ;
        cout << "\nStudent Father's name : " << fname;
        cout << "\nStudent Mobile No. : " << mobile;
        cout << "\nStudent E-mail ID : " << mail;
        cout << "\nStudent Subjects : " << totalsub;
        for(int i=0;i<totalsub;i++){
            cout << "\n     Subjects " << i+1 <<" : "<<subject[i];
        }
        if(totalsub==0){
            cout << "( None Subjects specified...)";
        }
    }

    // This function display all the relevant information to the admin related to the faculty at the admin portal
    void fadisplay(){
        cout << "\nFaculty Name : " << name ;
        cout << "\nFaculty ID/Roll no. : " << rollno ;
        cout << "\nFaculty Father's name : " << fname;
        cout << "\nFaculty Mobile No. : " << mobile;
        cout << "\nFaculty E-mail ID : " << mail;
        cout << "\nFaculty Subjects : " << totalsub;
        for(int i=0;i<totalsub;i++){
            cout << "\n     Subjects " << i+1 <<" : "<<subject[i];
        }
        if(totalsub==0){
            cout << "( None Subjects specified...)";
        }
    }
}a;
Admin f;
        // a & f are the objects of the class Admin
int main(){
    int choice;
    system("cls");
    cout << "\n\n\n\t\t\tWelcome to RKGIT Database Portal ";
    cout << "\n\n\n\t\t\tEnter to Continue ";
    getch();
    system("cls");

    cout << "\n\n\n\t\t\tPress 1 For Admin Portal : ";
    cout << "\n\t\t\tPress 2 For Faculty Portal : ";
    cout << "\n\t\t\tPress 3 For Student Portal : ";
    cout << "\n\n\t\t\tEnter your choice : ";
    cin >> choice;

    if(choice==1){
        char adminuser[20],adminpass[20];
        cout << "\n\t\tWelcome To admin Login Portal ";
        cout << "\n\nEnter the Username : ";
        cin >> adminuser;
        cout << "\n\nEnter the Password : ";

        int k=0;
        for(k;k<8;k++){
            adminpass[k]=getch();
            cout << "*";
        }
        adminpass[k]=NULL;

        if((strcmp(adminuser,"admin")==0)&&(strcmp(adminpass,"password"))==0){
            system("cls");
        }else{
            cout << "\n\n\t\t\t Invalid Access to portal";
            cout << "\n\n\t\t\t Thank you !!";
        }

        char opera = 'y';

        do{
            int temp;
            cout << "\n\t\t\tWelcome to admin portal";
            cout << "\n\n Press 1 to add a faculty record";
            cout << "\nPress 2 to add multiple record of Faculty";
            cout << "\nPress 3 to view all records of faculty";
            cout << "\nPress 4 to Delete a faculty record";
            cout << "\nPress 5 to add a Student record";
            cout << "\nPress 6 to add multiple record of student";
            cout << "\nPress 7 to view all records of Student";
            cout << "\nPress 8 to Delete a student record";
            cout << "\nPress 9 to Exit";
            cout << "\n\nEnter your choice : "; cin >> temp;

        }
    }
}
