#include <stdio.h>
 
void header ()
{
    printf("BEM VINDO AO JOGO DAS 3 JARRAS\n\nTemos 3 jarras (A, B e C) que cabem 8 litros, 5 litros e 3 litros, respectivamente.\n");
    printf("Escolha a quantidade de litros que havera em cada jarra.\nEste programa dira quantos passos foram necessarios para fazer com que a distribuicao final seja 4-4-0\n\n");
    printf("=======================================================================================\n");
    printf("Regra: a soma dos litros OBRIGATORIAMENTE deve ser igual a 8, senao o programa morre :)\n");
    printf("=======================================================================================\n");
}
 
int ler_jarra (int jarra)
{
    scanf ("%d", &jarra);
    return jarra;
}
 
int verifica_jarra (int jarra, int maximo)
{
    if ((jarra > maximo) && (jarra >= 0))
    {
        printf ("Voce superou o limite da jarra. Digite novamente: ");
        jarra = ler_jarra(0);
        verifica_jarra (jarra, maximo);
        return jarra;
    }
    else 
    {
        return jarra;
    }
}
 
int verifica_tudo (int j1, int j2, int j3, int total)
{
    int soma = j1 + j2 + j3;
    if (soma != 8)
    {
        if (soma < 8)
        {
            printf("Faltam %d litros para 8 litros, rode o programa novamente :(\n", total - soma);
            return 1;
        }
        else 
        {
            printf("Voce colocou %d litros a mais, rode o programa novamente :(\n", soma - total);
            return 1;
        }
    }
    return 0;
}
 
int criar_800 (int * A, int *B, int *C, int acu)
{
    printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
    if (*A == 8)
    {
        return acu;
    }
    else if (*B == 0)
    {
        *A += *C;
        *C = 0;
        printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
        acu++;
    }
    else 
    {
        *A += *B;
        *B = 0;
        printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
        acu++;
        if (*C != 0)
        {
            *A += *C;
            *C = 0;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            acu++; 
        }
    }
    
    return acu;
}
 
int os7passos (int *A, int *B, int *C, int acu, int i)
{
    switch (i)
    {
        case 0:
            *B = 5;
            *A = 3;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *C = 3;
            *B = 2;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 6;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 0;
            *C = 2;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 5;
            *A = 1;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 4;
            *C = 3;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 4;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;

        case 1:
            *C = 3;
            *B = 2;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 6;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 0;
            *C = 2;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 5;
            *A = 1;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 4;
            *C = 3;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 4;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;

        case 2:
            *A = 6;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 0;
            *C = 2;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 5;
            *A = 1;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 4;
            *C = 3;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 4;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;

        case 3:
            *B = 0;
            *C = 2;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 5;
            *A = 1;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 4;
            *C = 3;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 4;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;

        case 4:
            *B = 5;
            *A = 1;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *B = 4;
            *C = 3;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 4;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;

        case 5:
            *B = 4;
            *C = 3;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            *A = 4;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;

        case 6:
            *A = 4;
            *C = 0;
            acu++;
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;
        
        case 7:
            printf ("(A: %d / B: %d / C: %d)\n", *A, *B, *C);
            return acu;
            break;

        default:
            return 0;
    }
}

int verifica_passos (int centena, int seven_passos[], int *A, int *B, int *C)
{
    for (int i = 0; i <= 7; i++)
    {
        if ((centena == seven_passos[i]) && (centena != 0))
        {
            int acumulador = os7passos (A, B, C, 0, i);
            return acumulador;
        }
    }

    return 10001;
}

int main ()
{
    int A, B, C, acumulador;
    int seven_passos[] = {800, 350, 323, 620, 602, 152, 143, 440};
    
    header();
    
    printf("Escolha a quantidade da jarra A (maximo: 8L): ");
    A = ler_jarra (0);
    A = verifica_jarra(A, 8);
    printf("Escolha a quantidade da jarra B (maximo: 5L): ");
    B = ler_jarra (0);
    B = verifica_jarra(B, 5);
    printf("Escolha a quantidade da jarra C (maximo: 3L): ");
    C = ler_jarra (0);
    C = verifica_jarra(C, 3);
    
    if (verifica_tudo (A, B, C, 8) == 1) return 0;

    int nmr_unico = (A * 100) + (B * 10) + C;
    // printf("%d\n", nmr_unico);

    acumulador = verifica_passos (nmr_unico, seven_passos, &A, &B, &C);

    if (acumulador == 10001)
    {
        acumulador = criar_800 (&A, &B, &C, 0);
    
        acumulador = os7passos(&A, &B, &C, acumulador, 0);

        printf ("Foram necessarios %d passos para que a distribuicao se tornasse 4-4-0\n", acumulador);
    }
    else 
    {
        printf ("Foram necessarios %d passos para que a distribuicao se tornasse 4-4-0\n", acumulador);
    }
    
    return 0;
}