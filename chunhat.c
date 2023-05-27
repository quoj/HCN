#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void draw_rec(int s);
// int func2(){
int main(){
	int size;
	printf("Demo ve ham: ");
	scanf("%d",&size);
	// 3 goi ham
	draw_rec( size);
	draw_rec( 3);
	printf("\n\n Mot doan code khac.....");
	draw_rec( 5);
	return 0;
}
//2 Dinh nghia ve ham
void draw_rec(int s){
	printf("\nVe hinh chu nhat moi nao ;) \n");
	for (int i = 0; i<s;++i){
		printf("\n");
		for(int j = 0;j<s; ++j){
			printf("*");
			}
			}
			}
