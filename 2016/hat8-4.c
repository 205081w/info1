#include <stdio.h>
void divmod(int a, int b, int *pq, int *pr);

int main() {
    int a = 10, b = 7;
    int q, r;

  printf("In main:\n &a=%p\n &b=%p\n &q=%p\n &r=%p\n", &a, &b, &q, &r); 
    divmod(a, b, &q, &r);
    printf("%3d/%3d=%3d ... %3d\n", a, b, q, r);

    return 0;
}

void divmod(int a, int b, int *pq, int *pr) {
  printf("In divmod:\n &a=%p\n &b=%p\n &pq=%p\n &pr=%p\n", &a, &b, &pq, &pr);
    *pq = a/b;
    *pr = a % b;
}

