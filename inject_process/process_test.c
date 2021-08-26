#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    printf("Hello world\n");
    printf("Process ID: %d\n", getpid());

    while (1) {
        continue;
    }

    return 0;
}
