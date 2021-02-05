let x = 48;
let y = 3;

let result1 = (35*y-25*x)/5+232;
let result2 = (8*y/x+5*x/y - 43)*6;
let result3 = result2 % result1;

document.write(result1 + "<br>");
document.write(result2 + "<br>");
document.write(result3 + "<br>");
alert(result1);
alert(result2);
alert(result2 + " % " + result1 + " = " +result3);