#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>

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

double getmaiden(vectorlist vList){
    int s =vList.size();
    sort(vList.begin(),vList.end());
    if(s<1) return 0;
    if(s<2) return vList[0];

    if(s%2){
        return vList[s/2];
    }else{
        return (vList[s/2-1]+vList[s/2])/2;
    }
}

void printstat(maplist &m){
    cout << "Here is Stats : " << endl;
    for(maplist::const_iterator i=m.begin();i!=m.end();i++){
    vectorlist value = (*i).second;
     double sum = getsum(value);
     double maiden = getmaiden(value);
     cout << "Name: " << (*i).first <<", Sum: " << sum <<", Avg value: " <<sum/(*i).second.size()<< " Maiden : " << maiden <<endl;
    }
}

int main(){
    string name;
    double v;
    maplist m;

    while(true){
        cout << "Enter Name and Value : " << endl;
        cin >> name >> v ;

        if(!m.count(name)){
            vectorlist value;
            m.insert(pairlist(name,value));
        }

        m[name].push_back(v);
        printstat(m);
    }

    return 0;
}
