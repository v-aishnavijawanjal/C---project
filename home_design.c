#include <stdio.h>

int main()
{
    char name[30];
    int wall, floor, kitchen;

    printf("===== HOME DESIGN SELECTOR =====\n\n");

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("\nChoose Wall Color\n");
    printf("1. White\n2. Cream\n3. Sky Blue\n");
    printf("Enter Choice: ");
    scanf("%d", &wall);

    printf("\nChoose Flooring\n");
    printf("1. Tiles\n2. Marble\n3. Wooden\n");
    printf("Enter Choice: ");
    scanf("%d", &floor);

    printf("\nChoose Kitchen\n");
    printf("1. Normal Kitchen\n2. Modular Kitchen\n3. Smart Kitchen\n");
    printf("Enter Choice: ");
    scanf("%d", &kitchen);

    printf("\n\n===== HOME DESIGN SUMMARY =====\n");
    printf("Customer Name : %s\n", name);

    printf("Wall Color    : ");
    if (wall == 1)
        printf("White\n");
    else if (wall == 2)
        printf("Cream\n");
    else
        printf("Sky Blue\n");

    printf("Flooring      : ");
    if (floor == 1)
        printf("Tiles\n");
    else if (floor == 2)
        printf("Marble\n");
    else
        printf("Wooden\n");

    printf("Kitchen       : ");
    if (kitchen == 1)
        printf("Normal Kitchen\n");
    else if (kitchen == 2)
        printf("Modular Kitchen\n");
    else
        printf("Smart Kitchen\n");

    printf("\nThank You!\n");

    return 0;
}