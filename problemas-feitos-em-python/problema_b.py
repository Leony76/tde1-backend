from math import ceil

C = int(input())  
A = int(input())  

max_alunos_por_viagem = C - 1

viagens = ceil(A / max_alunos_por_viagem)

print(viagens)
