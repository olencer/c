#include <assert.h>
#include <stdio.h>

int main()
{
    // static_assert(sizeof(void *) == 8);
    static_assert(sizeof(void *) == 8, "64-bit architecture platform is not supported.");
    printf("64-bit architecture platform is supported.\n");

    return 0;
}
