#include <zephyr/kernel.h>

int main(void) {
    // Send a string
    uart_send_string("Hello, world!\n");

    // Send a byte
    uart_send_byte('A');

    // Receive a byte
    uint8_t byte = uart_receive_byte();

    // Send a byte back
    uart_send_byte(byte);

    // Send a string
    uart_send_string("\n");

    // Loop forever
    while (1) {
        // Do nothing
    }

    return 0;
}