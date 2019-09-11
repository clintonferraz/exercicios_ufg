  #include <stdio.h>

  /* prints 1 to num natural numbers */
  void printNum(int num, int val) {
        if (val <= num) {
                printf("%d\n", val);
                val = val + 1;
                printNum(num, val);
        }
        return;
  }

  int main() {
        int n, val = 1;

        /* get the input value for n from the user */
        printf("Enter the value for n:");
        scanf("%d", &n);

        /* prints 1-n numbers */
        printNum(n, val);

        return 0;
  }
