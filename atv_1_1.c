#include <stdio.h>
#include <string.h>


int verifica_maiscula (char inicial)
{
    // verifica se a primeira letra eh maiuscula
    if ((inicial < 'A') || (inicial > 'Z'))
    {
        return 1;        
    }
}

int verifica_caracteres (char nome[], int len)
{
    // percorre o nome
    for (int i = 1; i < len; i++)
    {
        // checa se nao ta no intervalo de letras minusculas
        if ((nome[i] < 'a') || (nome[i] > 'z'))
        {
            // verifica se eh espacço
            if (nome[i] == 32)
            {
                if (verifica_maiscula(nome[i+1]) == 1)
                {
                    
                    return 1;
                }
                else
                {
                    return 0;
                }
                return 1;
            }
        }
    }
}

int main ()
{
    char nome[50];
    char preposicao[] = {"da", "do", "das", "de"};
    printf ("Digite um nome: ");
    // falta ler a string depois do espaco
    scanf ("%[^\n]s", nome);

    printf("%s\n", nome);

    int len = strlen(nome);

    // recebendo o valor da verificacao de caracteres validos e letra maiuscula
    if (verifica_maiscula(nome[0]) == 1)
    {
        printf("Nome invalido. A primeira letra deve ser maiuscula!\n");
    }
    else if (len < 2)
    {
        printf("Nome invalido. Um nome deve ter pelo menos 2 caracteres");
    }
    else if (verifica_caracteres(nome, len) == 1)
    {
        printf("Nome invalido. Um nome valido deve conter somente letras.\n");
    }
    else
    {
        printf ("O nome %s eh valido\n", nome);
    }

    return 0;
}