#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+100;
const long long int MOD = 1000000007;
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

vector<ll> memo;

ll cont(ll n){
    if(n<0){
        return 0;
    }else if(n==0){
        return 1;
    }else if(memo[n]>-1){
        return memo[n];
    }else{
        memo[n]=(cont(n-1)+cont(n-2)+cont(n-3))%MOD;
        return memo[n];
    }
}

int main(){

    fastin;
    ll N;
    for(int i=0; i<MAXN; i++){
        memo.pb(-1);
    }
    string letra="abcdefghijklmnopqrstuvwxyz";
    string nome="NemTudoEGreveVersaoHard";
    srand(time(NULL));
    fstream arquivo;
    for(int i=0; i<26; i++){
        arquivo.open("Problema-F/IOs/"+nome+"-"+letra[i]+".in", fstream::out);
        if(arquivo.is_open()){
            N=rand()%32000+1;
            cout<<N<<endl;
            arquivo<<N<<endl;
            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

        arquivo.open("Problema-F/IOs/"+nome+"-"+letra[i]+".sol", fstream::out);
        if(arquivo.is_open()){
            cout<<cont(N)<<endl;
            arquivo<<cont(N)<<endl;
            arquivo.close();
        }else{
            cout<<"erro abrir arquivo"<<endl;
        }

    }




    cin>>N;
    cout<<cont(N)<<endl;

    return 0;
}



