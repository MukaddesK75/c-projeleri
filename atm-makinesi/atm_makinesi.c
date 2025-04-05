
#include <stdio.h>
#include<locale.h>

int main() {
 setlocale(LC_ALL,"Turkish");
    int M; // Maaş miktarı
    int b200, b100, b50,b20,b10,b5; // 200 ,100,50,20,10,5 banknotlarının sayısı

    // Kullanıcıdan maaş miktarını alıyoruz
    printf(" miktarını giriniz (milyon TL): ");
    scanf("%d", &M);

    // 200 milyonluk banknotların sayısını hesaplıyoruz
   b200 = M / 200;
    M = M % 200;  // Kalan miktar

    // 100 milyonluk banknotların sayısını hesaplıyoruz
    b100 = M / 100;
    M = M % 100;  // Kalan miktar

    // 50 milyonluk banknotların sayısını hesaplıyoruz
   b50 = M / 50;
    M = M % 50;  // Kalan miktar
    
    b20=M/20;
    M=M%20;
    // 10 milyonluk banknotların sayısını hesaplıyoruz
    b10=M/10;
    M=M%10;
    // 5 milyonluk banknotların sayısını hesaplıyoruz
    b5=M/5;
    M=M%5;
    
    
    
    

    // Sonuçları ekrana yazdırıyoruz
    printf("200 milyonluk banknot sayısı: %d\n", b200);
    printf("100 milyonluk banknot sayısı: %d\n", b100);
    printf("50 milyonluk banknot sayısı: %d\n", b50);
    printf("20 milyonluk banknot sayısı: %d\n", b20);
    printf("10 milyonluk banknot sayısı: %d\n", b10);
    printf("5 milyonluk banknot sayısı: %d\n", b5);
	printf("bankada kalan miktar:%d \n",M);
	
    return 0;
}
