#include <stdio.h>

int main(void) {
  int x = 1;

/*for(x = 1; x <= 4; x++){
  printf("%d\n", x*2);
}*/
  while(x <= 4){
    printf("%d ", x * 2);
    x++;
  }
  printf("\nExample of for loop\n");
  char me[4][10] = {"Cyrel", "Mallare", "Cabodbod"};
  int i;

  for(i = 0; i <= 4; i++){
    printf("%s ", me[i]);
  }
return 0;
  }
