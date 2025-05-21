#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int size = 0;
int sinir = 4;
int *Stack = NULL;

int main()
{
    char islem;
    Stack = malloc(sinir * sizeof(int));
   
    menu:
   
    printf("Ekleme yapmak için '+', okumak için '-', çıkmak için 'q' tuşlayınız! \n");
    scanf(" %c",&islem);

    switch(islem)
    {
        case '+':
        StackAdd();
        break;
        case '-':
        StackRead();
        break;
        case 'q':
        printf("Program Kapatılıyor...");
        free(Stack);
        return 1;
        default:
        printf("Yanlış giriş yaptınız! Tekrar deneyiniz. \n");
        
    } 
    goto menu;   
}

void StackAdd()
{
    if(size == sinir)
    {
        Stack = realloc(Stack, (size * 1.5) * sizeof(int));
        sinir == sinir * 1.5;
    }
    
    int addNumber;

    printf("Eklenecek sayıyı giriniz! \n");
    scanf("%d",&addNumber);

    Stack[size] = addNumber;
    size++;
    printf("%d sayısı Stack eklendi! \n",addNumber);
}

void StackRead()
{
    if(size)
    {
        printf("%d \n",Stack[size-1]);
   
        size--;
    }
    else
    {
        printf("Stack Boş! \n");
    }

}