#include <stdio.h>

int main() {
    int b = 87;
    for (int j = 5; j < 23; j++) printf("j=%d,\t%b=%d\n",j,b*j);
    return 0;
}
