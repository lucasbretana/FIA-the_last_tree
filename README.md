# The Last Tree - a competitive game player

## Client

## Server
Enter the `dockerized-server` directory
- build: `docker build -t dpy-last_tree .`
- run: `docker run -p 8080:8080 dpy-last_tree`
  * use `-it` to interact with the container
  * the first `8080` can be changed to any host available port

#### API Overview and quick reference

API is designed to respond `HTTP` requests:
- `/jogador`: returns match id (-1 case game is over, and you lose)

- `/tabuleiro`: return a n-uple of lists (`animais` and `terrenos`)
  * each `animal` has attributes:
    + `land` where it is
    + `fruits` number of fruits it has
  * each `terreno` has attributes:
    + `seeds` number of seeds in that place
    + `plants` number of plants in that place
    + `trees` number of trees in that place

- `/move?player=P&rule=R&animal=A&land=L`: do a series of actions
  * apply rule `R` on the animal `A` for the land `L`
    + animals have _higher_ priority, if there is a land that can be inflicted by the animal's location, it will
    + the land `L` is used when it's necessary to define the destination land (e.g. in a move action)
    + **returns** a tuple (`err`, `msg`) whereas `err < 0` then `msg` indicates the error, case `err == 0` then the player won

- `/reiniciar?numplayers=N`: restarts a game with N players

- `/ultima_jogada`: returns the last player action, with integer representing: rule, target animal and target land, respectively

- `/movimentos?player=P`: returns a list of valid action (rule, animal, land) that player `P` did

- `/num_movimentos`: returns the number of played action since the start of the game


###### References

[Game API](https://github.com/badsjunior/TheLastTreeAI.git)
