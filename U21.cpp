#include <stdio.h> 
#include <stdlib.h>

struct servitor
{
   char id[8],name[12];
   int hourly_pay,hours,payment;

};

void calc(struct servitor *);
int main(void)
{

   struct servitor emp51; 
   printf("�п�J�s��,�m�W,���~,�u�@�ɼ�: ");
   scanf(" %s %s %d %d", emp51.id, emp51.name, &emp51.hourly_pay, &emp51.hours);
   calc(&emp51);
   printf("�리�J: %d\n", emp51.payment);
   system("pause"); 
   return 0;

}



void calc(struct servitor *p)

{

    p->payment=p->hourly_pay*p->hours;

}
