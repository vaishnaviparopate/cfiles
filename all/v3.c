#include <stdio.h>

void myFunction(int myNumbers[n]) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n; i++)
{scanf("%d",&a[i]);
}
  int a[n]; 
  myFunction(a);
  return 0;
}
