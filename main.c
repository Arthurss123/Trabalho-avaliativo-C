#include <stdio.h>

int main() {
    int abc, cba, xyz, zyx;

    // Passo 1: Solicitar que o usuário digite o número abc de 3 algarismos
    printf("Digite um numero de 3 algarismos (entre 100 6e 999): ");
    scanf("%d", &abc);

    // Passo 2: Verificar se o número tem 3 algarismos
    if (abc < 100 || abc > 999) {
        printf("O numero nao possui 3 algarismos. Programa finalizado.\n");
        return 1; // Finalizar o programa com erro
    }

    // Passo 3: Verificar se a diferença entre as centenas e as unidades é maior ou igual a 2
    int centenas = abc / 100;
    int unidades = abc % 10;

    if (centenas - unidades < 2 && unidades - centenas < 2) {
        printf("A diferença entre as centenas e as unidades nao e maior ou igual a 2. Programa finalizado.\n");
        return 1; // Finalizar o programa com erro
    }

    // Passo 4: Inverter a ordem dos algarismos
    cba = (abc % 10) * 100 + ((abc / 10) % 10) * 10 + (abc / 100);

    // Passo 5: Somar abc e cba para obter xyz
    xyz = abc + cba;

    // Passo 6: Inverter a ordem de xyz
    zyx = (xyz % 10) * 100 + ((xyz / 10) % 10) * 10 + (xyz / 100);

    // Passo 7: Somar xyz e zyx para obter o resultado
    int resultado = xyz + zyx;

    // Passo 8: Imprimir o resultado
    printf("O resultado e: %d\n", resultado);

    // Passo 9: Finalizar o programa
    return 0;
}