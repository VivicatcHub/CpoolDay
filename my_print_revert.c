void print_char(char c);

int length(char *toRever) {
    int i = 0;
    while(toRever[i] != '\0') {
        i++;
    }
    return i;
}

void my_print_revert(char *toRever) {
    for (int i = length(toRever); i >= 0; i--) {
        print_char(toRever[i]);
    }
}