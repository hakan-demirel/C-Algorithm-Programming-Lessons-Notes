#include <stdio.h>
#include <stdlib.h>
#define ORAN 1.609344

int main()
{
    // MİL VE KM DÖNÜŞÜMÜ

    char secim;
    float mesafe;

    printf("Seciminiz: (Mil iCin: M/m, Kilometre iCin: K/k giriniz.)");
    scanf("%c", &secim);

    printf("Mesafe giriniz: ");
    scanf("%f", &mesafe);
    if ((secim == 'K') || (secim == 'k'))
    {
        mesafe = mesafe * ORAN;
        printf("Mesafeniz %f", mesafe);
    }
    else if ((secim == 'M') || (secim == 'm'))
    {
        mesafe = mesafe / ORAN;
        printf("Mesafeniz %f", mesafe);
    }
    else
    {
        printf("Yanlis secim veya mesafe bilgisi girdiniz.");
    }

    // ALFABE HARFİ SORGULAMA

    char karakter;

    printf("Bir karakter giriniz: ");
    scanf("%c", &karakter);

    if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
    {
        printf("Girdiginiz %c karakteri alfabededir.", karakter);
    }
    else
    {
        printf("Girdiginiz %c karakteri alfabede yoktur.", karakter);
    }

    // TEK VE ÇİFT SAYI SORGULAMA

    int sayi;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0)
    {
        printf("Girdiginiz sayi cifttir.\n");
    }
    else if (sayi % 2 == 1)
    {
        printf("Girdiginiz sayi tektir.");
    }

    // BÜYÜK VE KÜÇÜK SAYI

    float sayi1, sayi2;
    float toplama, cikarma, carpma, bolme;

    printf("Birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);
    printf("ikinci sayiyi giriniz: ");
    scanf("%f", &sayi2);

    if (sayi1 > sayi2)
    {
        printf("Sayi1 sayi2'den buyuktur.\n");
    }
    else if (sayi1 < sayi2)
    {
        printf("Sayi2 sayi1'den buyuktur. \n");
    }
    else
    {
        printf("Sayi1 sayi2'ye esittir.\n\n");
    }

    // DÖRT İŞLEM

    toplama = sayi1 + sayi2;
    cikarma = sayi1 - sayi2;
    carpma = sayi1 * sayi2;
    bolme = sayi1 / sayi2;

    printf("Toplama: %f\n", toplama);
    printf("Cikarma: %f\n", cikarma);
    printf("Carpma: %f\n", carpma);
    printf("Bolme: %f\n", bolme);

    return 0;
}
