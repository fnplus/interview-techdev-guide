
const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter the  number: ", a => {
    var n=parseInt(a)
    var length= a.length;
    while(length>1){
        var arr = n.toString(10).replace(/\D/g, '0').split('').map(Number);


    n = arr.reduce(myFunc);
    length=n.toString().length;
    }
    if(n==1)
    console.log("The number is a magic number");
    else
    console.log("The number is not a magic number");
    process.exit();
  });


function myFunc(total, num) {
    return total + num;
}