#include <iostream>

using namespace std;

int main()
{
    //bool (type integer, byte = 1)
    bool flag1 = true;
    bool flag2 = false;

    //char (integer symbol, byte = 1)
    char symbol = 'Y';

    //short int (integer, byte = 2, range -32 768 / 32 767)
    short int a1 = -32768;
    short int a2 = 32767;

    //unsigned short int (integer, byte = 2, range 0 / 65 535)
    unsigned short int b1 = 0;
    unsigned short int b2 = 65535;

    //int (integer, byte = 4, range -2 147 483 648 / 2 147 483 647)
    int c1 = -2147483648;
    int c2 = 2147483647;

    //unsigned int (integer, byte = 4, range 0 / 4 294 967 295)
    unsigned int d1 = 0;
    unsigned int d2 = 4294967295;

    //long int (integer, byte = 4, range -2 147 483 648 / 2 147 483 647)
    long int e1 = -2147483648;  // old OS 16bit long int = 32 bit, int = 16 bit
    long int e2 = 2147483647;

    //unsigned long int (integer, byte = 4, range 0 / 4 294 967 295)
    unsigned long int f1 = 0;
    unsigned long int f2 = 4294967295;

    //float (floating point, byte = 4, range -2 147 483 648.0 / 2 147 483 647.0)
    float g1 = -2147483648.0;
    float g2 = 2147483647.0;

    //long float (floating point, byte = 8, range -9 223 372 036 854 775 808 .0 / 9 223 372 036 854 775 807.0)

    // long float h1 = -9223372036854775808.0;
    // long float h2 = 9223372036854775807.0;

    //double (floating point, byte = 8, range -9 223 372 036 854 775 808 .0 / 9 223 372 036 854 775 807.0)
    double i1 = -9223372036854775808.0;
    double i2 = 9223372036854775807.0;

    //sizeof (i2);  measure bytes for variable i2

    cout << "-----------------------------------------------------" << endl;
    cout << "   data type\t" << "   byte\t\t" << "    max value" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "bool\t\t     " << sizeof (flag1) << "\t\tfalse(0)/true(1-255)" << endl;
    cout << "char\t\t     " << sizeof (symbol) << "\t\t255" << endl;
    cout << "short int\t     " << sizeof(a2) << "\t\t" << a2 << endl;
    cout << "unsigned short int   " << sizeof(b2) << "\t\t" << b2 << endl;
    cout << "int \t\t     " << sizeof(c2) << "\t\t" << c2 << endl;
    cout << "unsigned int\t     " << sizeof(d2) << "\t\t" << d2 << endl;
    cout << "long int\t     " << sizeof(e2) << "\t\t" << e2 << endl;
    cout << "unsigned long int    " << sizeof(f2) << "\t\t" << f2 << endl;
    cout << "float\t\t     " << sizeof(g2) << "\t\t" << g2 << endl;
    cout << "duble\t\t     " << sizeof(i2) << "\t\t" << i2 << endl;
    cout << "-----------------------------------------------------" << endl;

    char sym = 'y';
    cin >> sym;
    return 0;
}
