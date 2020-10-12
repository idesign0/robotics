#include <iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

// TYPEDEFS
typedef vector<double> valuelist;
typedef map<string,valuelist> maplist;
typedef pair<string,valuelist> mappair;

double getsum(valuelist v){
    double sum=0;
    for(valuelist::const_iterator i = v.begin();i!=v.end();i++){
        sum+=(*i);
    }
    return sum;
}

double printstat(maplist& m){
    for(maplist::const_iterator i = m.begin();i!=m.end();i++){
        double sum = getsum((*i).second);
        cout <<"Name : "<<(*i).first << " Total Sum : " << sum <<" Avg Sum : "<< sum/(*i).second.size() << endl;
    }
}

int main()
{
    string name;
    double value;

    maplist data;

    while(true){
     cin >> name;
     cin >> value;

     if(!data.count(name)){
        valuelist v;
        data.insert(mappair(name,v));
     }

     data[name].push_back(value);
     printstat(data);
    }

    return 0;
}
