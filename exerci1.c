// Q 01: Que signifie GCC ? 
// GNU Compiler Collection

// Q 02: OK, alors que signifie GNU ? 
// GNU’s Not Unix

// Q 03: C'est quoi le problème avec GCC, au fait ? 
// - GCC n’est pas installé sur votre ordinateur. - Le chemin (PATH) n’est pas configuré - Version ancienne ou incompatible avec le système ou le code que vous voulez compiler

// Q 04: Comment GCC est-il bon pour trouver des erreurs dans les programmes ?
// GCC aide à détecter les erreurs dans les programmes grâce à :
// - La vérification de la syntaxe selon les règles du C/C++. - Des messages d’erreur clairs avec le numéro de ligne.- Des avertissements pour le code potentiellement problématique, même si le programme peut se compiler. - Des options comme -Wall pour afficher tous les avertissements et améliorer la qualité du code.

// Q 05: Q 05: Pourquoi C est-il si laconique ? J'ai l'impression que les programmes seraient plus lisibles si C utilisait begin et end au lieu de { et }, integer au lieu de int, et ainsi de suite.  
// C est concis parce qu’il a été conçu pour être rapide à écrire, efficace en mémoire et compatible avec Unix, utilisant des symboles courts comme { } et int au lieu de mots longs, même si cela peut sembler moins lisible pour les débutants.

// Q 06: Dans certains livres sur le C, la fonction main se termine par exit(0) au lieu de return 0. Est-ce la même chose ?
// Dans main, return 0 et exit(0) terminent le programme avec succès, mais exit(0) peut être utilisée depuis n’importe quelle fonction, alors que return 0 s’utilise seulement dans main.

// Q 07: Que se passe-t-il si un programme atteint la fin de la fonction main sans exécuter un return ? 
// Si main se termine sans return, le programme se termine normalement comme si return 0; avait été exécuté, surtout avec les standards C modernes.

// Q 08: Le compilateur supprime-t-il un commentaire entièrement ou le remplace-t-il par un espace blanc ?
// Le compilateur supprime-t-il un commentaire entièrement .

// Q 09: Q 09: Comment puis-je savoir si mon programme a un commentaire non terminé ? 
// On peut savoir qu’il y a un commentaire non terminé si le compilateur affiche des erreurs ou des avertissements lors de la compilation, ou si le programme ne se compile pas.

// Q 10 :Q 10: Est-il légal d'imbriquer un commentaire à l'intérieur d'un autre ? 
// Non, il n’est pas légal d’imbriquer des commentaires en C ; cela provoquera une erreur de compilation.

// Q 11: D'où vient le nom du type float ? 
// Le nom float vient de “floating-point”, car ce type stocke des nombres réels avec une virgule flottante.

// Q 12: Pourquoi les constantes à virgule flottante doivent-elles se terminer par la lettre f ? 
// Parce qu’en C, les nombres à virgule sont **double par défaut**, et la lettre **`f`** indique que la constante est un **float**, évitant ainsi la conversion automatique et améliorant la précision.
