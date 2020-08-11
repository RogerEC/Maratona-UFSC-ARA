#include<bits/stdc++.h>

using namespace std;

int main()
{
    string letra="abcdefghijklmnopqrstuvwxyz";
    string nome="VamosFechar";
    srand(time(NULL));
    fstream arquivo;
    int C, G, aux;

    vector<bool> flag;
    for(int i=0; i<36; i++){
        flag.push_back(false);
    }
    flag[10]=flag[24]=true;
    for(int i=2; i<26; i++){
        arquivo.open("Problema-A/IOs/"+nome+"-"+letra[i]+".in", fstream::out);
        if(arquivo.is_open()){
            C=G=1;
            C+=rand()*(rand()%100+1)*(rand()%300+1);
            aux=(rand()%35+1);
            while(flag[aux]){
                aux++;
                aux%=35;
            }
            flag[aux]=true;
            G+=C/aux+C%aux;
            arquivo<<C<<' '<<G;
            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

        arquivo.open("Problema-A/IOs/"+nome+"-"+letra[i]+".sol", fstream::out);
        if(arquivo.is_open()){
            cout<<C/G<<endl;
            if((C/G+1)>10){
                cout<<"A UFSC fecha dia "<<(C/G+21)%30<<" de outubro."<<endl;
                arquivo<<"A UFSC fecha dia "<<(C/G+21)%30<<" de outubro."<<endl;
            }else{
                cout<<"A UFSC fecha dia "<<(C/G+21)<<" de setembro."<<endl;
                arquivo<<"A UFSC fecha dia "<<(C/G+21)<<" de setembro."<<endl;
            }
            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

    }
    int c, g;
    cin>>c>>g;

    if((c/g+1)>10){
        cout<<"A UFSC fecha dia "<<(c/g+21)%30<<" de outubro."<<endl;
    }else{
        cout<<"A UFSC fecha dia "<<(c/g+21)<<" de setembro."<<endl;
    }

    return 0;
}
