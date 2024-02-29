// index.js

if (process.argv.length !== 4) {
    console.log("Please provide a number and a message.");
  } else {
    const countdownStart = parseInt(process.argv[2]);
    const message = process.argv[3];
  
    for (let i = countdownStart; i >= 1; i--) {
      console.log(i + (i <= 10 ? "..." : ""));
    }
  
    const countdownInMinutes = Math.floor(countdownStart / 60);
  
    if (countdownInMinutes > 0) {
      console.log(countdownInMinutes + " minute(s)...");
    }
  
    console.log(message.toUpperCase() + "!");
  }
  