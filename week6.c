//จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
#include <stdio.h>
int main(){
    int A,B,C,D,E,F,G,H,I,J;
    float averag ;
    printf("Input height student (1-10) :");
    scanf("%d%d%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&H,&I,&J);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",A,B,C,D,E,F,G,H,I,J);
    averag = (A+B+C+D+E+F+G+H+I+J)/10 ;
    printf("averag height %.2f cm",averag);
    return 0 ;

}