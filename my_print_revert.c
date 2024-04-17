void print_char(char c);

void my_print_revert(char *toRever) {
    int i = -1;
    while(toRever[i] != toRever[0]) {
        print_char(toRever[i]);
        i--;
    }
}