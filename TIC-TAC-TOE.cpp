#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string.h>

using namespace std;
char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void board()
{
    cout << "Tic Tac Toe" << endl;
    cout << "___"
         << "__"
         << "__" << endl;
    cout << "| " << arr[1] << " | " << arr[2] << " | " << arr[3] << " | " << endl;
    cout << "___"
         << "__"
         << "__" << endl;
    cout << "| " << arr[4] << " | " << arr[5] << " | " << arr[6] << " | " << endl;
    cout << "___"
         << "__"
         << "__" << endl;
    cout << "| " << arr[7] << " | " << arr[8] << " | " << arr[9] << " | " << endl;
    cout << "___"
         << "__"
         << "__" << endl;
}
void clrscr(void)
{
    system("cls");
}
int main()
{
    system("clear || cls");
    char bg, tc;
    cout << "1.Blue\t2.Green\n3.Aqua\t4.Red\n5.Purple 6.Yellow\n7.White\t8.Gray\n9.Light Blue 0.Black\nA.Light Green B.Light Aqua\nC.Light Red D.Light Purple\nE.Light Yellow F.Bright White\n";
    cout << "Enter Background Color: ";
    cin >> bg;
    cout << "Enter Text Color: ";
    cin >> tc;
    char color1[] = "Color 3A";
    color1[6] = bg;
    color1[7] = tc;
    system(color1);
    int player1, player2, num, ch = 1;
    char player1_char, player2_char;
    string player1_name, player2_name;
    cout << "Tic Tac Toe" << endl;
    cout << "Enter Name Of Player 1 :";
    cin >> player1_name;
    player1_name[0] = toupper(player1_name[0]);
    cout << player1_name << ", Enter your symbol :";
    cin >> player1_char;
    cout << "Enter Name Of Player 2 :";
    cin >> player2_name;
    player2_name[0] = toupper(player2_name[0]);
char_choose:
    cout << player2_name << ", Enter your symbol :";
    cin >> player2_char;

    if (player2_char == player1_char)
    {
        cout << "Wrong Choice" << endl;
        goto char_choose;
    }
    board();
    while (ch)
    {
    j:
        cout << player1_name << " (" << player1_char << ")" << endl;
        cin >> player1;

        if (arr[player1] == player1_char || arr[player1] == player2_char || player1 <= 0 || player1 > 9)
        {

            if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
            {
                cout << "Draw" << endl;
                break;
            }
            cout << "Wrong Choice" << endl;
            goto j;
        }
        arr[player1] = player1_char;
        clrscr();
        board();
        if (arr[1] == player1_char && arr[2] == player1_char && arr[3] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
        else if (arr[4] == player1_char && arr[5] == player1_char && arr[6] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
        else if (arr[7] == player1_char && arr[8] == player1_char && arr[9] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
        else if (arr[1] == player1_char && arr[4] == player1_char && arr[7] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
        else if (arr[2] == player1_char && arr[5] == player1_char && arr[8] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
        else if (arr[3] == player1_char && arr[6] == player1_char && arr[9] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
        else if (arr[3] == player1_char && arr[5] == player1_char && arr[7] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
        else if (arr[1] == player1_char && arr[5] == player1_char && arr[9] == player1_char)
        {
            cout << "Winner Is " << player1_name << endl;
            break;
        }
    l:
        cout << player2_name << " (" << player2_char << ")" << endl;
        cin >> player2;
        if (arr[player2] == player1_char || arr[player2] == player2_char || player2 <= 0 || player2 > 9)
        {

            if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
            {
                cout << "Draw" << endl;
                break;
            }
            cout << "Wrong Choice" << endl;
            goto l;
        }
        arr[player2] = player2_char;
        clrscr();
        board();
        if (arr[1] == player2_char && arr[2] == player2_char && arr[3] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
        else if (arr[4] == player2_char && arr[5] == player2_char && arr[6] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
        else if (arr[7] == player2_char && arr[8] == player2_char && arr[9] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
        else if (arr[1] == player2_char && arr[4] == player2_char && arr[7] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
        else if (arr[2] == player2_char && arr[5] == player2_char && arr[8] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
        else if (arr[3] == player2_char && arr[6] == player2_char && arr[9] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
        else if (arr[3] == player2_char && arr[5] == player2_char && arr[7] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
        else if (arr[1] == player2_char && arr[5] == player2_char && arr[9] == player2_char)
        {
            cout << "Winner Is " << player2_name << endl;
            break;
        }
    }
    return 0;
}