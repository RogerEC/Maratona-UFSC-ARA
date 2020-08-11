#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerValidation(argc, argv);

    inf.readToken("[A-Z]{1,1}", "l");
    inf.readEoln();
    inf.readEof();

    return 0;
}
