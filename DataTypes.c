 #include<stdio.h>              // Importing standard Input Output Header Files
 #include<stdbool.h>            // Importing standard bool values Header Files
 int main()
 {
    char a = 'C';                   // single character    %c
    char b[] = "This is an array of characters";            // array of characters %s  

    float c = 3.141592;                     // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793;           // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                         // 1 byte (true or false) %d
    bool f = false;
    char g = 120;                          // 1 byte (-128 to +127) %d or %c
    unsigned char h = 255;                 // 1 byte (0 to +255) %d or %c

    short i = 32767;                        // 2 bytes (−32,768 to +32,767) %d
    unsigned short j = 65535;               // 2 bytes (0 to +65,535) %d

    int k = 2147483647;                     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int l = 4294967295;            // 4 bytes (0 to +4,294,967,295) %u

    long long int m = 9223372036854775807;              // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int n = 18446744073709551615U;   // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a);      // char
    printf("%s\n", b);      // character array
    printf("%f\n", c);      // float
    printf("%lf\n", d);     // double
    printf("%d\n", e);      // bool true
    printf("%d\n", f);      // bool false
    printf("%d\n", g);      // char as numeric value
    printf("%d\n", h);      // unsigned char as numeric value
    printf("%d\n", i);      // short
    printf("%d\n", j);      // unsigned short
    printf("%d\n", k);      // int
    printf("%u\n", l);      // unsigned int
    printf("%lld\n", m);    // long long int
    printf("%llu\n", n);    // unsigned long long int
    return 0;
 }