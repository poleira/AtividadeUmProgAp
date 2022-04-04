#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void fazerCalculo(int a);

int main (void) //esse void pode deixar sem nada
{
    int quantasTeclas;
    printf("Insira quantas teclas vai usar\n");
    scanf("%i", &quantasTeclas);
    fazerCalculo(quantasTeclas);

}

void fazerCalculo(int a){
    int numeroDaTecla[a];
    int numeroDeVezes[a];
    char nomeFinal[a];
    for (size_t i = 0; i < a; i++)
    {
        char str[60];
        printf("Insira a chave\n");
        scanf("%s", &str);
         //int i = (int)nome[1] - 48;
        numeroDaTecla[i] = (int)str[1] - 48;
        numeroDeVezes[i] = (int)str[3] - 48;

        switch (numeroDaTecla[i])
        {
        case 2:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 'a';
                break;
            case 2:
                nomeFinal[i] = 'b';
                break;
            case 3:
                nomeFinal[i] = 'c';
                break;
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;
        case 3:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 'd';
                break;
            case 2:
                nomeFinal[i] = 'e';
                break;
            case 3:
                nomeFinal[i] = 'f';
                break;
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;

        case 4:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 'g';
                break;
            case 2:
                nomeFinal[i] = 'h';
                break;
            case 3:
                nomeFinal[i] = 'i';
                break;
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;

        case 5:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 'j';
                break;
            case 2:
                nomeFinal[i] = 'k';
                break;
            case 3:
                nomeFinal[i] = 'l';
                break;
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;

        case 6:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 'm';
                break;
            case 2:
                nomeFinal[i] = 'n';
                break;
            case 3:
                nomeFinal[i] = 'o';
                break;
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;

        case 7:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 'p';
                break;
            case 2:
                nomeFinal[i] = 'q';
                break;
            case 3:
                nomeFinal[i] = 'r';
                break;
            case 4:
                nomeFinal[i] = 's';
                break;    
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;

        case 8:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 't';
                break;
            case 2:
                nomeFinal[i] = 'u';
                break;
            case 3:
                nomeFinal[i] = 'v';
                break;
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;

        case 9:
            switch (numeroDeVezes[i])
            {
            case 1:
                nomeFinal[i] = 'w';
                break;
            case 2:
                nomeFinal[i] = 'x';
                break;
            case 3:
                nomeFinal[i] = 'y';
                break;
            case 4:
                nomeFinal[i] = 'z';
                break;    
            
            default:
                printf("Chave invalida\n");
                break;
            }
            
            break;                    


        default:
            printf("Chave invalida\n");
            break;
        }

    }

    printf("A palavra eh: %s", nomeFinal);
    
}