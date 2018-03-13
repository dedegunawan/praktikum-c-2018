#include <stdio.h>

int main(int argc, char const *argv[])
{
	int angka;
	float angka2;
	int hasil_kali;
	int hasil_tambah;
	int hasil_kurang;
	double hasil_bagi;
	printf("Hallo.... \n");
	printf("Masukkan Angka 1 : ");
	scanf("%d", &angka);
	printf("Masukkan Angka 2 : ");
	scanf("%f", &angka2);

	hasil_tambah = angka + angka2;
	hasil_kurang = angka - angka2;
	hasil_kali = angka * angka2;
	hasil_bagi = angka / angka2;

	printf("Hasil Tambah %d * %f =  %d \n", angka, angka2, hasil_tambah);
	printf("Hasil Kurang %d * %f =  %d \n", angka, angka2, hasil_kurang);
	printf("Hasil Kali %d * %f =  %d \n", angka, angka2, hasil_kali);
	printf("Hasil Bagi %d * %f =  %.3f \n", angka, angka2, hasil_bagi);
	return 0;
}