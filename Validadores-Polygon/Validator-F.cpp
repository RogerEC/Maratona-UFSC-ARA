#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {

    registerValidation(argc, argv);
    inf.readInt(1, 100000, "A");
    inf.readEoln();
    inf.readEof();
}
