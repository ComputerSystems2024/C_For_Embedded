
/* C struct */

#include <stdint.h>
#include <stdio.h>

typedef struct {
  char destination_address[4];  // 4 bytes address
  char message[2048];           // 2-kilobytes message
} Message;

// function prototype
void send_message(Message *message_home);
void counter();

// Main
int main() {
  Message message_home = {"ABC", "This is the message content..."};
  send_message(&message_home);
  printf("\n");

  counter();
  
  return 0;
}

// massage
void send_message(Message *message_home) {
  printf("sizeof Message %d\n", sizeof(message_home));
  printf("destination_address %x\n", sizeof(message_home->destination_address));

  printf("%s", message_home->message);
}
// static counter
void counter() {
  static uint16_t count = 0;
  count++;
  printf("static count %u\n", count);
}