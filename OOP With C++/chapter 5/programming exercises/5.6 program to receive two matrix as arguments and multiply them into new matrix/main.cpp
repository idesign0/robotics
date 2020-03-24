#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class matrix{
        int matrix_var[3][3];
    public:
        void add_data();
        void print_data();

        friend matrix multiply_matrix(matrix,matrix);
    };

        void matrix::add_data(){
            cout << "*********************************************\n\n";
            int element;
            cout << "Enter the values for 3 by 3 matrix : "<< endl;
            for(int raw=0;raw<3;raw++){
                for(int column=0;column<3;column++){
                    cin >> element ;
                    matrix_var[raw][column] = element;
                }
            }
            cout << "*********************************************";
        }

        void matrix::print_data(){
            cout << "*********************************************\n\n";

            for(int raw=0;raw<3;raw++){
                for(int column=0;column<3;column++){
                    cout << matrix_var[raw][column] <<"\t";
                }
                cout << "\n";
            }
            cout << "*********************************************";
        }

        matrix multiply_matrix(matrix a,matrix b){
            matrix t;

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                t.matrix_var[i][j]=0;
                    for(int k=0;k<3;k++){
                    t.matrix_var[i][j]+=a.matrix_var[i][k]*b.matrix_var[k][j];
                    }
                }
            }
        return t;
        }

int main(){
    matrix o_matrix_A,o_matrix_B,o_matrix_C;
    cout << "\nAdd values about matrix A : \n\n";
    o_matrix_A.add_data();

    cout << "\nAdd values about matrix B : \n\n";

    o_matrix_B.add_data();

    o_matrix_C=multiply_matrix(o_matrix_A,o_matrix_B);

    cout << "\nValue of matrix C : \n\n";
    o_matrix_C.print_data();

    return 0;
    }
