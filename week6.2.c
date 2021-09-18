//จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
#include<stdio.h>
int main() {
    int sample[10],i,avg ;
    for (i=0;i<10;i++) {
        printf("height : ");
        scanf("%d",&sample[i]);
    }
    avg = 0 ;
    for(i=0;i<10;i++)
    avg += sample[i];
    printf("The average is %d\n",avg/10);
    return 0 ;
}