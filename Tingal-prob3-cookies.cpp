#include <stdio.h>

int main() {
    int totalCookies, cookiesPerBox, cookiesPerContainer;
    int boxesNeeded, containersNeeded;

    printf("Enter the total number of cookies: ");
    scanf("%d", &totalCookies);
    printf("Enter the number of cookies in a box: ");
    scanf("%d", &cookiesPerBox);
    printf("Enter the number of cookies in a container: ");
    scanf("%d", &cookiesPerContainer);

    boxesNeeded = totalCookies / cookiesPerBox;
    if (totalCookies % cookiesPerBox != 0) {
        boxesNeeded++;
    }
    containersNeeded = boxesNeeded / cookiesPerContainer;
    if (boxesNeeded % cookiesPerContainer != 0) {
        containersNeeded++;
    }

    printf("\nNumber of boxes needed: %d\n", boxesNeeded);
    printf("Number of containers needed: %d\n", containersNeeded);

    return 0;
}

