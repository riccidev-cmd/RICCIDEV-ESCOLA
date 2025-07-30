<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>
        Exemplo 6
    </title>
</head>
<body>
    <?php
    /*Fazer um programa em PHP que gere 1 número aleatório de 1 até 4 referente
    a categoria de um funcionário , gere outros número aleatório de 10 até 44
    referente a quantidade de horas trabalhadas semanalmente.
    Exiba o relatório 
    Categoria: (por extenso)
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


if ($catfun == 1) {
    $salarioMensal = ($qteH * 8.50) * 4;
    $salarioMensal_formatada_es = number_format($salarioMensal, 2, ',', '.');
} else if ($catfun == 2) {
    $salarioMensal = ($qteH * 20.00) * 4;
    $salarioMensal_formatada_a = number_format($salarioMensal, 2, ',', '.');
} else if ($catfun == 3) {
    $salarioMensal = ($qteH * 22.80) * 4;
    $salarioMensal_formatada_e = number_format($salarioMensal, 2, ',', '.');
} else {
    $salarioMensal = ($qteH * 35.00) * 4;
    $salarioMensal_formatada_d = number_format($salarioMensal, 2, ',', '.');
}



if ($catfun == 1) {
    $categoria_extenso = "Estagiário";
} else if ($catfun == 2) {
    $categoria_extenso = "Atendente";
} else if ($catfun == 3) {
    $categoria_extenso = "Encarregado";
} else {
    $categoria_extenso = "Diretor";
}

echo "<table style='border: 
3pxrgb(46, 5, 255) solid; 
width: 40%;' 
align='center'
border='3'>
<tbody>
    <tr>
       <th colspan='2'>Relatorio Funcionario</th>
    </tr>
    <tr>
        <td>Categoria</td>
        <td>$categoria_extenso</td>
    </tr>
    <tr>
        <td>Horas semanais</td>
        <td>$qteH</td>
    </tr>
    <tr>
        <td>Salário mensal</td>";

    if    ($catfun == 1) {
    echo "<td>R$ $salarioMensal_formatada_es</td>";
} else if ($catfun == 2) {
    echo "<td>R$ $salarioMensal_formatada_a</td>";
} else if ($catfun == 3) {
    echo "<td>R$ $salarioMensal_formatada_e</td>";
} else {
    echo "<td>R$ $salarioMensal_formatada_d</td>";
}
"</tr>
</tbody>
</table>";




    
    
    
    
    
    
    
    
    
    
    
    
    
    ?>
</body>
</html>