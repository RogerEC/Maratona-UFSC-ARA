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

bool eh_primo(int x){
    if(x==0 || x==1)
        return false;
    if(x==2)
        return true;
    if((x%2)==0)
        return false;
    for(int i=3; i*i<=x; i+=2){
        if((x%i)==0){
            return false;
        }
    }
    return true;
}

int main(){

    fastin;
    string letra="abcdefghijklmnopqrstuvwxyz";
    string nome="NemTudoEGreve";
    srand(time(NULL));
    fstream arquivo;
    int N, aux;
    set<int> primos;
    vector<bool> marcador;
    vector<int> primo;
    int lim=1000000, mod, MOD=1000000008;

    for(int i=0; i<=lim; i++)
        marcador.push_back(true);

    for(int i=2; i*i<=lim; i++){
        if(marcador[i]){
            for(int j=2; j*i<=lim; j++){
                marcador[i*j]=false;
            }
        }
    }

    for(int i=2; i<=lim; i++)
        if(marcador[i])
            primo.push_back(i);
    mod=primo.size();

    for(int i=1; i<2; i++){
        arquivo.open("Problema-C/IOs/"+nome+"-"+letra[i]+".in", fstream::out);
        if(arquivo.is_open()){
            N=1000;
            arquivo<<N<<endl;
            cout<<N<<endl;
            for(int i=0; i<N; i++){
                arquivo<<1000000007<<endl;
            }
            primos.insert(1000000007);

            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

        arquivo.open("Problema-C/IOs/"+nome+"-"+letra[i]+".sol", fstream::out);
        if(arquivo.is_open()){

            arquivo<<primos.size()<<endl;
            cout<<primos.size()<<endl;
            set<int>::iterator aux2;
            for(set<int>::iterator it=primos.begin(); it!=primos.end(); ++it){
                aux2=it;
                aux2++;
                if(aux2==primos.end())
                    arquivo<<*it<<'.';
                else
                    arquivo<<*it<<", ";
            }
            arquivo<<endl;

            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }
        primos.clear();

    }

    // ===================
    cin>>N;

    for(int i=0; i<N; i++){
        cin>>aux;
        if(eh_primo(aux)){
            primos.insert(aux);
        }
    }

    cout<<primos.size()<<endl;
    set<int>::iterator aux2;
    for(set<int>::iterator it=primos.begin(); it!=primos.end(); ++it){
        aux2=it;
        aux2++;
        if(aux2==primos.end())
            cout<<*it<<'.';
        else
            cout<<*it<<", ";
    }
    cout<<endl;

    return 0;
}

