#include <stdio.h>
#include <unistd.h> // for sleep()

int main()
{
      printf("CTRL+C to exit this code\n");
      printf("-");
      fflush(stdout);
      
      for (;;) {
        sleep(1);
        
        printf("\b\\");
        fflush(stdout);
        sleep(1);
        printf("\b|");
        fflush(stdout);
        sleep(1);
        printf("\b/");
        fflush(stdout);
        sleep(1);
        printf("\b-");
        fflush(stdout);
      }
}
