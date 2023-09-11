#include <stdio.h>

int main() {
    int abc, cba, xyz, zyx;

    // Solicitei que o usuário digitasse o número abc
    printf("Digite um numero de 3 algarismos (entre 100 6e 999): ");
    scanf("%d", &abc);

    // Verifiquei se o número tem 3 algarismos e se não tivesse finalizei o programa.
    if (abc < 100 || abc > 999) {
        printf("O numero nao possui 3 algarismos. Programa finalizado.\n");
        return 1;
    }

    // Verifiquei se a diferença entre as centenas e as unidades é maior ou igual a 2
    int centenas = abc / 100;
    int unidades = abc % 10;

    if (centenas - unidades < 2 && unidades - centenas < 2) {
        printf("A diferença entre as centenas e as unidades nao e maior ou igual a 2. Programa finalizado.\n");
        return 1;
    }

    //Inverti a ordem dos algarismos
    cba = (abc % 10) * 100 + ((abc / 10) % 10) * 10 + (abc / 100);

    //Somei abc e cba para obter xyz
    xyz = abc + cba;

    //Inverti a ordem de xyz
    zyx = (xyz % 10) * 100 + ((xyz / 10) % 10) * 10 + (xyz / 100);

    //Somei xyz e zyx para obter o resultado
    int resultado = xyz + zyx;

    //Imprimi o resultado
    printf("O resultado e: %d\n", resultado);
    return 0;
}