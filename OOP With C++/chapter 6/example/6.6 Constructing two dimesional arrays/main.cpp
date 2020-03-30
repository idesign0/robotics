#include <iostream>
using namespace std;

class matrix{
    int **mat;
    int raw,column;
public:
    matrix(int r , int c);
    void get_element(int i,int j,int value){
    mat[i][j]=value;
    }
    int & put_element(int i,int j){
    return mat[i][j];
    }
};

matrix :: matrix(int r,int c){
    raw = r;
    column = c;

    mat=new int*[raw];

    for(int i=0;i<raw;i++){
        mat[i]=new int[column];
    }
}

int main(){
    int m,n;

    cout << "Enter size of matrix : ";
    cin >> m >> n;

    matrix A(m,n);

    cout << "Enter the matrix Row by row  \n";
    int i,j,value;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> value;
            A.get_element(i,j,value);
        }
    cout << "\n";
    }

    cout << A.put_element(1,2);
    return 0;
}
