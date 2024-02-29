// Instructions
// The moon moves at about 1 km/s.

// Create a program that estimates how many hours (rounded down) are left before the moon crashes on the city. The distance in kilometers will be passed as a parameter to the program.

// Your program will then have to display a countdown all the way down to 0.  

// Example
// $> node index.js 10000
// 2
// 1
// 0




const distanceToMoon = process.argv[2];
const speedOfMoon = 1;
const hoursToMoon = Math.floor(distanceToMoon / speedOfMoon);

for (let i = hoursToMoon; i >= 0; i--) {
  console.log(i);
}
