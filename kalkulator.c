#include <stdio.h>

float Multiply(float x, float y);
float Add(float x, float y);
float Substraction(float Num1, float Num2);
float Division(float Num1, float Num2);

int main(){
    float Num1, Num2, Result;
    int choice;
    printf("Kalkulator Kelompok Perl\n");
    printf("Angka Pertama: ");
    scanf("%d", &Num1);
    printf("Angka Kedua: ");
    scanf("%d", &Num2);
    Printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");

    printf("Pilih (1-4): ");
    scanf("%d", &choice);
    switch(choice){
        case 1: 
            Result = Add(Num1,Num2);
        break;
        case 2: 
            Result = Substraction(Num1, Num2);
        break;
        case 3: 
            Result = Multiply(Num1, Num2);
        break;
        case 4: 
            Result = Division(Num1, Num2);
        break;
        default: 
            printf("Pilih (1-4): ");
            scanf("%d", &choice);
        break;
    }
printf("Result: %.2f", Result);
return 0;
}



float Multiply(float x, float y){
    return x * y;
}
