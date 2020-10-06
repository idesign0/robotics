#include<iostream>
#include<string>
#include<vector>
#include<complex>
#include<algorithm>
using namespace std;

// find function cant take value as string so i made local function named find_substr_num
// find_substr_num finds number of accurance of sub string

/*Function for Exercise 12*/
int find_substr_num(string &s, string &val){
    int countt=0;
    for(int i =0;i<s.size();i++){
        if(s.at(i)==val.at(0)){
            if(s.substr(i,val.size())==val){
                countt++;
            }
        }
    }
    return countt;
}
/*use of templates to find and count elements... one can use count directly as well*/
template<class T,class C>
int count_accurance(const T&value,C val){
    int countt=0;
    typename T::const_iterator i = find(value.begin(),value.end(),val);
    while(i!=value.end()){
        countt++;
        i++;
        i =find(i,value.end(),val);
    }
    return countt;
}

int main(){

    /*Exercise 12*/
    string s="asdassdassdnadnadkjkasnd";
    string sub_s = "dass";

    int e = find_substr_num(s,sub_s);
    cout << e << endl;

    /*Use of Templates */
    vector<complex<double> >comp;
    comp.push_back(complex<double>(1,1));
    comp.push_back(complex<double>(1,1));

    int c = count_accurance(s,'d');
    cout << c << endl;
    int d = count(s.begin(),s.end(),'d');
    cout << d << endl;
    int f = count_accurance(comp,complex<double>(1,1));
    cout << f << endl;
}
