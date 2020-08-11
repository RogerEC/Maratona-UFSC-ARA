#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll v(ll x){
    if(x<=0)
        return 1;
    if(x>100000)
        return 100000;
    return x;
}

int main()
{
    char T;
    long long int soma=0, C, N, mod=1000;
    int aux;
    srand(time(NULL));
    fstream arquivo;
    string nome="AGreveParaOuContinua";
    string letra="abcdefghijklmnopqrstuvwxyz";

    for(int i=9; i<26; i++){
        arquivo.open("Problema-B/IOs/"+nome+"-"+letra[i]+".in", fstream::out);
        if(arquivo.is_open()){

            N=v((ll)(rand()+rand()+rand()))%mod+1;
            arquivo<<N<<endl;
            cout<<N<<endl;
            soma=0;
            for(int i=0; i<N; i++){
                C=v((ll)rand()+rand()+rand())%mod+1;
                if(rand()%2==0){
                    T='V';
                    soma+=C;
                }else{
                    T='G';
                    soma-=C;
                }

                arquivo<<T<<' '<<C<<endl;

            }

            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }


        arquivo.open("Problema-B/IOs/"+nome+"-"+letra[i]+".sol", fstream::out);
        if(arquivo.is_open()){
            if(soma>=0){
                cout<<"A greve vai parar."<<endl;
                arquivo<<"A greve vai parar."<<endl;
            }else{
                cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
                arquivo<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
            }
            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }
    }

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>T>>C;
        if(T=='V'){
            soma+=C;
        }else{
            soma-=C;
        }
    }

    if(soma>=0){
        cout<<"A greve vai parar."<<endl;
    }else{
        cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
    }

    return 0;
}
