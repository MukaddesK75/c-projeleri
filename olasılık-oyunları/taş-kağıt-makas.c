#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	setlocale(LC_ALL,"Turkish");
    int kullaniciSecimi, bilgisayarSecimi;
    int kullaniciSkoru = 0, bilgisayarSkoru = 0;
int tur;
    // Rastgele sayı üretimi için seed ayarlama
    srand(time(NULL));
	
    for ( tur = 1; tur <= 5; tur++) {
        printf("Tur %d: Taş (0), Kağıt (1), Makas (2) seçiminizi yapın: ", tur);
        scanf("%d", &kullaniciSecimi);

        // Geçersiz seçim kontrolü
        if (kullaniciSecimi < 0 || kullaniciSecimi > 2) {
            printf("Geçersiz seçim! Lütfen 0, 1 veya 2 girin.\n");
            tur--; // Geçersiz seçimde turu tekrar et
            continue;
        }

        // Bilgisayarın rastgele seçimi
        bilgisayarSecimi = rand() % 3;

        // Bilgisayarın seçimini yazdır
        const char *secimAdlari[] = {"Taş", "Kağıt", "Makas"};
        printf("Bilgisayarın seçimi: %s\n", secimAdlari[bilgisayarSecimi]);

        // Kazananı belirleme
        if (kullaniciSecimi == bilgisayarSecimi) {
            printf("Berabere!\n");
        } else if ((kullaniciSecimi == 0 && bilgisayarSecimi == 2) || 
                   (kullaniciSecimi == 1 && bilgisayarSecimi == 0) || 
                   (kullaniciSecimi == 2 && bilgisayarSecimi == 1)) {
            printf("Kazandınız!\n");
            kullaniciSkoru++;
        } else {
            printf("Bilgisayar kazandı!\n");
            bilgisayarSkoru++;
        }
    }

    // Sonuçları yazdırma
    printf("Sonuçlar:\n");
    printf("Bilgisayar Skoru: %d\n", bilgisayarSkoru);
    printf("Kullanıcı Skoru: %d\n", kullaniciSkoru);

    // Kazananı belirleme
    if (kullaniciSkoru > bilgisayarSkoru) {
        printf("Kazanan: Kullanıcı!\n");
    } else if (bilgisayarSkoru > kullaniciSkoru) {
        printf("Kazanan: Bilgisayar!\n");
    } else {
        printf("Oyun berabere!\n");
    }

    return 0;
}
