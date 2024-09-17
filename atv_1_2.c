#include <stdio.h>
#include <string.h>

int verifica_decimal (char numero[], int len)
{
    int acu_vir = 0;
    for (int i = 1; i < len; i++)
    {
        if ((numero[i] == ',') || (numero[i] == '.'))
        {
            acu_vir++;
        }
    }
    if (acu_vir > 1)
    {
        return 4;
    }
    else return acu_vir;   
}

int verifica_validade (char numero[], int len)
{
    if (verifica_decimal(numero,len) == 4)
    {
        return 1;
    }
    for (int i = 0; i < len; i++)
    {
        if ((numero[i] < '0') || (numero[i] > '9'))
        {
            if (i != 0)
            {
                if ((numero[i] != ',') && (numero[i] != '.'))
                {  
                    // printf("%d cas4\n", i);
                    return 1;
                }    
            }
            else if (numero[0] != '-')
            {
                // printf("cas2\n");
                return 1;
            } 
        }
    }
    return 0;
    
}


int verifica_negativo (char numero[], int len)
{
    if (numero[0] == '-')
    {
        return 1;
    }
    return 0;
}

int main ()
{
    char numero[15];
    
    scanf ("%s", numero);
    
    int len = strlen(numero);
    
    if (verifica_validade(numero, len) == 0)
    {  
        if (verifica_decimal(numero, len) == 1)
        {
            printf ("Numero real\n");
        }
        else if (verifica_negativo(numero, len) == 1)
        {
            printf("Numero inteiro\n");
        }
        else 
        {
            printf("Numero natural\n");
        }
    }
    else printf("Numero invalido\n");
    
    
    return 0;
}