const pi = 3.14;
let a;
let b;

a = Number(prompt("Число 1"));
b = Number(prompt("Число 2"));

document.write("<table>");
do {
    a+=0.3;
    document.write("<tr><td>" + a + "</td><td>" +pi*a*a + "</td><td>"+2*pi*a+"</td></tr>");
} while (a < b);
document.write("</table>");