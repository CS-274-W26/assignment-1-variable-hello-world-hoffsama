#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>


int main() {

    srand(time(NULL)); //seed random number gen
    
    int myrand = rand()%11; // should output 0-10

    if (myrand < 5) {
        printf("Eat more beef, kick less cats\n");

    } else if (myrand < 10) {
        printf("FRODO LIVES\n");

    } else {
        printf("Larn is the best roguelike\n");

    }

    printf("The random number was: %d\n", myrand); //tell user num regardless

    return 0;
}
