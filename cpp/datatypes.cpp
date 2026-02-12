#include <iostream>
#include <cstdint>

int main() {
    // Character types
    char c;
    signed char sc;
    unsigned char uc;
    wchar_t wc;

    // Boolean
    bool b;

    // Integer types
    short s;
    unsigned short us;
    int i;
    unsigned int ui;
    long l;
    unsigned long ul;
    long long ll;
    unsigned long long ull;

    // Fixed-width integers
    int8_t i8;
    int16_t i16;
    int32_t i32;
    int64_t i64;

    // Floating-point types
    float f;
    double d;
    long double ld;

    // Print sizes
    std::cout << "char: " << sizeof(c) << " bytes\n";
    std::cout << "signed char: " << sizeof(sc) << " bytes\n";
    std::cout << "unsigned char: " << sizeof(uc) << " bytes\n";
    std::cout << "wchar_t: " << sizeof(wc) << " bytes\n\n";

    std::cout << "bool: " << sizeof(b) << " bytes\n\n";

    std::cout << "short: " << sizeof(s) << " bytes\n";
    std::cout << "unsigned short: " << sizeof(us) << " bytes\n";
    std::cout << "int: " << sizeof(i) << " bytes\n";
    std::cout << "unsigned int: " << sizeof(ui) << " bytes\n";
    std::cout << "long: " << sizeof(l) << " bytes\n";
    std::cout << "unsigned long: " << sizeof(ul) << " bytes\n";
    std::cout << "long long: " << sizeof(ll) << " bytes\n";
    std::cout << "unsigned long long: " << sizeof(ull) << " bytes\n\n";

    std::cout << "int8_t: " << sizeof(i8) << " bytes\n";
    std::cout << "int16_t: " << sizeof(i16) << " bytes\n";
    std::cout << "int32_t: " << sizeof(i32) << " bytes\n";
    std::cout << "int64_t: " << sizeof(i64) << " bytes\n\n";

    std::cout << "float: " << sizeof(f) << " bytes\n";
    std::cout << "double: " << sizeof(d) << " bytes\n";
    std::cout << "long double: " << sizeof(ld) << " bytes\n";

    return 0;
}
