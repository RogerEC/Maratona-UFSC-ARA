#include "testlib.h"
#include<climits>

using namespace std;

typedef long long int ll;

int main(int argc, char* argv[]) {

    registerValidation(argc, argv);

    int N = inf.readInt(1, 100000, "N");
    inf.readEoln();

    for(int i=0; i<N; i++){
        inf.readInt(1, 1000000, "A");
        inf.readSpace();
        inf.readInt(1, 1000000, "A");
        inf.readEoln();
    }

    inf.readEof();
}

