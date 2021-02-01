#include <stdio.h>
#include <iostream>
void update(int *a,int *b) {
    int *temp;
  *temp=(*a)+(*b);
  *b=(*a)-(*b);
  if((*b)<0)
  {
      *b=-(*b);
  }
  *a=*temp;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
     int *pa = &a;
    int  *pb = &b;
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
