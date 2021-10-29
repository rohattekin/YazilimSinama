#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dizi2[2]={10,11};
    int dizi3[4];
    int dizi4[8];
    int dizi5[16];
    int dizi6[32];
    int dizi7[64];
    int dizi8[128];
    int i,y=0;
    int eleman = (sizeof(dizi2)/sizeof(dizi2[0]));
    int kalan=0;
    int elsa=2,elsa1=0,elsa2=0,elsa3=0,elsa4=0,elsa5=0,elsa6=0,elsa7=0;
    int top=0;
    printf("Bu programda 1 Beyaz piyonlari,0 ise Siyah piyonlari temsil etmektedir.\n\n\n");
    printf("  2 kare icerisindeki Beyaz ve Siyah taslarin dizilimi.\n\n");
    printf("%d\n%d\n",dizi2[0],dizi2[1]);
    printf("Toplam piyon Kombinasyonu: %d\n",elsa);
    printf("\n\n 3 kare icerisindeki Beyaz ve Siyah taþlarin dizilimi.\n\n");
    for(i=0;i<eleman;i++)
    {
        dizi3[y]=(dizi2[i]*10)+1;
        y++;
    }
    for(i=0;i<eleman;i++)
    {
        dizi3[y]=dizi2[i]*10;
        y++;
    }
    int eleman1 = (sizeof(dizi3)/sizeof(dizi3[0]));

    for(i=0;i<eleman1;i++)
        {
         kalan=dizi3[i]%100;
            if(kalan==0)
            {
                dizi3[i]=0;

            }
            else
            {
                printf("%d\n",dizi3[i]);
                elsa1++;
            }

        }
    printf("Toplam piyon Kombinasyonu: %d\n",elsa1);
    printf("\n\n 4 kare icerisindeki Beyaz ve Siyah taslarin dizilimi.\n\n");
        y=0;
        kalan=0;
     for(i=0;i<eleman1;i++)
    {
        dizi4[y]=(dizi3[i]*10)+1;
        y++;
    }
    for(i=0;i<eleman1;i++)
    {
        dizi4[y]=dizi3[i]*10;
        y++;
    }
    int eleman2 = (sizeof(dizi4)/sizeof(dizi4[0]));

    for(i=0;i<eleman2;i++)
        {
         if(dizi4[i]/1000 !=0)
         {
         kalan=dizi4[i]%1000;
         if(kalan==0||kalan==100)
            {
                dizi4[i]=0;
            }
            else
            {
                printf("%d\n",dizi4[i]);
                elsa2++;
            }
         }


        }
    printf("Toplam piyon Kombinasyonu: %d\n",elsa2);
    printf("\n\n 5 kare icerisindeki Beyaz ve Siyah taslarin dizilimi.\n\n");
        y=0;
        kalan=0;
     for(i=0;i<eleman2;i++)
    {
        dizi5[y]=(dizi4[i]*10)+1;
        y++;
    }
    for(i=0;i<eleman2;i++)
    {
        dizi5[y]=dizi4[i]*10;
        y++;
    }
    int eleman3 = (sizeof(dizi5)/sizeof(dizi5[0]));

    for(i=0;i<eleman3;i++)
        {
         if(dizi5[i]/1000 !=0)
         {
         kalan=dizi5[i]%1000;
         if(kalan==0||kalan==100)
            {
                dizi5[i]=0;
            }
            else
            {
                printf("%d\n",dizi5[i]);
                elsa3++;
            }
         }


        }
    printf("Toplam piyon Kombinasyonu: %d\n",elsa3);
    printf("\n\n 6 kare icerisindeki Beyaz ve Siyah taslarin dizilimi.\n\n");
        y=0;
        kalan=0;
     for(i=0;i<eleman3;i++)
    {
        dizi6[y]=(dizi5[i]*10)+1;
        y++;
    }
    for(i=0;i<eleman3;i++)
    {
        dizi6[y]=dizi5[i]*10;
        y++;
    }
    int eleman4 = (sizeof(dizi6)/sizeof(dizi6[0]));

    for(i=0;i<eleman4;i++)
        {
         if(dizi6[i]/1000 !=0)
         {
         kalan=dizi6[i]%1000;
         if(kalan==0||kalan==100)
            {
                dizi6[i]=0;
            }
            else
            {
                printf("%d\n",dizi6[i]);
                elsa4++;
            }
         }


        }
    printf("Toplam piyon Kombinasyonu: %d\n",elsa4);
    printf("\n\n 7 kare icerisindeki Beyaz ve Siyah taslarin dizilimi.\n\n");
        y=0;
        kalan=0;
     for(i=0;i<eleman4;i++)
    {
        dizi7[y]=(dizi6[i]*10)+1;
        y++;
    }
    for(i=0;i<eleman4;i++)
    {
        dizi7[y]=dizi6[i]*10;
        y++;
    }
    int eleman5 = (sizeof(dizi7)/sizeof(dizi7[0]));

    for(i=0;i<eleman5;i++)
        {
         if(dizi7[i]/10000 !=0)
         {
         kalan=dizi7[i]%1000;
         if(kalan==0||kalan==100)
            {
                dizi7[i]=0;
            }
            else
            {
                printf("%d\n",dizi7[i]);
                elsa5++;
            }
         }


        }
    printf("Toplam piyon Kombinasyonu: %d\n",elsa5);
    printf("\n\n 8 kare icerisindeki Beyaz ve Siyah taslarin dizilimi.\n\n");
        y=0;
        kalan=0;
     for(i=0;i<eleman5;i++)
    {
        dizi8[y]=(dizi7[i]*10)+1;
        y++;
    }
    for(i=0;i<eleman5;i++)
    {
        dizi8[y]=dizi7[i]*10;
        y++;
    }
    int eleman6 = (sizeof(dizi8)/sizeof(dizi8[0]));

    for(i=0;i<eleman6;i++)
        {
         if(dizi8[i]/100000 !=0)
         {
         kalan=dizi8[i]%1000;
         if(kalan==0||kalan==100)
            {
                dizi8[i]=0;
            }
            else
            {
                printf("%d\n",dizi8[i]);
                elsa6++;
            }
         }


        }
        printf("Toplam piyon Kombinasyonu: %d\n",elsa6);
        top=elsa+elsa1+elsa2+elsa3+elsa4+elsa5+elsa6;
        printf("Tahtanin Bir satiri icin olusan deger: %d\n",top);
        printf("\nTahtanin 8 satiri icin olusan deger: %d",(top*8));

    return 0;
}
