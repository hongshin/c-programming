# C Programming, Final 2

### Submission
https://forms.gle/5SaWySm7Q5UyVbqSA

### Problem 1

Checkout [findallstr.c](findallstr.c).

Write function ``void findAllString(char * text, char * s1, int * locs)`` that 
finds all indices of ``text`` at which ``s1`` appears as a part (substring).
``findAllString`` stores these locations to ``locs``. If ``text`` does not
contain ``s1``, the first element of ``locs`` must be assigned with ``-1``.

Assume that the length of ``text`` does not exceed 50, and 
``locs`` must be large enough to contain all locations.

### Problem 2

Construct ``mlb_player.c`` that lists up the MLB players of a certain team
based on the data in [mlb_players.txt](mlb_players.txt).

This program must read ``mlb_players.txt`` and store data to a linked list.
Subsequently, this program receives a team name as a string from a user,
and prints all players of the team to the screen.

Each line in ``mlb_players.txt`` has the attributes of each MLB player: first name, last name, team, position, height (inches), weights (lbs), and age. These attributes are separated by a whitespace character.

In ``mlb_player.c``, you must properly define a structure for the linked list.
There is no restriction on how you write ``mlb_players.c``.
