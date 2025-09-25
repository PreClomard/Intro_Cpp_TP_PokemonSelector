# TP Pokemon Selector - Clovis PRESSARD

## Relecture du TP par Guilhem BOULARAN
### Classe Pokemon
La majorité de cette page semble correcte pour moi. Un petit détail d'organisation du code avec le fait de mettre les PV d'un Pokemon vaincu à 0 par défault afin d'éviter les valeurs négatives. Mais rien d'handicapant dans le code présent.Voir commentaire associé.

Cependant, il faudrait vérifier une fonctionnalité développée dans la fonction d'attaque d'un Pokemon sur un autre. En effet, à la ligne 46, le fait de créer un nouveau pokemon ne me semble pa correct. Voir commentaire associé.

### Classe Pokemon Vector
Il semble que les fonctions getPokemonByName et getPokemonById ne sont pas configurées comme il faut.
En effet, les fonctions doivent renvoyer un objet de la forme Pokemon or dans le cas où il n'y a pas de Pokemon trouvé, on écrit simplement un message dans la console.

Il semblerait plus judicieux de renvoyer un Pokemon "nul" que l'on définirait comme étant une réponse erreur. Cela éviterait potentiellement des erreurs de compilation futures.

### Classe Pokedex
Cette classe semble bien construite. Le code efficace et fonctionnel.
Très bien.

### Classe Pokemon Party
Fichier vide. Il semblerait que votre fichier Pokemon_PC soit en fait un remplaçant de celui-ci. Il présente les mêmes fonctions que Pokemon_Party dans le sujet du TP.
Une réoragnisation des fichiers est à envisager, voire une suppression de celui-ci s'il ne présente aucun interêt dans le projet.

### Classe Pokemon Attack
Cette classe ne semble pas difficile à créer une fois que vous aurez réussi à faire la classe Pokémon Party. Il suffit simplement d'avoir une énumération de Pokemon_Party et de pouvoir ajouter une nombre défini (3 par exemple) de Pokémon dans votre équipe de combat.
Vous semblez tout avoir pour construire cette nouvelle classe. Bon courage.

### Classe Pokemon_PC
Si j'ai bien compris l'objectif de cette classe, il s'agit d'une classe héritant de Pokemon_Vector donc qui permet de faire une liste de Pokemon.
Cela permettrait donc de construire son inventaire de Pokemon au fur et à mesure qu'on en capture.
L'idée serait de pouvoir prendre au hasard (ou avec une certaine probabilité d'apparition) des pokémon tirés du Pokedex afin qu'ils puissent ensuite être capturés par le dresseur et placés dans l'inventaire.
Mais cela rentre dans une conception du jeu plus poussée. Ici, on définira simplement un inventaire de base de nos Pokemon.
Bonne idée qui permet plus tard de coder de nombreuses fonctionnalités notamment "Capturer un Pokemon" ou "Libérer un Pokemon".

Pas d'erreur apparente. Codage des fonctions assez succint et efficace. Bon travail.

## AJout d'une méthode/classe

## Bilan:
Le plus gros de ce qu'il vous reste à faire ce trouve dans la résolution des problèmes de syntaxes et de compilation de la classe Pokemon_Vector. Le reste ne devrait pas trop vous poser de problèmes un fois ce-dernier résolu.
Vous pourrez alors vous lancer dans l'interface graphique.

Revoyer également précisément la fonction que vous souhaitez donner à Pokemon_Party vis-à-vis de Pokemon_PC. Que ce soit clair pour vous afin que cela puisse l'être pour quiconque étudierait votre code.

