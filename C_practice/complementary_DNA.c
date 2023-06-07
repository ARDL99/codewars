#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna) {
    size_t length = strlen(dna);
    char *complementary_strand = (char *) malloc((length + 1) * sizeof(char));

    for (size_t i = 0; i < length; i++) {
        if (dna[i] == 'A') {
            complementary_strand[i] = 'T';
        } else if (dna[i] == 'T') {
            complementary_strand[i] = 'A';
        } else if (dna[i] == 'C') {
            complementary_strand[i] = 'G';
        } else if (dna[i] == 'G') {
            complementary_strand[i] = 'C';
        }
    }

    complementary_strand[length] = '\0';
    return complementary_strand;
}