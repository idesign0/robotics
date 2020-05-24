#include <iostream>
using namespace std;

class matrix{
    int **mat;
    int raw,column;

public:
    matrix(int r,int c);

    int get_element(int i,int j,int value){
        mat[i][j]=value;
    }

    int put_element(int i,int j){
        cout<<mat[i][j];
        }
};

matrix::matrix(int r,int c){
    raw=r;
    column=c;
    mat = new int*[raw];
    for(int i=0;i<r;i++){
        mat[i] = new int[column];
    }
}

int main(){
    int m,n;
    cout << "Enter the Dimensions of Matrix : ";
    cin >> m >> n ;

    matrix om(m,n);

    cout << "Enter the elements of Matrix : " << endl;

    int value;i

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                cin>>value;
            om.get_element(i,j,value);
        }
    }
    cout << "\nElement of matrix r(1)c(3) : ";
    om.put_element(0,2);
}
