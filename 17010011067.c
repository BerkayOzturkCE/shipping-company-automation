//17010011067 Berkay �zt�rk
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int dil, k=2;
char id[20]="kargootomasyon", id2[20];
char pswrd[20]="berkayozturk17-67", pswrd2[20];
 kargo[100][7]= {{567214745,451287652,874529845,63,47,2,330}, {874265418,741528962,475165279,27,38,3,720}, {915476524,685422247,274586184,18,25,1,448}};
int change_id_password()
{
    int cks;
    system("CLS");
    while(1)
    {
        system("CLS");
        if(dil==1)
        {
            printf("YENI KULLANICI ADI:");
        }
        else
        {
            printf("NEW ID:");
        }
        scanf("%s", id);
        if(dil==1)
        {
            printf(" YENI SIFRE:");
        }
        else
        {
            printf("NEW PASSWORD:");
        }
        scanf("%s", pswrd);
        system("CLS");
        int eleman = (sizeof(id) / sizeof(int));
        int eleman2 = (sizeof(pswrd) / sizeof(int));
        if(eleman>20||eleman2>20)
        {
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        else
        {
            break;
        }
    }
    while(5)
    {
        if(dil==1)
        {
            printf("[1]-ANA MENU\n[2]-CIKIS\n SECIMINIZ:");
        }
        else
        {
            printf("[1]-MAIN MENU\n[2]-EXIT\nYOUR CHOSE:");
        }
        scanf("%d", &cks);
        switch(cks)
        {
        case 1:
            cks=1;
            break;
        case 2:
            cks=2;
            break;
        default:
            system("CLS");
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        if(cks==1||cks==2)
        {
            break;
        }
    }
    system("CLS");
    return cks;
}
int kargo_nerede()
{
    int i, j, crgono, find, cks;
    system("CLS");
    while(5)
    {
        if(dil==1)
        {
            printf("KARGO NO GIRIN:");
        }
        else
        {
            printf("ENTER CARGO NO:");
        }
        scanf("%d", &crgono);
        printf("\n");
        for(i=0; i<=k; i++)
        {
            if(kargo[i][0]==crgono)
            {
                find=1;
                break;
            }
        }

        if(find!=1)
        {
            system("CLS");
            if(dil==1)
            {
                printf("KARGO BULUNAMADI TEKRAR DENEYIN\n");
            }
            else
            {
                printf("THIS CARGO NOT FOUND TRY AGAIN\n");
            }
        }
        else
        {
            break;
        }
    }
    system("CLS");
    if(dil==1)
    {
        printf("KARGO NO\tGONDEREN NO\t ALICI NO\t CIKIS SEHRI\t VARIS SEHRI\t KARGO DURUMU\t      FIYAT\n");
    }
    else
    {
        printf("CARGO ID\tSENDER ID\t RECEIVER ID\t EXIT CITY\t ARRIVAL CITY\t CARGO STATUS\t       PRICE\n");
    }
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    for(j=0; j<7; j++)
    {
        printf("%9d\t", kargo[i][j]);
    }
    while(5)
    {
        if(dil==1)
        {
            printf("\n[1]-ANA MENU\n[2]-CIKIS\n SECIMINIZ:");
        }
        else
        {
            printf("\n[1]-MAIN MENU\n[2]-EXIT\nYOUR CHOSE:");
        }
        scanf("%d", &cks);
        switch(cks)
        {
        case 1:
            cks=1;
            break;
        case 2:
            cks=2;
            break;
        default:
            system("CLS");
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        if(cks==1||cks==2)
        {
            break;
        }
    }
    system("CLS");

    return cks;
}
int tahmini_fiyat()
{
    system("CLS");
    int agrlk, fiyat=0, a, hsp, cks=0;

    while(5)
    {
        if(dil==1)
        {
            printf("KARGO AGIRLIGINI GIRINIZ:");
        }
        else
        {
            printf("ENTER CARGO WEIGHT:");
        }
        scanf("%d", &agrlk);
        if(agrlk>2000)
        {
            system("CLS");
            if(dil==1)
            {
                printf("LUTFEN DAHA DUSUK BIR AGIRLIK GIRIN\n");
            }
            else
            {
                printf("PLEASE ENTER A LOWER NUMBER\n");
            }
            continue;

        }
        if(agrlk<=2000&&agrlk>0)
        {
            fiyat=agrlk*2;
            break;
        }
        else
        {
            if(dil==1)
            {
                printf("GECERSIZ GIRIS\n");
            }
            else
            {
                printf("INVALID ENTRY\n");
            }
        }
    }
    system("CLS");
    while(4)
    {
        if(dil==1)
        {
            printf("[1]-BIREYSEL KARGO\n[2]-KURUMSAL KARGO\nSECIMINIZ:");
        }
        else
        {
            printf("[1]-INDIVIDUAL CARGO\n[2]-CORPORATE CARGO\n YOUR CHOSE:");
        }
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            cks=1;
            break;

        case 2:
            fiyat=fiyat/2;
            cks=1;
            break;

        default:
            system("CLS");
            if(dil==1)
            {
                printf("YANLIS GIRIS\n");
            }
            else
            {
                printf("WRONG ENTRY\n");
            }

        }
        if(cks==1)
        {
            break;
        }
    }
    system("CLS");
    while(5)
    {
        if(dil==1)
        {
            printf("OZEL KARGO PAKETI ISTERMISINIZ\n[1]-EVET\n[2]-HAYIR\nSECIMINIZ:");
        }
        else
        {
            printf("WOULD YOU LIKE A SPECIAL SHIPPING PACKAGE\n[1]-YES\n[2]-NO\n YOUR CHOSE:");
        }
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            hsp=fiyat*0.1;
            fiyat=fiyat+hsp;
            cks=1;
            break;

        case 2:
            cks=1;
            break;

        default:
            system("CLS");
            if(dil==1)
            {
                printf("YANLIS GIRIS\n");
            }
            else
            {
                printf("WRONG ENTRY\n");
            }

        }
        system("CLS");
        if(dil==1)
        {
            printf("TAHMINI UCRET->%d\n", fiyat);
        }
        else
        {
            printf("ESTIMATED PRICE->%d\n", fiyat);
        }
        if(cks==1)
        {
            break;
        }
    }
    while(5)
    {
        if(dil==1)
        {
            printf("[1]-ANA MENU\n[2]-CIKIS\n SECIMINIZ:");
        }
        else
        {
            printf("[1]-MAIN MENU\n[2]-EXIT\nYOUR CHOSE:");
        }
        scanf("%d", &cks);
        switch(cks)
        {
        case 1:
            cks=1;
            break;
        case 2:
            cks=2;
            break;
        default:
            system("CLS");
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        if(cks==1||cks==2)
        {
            break;
        }
    }
    system("CLS");
    return cks;
}
int sirala()
{
    int i, j, cks;
    system("CLS");
    if(dil==1)
    {
        printf("KARGO NO\tGONDEREN NO\t ALICI NO\t CIKIS SEHRI\t VARIS SEHRI\t KARGO DURUMU\t      FIYAT\n");
    }
    else
    {
        printf("CARGO ID\tSENDER ID\t RECEIVER ID\t EXIT CITY\t ARRIVAL CITY\t CARGO STATUS\t       PRICE\n");
    }
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<=k; i++)
    {
        for(j=0; j<7; j++)
        {
            printf("%9d\t", kargo[i][j]);
        }
        printf("\n");
    }
    while(5)
    {
        if(dil==1)
        {
            printf("[1]-ANA MENU\n[2]-CIKIS\n SECIMINIZ:");
        }
        else
        {
            printf("[1]-MAIN MENU\n[2]-EXIT\nYOUR CHOSE:");
        }
        scanf("%d", &cks);
        switch(cks)
        {
        case 1:
            cks=1;
            break;
        case 2:
            cks=2;
            break;
        default:
            system("CLS");
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        if(cks==1||cks==2)
        {
            break;
        }
    }
    system("CLS");
    return cks;
}
int kargo_kaldir()
{
    int i, j, crgono, find, cks;
    system("CLS");
    if(dil==1)
    {
        printf("KARGO NO\tGONDEREN NO\t ALICI NO\t CIKIS SEHRI\t VARIS SEHRI\t KARGO DURUMU\t      FIYAT\n");
    }
    else
    {
        printf("CARGO ID\tSENDER ID\t RECEIVER ID\t EXIT CITY\t ARRIVAL CITY\t CARGO STATUS\t       PRICE\n");
    }
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<=k; i++)
    {
        for(j=0; j<7; j++)
        {
            printf("%9d\t", kargo[i][j]);
        }
        printf("\n");
    }
    while(5)
    {
        if(dil==1)
        {
            printf("KARGO NO GIRIN:");
        }
        else
        {
            printf("ENTER CARGO NO:");
        }
        scanf("%d", &crgono);
        printf("\n");
        for(i=0; i<=k; i++)
        {
            if(kargo[i][0]==crgono)
            {
                find=1;
                break;
            }
        }
        for(j=0; j<7; j++)
        {
            kargo[i][j]=kargo[k][j];
        }
        if(find!=1)
        {
            system("CLS");
            if(dil==1)
            {
                printf("KARGO BULUNAMADI TEKRAR DENEYIN\n");
            }
            else
            {
                printf("THIS CARGO NOT FOUND TRY AGAIN\n");
            }
        }
        else
        {
            break;
        }
    }
    k--;
    if(dil==1)
    {
        printf("KARGO KALDIRILDI\n");
    }
    else
    {
        printf("CARGO REMOVED\n");
    }
    while(5)
    {
        system("CLS");
        if(dil==1)
        {
            printf("[1]-ANA MENU\n[2]-CIKIS");
        }
        else
        {
            printf("[1]-MAIN MENU\n[2]-EXIT");
        }
        scanf("%d", &cks);
        switch(cks)
        {
        case 1:
            cks=1;
            break;
        case 2:
            cks=2;
            break;
        default:
            system("CLS");
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        if(cks==1||cks==2)
        {
            break;
        }
    }
    system("CLS");
    return cks;
}
int kargo_durum()
{
    int crgono, i, j, status, find, cks;
    system("CLS");
    if(dil==1)
    {
        printf("KARGO NO\tGONDEREN NO\t ALICI NO\t CIKIS SEHRI\t VARIS SEHRI\t KARGO DURUMU\t      FIYAT\n");
    }
    else
    {
        printf("CARGO ID\tSENDER ID\t RECEIVER ID\t EXIT CITY\t ARRIVAL CITY\t CARGO STATUS\t       PRICE\n");
    }
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<=k; i++)
    {
        for(j=0; j<7; j++)
        {
            printf("%9d\t", kargo[i][j]);
        }
        printf("\n");
    }
    while(5)
    {
        if(dil==1)
        {
            printf("\nKARGO NO GIRIN:");
        }
        else
        {
            printf("\nENTER CARGO NO:");
        }
        scanf("%d", &crgono);
        printf("\n");
        for(i=0; i<=k; i++)
        {
            if(kargo[i][0]==crgono)
            {
                find=1;
                while(5)
                {
                    if(dil==1)
                    {
                        printf("KARGO DURUMUNU GIRIN:");
                    }
                    else
                    {
                        printf("Enter Shipping Status:");
                    }
                    scanf("%d", &status);
                    if(status>0&&status<=3)
                    {
                        kargo[i][5]=status;
                        break;
                    }
                    else
                    {
                        system("CLS");
                        if(dil==1)
                        {
                            printf("YANLIS GIRIS\n");
                        }
                        else
                        {
                            printf("WRONG ENTRY\n");
                        }
                    }

                }
            }
        }
        if(find!=1)
        {
            system("CLS");
            if(dil==1)
            {
                printf("KARGO BULUNAMADI TEKRAR DENEYIN\n");
            }
            else
            {
                printf("THIS CARGO NOT FOUND TRY AGAIN\n");
            }
        }
        else
        {
            break;
        }
    }
    if(dil==1)
    {
        printf("KARGO DURUMU DEGISTIRILDIn");
    }
    else
    {
        printf("SHIPPING STATUS CHANGED\n");
    }
    while(5)
    {
        system("CLS");
        if(dil==1)
        {
            printf("[1]-ANA MENU\n[2]-CIKIS");
        }
        else
        {
            printf("[1]-MAIN MENU\n[2]-EXIT");
        }
        scanf("%d", &cks);
        switch(cks)
        {
        case 1:
            cks=1;
            break;
        case 2:
            cks=2;
            break;
        default:
            system("CLS");
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        if(cks==1||cks==2)
        {
            break;
        }
    }
    system("CLS");
    return cks;
}
int fiyat_hesapla()
{
    int agrlk, fiyat=0, a, hsp, cks=0;
    system("CLS");
    while(5)
    {
        if(dil==1)
        {
            printf("KARGO AGIRLIGINI GIRINIZ:");
        }
        else
        {
            printf("ENTER CARGO WEIGHT:");
        }
        scanf("%d", &agrlk);
        if(agrlk>2000)
        {
            system("CLS");
            if(dil==1)
            {
                printf("LUTFEN DAHA DUSUK BIR AGIRLIK GIRIN\n");
            }
            else
            {
                printf("PLEASE ENTER A LOWER NUMBER\n");
            }
            continue;

        }
        if(agrlk<=2000&&agrlk>0)
        {
            fiyat=agrlk*2;
            break;
        }
        else
        {
            system("CLS");
            if(dil==1)
            {
                printf("GECERSIZ GIRIS\n");
            }
            else
            {
                printf("INVALID ENTRY\n");
            }
        }
    }
    system("CLS");
    while(4)
    {

        if(dil==1)
        {
            printf("[1]-BIREYSEL KARGO\n[2]-KURUMSAL KARGO\nSECIMINIZ:");
        }
        else
        {
            printf("[1]-INDIVIDUAL CARGO\n[2]-CORPORATE CARGO\n YOUR CHOSE:");
        }
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            cks=1;
            break;

        case 2:
            fiyat=fiyat/2;
            cks=1;
            break;

        default:
            system("CLS");
            if(dil==1)
            {
                printf("YANLIS GIRIS\n");
            }
            else
            {
                printf("WRONG ENTRY\n");
            }

        }
        if(cks==1)
        {
            break;
        }
    }
    system("CLS");
    while(5)
    {
        if(dil==1)
        {
            printf("OZEL KARGO PAKETI ISTERMISINIZ\n[1]-EVET\n[2]-HAYIR\nSECIMINIZ:");
        }
        else
        {
            printf("WOULD YOU LIKE A SPECIAL SHIPPING PACKAGE\n[1]-YES\n[2]-NO\n YOUR CHOSE:");
        }
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            hsp=fiyat*0.1;
            fiyat=fiyat+hsp;
            cks=1;
            break;

        case 2:
            cks=1;
            break;

        default:
            system("CLS");
            if(dil==1)
            {
                printf("YANLIS GIRIS\n");
            }
            else
            {
                printf("WRONG ENTRY\n");
            }

        }
        system("CLS");
        if(dil==1)
        {
            printf("TAHMINI UCRET->%d\n", fiyat);
        }
        else
        {
            printf("ESTIMATED PRICE->%d\n", fiyat);
        }
        if(cks==1)
        {
            break;
        }
    }
    return fiyat;
}
int kargo_kaydi()
{
    srand(time(NULL));
    system("CLS");
    int krgoid=0, i, j, cks=0, sayac=0, ccity, vcity, fiyat;
    int mod=0, id=0, id2=0;
    k++;
    while(5)
    {
        for(i=1; i<=9; i++)
        {
            krgoid*=10;
            krgoid+=rand()%9;
        }
        for(i=0; i<k; i++)
        {
            if(krgoid==kargo[i][0])
            {
                cks=0;
                break;
            }
            else
            {
                cks=1;
                break;
            }
        }
        if(cks==1)
        {
            kargo[k][0]=krgoid;
            break;
        }
    }
    system("CLS");
    while(5)
    {
        if(dil==1)
        {
            printf("9 BASAMAKLI GONDEREN KIMLIK NO:");
        }
        else
        {
            printf("9 DIGITS SENDER ID:");
        }
        scanf("%d", &id);
        printf("\n");
        id2=id;
        sayac=0;
        while(5)
        {
            mod=id2%10;
            id2=id2-mod;
            id2=id2/10;
            sayac++;
            if(id2==0)
            {
                break;
            }
        }
        if(sayac==9)
        {
            kargo[k][1]=id;
            break;
        }
        else
        {
            system("CLS");
            if(dil==1)
            {
                printf("\nYANLIS KIMLIK NO\n");
            }
            else
            {
                printf("\nWRONG ID\n");
            }
        }
    }
    system("CLS");
    while(5)
    {
        if(dil==1)
        {
            printf("9 BASAMAKLI ALICI KIMLIK NO:");
        }
        else
        {
            printf("9 DIGITS RECEIVER ID:");
        }
        scanf("%d", &id);
        printf("\n");
        id2=id;
        sayac=0;
        while(5)
        {
            mod=id2%10;
            id2-=mod;
            id2=id2/10;
            sayac++;
            if(id2==0)
            {
                break;
            }
        }
        if(sayac==9)
        {
            kargo[k][2]=id;
            break;
        }
        else
        {
            system("CLS");
            if(dil==1)
            {
                printf("\nYANLIS KIMLIK NO\n");
            }
            else
            {
                printf("\nWRONG ID\n");
            }
        }
    }
    while(5)
    {
        system("CLS");
        if(dil==1)
        {
            printf("KIBRIS ICIN 82 YAZIN\nCIKIS SEHRI:");
        }
        else
        {
            printf("WRITE 82 FOR CYPRUS\nEXIT CITY:");
        }
        scanf("%d", &ccity);
        printf("\n");
        if(ccity>0&&ccity<83)
        {
            kargo[k][3]=ccity;
            break;
        }
        else
        {
            if(dil==1)
            {
                printf("YANLIS SEHIR\n");
            }
            else
            {
                printf("WRONG CITY\n");
            }
        }
    }
    while(5)
    {
        system("CLS");
        if(dil==1)
        {
            printf("KIBRIS ICIN 82 YAZIN\nVARIS SEHRI:");
        }
        else
        {
            printf("WRITE 82 FOR CYPRUS\nARRIVAL CITY:");
        }
        scanf("%d", &vcity);
        printf("\n");
        if(vcity>0&&vcity<83)
        {
            kargo[k][4]=vcity;
            break;
        }
        else
        {
            if(dil==1)
            {
                printf("YANLIS SEHIR\n");
            }
            else
            {
                printf("WRONG CITY\n");
            }
        }
    }
    kargo[k][5]=1;
    fiyat=fiyat_hesapla();
    kargo[k][6]=fiyat;
    system("CLS");
    if(dil==1)
    {
        printf("KARGO NO\tGONDEREN NO\t ALICI NO\t CIKIS SEHRI\t VARIS SEHRI\t KARGO DURUMU\t      FIYAT\n");
    }
    else
    {
        printf("CARGO ID\tSENDER ID\t RECEIVER ID\t EXIT CITY\t ARRIVAL CITY\t CARGO STATUS\t       PRICE\n");
    }
    printf("------------------------------------------------------------------------------------------------------------\n");
    for(j=0; j<7; j++)
    {
        printf("%9d \t", kargo[k][j]);
    }
    printf("\n");
    while(5)
    {
        if(dil==1)
        {
            printf("[1]-ANA MENU\n[2]-CIKIS\n SECIMINIZ:");
        }
        else
        {
            printf("[1]-MAIN MENU\n[2]-EXIT\nYOUR CHOSE:");
        }
        scanf("%d", &cks);
        switch(cks)
        {
        case 1:
            cks=1;
            break;
        case 2:
            cks=2;
            break;
        default:
            system("CLS");
            if(dil==1)
            {
                printf("YENIDEN DENEYIN\n");
            }
            else
            {
                printf("TRY AGAIN\n");
            }
        }
        if(cks==1||cks==2)
        {
            break;
        }
    }
    system("CLS");
    return cks;
}
int yntc_kntrl()
{
    int eleman = (sizeof(id) / sizeof(int));
    int eleman2 = (sizeof(pswrd) / sizeof(int));
    int i=0, dntl1, dntl2;
    while(4)
    {
        if(id[i]==id2[i])
        {
            if(i==eleman)
            {
                dntl1=1;
                break;
            }
            i++;
        }
        else
        {
            dntl1=0;
            break;
        }
    }
    i=0;
    while(4)
    {
        if(pswrd[i]==pswrd2[i])
        {
            if(i==eleman2)
            {
                dntl2=1;
                break;

            }
            i++;

        }
        else
        {
            dntl2=0;
            break;
        }
    }
    if(dntl1==1&&dntl2==1)
    {
        return dntl1;
    }
    else
    {
        dntl1=2;
        return dntl1;
    }
}
int main()
{
    int mod, secim, scm, cks=0;
    while(2)
    {
        system("CLS");
        printf("LUTFEN DIL SECIN-PLEASE SELECT LANGUAGE\n");
        printf("[1]-TURKCE\n[2]-ENGLISH\n SECIMINIZ-YOUR CHOSE:");
        scanf("%d", &dil);
        switch(dil)
        {
        case 1:
            dil=1;
            cks=1;
            break;
        case 2:
            dil=2;
            cks=1;
            break;
        default:
            printf("LUTFEN YENIDEN DENEYIN-PLEASE TRY AGAIN\n");
        }
        if(cks==1)
        {
            break;
        }
    }
    system("CLS");
    while(2)
    {
        system("CLS");
        if(dil==1)
        {
            printf("[1]-YONETICI MODU\n[2]-ZIYARETCI MODU\n[3]-CIKIS\nSECIMINIZ:");
        }
        if(dil==2)
        {
            printf("[1]-MANAGER MODE\n[2]-VISITOR MODE\n[3]-EXIT\nYOUR CHOSE:");
        }
        scanf("%d",&mod);
        system("CLS");
        switch(mod)
        {
        case 1:
            while(1)
            {
                printf("/*kullanici adi-kargootomasyon\nsifre-berkayozturk17-67*/\n");
                if(dil==1)
                {
                    printf("KULLANICI ADI:");
                }
                else
                {
                    printf("ID:");
                }
                scanf("%s", id2);
                if(dil==1)
                {
                    printf("SIFRE:");
                }
                else
                {
                    printf("PASSWORD:");
                }
                scanf("%s", pswrd2);
                secim=yntc_kntrl(id2, pswrd2);
                if(secim==2)
                {
                    system("CLS");
                    if(dil==1)
                    {
                        printf("YANLIS KULLANICI ADI YADA SIFRE\n");
                    }
                    else
                    {
                        printf("WRONG ID OR PASSWORD\n");
                    }
                    continue;
                }
                system("CLS");
                while(5)
                {

                    if(dil==1)
                    {

                        printf("[1]-KARGO KAYDI\n[2]-KARGO DURUMU\n[3]-GONDERIMDEN KALDIRMA\n[4]-LISTELEME\n[5]-KULLANICI ADI VE SIFRE DEGISTIRME\n[6]-GERI\n[7]-CIKIS\n SECIMINIZ:");
                    }
                    else
                    {
                        printf("[1]-CARGO REGISTRATION\n[2]-CARGO CONDITION\n[3]-ABOLITION\n[4]-LIST\n[5]-CHANGE ID AND PASSWORD\n[6]-BACK\n[7]-EXIT\nYOUR CHOSE:");
                    }
                    scanf("%d", &scm);
                    switch(scm)
                    {
                    case 1:
                    {
                        cks=kargo_kaydi();
                        break;
                    }
                    case 2:
                    {
                        cks=kargo_durum();
                        break;
                    }
                    case 3:
                    {
                        cks=kargo_kaldir();
                        break;
                    }
                    case 4:
                    {
                        cks=sirala();
                        break;
                    }
                    case 5:
                    {
                        cks=change_id_password();
                        break;
                    }
                    case 6:
                    {
                        cks=2;
                        break;
                    }
                    case 7:
                    {
                        cks=3;
                    }
                    default:
                    {
                        system("CLS");
                        if(dil==1)
                        {
                            printf("YENIDEN DENEYIN!\n");
                        }
                        else
                        {
                            printf("TRY AGAIN!\n");
                        }
                    }
                    }
                    if(cks==2||cks==3)
                    {
                        break;
                    }
                }
                if(cks==3||cks==2)
                {
                    break;
                }
            }
            break;

        case 2:
            system("CLS");
            while(5)
            {

                if(dil==1)
                {
                    printf("HOS GEGLDINIZ\n[1]-KARGOM NEREDE\n[2]-FIYAT HESAPLA\n[3]-GERI\n[4]-CIKIS\nSECIMINIZ:");
                }
                else
                {
                    printf("WELCOME\n[1]-WHERE IS MY CARGO\n[2]-PRICE ACCOUNT\n[3]-BACK\n[4]-EXIT\nYOUR CHOSE:");
                }
                scanf("%d",&scm);
                switch(scm)
                {
                case 1:
                {
                    cks=kargo_nerede();
                    break;
                }
                case 2:
                {
                    cks=tahmini_fiyat();
                    break;
                }
                case 3:
                {
                    cks=2;
                    break;
                }
                case 4:
                {
                    cks=3;
                    break;
                }
                default:
                {
                    system("CLS");
                    if(dil==1)
                    {
                        printf("YENIDEN DENEYIN!\n");
                    }
                    else
                    {
                        printf("TRY AGAIN!\n");
                    }
                }
                }
                if(cks==2||cks==3)
                {
                    break;
                }
            }
            break;
        case 3:
            system("CLS");
            cks=3;
            break;

        }
        if(cks==3)
        {
            break;
        }
    }
}
