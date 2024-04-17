void print_char(char);

int taille(char *toRever) {
    int i = 0;
    while(toRever[i] != '\0') {
        i++;
    }
    return i;
}

char *my_char_replace(char *origin, char toFind, char toReplace) {
    int t = taille(origin);
    for (int i = 0; i <= t; i++) {
        if (origin[i] == toFind) {
            origin[i] = toReplace;
        }
    }
    return origin;
}