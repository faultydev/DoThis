
const args = process.argv
const fs = require('fs');

// args[2]

// const loc = __dirname + String(args[3])

if (args[2] == "do") {
    
    //
    const file = require(__dirname + String(args[3]))

    file.print.forEach((e, i) => {
        
        console.log(e)

    }); 
}