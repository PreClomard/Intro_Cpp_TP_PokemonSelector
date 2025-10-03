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



## TP du 26 Septembre

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

### Design Pattern State
Le design pattern state va nous permettre d'effectuer les différentes étapes du jeu, cela ce vera à travers l'évolution de la fenêtre.
Cela commencera par game qui s'occupera de l'ensemble du système avant de lancer l'affichage de la fenêtre de Menu qui ce trouve dans MenuState. 
Lorsque on quite le menuState on passe à l'encounter face où on aura deux possibilités, soit de rencontrer un pokemon, soit de d'affronter en arene. La partie arène n'a pas été fait mais la partie rencontre avec pokemon est en toujours en cours.


### Diagramme de Classe
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
    - string imagePath
    + Pokemon(int, string, int, double, double, double, double, string)
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
    + get_imagePath() string
}

class Pokemon_Vector {
    # vector<Pokemon> pokemonList
    + Pokemon_Vector()
    + ~Pokemon_Vector()
    + get_PokemonById(int)
    + get_PokemonByName(string)
    + display_PokemonList()
    + listOfId()
    + getPokemonList()
}

class Pokedex {
    - static Pokedex* pinstance
    - Pokedex()
    + static getInstance()
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
Pokemon_Vector *-- Pokemon : contains

%% ====== GAME STATE SYSTEM ======

class Game {
    - State* stateOfTheClass
    - sf::RenderWindow window
    - Pokedex* liste_Pokedex
    - Pokemon_PC* pokemon_collection
    - Pokemon_Party* trainerTeam
    + Game()
    + ~Game()
    + run()
    + setState(State*)
    + setTeam()
    + getTrainerTeam()
    + getPokedex()
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
    + MenuState(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
}
class ExplorationState {
    + ExplorationState(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
}
class ArenaState {
    + ArenaState(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
}
class GameOverState {
    + GameOverState(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
}
class EncounterState {
    + EncounterState(Game*)
    + handleGameEvent(sf::Event)
    + update()
    + render(sf::RenderWindow)
}

Game --> State
MenuState --> Pokemon_Party
ExplorationState --> Pokemon_Party
ArenaState --> Pokemon_Party
ArenaState --> Pokemon_PC
EncounterState --> Pokemon_Party
EncounterState --> Pokemon_PC

State <|-- MenuState
State <|-- ExplorationState
State <|-- ArenaState
State <|-- GameOverState
State <|-- EncounterState

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