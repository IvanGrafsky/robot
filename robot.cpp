#include <iostream>
#include <linux/joystick.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
  std::cout << "Hello from Raspberry Pi" << std::endl;

    int fd = open ("/dev/input/js0", O_RDONLY);

    struct js_event e;

    for(int i = 0; i < 10000; i++){
      int bytes = read (fd, &e, sizeof(e));
      std::cout << "Read " << bytes << " bytes" << std::endl;
      std::cout << "Number " << e.number << std::endl;
      std::cout << "Type " << e.time << std::endl;
      std::cout << "Type: " << e.type << std::endl;
      std::cout << "Value " << e.value << std::endl;
    }


  close(fd);


  return 0;
}