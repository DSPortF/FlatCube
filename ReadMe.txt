FlatCube
========

This is a simple puzzle game I wrote back in 1997. It's a bit like a Rubik's Cube
but in 2D instead of 3D. The goal is to move the tiles around until the colours are
aligned.

There is no "win" condition; you just keep playing until you get bored.

You can click the up, down, left and right arrows to move the columns and rows.
Alternatively there is a keyboard interface: use the cursor keys to move the cursor
around, and add the Ctrl key to move the column or row while keeping the cursor in place.

Possible future improvements:
- Add a "win" condition
- Add a map to show the original layout
- Add scoring so the player can try to beat their previous score
- Add a timer to see how long it takes to solve the puzzle

Things I'd do differently now:
- Use a more suitable framework than "document/view". It doesn't fit this game well.
- Don't use magic numbers. If we wanted to change the layout to a 3x4 grid of 5x5 squares it wouldn't be easy.
