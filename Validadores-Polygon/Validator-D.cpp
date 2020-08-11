#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerValidation(argc, argv);

    inf.readToken("[(-)]{1,100000}", "s");
    inf.readEoln();
    inf.readEof();

    return 0;
}
