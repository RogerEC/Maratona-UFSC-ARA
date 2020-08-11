#include "testlib.h"
#include<climits>

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int A = inf.readInt(1, INT_MAX, "A");
    inf.readSpace();
    int B = inf.readInt(1, INT_MAX, "B");
    inf.readEoln();
    inf.readEof();

    if((A/B)>40)
        exit(3);
}
