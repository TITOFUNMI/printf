#include "main.h"

int main(void)
{
	_printf("%u\n", 1024);
	_printf("%u\n", -1024);
	_printf("%u\n", 0);
	_printf("%S", "No special character.");
	_printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	_printf("");
	_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
		return (0);
}
