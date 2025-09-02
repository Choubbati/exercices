// Section 1.1 : Avec ce code et return 0;, aucun avertissement ne devrait apparaître. Pour éviter tout avertissement, assure-toi que main est correctement déclaré et compile avec gcc -Wall

// Section 1.2 : 
// a:
//  les directives dans ce programme est : #include <stdio.h> 
// les instructions dans ce programme est : - printf("Parkinson's Law:\nWork expands so as to "); - printf("fill the time\n"); - printf("available for its completion.\n");

// b: 

// Parkinson's Law:
// Work expands so as to fill the time
// available for its completion.

// *************************************

// Section 1.4 

// #include <stdio.h>

// int main(void) {
//     int height = 8, length = 12, width = 10;
//     int volume = height * length * width;

//     printf("Dimensions: %dx%dx%d\n", length, width, height);
//     printf("Volume (cubic inches): %d\n", volume);
//     printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
    
//     return 0;
// }


// **************************

// Section 1.7 
// 5. Lesquels des éléments suivants ne sont pas des identifiants C légaux ? 
// (a) 100_bottles

// ******************

// 6. Pourquoi n'est-il pas judicieux pour un identifiant de contenir plus d'un trait de soulignement adjacent (comme dans current___balance, par exemple) ?
// Parce qu’avoir plusieurs underscores adjacents **rend le code moins lisible** et peut provoquer des **conflits avec des noms réservés du système ou des bibliothèques**.


// *********************

// 7. Lequels des éléments suivants sont des mots-clés en C ? 
// (a) for 
// (c) main 
// (e) while 


// ************************

// Section 1.8 
// 8. Combien de jetons y a-t-il dans l'instruction suivante ? 
// answer=(3*q-p*p)/3; 
//  il y a 14 jetons dans cette instruction.

// ****************

// 9. Insérez des espaces entre les jetons de l'exercice 8 pour rendre l'instruction plus facile à lire. 
//  answer = ( 3 * q - p * p ) / 3 ; 


// **********************
// 10. Dans le programme dweight.c (Section 1.4), quels espaces sont essentiels ? 
// Les espaces essentiels dans dweight.c sont uniquement ceux qui séparent les mots-clés, les variables et les opérateurs ; le reste est facultatif pour améliorer la lisibilité.

// ****************************

// *********Chapitre IV ***********


// Projets de programmation 
// 1. Écrivez un programme qui utilise printf pour afficher l'image suivante à l'écran :


// #include <stdio.h>

// int main(void) {
//     printf("1.         *\n");
//     printf("2.        *\n");
//     printf("3.       *\n");
//     printf("4.  *   *\n");
//     printf("5.   * *\n");
//     printf("6.    *\n");
//     return 0;
// }


// *************************
// Question 2 :


// #include <stdio.h>

// int main(void) {
//     float r = 10.0f;
//     float volume = (4.0f / 3.0f) * 3.14159f * r * r * r;

//     printf("Le volume de la sphere de rayon %.2f m est %.2f m^3\n", r, volume);
//     return 0;
// }


// 







