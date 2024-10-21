#include <stdio.h>
#include <stdint.h>
typedef struct {
    uint16_t destination_address;  // 2-byte address
    char text[1024];           // 1-kilobyte message -> 1024 bytes
} Message;


void send_message(Message new_message); 

int main () {
    // Declare a message struct and fill it with data
    Message hello_message = {0x11FF, "Hello World!"};
    // Call the function with the struct as an argument
    send_message(hello_message);
}

void send_message(Message new_message){
    // Write here the code necessary to transmit the message using the selected communication protocol
    //Test the message. 
    printf("%s",new_message.text);
}