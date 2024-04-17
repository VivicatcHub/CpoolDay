int longueur(char *toRever) {
    int i = 0;
    while(toRever[i] != '\0') {
        i++;
    }
    return i;
}

int my_get_char_repeat(char to_find, const char *to_search) {
    int compteur = 0;
    int t = longueur(to_search);
    for (int i = 0; i < t; t++) {
        if (to_search[i] == to_find) {
            compteur++;
        }
    }
    return compteur;
}