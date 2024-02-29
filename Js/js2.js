
if (process.argv.length !== 4) {
    console.log("Please provide the number of cries and the animal.");
  } else {
    const numberOfCries = parseInt(process.argv[2]);
    const animal = process.argv[3].toLowerCase(); 
  
    let sound;
    switch (animal) {
      case "dog":
        sound = "bark";
        break;
      case "cat":
        sound = "meow";
        break;
      case "cow":
        sound = "moo";
        break;
      default:
        console.log("Invalid animal. Please choose 'dog', 'cat', or 'cow'.");
        process.exit(1);
    }
  
    const password = Array(numberOfCries).fill(sound).join(" ") + "!";
  
    console.log(password);
  }
  