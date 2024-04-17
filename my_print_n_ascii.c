void print_char(char c);

void my_print_n_ascii(int howMany) {
    for (int i = '!'; i < ('!' + howMany); i++) {
        print_char(i);
    }
}