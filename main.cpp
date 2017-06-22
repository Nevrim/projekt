#include <iostream>
#include <cstdlib>
#include <time.h>
#include "kontroler.h"

using namespace std;

int main()
{
    srand( time (NULL));
    cout << "Hello world!" << endl;
    kontroler *kontroler1 = new kontroler();
    kontroler1->akcja();
    return 0;
}
