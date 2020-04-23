#include<iostream>
using namespace std;

class mat{
    int mat_var[3][3];
public:
    mat(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                mat_var[i][j]=0;
            }
        }
    }
    friend istream & operator>>(istream &din,mat &m);
    friend mat operator+(mat &a,mat &b);
    friend mat operator*(mat &a,mat &b);
    friend mat operator-(mat &a,mat &b);
    friend mat operator/(mat &a,int b);
    friend ostream & operator<<(ostream &dout,mat &m);

};

istream & operator>>(istream &din,mat &m){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                din>>m.mat_var[i][j];
            }
        }
}
ostream & operator<<(ostream &dout,mat &m){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                dout<<m.mat_var[i][j]<<" ";
            }
            cout << "\n";
        }
}
mat operator+(mat &a,mat &b){
    mat c;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                c.mat_var[i][j]=a.mat_var[i][j]+b.mat_var[i][j];
            }
        }
    return c;
}
mat operator-(mat &a,mat &b){
    mat c;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                c.mat_var[i][j]=a.mat_var[i][j]-b.mat_var[i][j];
            }
        }
    return c;
}
mat operator*(mat &a,mat &b){
    mat c;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                    for(int k=0;k<3;k++){
                        c.mat_var[i][j]+=a.mat_var[i][k]*b.mat_var[k][j];
                    }
            }
        }
    return c;
}

mat operator/(mat &a,int b){
    mat c;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                        c.mat_var[i][j]+=a.mat_var[i][j]/b;
            }
        }
    return c;

}
int main(){
    mat a,b,c;

    cout << "Add Values of first matrix : \n\n";
    cin>>a;

    cout << "\n\nAdd Values of second matrix : \n\n";
    cin>>b;

    cout << "\n\nAddition of two matrix  : \n\n";
    c = a + b ;
    cout << c;

    cout << "\n\nSubtraction of two matrix  : \n\n";
    c = a - b ;
    cout << c;

    cout << "\n\nMultiplication of two matrix  : \n\n";
    c = a * b ;
    cout << c;

    cout << "\n\nDivision of matrix by integer : \n\n";
    a = a / 2 ;
    cout << a;

    return 0;
}
