
void printf(char* str)
{
    unsigned short* VideoMemory = (unsigned short*)0xb8000;

    for (int i = 0; str[i] != '\0'; i++) {
        VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
    }
}

extern "C" void main(void* multiboot_structure, unsigned int magicnumber)
{
    printf("Welcome to KateOS -- https://kateos.org");

    while(1);
}


