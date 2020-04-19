#include<iostream>
using namespace std;

const int size = 3;

class  vector{
    int vec[size];
public:
    vector();
    vector(int *x);
    friend vector operator*(int,vector);
    friend vector operator*(vector,int);
    friend istream & operator >> (istream &,vector &);
    friend ostream & operator << (ostream &,vector &);

};
vector::vector(){
    for(int i=0;i<size;i++)
        vec[i]=0;
}
vector::vector(int *x){
    for(int i=0;i<size;i++)
        vec[i]=x[i];
}
vector operator*(int a,vector b){
    vector c;
    for(int i=0;i<size;i++)
        c.vec[i] = a * b.vec[i];
    return c;
}
vector operator*(vector b,int a){
    vector c;
    for(int i=0;i<size;i++)
        c.vec[i] = a * b.vec[i];
    return c;
}
istream & operator >> (istream &din, vector &b ){
    for(int i=0;i<size;i++)
        din >> b.vec[i];
    return(din);
}
ostream & operator << (ostream &dout, vector &b ){

    dout << "(" << b.vec[0];
    for(int i=1;i<size;i++)
        dout<<","<<b.vec[i];
    dout << ")";

    return(dout);
}
int x[size]={2,4,6};

int main(){
    vector m;
    vector n =x;

    cout << "Enter Values of Vector of size 3 : ";
    cin >>  m;
    cout << "\n";

    cout << m << "\n";

    vector p,q;

    p = 2*m;
    q = n*2;

    cout << p << "\n";
    cout << q << "\n";

    return 0;
}
