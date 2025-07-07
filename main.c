#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a1, d;
    int n;
    float aa1, a2, b1, b2, jarak;
    //variable();
    //kelilingpersegi(2,9);
    //casting();
    //grade();
    //celciustofarentait();
    //swapOperation(1,2,3,4);
    //aritmatic(a1, d, n);
    //aritmatitTotal(a1,d,n);
    //calculateSalary(25000);
    //findingDriven();
    //konfersiMenit(n);
    //removeDigitInNumber(d);
    //sumdigit(n);
    //reverseNumber(n);
    DistanceBetweenTwoPoint(aa1, a2, b1,b2, jarak);
    return 0;
}

// scanf("%f",&num); untuk membaca float
// scanf("%lf",&num); untuk membaca double


void reverseNumber(int num)//balik angka ratusan
{
    int satuan, puluhan, ratusan;
    printf("masukkan angka ratusan untuk dibalik : ");
    scanf("%d",&num);
    satuan =  num % 10;
    num = num - satuan;
    puluhan = (num % 100) / 10;
    num = num - puluhan;
    ratusan = num / 100;
    num = (satuan * 100) + (puluhan * 10) + ratusan;
    printf("hasil %d",num);
}

void sumdigit(int num)//menjumlahkan bilangan ratusan
{
    int satuan, puluhan, ratusan;
    printf("masukkan 3 digit number : ");
    scanf("%d",&num);
    satuan =  num % 10;
    num = num - satuan;
    puluhan = (num % 100) / 10;
    num = num - puluhan;
    ratusan = num / 100;
    num = satuan + puluhan + ratusan;
    printf("hasil penjumlahan %d + %d + %d = %d",satuan, puluhan, ratusan, num);

}

void removeDigitInNumber(float num)
{
    //cetak float tanpa desimal
    int to_int;
    float final_result;
    //double to_double;
    printf("masukkan angka desimal : ");
    scanf("%f",&num);
    to_int = num;//konversi ke int
    float sisa = num - to_int;//cetak sisa (dibelakang koma)
    final_result = to_int + sisa; //hasil akhir
    printf("hasil %.2f",final_result);
}

void konfersiMenit(int detik)//ok
{
    int menit;
    float jam, sisa_menit,sisa_detik, sisa_jam;
    printf("masukkan total detik ");
    scanf("%d",&detik);
    menit = detik / 60; //correct
    sisa_menit = (detik % 60); //correct
    jam = menit / 60;
    sisa_jam = (menit % 60);
    printf("%2.f jam, %2.f menit, %2.f detik",jam,sisa_jam, sisa_menit);
}

void findingDriven()
{
    //jarak [km], speed. [km/jam]
    //jarak = speed * waktu
    //waktu = jarak / speed
    int distance = 118;
    int speed = 80;
    int hours = distance / speed; //km / hours
    float speedInMinutes = speed / 60.0; //km / minutes
    float remainigMinutes = (distance % speed) / speedInMinutes;//minutes / units
    printf("kecepatan %d jarak %d \n",speed,distance);
    printf("the time for driving from surabaya to jakarta : %d / jam %.2f minutes",
           hours,remainigMinutes);
}

void calculateSalary(int gaji)
{
    int hasil, perminggu, perhari;
    printf("masukkan gaji perjam ");
    scanf("%d", &gaji);
    hasil = gaji * 8* 24;
    perminggu = gaji * 8 * 5;
    perhari = gaji * 8;
    printf("gaji perbulan %d \n",hasil);
    printf("gaji perminggu %d \n",perminggu);
     printf("gaji perhari %d",perhari);
}


void aritmatitTotal(float a1, float aLast, int n)
{
    //formulats = (a1 + a_last) * n /2
    //menjumlahkan semua
     float a_last, total_jumlah;
     float bagi_2;
    printf("masukkan inisial : ");
    scanf("%f",&a1);
    printf("masukkan a Last : ");
    scanf("%f", &aLast);
    printf("masukkan n : ");
    scanf("%d", &n);
    bagi_2 = n / 2;
    //a_last = a1 + (n-1) *d;
    total_jumlah = (a1 + aLast) * n/2;
    printf("hasilnya %f \n",total_jumlah);
}

void aritmatic(float a1, float d, int n)
{
    //d = selisih, a1 = index 1, n = looping berapa x
    //looping
    //formulas a1 + (n-1) *d;
    float hasil;
    printf("masukkan a1 : ");
    scanf("%f",&a1);
    //%f = float, %lf = decimal
    printf("masukkan n : ");
    scanf("%f", &d);
    printf("masukkan d : ");
    scanf("%d", &n);
    hasil = a1 + (n-1) *d;
    printf("hasilnya %f \n",hasil);

}

int swapOperation(int a, int b, int c, int d)
{
    int temp, temp2, temp3, temp4;
    printf("awal a %d \n",a);
    printf("awal b %d \n",b);
    printf("awal c %d \n",c);
    printf("awal d %d \n",d);

    temp = a;
    temp2 = b;
    temp3 = c;
    temp4 = d;
    b = temp;
    c = temp2;
    d = temp3;
    a = temp4;

    printf("result a %d \n",a);
    printf("result b %d \n",b);
    printf("result c %d \n",c);
    printf("result d %d \n",d);
}

int celciustofarentait()
{
    int celcius;
    double has = (double)9 / 5;// 9 & 5 bertipe int
    double result;
    printf("masukkan celcius : ");
    scanf("%d",&celcius);
    //jika salah masukkan scanf %lf padahal tipe int maka akan bermasalah
    //harus sesuai %d = int | %lf = double
    result = (has * celcius ) + 32;
    printf("hasil conversi %lf",result);

}


int grade()
{
    int grade1, grade2, grade3;
    double result;

    printf("masukkan grade 1 : ");
    scanf("%d",&grade1);

    printf("masukkan grade 2 : ");
    scanf("%d",&grade2);

    printf("masukkan grade 3 : ");
    scanf("%d",&grade3);
    result = (grade1 + (double) grade2 + grade3 ) / 3;
    printf("hasilnya %lf", result);
}

int casting()
{
    //masalah ketika pembagian
    //jika int dan int, maka akan dibulatkan,
    //salah satu harus di conversi ke double.
    //casting : conversi ke tipe data lain
    int varA = 4, varB =2;
    double hasiBagi = varA / (double) varB;
    printf("hasilnya %lf ",hasiBagi);
}

int luaspersegi()
{
     double height, width;
    double result;
    printf("Enter height : ");
    scanf("%lf", &height);
    printf("enter width : ");
    scanf("%lf", &width);
    result = height * width;
    printf("hasilnya adalah %lf",result);
}

void kelilingpersegi(int p, int l)
{
    int hasil;
    printf("masukkan p : ");
    scanf("%d",&p);
    printf("masukkan l : ");
    scanf("%d", &l);
    hasil =  2 * (p+l);
    printf("hasilnya adalah %d", hasil);
}

void variable()
{
    int myNum = 15; ////%d
    float myFloatNum = 5.99;//%f,
    double doble = 33.222111; //%lf
    char myLetter = 'D'; //%c
    char greetings[] = "Hello World!"; //string %s
    printf("ini variable %s",greetings);
}

void DistanceBetweenTwoPoint(float x1,float y1,float x2,float y2,float distance)
{
    printf("masukkan x1 : ");
    scanf("%f", &x1); //f untuk read fload
     printf("masukkan y1 : ");
    scanf("%f", &y1);
     printf("masukkan x2 : ");
    scanf("%f", &x2);
     printf("masukkan y2 : ");
    scanf("%f", &y2);

    //include math untuk function bawaan c (sqrt) agar bisa pake
    distance = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
    printf("distance between two point : (%.2f, %.2f) and (%.2f, %.2f) is %.2f \n",
           x1,y1, x2, y2,distance);
    //%.2f 2 angak dibelakang koma



}

