#include <stdio.h>
#include <math.h>

int main() {

    int C, A;
    float max_alunos_por_viagem;
    float viagens;

    scanf("%d %d", &C, &A);

    max_alunos_por_viagem = C - 1;

    viagens = ceil((float)A / (float)max_alunos_por_viagem);

    printf("%.0f", viagens);

    return 0;
}