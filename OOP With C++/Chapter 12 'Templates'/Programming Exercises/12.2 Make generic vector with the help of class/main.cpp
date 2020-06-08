#include<iostream>
using namespace std;

template <class T,int sizee>
class vectorr{
    T arr[sizee];
public:
    void add_elements(){
        for(int i=0;i<sizee;i++){
            cout << i << " Element entry : ";cin>>arr[i];
        }
    }

    void modify_elements(T m_number,int element){
        for(int i=0;i<sizee;i++){
            if(i==element)
                arr[i]=m_number;
        }
    }

    void multiply_elements(int scalar_factor){
        for(int i=0;i<sizee;i++){
                arr[i] *= scalar_factor;
    }
    }

    void display_vectors(){
        cout << "(" ;
        for(int i=0;i<sizee;i++){
                cout <<arr[i] <<",";
    } cout<<"...)"<< endl;
    }
};

int main(){

    vectorr<int,5> arr_int;

    cout << "Adding Data element : " << endl;
    arr_int.add_elements();
    arr_int.display_vectors();

    cout << "\nModifying the vector : " << endl;
    arr_int.modify_elements(5,4);
    arr_int.display_vectors();

    cout << "\nMultiplying by scaler quantity : " << endl;
    arr_int.multiply_elements(10);
    arr_int.display_vectors();

    return 0;
}
