#include "games.h"

// ������� ����
int main(){
    printf("\n���� ���������� � ���� �ਭ��� ����!\n\n");
    printf("1. ����� ����\n");
    printf("2. ��ᬮ���� ���⨦����\n");
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