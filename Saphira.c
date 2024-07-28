#include "games.h"

// Главное меню
int main(){
    printf("\nДобро пожаловать в игру принцесса Сафира!\n\n");
    printf("1. Начать игру\n");
    printf("2. Посмотреть достижения\n");
    int vibor;
    while(1){
        scanf("%d", &vibor);
        if(vibor == 1){
            startgame();
            if(startgame() == 1){
                sarai();
            }
            else if(startgame() == 2){
                karman();
            }
            break;
        }
        else if(vibor == 2){
            achievements();
            break;
        }
        else{
            printerror();
        }
    }
    return 0;
}