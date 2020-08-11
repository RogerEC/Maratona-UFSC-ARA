#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define ini first
#define fim second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;


bool menor(pii a, pii b){return a.fim<b.fim;}

int v(int x){
    if(x<=0)
        return 1;
    if(x>100000)
        return 100000;
    return x;
}

int main(){
    srand(time(NULL));
    fstream arquivo;
    string letra="abcdefghijklmnopqrstuvwxyz";
    string nome="TobiasContraORelogio";
    vpii atividade;
    int N, cont, aux, aux2, mod1=1000, mod=1000;

    for(int i=12; i<26; i++){

        arquivo.open("Problema-E/IOs/"+nome+"-"+letra[i]+".in", fstream::out);

        if(arquivo.is_open()){

            N=(rand()+rand()+rand())%mod1+1;
            arquivo<<N<<endl;
            for(int i=0; i<N; i++){
                if(rand()%7==0){
                    aux=(rand()*rand())%mod+1;
                    aux2=(rand()*rand())%mod+1;
                }else if(rand()%5>=3){
                    aux=(rand()*rand())%mod+1;
                    aux2=rand()%9+1;
                }else{
                    aux=rand()+1;;
                    aux2=rand()%9+1;
                }

                atividade.pb(mp(aux, aux+aux2));
                arquivo<<aux<<' '<<aux2<<endl;
            }

            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

        arquivo.open("Problema-E/IOs/"+nome+"-"+letra[i]+".sol", fstream::out);

        if(arquivo.is_open()){

            sort(atividade.begin(), atividade.end(), menor);

            cont=aux=0;
            for(int i=0; i<N; i++){

                if(atividade[i].ini>=aux){
                    cont++;
                    aux=atividade[i].fim;
                }
            }

            cout<<cont<<endl;
            arquivo<<cont<<endl;

            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }
        atividade.clear();

    }

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>aux>>aux2;
        atividade.pb(mp(aux, aux+aux2));
    }

    sort(atividade.begin(), atividade.end(), menor);

    cont=aux=0;
    for(int i=0; i<N; i++){

        if(atividade[i].ini>=aux){
            cont++;
            aux=atividade[i].fim;
        }
    }

    cout<<cont<<endl;

    return 0;
}
