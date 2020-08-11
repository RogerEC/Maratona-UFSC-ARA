#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int v(int x){
    if(x<=0)
        return 1;
    if(x>100000)
        return 100000;
    return x;
}

int main(){

    fastin;
    string vetor;
    int N, mod=1000;
    srand(time(NULL));
    stack<char> pilha;
    fstream arquivo;
    string letra="abcdefghijklmnopqrstuvwxyz";
    string nome="AssuntosPendentes";

    for(int i=20; i<26; i++){
        arquivo.open("Problema-D/IOs/"+nome+"-"+letra[i]+".in", fstream::out);
        if(arquivo.is_open()){

            N=(rand()*rand())%mod;
            cout<<N<<endl;

            for(int i=0; i<N; i++){
                if((rand()%3)==0){
                    vetor+="(";
                }else{
                    vetor+=")";
                }
            }

            arquivo<<vetor<<endl;

            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

        arquivo.open("Problema-D/IOs/"+nome+"-"+letra[i]+".sol", fstream::out);
        if(arquivo.is_open()){

            for(ui i=0; i<vetor.size(); i++){
                if(vetor[i]=='('){
                    pilha.push(vetor[i]);
                }else{
                    if(!pilha.empty()){
                        pilha.pop();
                    }
                }
            }

            if(pilha.size()!=0){
                cout<<"Ainda temos "<<pilha.size()<<" assunto(s) pendente(s)!"<<endl;
                arquivo<<"Ainda temos "<<pilha.size()<<" assunto(s) pendente(s)!"<<endl;
            }else{
                cout<<"Partiu RU!"<<endl;
                arquivo<<"Partiu RU!"<<endl;
            }
                    arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

        while(!pilha.empty())
            pilha.pop();
        vetor.clear();

    }


    cin>>vetor;

    for(ui i=0; i<vetor.size(); i++){
        if(vetor[i]=='('){
            pilha.push(vetor[i]);
        }else{
            if(!pilha.empty()){
                pilha.pop();
            }
        }
    }

    if(pilha.size()!=0)
        cout<<"Ainda temos "<<pilha.size()<<" assunto(s) pendente(s)!"<<endl;
    else
        cout<<"Partiu RU!"<<endl;

    return 0;
}

