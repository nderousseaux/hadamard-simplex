#define N 4
#define NH 11
#define NHT 15
#define NB_ERRORS 575
#define MASK (unsigned short) (0b1000000000000000)
#define ZERO (unsigned short) (0b0000000000000000)
#define ONE (unsigned short) (0b1111111111111111)
#define SHIFT_REGISTER (unsigned short) (0b1111010110010000)
#define MAX_SIZE_FILE (int) (200000)

//Matrice génératrice de Hadamard
unsigned short g[N];

//Met le n-ième bit du mot m à 1. Retourne le mot modifié
unsigned short set_nth_bit(int n, unsigned short m);

//Retourne la valeur du n-ième bit du mot m
unsigned short get_nth_bit(int n, unsigned short m);

//Change la valeur du n-ième bit du mot m. Retourne le mot modifié
unsigned short chg_nth_bit(int n, unsigned short m);

//Imprime les k premiers bits de m.
void print_word(int k, unsigned short m);

//Rajoute les bits de parité sur un mot de taille 4. Retourne le mot modifié
unsigned short encode_had_sys(unsigned short m);

//Rajoute les bits de parité sur un mot de taille 4. Retourne le mot modifié (simplexe)
unsigned short encode_simplexe(unsigned short m);

//Compte le nombre bit à 1 dans un mot
int cnt_bits(unsigned short n);

//Calcule la distance du code représenté par G
int dist_code_hds();

//Calcule la distance du code représenté par Gs
int dist_code_simplexe();

//Renvoie le syndrome d'un mot codé
unsigned short get_syndrome(unsigned short m);

//Affiche toutes les erreurs (jusqu'à 3 bits d'erreurs) et le syndrommes associés
void compute_syndromes();

//Corrige un mot si c'est possible, sinon, renvoie le mot non corrigé
unsigned short decode(unsigned short m);

//Calcule le module d'un mot par le polynome générateur
unsigned short mod_poly_simplex(unsigned short m);

//Renvoie un mot corrigé avec la méthode polynome
unsigned short decode_poly(unsigned short m);

//Fait un décallage circulaire (15 bits) (0 pour la gauche, 1 pour la droite)
unsigned short circular_shift(unsigned short m, int nb_shits, char direction);

//Code un mot avec la méthode polynome
unsigned short code_poly(unsigned short m);

//Décode un fichier avec la méthode polynome
void decode_file_poly(char* input, char *output);

//Encode un fichier avec la méthode polynome
void encode_file_poly(char* input, char *output);

//Crée jusqu'à trois erreurs dans le mot. Retourne le mot modifié
unsigned short create_noise(unsigned short m);