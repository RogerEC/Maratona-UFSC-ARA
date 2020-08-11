#include "testlib.h"
#include<climits>

using namespace std;

typedef long long int ll;

int main(int argc, char* argv[]) {

    registerValidation(argc, argv);
    char C;

    int N = inf.readInt(1, 100000, "N");
    inf.readEoln();

    for(int i=0; i<N; i++){

        C = inf.readChar();
        inf.readSpace();
        inf.readInt(1, 100000, "A");
        inf.readEoln();

        if((C=='V')||(C=='G')){
            continue;
        }else{
            exit(3);
        }
    }

    inf.readEof();
}

