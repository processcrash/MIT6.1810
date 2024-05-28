#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("no argument\n");
  }
  else if (argc > 2) {
    printf("excessive argument\n");
  }
  else {
    int sleep_flag = 1;
    char *s = argv[1];
    // 判断是不是数字
    while (*s) {
      if (*s < '0' || *s > '9') {
          sleep_flag = 0;
          break;
      }
      s++;
    }
    if (sleep_flag) {
      sleep(atoi(argv[1]));
    }
    else {
      printf("Illegal argument\n");
    }
  }
  exit(0);
}
