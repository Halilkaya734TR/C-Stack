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

    if(Stack == NULL)
    {
        printf("Stack oluşturulamadı!");
        return 1;
    }
   
    
    while(1)
    {
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
            return 0;
            default:
            printf("Yanlış giriş yaptınız! Tekrar deneyiniz. \n");
        } 
    }  
}

int StackAdd()
{
    if(size == sinir)
    {
        Stack = realloc(Stack, (size * 1.5) * sizeof(int));
        sinir = sinir * 1.5;

        if(Stack == NULL)
        {
            printf("Stack düzenlenirken sorun oluştu!");
            return 1;
        }
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