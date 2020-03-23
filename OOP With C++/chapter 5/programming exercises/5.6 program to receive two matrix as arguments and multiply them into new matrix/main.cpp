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
            cout << "3 by 3 Matrix : "<< endl;

            for(int raw=0;raw<3;raw++){
                for(int column=0;column<3;column++){
                    cout << matrix_var[raw][column] <<"\t";
                }
                cout << "\n";
            }
            cout << "*********************************************";
        }

        matrix multiply_matrix(matrix a,matrix b){
                for(int raw=0;raw<3;raw++){
                    for(int column=0;column<3;column++){
                        for(int trans_raw=0;trans_raw<3;trans_raw++){
                            for(int trans_column=0;trans_column<3;trans_column++){

                            }
                        }
                    }
                }
        }

int main(){
    matrix o_matrix_A,o_matrix_B,o_matrix_C;
    cout << "Add values about matrix A : \n\n";
    o_matrix_A.add_data();

    cout << "Add values about matrix B : \n\n";
    o_matrix_B.add_data();



    return 0;
    }
