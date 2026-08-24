#include <stdio.h>
#include <stdlib.h>

// Available notes in ATM
int note100 = 1000;
int note200 = 1000;
int note500 = 1000;
int note2000 = 1000;

int main()
{
    int amount;

    // Number of notes to be given to the user
    int give100, give200, give500, give2000;

    long int availableMoney;

    printf("====================================\n");
    printf("        ATM CASH WITHDRAWAL\n");
    printf("====================================\n");

    // Ask user for withdrawal amount
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    // ATM can dispense only multiples of 100
    if (amount % 100 != 0)
    {
        printf("Error: Amount must be a multiple of 100.\n");
        return 1;
    }

    // Calculate total money currently available in ATM
    availableMoney =
        note100 * 100 +
        note200 * 200 +
        note500 * 500 +
        note2000 * 2000;

    // Check whether ATM has enough total money
    if (amount > availableMoney)
    {
        printf("Sorry! Insufficient funds in ATM.\n");
        return 1;
    }

    /*
        We first try to give bigger notes.
        This reduces the total number of notes.

        Order:
        2000 -> 500 -> 200 -> 100
    */

    // ---------------- 2000 Rupee Notes ----------------

    give2000 = amount / 2000;

    // We cannot give more notes than available
    if (give2000 > note2000)
    {
        give2000 = note2000;
    }

    note2000 = note2000 - give2000;

    // Reduce the remaining amount
    amount = amount - (give2000 * 2000);


    // ---------------- 500 Rupee Notes ----------------

    give500 = amount / 500;

    if (give500 > note500)
    {
        give500 = note500;
    }

    note500 = note500 - give500;

    amount = amount - (give500 * 500);


    // ---------------- 200 Rupee Notes ----------------

    give200 = amount / 200;

    if (give200 > note200)
    {
        give200 = note200;
    }

    note200 = note200 - give200;

    amount = amount - (give200 * 200);


    // ---------------- 100 Rupee Notes ----------------

    give100 = amount / 100;

    if (give100 > note100)
    {
        give100 = note100;
    }

    note100 = note100 - give100;

    amount = amount - (give100 * 100);


    /*
        If amount is still greater than 0,
        ATM could not provide the exact amount.

        So we cancel the transaction and
        return all used notes back to ATM.
    */

    if (amount > 0)
    {
        printf("\nError: Transaction failed!\n");
        printf("ATM cannot provide the exact amount.\n");

        // Restore the notes
        note2000 = note2000 + give2000;
        note500 = note500 + give500;
        note200 = note200 + give200;
        note100 = note100 + give100;

        return 1;
    }


    // ---------------- Successful Transaction ----------------

    printf("\n====================================\n");
    printf("       TRANSACTION SUCCESSFUL\n");
    printf("====================================\n");

    printf("2000 x %d = %d\n", give2000, 2000*give2000);
    printf("500  x %d = %d\n", give500, 500*give500);
    printf("200  x %d = %d\n", give200, 200*give200);
    printf("100  x %d = %d\n", give100, 100*give100);

    printf("====================================\n");

    return 0;
}
