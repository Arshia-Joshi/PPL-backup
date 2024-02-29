#include <stdio.h>
int fibo(int t1, int t2, int nextTerm,int n)
{
	printf("%d, ", nextTerm);
	if(n>=0){
	    t1 = t2;
	    t2 = nextTerm;
	    nextTerm = t1 + t2;
	    fibo(t1,t2,nextTerm,n-2);
}
}
int main() {

  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  fibo(t1,t2,nextTerm,n);
  /*for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }*/

  return 0;
}

