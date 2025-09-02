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

// 