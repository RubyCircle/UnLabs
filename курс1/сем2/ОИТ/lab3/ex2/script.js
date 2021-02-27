let a = 10;
let b = 10;

a = Number(prompt("Число 1"));
b = Number(prompt("Число 2"));

document.write("<table>");
for (let elemA = 1; elemA <= a; elemA++) {
    document.write("<tr>");
    for (let elemB = 1; elemB <= b; elemB++) {
          document.write("<td>" + elemA * elemB + "</td>");
    }
    document.write("</tr>");
}
document.write("</table>");