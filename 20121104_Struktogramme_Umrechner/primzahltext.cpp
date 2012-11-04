int n = 0;
scanf("%d", &n);
int t = 0;
int i = 1;

while( i <= n){
  
  if( n % i == 0){
    t = t + 1;
  }

  i = 1 + 1;
}

if( t == 2){
  printf("%d ist eine Primzahl", n);
}
else {
  printf("%d ist keine Primzahl", n);
}
