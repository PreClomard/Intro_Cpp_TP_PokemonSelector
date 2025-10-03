# TP Pokemon Selector
> Fait par Pressard Clovis

## TP du 10 Septembre

###  Avancé en TP
La création de la classe Pokemon a été fait.
La classe Pokemon Vector est en cours de realisation.
Les fichiers des autres classes ont été créer mais sont 
vides pour l'instant.

###  Avancé en dehors du TP
La classe Pokemon a été mis à jour avec l'amélioration de
la méthode versu. De plus la class Pokemon_Vector a été mis
en place ne laissant normalement que les classes filles à 
faire. Aussi la complétion du fichier Pokedex et Pokemon_PC.
Ne laissant plus que le fichier Pokemon_Team à terminer.



## TP du 19 Septembre

###  Avancé en TP
La continuité du Pokemon_Team ainsi que la review ainsi que 
l'ajout d'une fonction au sein de la Review.

###  Avancé en dehors du TP
Le pokemon Team a été finalisé. Ne laissant que le travail 
de la dernière séance à être réalisé.



## TP du 19 Septembre

###  Avancé en TP


## Compréhension du TP

### Classe Pokemon
C'est la classe qui initialise et garde les infos sur les 
Pokemon, definissant leur nom, leur attack, ...

### Classe Pokemon Vector
C'est la clase mère qui définie une liste par rapport à la classe 
Pokemon. 

### Classe Pokedex
C'est la classe fille, cette dernière utilise le Patern Design Singleton,
l'objectif est de s'assurer d'une création unique de cette classe.
Dans cet class on souhaite y stocké tout les pokemon existant.

### Classe Pokemon Party renomé Pokemon PC
C'est la classe fille, elle a pour but de stocker les pokemons appartenant,
au joueur dans un stockage, ces derniers ne sont utilisables en combats
si et seulement si intégré dans l'équipe de pokemon

### Classe Pokemon Attack renomé Pokemon Party
C'est la classe fille, cet dernière contient les pokemons utilisé pour les 
combats.


```mermaid
classDiagram

%% ====== CORE POKEMON CLASSES ======

class Pokemon {
    - int id
    - string name
    - int generation
    - double maxLifePoints
    - double lifePoints
    - double attackPoints
    - double defensePoints
    + Pokemon(int, string, int, double, double, double, double)
    + ~Pokemon()
    + displayInfo()
    + versus(Pokemon)
    + get_id() int
    + get_name() string
    + get_lifePoints() double
    + get_maxLifePoints() double
    + get_attack() double
    + get_defense() double
    + get_generation() int
}
Pokemon *-- Pokemon_Vector

class Pokemon_Vector {
    # vector~Pokemon~ pokemonList
    + Pokemon_Vector()
    + ~Pokemon_Vector()
    + get_PokemonById(int) Pokemon&
    + get_PokemonByName(string) Pokemon&
    + display_PokemonList()
    + listOfId() vector~int~
}

class Pokedex {
    - static Pokedex* pinstance
    - Pokedex()
    + static getInstance() Pokedex*
}

class Pokemon_PC {
    - Pokedex* pokedex
    + Pokemon_PC(Pokedex*)
    + ~Pokemon_PC()
    + addPokemonToPCbyId(int)
    + addPokemonToPCbyName(string)
    + removePokemonToPCbyId(int)
    + removePokemonToPCbyName(string)
}

class Pokemon_Party {
    - Pokemon_PC* pokemon_collection
    + Pokemon_Party(Pokemon_PC*)
    + ~Pokemon_Party()
    + addPokemonToPartyById(int)
    + addPokemonToPartyByName(string)
    + removePokemonToPartyById(int)
    + removePokemonToPartyByName(string)
}

Pokemon_Vector <|-- Pokedex
Pokemon_Vector <|-- Pokemon_PC
Pokemon_Vector <|-- Pokemon_Party
Pokemon_PC --> Pokedex
Pokemon_Party --> Pokemon_PC

%% ====== GAME STATE SYSTEM ======

class Game {
    - State* stateOfTheClass
    - sf::RenderWindow window
    + Game()
    + ~Game()
    + run()
    + setState(State*)
    + setTeam()
}

class State {
    # Game* game
    + ~State()
    + set_Game(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
}

class MenuState {
    - Pokemon_Party* trainerTeam
    + MenuState(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
    + creationOfParty()
}

class ExplorationState {
    - int randomEncounter
    - int randomArena
    + ExplorationState(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
}

class ArenaState
class GameOverState

State <|-- MenuState
State <|-- ExplorationState
State <|-- ArenaState
State <|-- GameOverState
Game --> State
MenuState --> Pokemon_Party

%% ====== DYNAMIC SPRITE ======

class DynamicSprite {
    - bool isWalking
    - double speed
    - int spriteSheetNumberOfColumn
    - double timeBetweenFrame
    + DynamicSprite()
    + ~DynamicSprite()
    + draw()
    + setDirection()
    - isMovingPossible()
    - move()
}


```