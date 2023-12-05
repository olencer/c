#include <assert.h>
#include <stdio.h>

int main()
{
    assert(("Not define NDEBUG macro.", 0));
    printf("Define NDEBUG macro.\n");
}