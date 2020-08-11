#include<bits/stdc++.h>

using namespace std;

int main()
{
    char T;
    long long int soma=0, C, N;

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
