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

int main(){

    vpii consulta;
    int N, cont, aux, aux2;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>aux>>aux2;
        consulta.pb(mp(aux, aux+aux2));
    }

    sort(consulta.begin(), consulta.end(), menor);

    cont=aux=0;
    for(int i=0; i<N; i++){

        if(consulta[i].ini>=aux){
            cont++;
            aux=consulta[i].fim;
        }
    }

    cout<<cont<<endl;

    return 0;
}
