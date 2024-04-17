void print_char(char);
int length(char *toRever);

char *my_char_replace(char *origin, char toFind, char toReplace) {
    for (int i = 0; i <= length(origin); i++) {
        if (origin[i] == toFind) {
            origin[i] = toReplace;
        }
    }
    return origin;
}