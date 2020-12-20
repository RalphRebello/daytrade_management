#include <stdlib.h>
#include <stdio.h>

float load_banca()
{
    float banca = 0;
    FILE *data;

    data = fopen("banca.txt", "r");

    while(!feof(data))
        banca = banca + fscanf(data, "%f", &banca);

    fclose(data);

    return(banca);
}

int update_payout()
{
    int payout=0;
    system("clear");
    printf("Insira a %% do payout -> ");
    scanf("%d", &payout);

    printf("\nPayout atualizado -> %d%%", payout);

    return(payout);
}

int sell_op()
{
    float value_op=0, banca=0;
    char result;

    value_op = ((banca = load_banca())*0.02);
    printf("%.2f", value_op);
    // printf("Informe: Win (y) ou Loss (l)");
    // scanf("%c", &result);

}

int buy_op()
{
    printf("buy_op");
}

void menu()
{
    float banca=0;

    banca = load_banca();

    printf("\n\nValor da Banca Atual -> %.2f\n\n", banca);
    printf("Escolha uma opcao:\n");
    printf("1 - Atualizar Payout\n");
    printf("2 - Operação de compra\n");
    printf("3 - Operação de venda\n");
    printf("4 - Sair\n");
    printf("Opcao -> ");
}

int main(int argc, char *argv[])
{
    int option=0;

    while(option != 4)
    {
        menu();
        while(!scanf("%d",&option))
        {
            getchar();
            system("clear");
            printf("\nOpcao invalida: Digite uma opcao valida\n");
            menu();
        }

        if(option == 1)
            update_payout();
        else
            if(option == 2)
                sell_op();
            else
                if(option == 3)
                    buy_op();
                else
                    if(option == 4)
                        printf("\nEncerrando\n\n");
                    else
                        {
                            printf("\nOpcao invalida\n");
                        }
        system("clear");
    }
}
