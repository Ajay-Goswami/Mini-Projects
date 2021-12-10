#include <stdio.h>
#include <conio.h>
#include <windows.h>

int number_of_riksha = 0, number_of_bus = 0, number_of_cycle = 0, number_of_2_vehicles = 0, number_of_4_vehicles = 0;
int amount = 0, count = 0;

int Menu()
{
    int ch;
    printf("\n 1-> Enter Bus:   (Rs. 200/bus)");
    printf("\n 2-> Enter cycle: (Rs. 20/bus)");
    printf("\n 3-> Enter Riksha:   (Rs. 100/bus)");
    printf("\n 4-> Enter 2 vehicles:    (Rs. 50/bus)");
    printf("\n 5-> Enter 4 vehicles:    (Rs. 150/bus)");
    printf("\n 6-> Show Status:");
    printf("\n 7-> Delete Data:");
    printf("\n 8-> Exit:");
    printf("\n\n\n Enter your choice: ");
    scanf("%d", &ch);
    return (ch);
}
void Delete()
{
    number_of_bus = 0;
    number_of_cycle = 0;
    number_of_riksha = 0;
    number_of_2_vehicles = 0;
    number_of_4_vehicles = 0;
    amount = 0;
    count = 0;
}

void Show_detail()
{
    printf("\n Number of bus = %d", number_of_bus);
    printf("\n Number of cycle = %d", number_of_cycle);
    printf("\n Number of riksha = %d", number_of_riksha);
    printf("\n Number of 2 vehicles = %d", number_of_2_vehicles);
    printf("\n Number of 4 vehicles = %d", number_of_4_vehicles);
    printf("\n Total number of vehicles = %d", count);
    printf("\n Total Amount Gain = %d", amount);
    getch();
    getch();
}

void Riksha()
{   
    printf("\n Entry successful:\n");
    number_of_riksha++;
    amount += 100;
    count++;
    getch();
}

void Cycle()
{
    printf("\n Entry successful:\n");
    number_of_cycle++;
    amount += 20;
    count++;
    getch();
}

void Bus()
{
    printf("\n Entry successful:\n");
    number_of_bus++;
    amount += 200;
    count++;
    getch();
}

void Vehicles_2_wheels()
{   
    printf("\n Entry successful:\n");
    number_of_2_vehicles++;
    amount += 50;
    count++;
    getch();
}

void Vehicles_4_wheels()
{
    printf("\n Entry successful:\n");
    number_of_4_vehicles++;
    amount += 150;
    count++;
    getch();
}

void main()
{
    while (1)
    {
        system("cls || clear");

        switch (Menu())
        {   
            case 1:
                Bus();
                break;
            case 2:
                Cycle();
                break;
            case 3:
                Riksha();
                break;
            case 4:
                Vehicles_2_wheels();
                break;
            case 5:
                Vehicles_4_wheels();
                break;
            case 6:
                Show_detail();
                break;
            case 7:
                Delete();
                break;
            case 8:
                exit(0);
            default:
                printf("\n Invaled Choice \n");
        }
        
    }

}