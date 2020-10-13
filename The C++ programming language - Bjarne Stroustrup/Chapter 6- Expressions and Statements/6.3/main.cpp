#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

typedef vector<double> vectorlist;
typedef map<string,vectorlist> maplist;
typedef pair<string,vectorlist> pairlist;

double getsum(vectorlist v){
    double sum = 0;
    for(int i=0;i<v.size();i++){
        sum += v[i];
    }
    return sum;
}

void printstat(maplist &m){
    cout << "Here is Stats : " << endl;
    for(maplist::const_iterator i=m.begin();i!=m.end();i++){
     double sum = getsum((*i).second);
     cout << "Name: " << (*i).first <<", Sum: " << sum <<", Avg value: " <<sum/(*i).second.size()<<endl;
    }
}

int main(){
    string name;
    double v;
    vectorlist value;
    maplist m;

    while(true){
        cout << "Enter Name and Value : " << endl;
        cin >> name >> v ;

        if(!m.count(name)){
            m.insert(pairlist(name,value));
        }

        m[name].push_back(v);
        printstat(m);
    }

    return 0;
}
