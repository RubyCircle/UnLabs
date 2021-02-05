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