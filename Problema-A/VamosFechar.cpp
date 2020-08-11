#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c, g;

    cin>>c>>g;

    if((c/g+1)>10){
        cout<<"A UFSC fecha dia "<<(c/g+21)%30<<" de outubro."<<endl;
    }else{
        cout<<"A UFSC fecha dia "<<(c/g+21)<<" de setembro."<<endl;
    }

    return 0;
}
