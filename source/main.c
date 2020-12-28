#include "ps4.h"

int _main(struct thread *td) {
  UNUSED(td);

  initKernel();
  initLibc();

  disable_aslr();

  initSysUtil();

  printf_notification("Disabled ASLR!");

  return 0;
}
