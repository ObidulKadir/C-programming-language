#include <stdio.h>

void displayTitle(){
    system("cls");
    printf("\n\t\tTitle of your project\n");
    printf("\n\t\tProject Number: XXX\n");
    printf("\n\t\tProject Member IDs: XXX\n");
    printf("\n\t\tAbout Project: XXX\n");
    printf("\nUser MENU\n");

    printf("\nPress 1 to insert.\n");
    printf("\nPress 2 to display.\n");
    printf("\nPress 3 to delete.\n");
    printf("\nPress 4 to update.\n");
    printf("\nPress 5 to exit.\n");
}
void waiting(){
    int i;
    for(i=0; i<1000000000; i=i+2){
       if(i%100000000==0){
         printf(".");
       }
    }
}

int main(){
    int operation;
    displayTitle();
    do{
        scanf("%d", &operation);
        displayTitle();
        switch(operation){
        case 1:
            printf("\nYou have pressed 1. Insertion is under process");
            //call insertion function here
            waiting();
            printf("\nInsertion Completed. Proceed to operation\n");
        break;
         case 2:
            printf("\nYou have pressed 2. Displaying is under process");
            //call displaying function here
            waiting();
            printf("\nDisplaying Completed. Proceed to operation\n");
        break;
         case 3:
            printf("\nYou have pressed 3. Deletion is under process");
            //call deletion function here
            waiting();
            printf("\nDeletion Completed. Proceed to operation\n");
        break;
         case 4:
            printf("\nYou have pressed 4. Updating is under process");
            //call updating function here
            waiting();
            printf("\nUpdating Completed. Proceed to operation\n");
        break;
         case 5:

        break;
        }
    } while(operation != 5);
}
