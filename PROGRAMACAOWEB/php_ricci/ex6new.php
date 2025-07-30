<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exemplo 6 Novo</title>
</head>
<body>
 <?php
    /*Fazer um programa em PHP que gere 1 número aleatório de 1 até 4 referente
    a categoria de um funcionário , gere outros número aleatório de 10 até 44
    referente a quantidade de horas trabalhadas semanalmente.
    Exiba o relatório 
    Categria: (por extenso)
    Horas semanais:
    Sálario mensal:

    Categoria       valorHora        Descrição
    1                 8,50           estagiário
    2                 20,00          atendente
    3                 22,80          encarregado
    4                 35,00          diretor
    */ 

$catfun = rand(1,4);
$qteH = rand(10,44);
$valorHora = array(1 => 8.5, 2 => 20, 3 => 22.80, 4 => 35);
$descricao = array(1 => "Estagiário", 2 => "Atendente", 3 => "Encarregado", 4 => "Diretor");


$salario = ($qteH * $valorHora[$catfun]) * 4;
$salarioFormatado = number_format($salario, 2, ',', '.');

echo "<table style='border: 
3px solid rgb(0, 0, 0); 
width: 40%;' align='center' 
border='3'>
<tbody>
    <tr>
       <th colspan='2'>Relatório Funcionário</th>
    </tr>
    <tr>
        <td>Categoria</td>
        <td>$descricao[$catfun]</td>
    </tr>
    <tr>
        <td>Horas semanais</td>
        <td>$qteH</td>
    </tr>
    <tr>
        <td>Salário mensal</td>
        <td>R$$salarioFormatado</td>
    </tr>
</tbody>
</table>";

?>
    
</body>
</html>