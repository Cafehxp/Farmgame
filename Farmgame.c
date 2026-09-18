#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>


void pos(int lin, int col){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){col-1, lin-1});
}
int main()
{   
    system("cls");
    SetConsoleOutputCP(CP_UTF8);
    int tecla;
    int linha = 1;
    int linha_anterior;
    

//menu  
printf("  começar\n");
printf("  configurações\n");
printf("  sair\n");

do
{   
   
    pos(linha_anterior, 1);
    printf("  ");
    pos(linha, 1);
    printf("->");
    
    linha_anterior = linha;
    
    //condicionais
    tecla = getch();
    if (tecla == 119 && linha == 1)
    {
        linha = 3;
    }
    else if (tecla == 115 && linha == 3)
    {
        linha = 1;
    }
     else if(tecla == 115)
    {
        linha = ++linha;
    }
    else if (tecla == 119)
    {
        linha = --linha;
    }
    


} while (tecla != 13);


}   