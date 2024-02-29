// Objectives
// Learn basic development concepts through simple exercises
// Learn the basics of TypeScript and NodeJS
// Instructions
// A local village built a tall wall to protect the village from the Great Dragon. The wall needs to be 348 m tall. It was built with square bricks that are each 3 m in height.

// Create a program that takes as argument the current height of the wall and displays how many bricks are missing to finish the wall to the correct height and thus protect the village.

// Based on the number of missing bricks, also display a situational message:

// If the village is missing less than 10 bricks, display: "It's not too bad yet, it shouldn't take too much time to repair the wall."
// If the village is missing between 10 and 39 bricks, display: "Whoever did this was clearly playing some mischievous prank!"
// If the village is missing between 40 and 99 bricks, display: "The wall has been greatly damaged. We must save the village and repair the wall as soon as possible!"
// If the village missing more than 99 bricks, display: "What happened to the wall!? This is catastrophic!"  
// Example
// $> node index.js 20
// The wall is missing 110 bricks.
// What happened to the wall!? This is catastrophic!

// $> node index.js 250
// The wall is missing 33 bricks.
// Whoever did this was clearly playing some mischievous prank!

// $> node index.js 324
// The wall is missing 8 bricks.
// It's not too bad yet, it shouldn't take too much time to repair the wall.


const wallHeight = 348;
const brickHeight = 3;
const nbrOfBricks = wallHeight / brickHeight;
const nbrOfBricksMissing = nbrOfBricks - process.argv[2];
let situationMessage = "";
if (nbrOfBricksMissing > 99) {
    situationMessage = "What happened to the wall!? This is catastrophic!";
    }
else if (nbrOfBricksMissing > 39) {
    situationMessage = "The wall has been greatly damaged. We must save the village and repair the wall as soon as possible!";
    }
else if (nbrOfBricksMissing > 9) {
    situationMessage = "Whoever did this was clearly playing some mischievous prank!";
    }
else {
    situationMessage = "It's not too bad yet, it shouldn't take too much time to repair the wall.";
    }
console.log(`The wall is missing ${nbrOfBricksMissing} bricks.`);
console.log(situationMessage);
