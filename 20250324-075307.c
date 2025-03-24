#include <stdio.h>
#include <stdlib.h>
int main()
 {
    int P = 1;
    int Q = 0;
    int R = 1;
    int T = 0;
    printf (" %d\n", P & R);
    printf (" %d\n", Q || T);
    printf (" %d\n", P & Q);
    printf (" %d\n", R || T);
    
    return 0;
    }