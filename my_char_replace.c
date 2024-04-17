void print_char(char);

char *my_char_replace(char *origin, char toFind, char toReplace) {
    for (int i = 0; i < length(origin); i++) {
            if (origin[i] == toFind) {
                print_char(toReplace);
            } else {
                print_char(origin[i]);
            }
    }
}