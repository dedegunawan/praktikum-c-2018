#include <stdio.h>

// Ini Adalah Komentar

/*
Ini juga komentar
*/



int main(int argc, char const *argv[])
{
	char nama[256];
	printf("Hallo.... \n");
	printf("Masukkan nama Anda bisa dengan spasi : ");
	scanf("%[^\n]", nama);
	printf("\tPerkenalkan nama saya %s \n", nama);
	printf("\tSaya sedang praktikum Algoritma Struktur Data \n");
	return 0;
}