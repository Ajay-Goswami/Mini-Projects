#include <stdio.h>
#include<windows.h>

char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int count = 0;
int k = 0;

void check(char, char);

void gameName()
{
    printf("\n\n\t\t\t TIC TAC TOE GAME ");
}
void show()
{
    printf("\n\n\t\t\t ----|----|--- \n");
    printf("\t\t\t  %c  | %c  | %c  \n", arr[0], arr[1], arr[2]);
    printf("\t\t\t ----|----|---- \n");
    printf("\t\t\t  %c  | %c  | %c  \n", arr[3], arr[4], arr[5]);
    printf("\t\t\t ----|----|---- \n");
    printf("\t\t\t  %c  | %c  | %c  \n", arr[6], arr[7], arr[8]);
    printf("\t\t\t ----|----|---- \n");
}

void symbol()
{
    printf("\n\t Player 1 Symbol: x");
    printf("\n\t Player 2 Symbol: 0\n");
}

void game_start()
{
    char g;
    printf("\n\t Enter the number who will start the game first player 1 or player 2 Symbol: \n");
    scanf("%c", &g);
}

void play()
{
    char position;
    int i;

    printf("Enter the position number:");
    scanf("%c", &position);
    fflush(stdin);

    if (k == 0)
    {
        for (i = 0; i <= 8; i++)
        {
            if (arr[i] == position)
            {
                arr[i] = 'x';
                k = 1;
                break;
            }
        }
    }

    else
    {
        for (i = 0; i <= 8; i++)
        {
            if (arr[i] == position)
            {
                arr[i] = '0';
                k = 0;
                break;
            }
        }
    }

    count++;
}

int end()
{
    if ((arr[0] == 'x' && arr[1] == 'x' && arr[2] == 'x') || (arr[3] == 'x' && arr[4] == 'x' && arr[5] == 'x') || (arr[6] == 'x' && arr[7] == 'x' && arr[8] == 'x'))
        return 1;
    else if ((arr[0] == 'x' && arr[3] == 'x' && arr[6] == 'x') || (arr[1] == 'x' && arr[4] == 'x' && arr[7] == 'x') || (arr[2] == 'x' && arr[5] == 'x' && arr[8] == 'x'))
        return 1;
    else if ((arr[0] == 'x' && arr[4] == 'x' && arr[8] == 'x') || (arr[2] == 'x' && arr[4] == 'x' && arr[6] == 'x'))
        return 1;
    else if ((arr[0] == '0' && arr[1] == '0' && arr[2] == '0') || (arr[3] == '0' && arr[4] == '0' && arr[5] == '0') || (arr[6] == '0' && arr[7] == '0' && arr[8] == '0'))
        return -1;
    else if ((arr[0] == '0' && arr[3] == '0' && arr[6] == '0') || (arr[1] == '0' && arr[4] == '0' && arr[7] == '0') || (arr[2] == '0' && arr[5] == '0' && arr[8] == '0'))
        return -1;
    else if ((arr[0] == '0' && arr[4] == '0' && arr[8] == '0') || (arr[2] == '0' && arr[4] == '0' && arr[6] == '0'))
        return -1;
    else
        return 0;
}

// Starting point of program
int main()
{
    int res;
    char ch;
lab:
    system("cls || clear");
    gameName();
    show();
    symbol();
    game_start();
    play();

label:
    system("cls");
    show();
    play();

    res = end();

    system("cls");
    show();

    if (count <= 9)
    {
        if (res == 1)
            printf("\n\t\t\t.....First Player Won The Match......");
        else if (res == -1)
            printf("\n\t\t\t.....Second Player Won The Match......");
        else
            goto label;
    }
    else
    {
        printf("Game Draw");
    }
    printf("\n Do you want to play this game again or not? \n For again Playing -> Press y or Y  \n For exit -> Press nor N\n");
    fflush(stdin);
    scanf("%c", &ch);

    if (ch == 'y' || ch == 'Y')
    {
        count = 0;
        arr[0] = '1';
        arr[1] = '2';
        arr[2] = '3';
        arr[3] = '4';
        arr[4] = '5';
        arr[5] = '6';
        arr[6] = '7';
        arr[7] = '8';
        arr[8] = '9';
        goto lab;
    }
    return 0;
}