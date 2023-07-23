#include <stdio.h>
 
void identificador(int diametro)
{ 
    if (diametro <= 100)
    {
        printf("Meteoro ou Asteroide\n");
    }
    else if (diametro <= 3000)
    {
        printf("Lua ou Planeta Anao\n"); 
    }
    else if (diametro <= 120000)
    {
        printf("Planeta\n");
    }
    else if (diametro > 120000 && diametro != 160)
    {
        printf("Estrela\n");
    }
    else if (diametro == 160)
    {
        printf("Estrela da Morte!\n");
    }
}
int main()
{
    int diametro;
    printf("Digite o diametro do objeto em quilometros: ");
    scanf("%d", &diametro);
    identificador(diametro);
}
