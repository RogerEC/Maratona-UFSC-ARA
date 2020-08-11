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

int main(){

    fastin;
    string vetor;
    stack<char> pilha;

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

