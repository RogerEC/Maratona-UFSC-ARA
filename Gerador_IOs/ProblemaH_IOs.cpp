#include<bits/stdc++.h>

using namespace std;

int main(){

    string S;
    set<string> s;
    srand(time(NULL));
    fstream arquivo;
    int cont=0;

    while(s.size()<500){
        if(rand()%4==0){
            if(rand()%4==0){
                S.clear();
                S="__";
                S+=(char)('A'+rand()%26);
            }else{
                S.clear();
                S="_";
                S+=(char)('A'+rand()%26);
                S+=(char)('A'+rand()%26);
            }
        }else{
            S.clear();
            S+=(char)('A'+rand()%26);
            S+=(char)('A'+rand()%26);
            S+=(char)('A'+rand()%26);
        }
        s.insert(S);
    }

    for(set<string>::iterator it=s.begin(); it!=s.end(); ++it){
        arquivo.open("Problema-H/H2-IOs/"+to_string(cont), fstream::out);
        if(arquivo.is_open()){
            arquivo<<*it<<endl;
            cout<<*it<<endl;
            arquivo.close();
        }else{
            cout<<"erro em "<<cont<<endl;
        }
        cont++;
    }


    return 0;
}

