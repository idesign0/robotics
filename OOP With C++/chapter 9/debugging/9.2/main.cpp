#include<iostream>
using namespace std;

class gst{
    float price;
    float percent;
public:
    void input(float a,float b){
        price = a;
        percent = b;
    }
    void print(){
        cout << "Price = "<< price <<endl;
        cout << "Percent = "<< percent <<endl;
    }
};

int main(){
    gst p[3];
    gst *r=p;
    gst *q=r;

    int i;
    float s,t,f;

    for(i=0;i<3;i++){
        cout << "Provide the price and percent : \n";
        cin>>s>>t;
        r->input(s,t);
        f=s*t;
        r++;
}

    for(i=0;i<3;i++){
        cout << "Provide the price and percent : \n";
        q->print();
        q++;
    }
    return 0;
}
