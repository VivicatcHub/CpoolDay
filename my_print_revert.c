void print_char(char c);

void my_print_revert(char *toRever) {
    for (int i = sizeof toRever + 1; i >= 0; i--) {
        print_char(toRever[i]);
    }
}