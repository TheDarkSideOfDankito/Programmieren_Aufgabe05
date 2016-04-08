#include "Artikel.h"
#include "lagerdat.h"
#include <stdio.h>

int main() {
    ArtikelStruct article;
    int result = 0;
    openLager();

    while(result == 0) {
        result = readNext(&article);
        if (result == 0) {
            printf("%s;%d;%f\n", article.name, article.nr, article.preis);
        }
    }

    closeLager();

    return 0;
}