#include <tic.h>

static char game_table[9];

int main()
{   
    srand( (unsigned int)time(NULL));
    int l = 0;
    do
    {
        int n = 0;

        // filling the table with multiple asterisks
        for (int i = 0; i < 9; i++) game_table[i] = '*';

        // displaying the main menu
        printf("|-------------------------------------|\n");
        printf("|            TIC TAC TOE              |\n");
        printf("|-------------------------------------|\n");
        printf("|                                     |\n");
        printf("|        1. YOU vs COMPUTER           |\n");
        printf("|        2. YOU vs PLAYER             |\n");
        printf("|        3.EXIT                       |\n");
        printf("|-------------------------------------|\n");
        printf("Enter your choice : ");
        scanf("%d", &n);

        switch (n)  // switch case to select between single player mode or
                    // double player mode
        {
        case 1:
            singlemode();
            break;
        case 2:
            doublemode();
            break;
        default:
            printf("THANK YOU and EXIT!");
        }

        printf("Next game ? : ");
        printf("Enter 1 – YES and 0 - NO ");
        scanf("%d", &l);

    } while (l == 1);

    return 0;
}



