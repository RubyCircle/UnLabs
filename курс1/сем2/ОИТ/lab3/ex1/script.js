function select(number){
    switch (number) {
        case 1:
            window.location.href = "..\\..\\lab1\\ex1\\index.html"
            break;
        case 2:
            window.location.href = "..\\..\\lab1\\ex2\\index.html"
            break;
        case 3:
            window.location.href = "..\\..\\lab1\\ex3\\index.html"
            break;
        case 4:
            window.location.href = "..\\..\\lab1\\ex4\\index.html"
            break;
        case 5:
            window.location.href = "..\\..\\lab1\\ex5\\index.html"
            break;
        case 6:
            window.location.href = "..\\..\\lab1\\ex6\\index.html"
            break;
        case 7:
            window.location.href = "..\\..\\lab1\\ex7\\index.html"
            break;
    
        default:
            break;
    }
}
function ex1() {
    // вывести приветствие в окне
    alert("Вас приветствует учебный центр");

    // вывести сообщение + имя
    let name = prompt("Введите имя","Лёха");
    alert("Добро пожаловать на наши курсы, " + name);

    // вывести сообщение с альтернативными ответами
    let state = confirm("Хотите стать Web-дизайнером?");
    if(state)
    {
        alert("Учите стили CSS и JavaScript!");
    }
    else
    {
        alert("Упускаете время!");
    }
}
function ex2(){
    document.write("10 + 5 = "          + (10 + 5)      + "<br>");
    document.write("\"10\" + \"5\" = "  + ("10" + "5")  + "<br>");
    document.write("22 + \"5\" = "      + (22 + "5")    + "<br>");
    document.write("\"22\" + 5 = "      + ("22" + 5)    + "<br>");
    alert("Результатом сложения строки и числа всегда будет СТРОКА")
}
function ex3(){
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
}
function ex4() {
    let num = prompt("Введите любое число");

    if((num < 20 || num > 40) && num != 15 && (num % 5 == 0))
    {
        alert("Правильное значение");
    }
    else
    {
        alert("Не правильное значение");
    }

    let num2 = prompt("Введите любое число");

    if(num2 % 2 == 0)
    {
        alert("Без остатка делится на 2");
    }
    if(num2 % 3 == 0)
    {
        alert("Без остатка делится на 3");
    }
    if(num2 % 5 == 0)
    {
        alert("Без остатка делится на 5");
    }
    if(num2 % 5 == 0)
    {
        alert("Без остатка делится на 5");
    }
}
function ex5() {
    let A = prompt("Введите любое число A");
    let B = prompt("Введите любое число B");

    if(A > B)
    {
        alert("A больше B");
    }
    else if(A < B)
    {
        alert("A меньше B");
    }
    else
    {
        alert("A равно B");
    }
    A % B == 0 ? alert("A кратно B") : alert("A не кратно B")
}
function ex6() {
    let day = new Date().getDay();
    switch (day) {
        case 7:
            alert("ВС");
            break;
        case 1:
            alert("ПН");
            break;
        case 2:
            alert("ВТ");
            break;
        case 3:
            alert("СР");
            break;
        case 4:
            alert("ЧТ");
            break;
        case 5:
            alert("ПТ");
            break;
        case 6:
            alert("СБ");
            break;
    } 
}
function ex7() {
    try {
        alert("begin");
        MyVar
    
        // ...
        alert("end");
    } catch (error) {
        alert(error);
    }
    // ...
    alert("success");
}