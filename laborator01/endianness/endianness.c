#include <stdio.h>
/*
* little-endian - numarul se salveaza in memorie invers
        (la adrese mai mici cel mai putin semnificativ byte)
* big-endian - numarul se salveaza in aceeasi ordine
        (la adrese mai mici cel mai semnificativ byte)
*/

int main() {
    int a = 0x12345678;
    unsigned char *c = (unsigned char*)(&a);
    if (*c == 0x78) {
       printf("little-endian\n");
    } else {
       printf("big-endian\n");
    }
    return 0;
}