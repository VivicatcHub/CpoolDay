void print_char(char);

int length(char *toRever) {
    int i = 0;
    while(toRever[i] != '\0') {
        i++;
    }
    return i;
}

char my_char_replace(char *origin, char toFind, char toReplace) {
    for (int i = 0; i < length(origin); i++) {
            if (origin[i] == toFind) {
                print_char(toReplace);
            } else {
                print_char(origin[i]);
            }
    }
}