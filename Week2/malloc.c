#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char** pp_data = NULL;
    int n;
    int length;
    int i;

    scanf("%d ", &n);

    pp_data = (char**)malloc(sizeof(char*) * n);

    //1. define & dynamic allocation
    for (i = 0; i < n; i++) {
        int tmpN;

        scanf("%d", &tmpN);

        pp_data[i] = (char*)malloc(sizeof(char) * (tmpN + 1));

        scanf("%s", pp_data[i]);

    }


    //2. print string

    for (i = 0; i < n; i++) {
        printf("%s\n", pp_data[i]);
    }


    //3. free memory

    for (i = 0; i < n; i++) {
        free(pp_data[i]);
    }

    free(pp_data);

    return 0;
}
