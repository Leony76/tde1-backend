#include <stdio.h>

int main() {

    int N, H;
    int A[6];
    int brinquedos_pode_ir = 0;

    scanf("%d %d", &N, &H);

    for (int i = 0; i < N; i++) {
        int a;

        scanf("%d", &a);

        A[i] = a;
    }

    for (int i = 0; i < N; i++) {
        if (H >= A[i]) {
            brinquedos_pode_ir++;
        }
    }

    printf("%d", brinquedos_pode_ir);

    return 0;
}