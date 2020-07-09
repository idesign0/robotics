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
        cin.ignore();
        gets(name);

        cout << "\nEnter student ID/roll number : ";
        cin >> rollno;

        cout << "\nEnter student Father's name : ";
        cin.ignore();
        gets(fname);

        cout << "\nEnter the Mobile Number : ";
        cin.ignore();
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

    //THis functions helps both students and faculty to recover the password with the help of unique keyword provided by the admin
    int recover(){
        // cout << "\nThe input username is : " << ::un ;
        char key[20];
        if((strcmp(::un,rollno))==0){
            cout << "\nEnter the Unique password (Provided by admin)";
            cin >> key;
            if(strcmp(key,rpasswd)==0){
                cout << "\nYOu are valid User.";
                cout << "\nYour Password is : " << passwd;
                cout << "Please login to exit again ";
                return 1;
            }else{
                return 0;
            }
        }else{
            return 0;
        }

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
        cin.ignore();
        gets(name);

        cout << "\nEnter Faculty ID/roll number : ";
        cin >> rollno;

        cout << "\nEnter Faculty Father's name : ";
        cin.ignore();
        gets(fname);

        cout << "\nEnter the Mobile Number : ";
        cin.ignore();
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
            getch();
            exit(0);
        }

        char opera = 'y';

        do{
            int temp;
            cout << "\n\t\t\tWelcome to admin portal";
            cout << "\n\nPress 1 to add a faculty record";
            cout << "\nPress 2 to add multiple record of Faculty";
            cout << "\nPress 3 to view all records of faculty";
            cout << "\nPress 4 to Delete a faculty record";
            cout << "\nPress 5 to add a Student record";
            cout << "\nPress 6 to add multiple record of student";
            cout << "\nPress 7 to view all records of Student";
            cout << "\nPress 8 to Delete a student record";
            cout << "\nPress 9 to Exit";
            cout << "\n\nEnter your choice : "; cin >> temp;

            system("cls");

            // for inserting d single faculty records
            if(temp==1){
                cout <<"\nEnter the Details : ";
                fstream fs;
                fs.open("fainfo.txt",ios::in | ios::out | ios::app);

                a.getfadata();
                fs.write((char *)&a,sizeof(Admin));
                fs.close();
                cout << "\nRecord Entered Successfully...";
            }

            // for inserting d multiple faculty records
            if(temp==2){
                int m=0;
                fstream fs;
                fs.open("fainfo.txt",ios::in | ios::out | ios::app);
                do{
                    cout << "\nEnter The Details : ";
                    a.getfadata();
                    fs.write((char *)&a,sizeof(Admin));
                    cout << "Press 0 if you want to enter more records : ";
                    cin >> m;
                }while(m==0);
                fs.close();
                cout << "\nRecord Entered Successfully...";
            }

            // for view all faculty records
            if(temp==3){
                fstream fs;
                fs.open("fainfo.txt",ios::in);
                fs.seekg(0);

                while(!fs.eof()){
                    fs.read((char*)&a,sizeof(Admin));
                    a.fadisplay();
                }
            }

            //for deleting a faculty record
            if(temp==4){
                char tmpfaid[15];
                int del=0,result=-1;
                cout << "\nEnter The faculty ID\roll : ";
                cin >> tmpfaid;
                fstream fs;
                fs.open("fainfo.txt",ios::in);
                fstream fs1;
                fs1.open("fanewinfo.txt",ios::out | ios::app);

                while(!fs.eof()){
                        fs.read((char*)&a,sizeof(Admin));
                        result==strcmp(tmpfaid,a.rollno);
                        if(result==0){
                            del=1;
                        }
                        else
                            fs1.write((char*)&a,sizeof(Admin));
                        if(del==1){
                            cout << "\nRecord Deleted Successfully...";
                        }else{
                            cout << "\nRecord not Found...";
                        }

                        fs.close();
                        fs1.close();
                        remove("fainfo.txt");
                        rename("fanewinfo.txt","fainfo.txt");
                }
            }

                        // for inserting d single faculty records
            if(temp==1){
                cout <<"\nEnter the Details : ";
                fstream fs;
                fs.open("fainfo.txt",ios::in | ios::out | ios::app);

                a.getfadata();
                fs.write((char *)&a,sizeof(Admin));
                fs.close();
                cout << "\nRecord Entered Successfully...";
            }

            // for inserting d multiple faculty records
            if(temp==2){
                int m=0;
                fstream fs;
                fs.open("fainfo.txt",ios::in | ios::out | ios::app);
                do{
                    cout << "\nEnter The Details : ";
                    a.getfadata();
                    fs.write((char *)&a,sizeof(Admin));
                    cout << "Press 0 if you want to enter more records : ";
                    cin >> m;
                }while(m==0);
                fs.close();
                cout << "\nRecord Entered Successfully...";
            }

            // for view all faculty records
            if(temp==3){
                fstream fs;
                fs.open("fainfo.txt",ios::in);
                fs.seekg(0);

                while(!fs.eof()){
                    fs.read((char*)&a,sizeof(Admin));
                    a.fadisplay();
                }
            }

            //for deleting a faculty record
            if(temp==4){
                char tmpfaid[15];
                int del=0,result=-1;
                cout << "\nEnter The faculty ID\roll : ";
                cin >> tmpfaid;
                fstream fs;
                fs.open("fainfo.txt",ios::in);
                fstream fs1;
                fs1.open("fanewinfo.txt",ios::out | ios::app);

                while(!fs.eof()){
                        fs.read((char*)&a,sizeof(Admin));
                        result==strcmp(tmpfaid,a.rollno);
                        if(result==0){
                            del=1;
                        }
                        else
                            fs1.write((char*)&a,sizeof(Admin));
                        if(del==1){
                            cout << "\nRecord Deleted Successfully...";
                        }else{
                            cout << "\nRecord not Found...";
                        }

                        fs.close();
                        fs1.close();
                        remove("fainfo.txt");
                        rename("fanewinfo.txt","fainfo.txt");
                }
            }

            // for inserting d single faculty records
            if(temp==5){
                cout <<"\nEnter the Details : ";
                fstream fs;
                fs.open("stinfo.txt",ios::in | ios::out | ios::app);

                a.getstdata();
                fs.write((char *)&a,sizeof(Admin));
                fs.close();
                cout << "\nRecord Entered Successfully...";
            }

            // for inserting d multiple faculty records
            if(temp==6){
                int m=0;
                fstream fs;
                fs.open("stinfo.txt",ios::in | ios::out | ios::app);
                do{
                    cout << "\nEnter The Details : ";
                    a.getstdata();
                    fs.write((char *)&a,sizeof(Admin));
                    cout << "Press 0 if you want to enter more records : ";
                    cin >> m;
                }while(m==0);
                fs.close();
                cout << "\nRecord Entered Successfully...";
            }

            // for view all faculty records
            if(temp==7){
                fstream fs;
                fs.open("stinfo.txt",ios::in);
                fs.seekg(0);

                while(!fs.eof()){
                    fs.read((char*)&a,sizeof(Admin));
                    a.stdisplay();
                }
            }

            //for deleting a faculty record
            if(temp==8){
                char tmpstid[15];
                int del=0,result=-1;
                cout << "\nEnter The faculty ID\roll : ";
                cin >> tmpstid;
                fstream fs;
                fs.open("stinfo.txt",ios::in);
                fstream fs1;
                fs1.open("stnewinfo.txt",ios::out | ios::app);

                while(!fs.eof()){
                        fs.read((char*)&a,sizeof(Admin));
                        result==strcmp(tmpstid,a.rollno);
                        if(result==0){
                            del=1;
                        }
                        else
                            fs1.write((char*)&a,sizeof(Admin));
                        if(del==1){
                            cout << "\nRecord Deleted Successfully...";
                        }else{
                            cout << "\nRecord not Found...";
                        }

                        fs.close();
                        fs1.close();
                        remove("stinfo.txt");
                        rename("stnewinfo.txt","stinfo.txt");
                }
            }

            if(temp==9){
                cout << "\n\n\n\n\t\t\t\tThank You !!! ";
                getch();
                exit(0);
            }

            if(temp<1 || temp>9){
                system("cls");
                cout << "\n\n\n\n\t\t\t\tInvalid Input ....";
            }
            getch();
            cout << "\nPress Y : for more operations otherwise N : ";
            cin >> opera;

            if(opera=='y'){
                getch();
                system("cls");
                cout << "\n\n\n\n\t\t\\ttThank You !!! ";
                getch();
            }
        }while(opera=='Y' || opera=='y');
    }

    //begin of faculty view portal
    if(choice=2){
        system("cls");
        char un[20];
        int val,s=0;

        cout << "\n\t\t\tWelcome to faculty Login Page";
        cout << "\n\nEnter the Username : ";
        cin >> un;

        fstream fs;
        fs.open("fainfo.txt",ios::in | ios::binary);
        fs.seekg(0);
        while(!fs.eof()){
            val = -1;
            fs.read((char*)&f,sizeof(Admin));
            val=f.login();
            if(val==1){
                s=1;
                break;
            }
        }
        fs.close();
        if(s==1){ // if first login is valid
            system("cls");
        }
        if(s!=1){ // is first login is invalid
            system("cls");
            int ho=1;
            cout << "\n\n\t\tYour Login Credentials are in-correct ";
            cout << "\nThe Username is Your ID/Roll no. ";
            cout << "\nThe Password is Case Sensitive ";
            cout << "\nPress 1 to Re-Cover Password & 2 to Re-Attempt Login ";
            cout << "\nEnter The Choice : ";
            cin >> ho;

            if(ho==1){ // recover password
                cout << "Enter The Username : ";
            cin >> ::un;
            fstream fs;
            fs.open("fainfo.txt",ios::in | ios::binary);
            fs.seekg(0);
            int re,su=-1;
            while(!fs.eof()){
                re=-1;
                fs.read((char*)&f,sizeof(Admin));
                re=f.recover();
                if(re==1){
                    su=1;
                    break;
                }
            }
            fs.close();

            if(su==1){
                getch();
                system("cls");
                cout << "\n\n\n\n\t\tThank you !";
                getch();
                exit(0);
            }else{
                cout << "\nYou are a Invalid User.";
                getch();
                exit(0);
            }
            } // recover password

            if(ho==2){ //re-attempt of login
                cout << "\n\nEnter The Username : ";
                cin >> ::un;
                fstream fs;
                fs.open("fainfo.txt",ios::in | ios::binary);
                fs.seekg(0);
                int suc=-1,valu; // valu for storing login() returned value , suc for success login
                while(!fs.eof()){
                    valu=-1;
                    fs.read((char*)&f,sizeof(Admin));
                    valu = f.login();
                    if(valu==1){
                        suc=1;
                        break;
                    }
                }
                    fs.close();
                    if(suc==1){
                        system("cls");
                    }else{
                        getch();
                        cout << "\nYou are an Invalid User";
                        cout << "\nThank You !!!";
                        getch();
                        exit(0);
                        exit(0);
                        }
                }

                if(ho!=1 && ho!=2){
                    cout << "\n\nInvalid Input Provided.";
                    cout << "\n\n\t\tThank You !!!";
                    getch();
                    exit(0);
                }
        }   // Closing of first Invalid login (Forgot password & recover password)
            // begin of faculty;

        char con='y';
        do{
            system("cls");
            cout << "\n\n\t\t\tWelcome to Faculty Panel  ";
            cout << "\n\n\t\t\t\t\t\t    Your UserID is : " << :: un;
            cout << "\n\nPress 1 to View Your Profile.";
            cout << "\nPress 2 to Know your Subjects.";
            cout << "\nPress 3 to Add a Subjects.";
            cout << "\nPress 4 to Delete a Subjects.";
            cout << "\nPress 5 to Modify your Profile.";
            int choice;
            cin >> choice;

            if(choice=1){
                fstream fs;
                fs.open("fainfo.txt",ios::in);
                fs.seekg(0);
                int x;
                while(!fs.eof()){
                    x=0;
                    fs.read((char*)&f,sizeof(Admin));
                    x=f.faprofile();
                    if(x==1){
                        break;
                    }
                }
                fs.close();
            }// closing of choice 1;

            if(choice==2){
                fstream fs;
                fs.open("fainfo.txt",ios::in);
                fs.seekg(0);
                int y;
                while(!fs.eof()){
                    y=0;
                    fs.read((char*)&f,sizeof(Admin));
                    y=f.faprofile();
                    if(y==1){
                        break;
                    }
                }
                fs.close();
            } // closing of choice = 2;

            if(choice==3){
                fstream fs;
                fstream fs1;
                fs.open("fainfo.txt",ios::in | ios::binary);
                fs1.open("tmpfainfo.txt",ios::out | ios::app);
                fs.seekg(0);

                while(!fs.eof()){
                    fs.read((char*)&f,sizeof(Admin));
                    f.addfasub();
                    fs1.write((char*)&f,sizeof(Admin));
                }
                fs.close();
                fs1.close();

                remove("fainfo.txt");
                rename("tmpfainfo.txt","fainfo.txt");
            } // closing of choice = 3;

            if(choice==4){
                fstream fs;
                fstream fs1;
                fs.open("fainfo.txt",ios::in | ios::binary);
                fs1.open("delfainfo.txt",ios::out | ios::app);
                fs.seekg(0);

                while(!fs.eof()){
                    fs.read((char*)&f,sizeof(Admin));
                    f.delfasub();
                    fs1.write((char*)&f,sizeof(Admin));
                }
                fs.close();
                fs1.close();

                remove("fainfo.txt");
                rename("delfainfo.txt","fainfo.txt");
            } // closing of choice = 4;

            if(choice==5){
                fstream fs;
                fstream fs1;
                fs.open("fainfo.txt",ios::in | ios::binary);
                fs1.open("modfainfo.txt",ios::out | ios::app);
                fs.seekg(0);

                while(!fs.eof()){
                    fs.read((char*)&f,sizeof(Admin));
                    f.modfaprofile();
                    fs1.write((char*)&f,sizeof(Admin));
                }
                fs.close();
                fs1.close();

                remove("fainfo.txt");
                rename("modfainfo.txt","fainfo.txt");
            } // closing of choice = 5;

            if(choice<1 || choice>5){
                cout << "\nInvalid Input Provided !!! ";
            }
                cout << "\n\n\t\t\t\tEnter to Continue";
                getch();
                cout << "\n\nPress y to Continue ; Otherwise n : ";

                cin >> con;

                if(con == 'y' || con == 'Y'){
                    system("cls");
                    cout << "\n\n\n\n\n\t\t\t\tThank You !!! ";
                    getch();
                    exit(0);
                }
        }while(con == 'y' || con == 'Y');
    } // Close of faculty View

    // begin of student view

}
