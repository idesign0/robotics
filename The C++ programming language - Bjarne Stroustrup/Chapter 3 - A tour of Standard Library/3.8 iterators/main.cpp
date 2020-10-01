#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

template<class C,class t>
int countt(const C &v, t val){
    typename C::const_iterator i=find(v.begin(),v.end(),val);
    int n=0;
    while(i !=v.end()){
        ++n;
        ++i;
        i=find(i,v.end(),val);
    }

    return n;
}

int main()
{
    string s = "Mary had a little lamp!";

    int i = countt(s,'a');

    cout << i << endl;

    vector<string> vc(5);
    vc.push_back("hii");
    vc.push_back("dhruv");

    int j = count(vc.begin(),vc.end(),"dhruv");
    cout << j << endl;
    return 0;
}
