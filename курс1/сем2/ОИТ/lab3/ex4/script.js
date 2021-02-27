function printFunc(num, fun, arg, desc) {
    let newNum = num[fun](arg);
    document.write("<tr><td>" + num + "</td><td>" + fun + "("+arg+")" + "</td><td>" + newNum + "</td><td>"+ desc +"</td></tr>");
}

document.write("<table><tr><th>Число</th><th>Метод</th><th>Результат</th><th>Описание метода</th></tr>");

let num = 127.18;
let num2 = 128;
printFunc(num, "toString", 16, "Перевод в строку с основанием");
printFunc(num2, "toString", 16, "Перевод в строку с основанием");
printFunc(num, "toExponential", 2, "Представить в экспоненциальной форме");
printFunc(num2, "toExponential", 2, "Представить в экспоненциальной форме");
printFunc(num, "toFixed", 1, "Представить с фиксированным кол. цифр после запятой");
printFunc(num2, "toFixed", 4, "Представить с фиксированным кол. цифр после запятой");
printFunc(num, "toPrecision", 2, "Представить с задоным кол. значащих цифр");
printFunc(num2, "toPrecision", 1, "Представить с задоным кол. значащих цифр");

document.write("</table>");
