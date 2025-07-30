<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>
        =Exemplo 2=
    </title>
</head>
<body>

    <?php
    $escola="ETEC Philadelpho";
    $nota=5.67;
    $mes=5;
    $resp=true;
    // true = 1 false = 0

    echo "Valor Literal: $escola<br>";
    echo "Valor Real/Double: $nota<br>";
    echo "Valor Inteiro: $mes<br>";
    echo "Valor Booleano: $resp<br>";

    echo "<br> <br> " .gettype($escola);
    echo "<br> <br> " .gettype($nota);
    echo "<br> <br> " .gettype($mes);
    echo "<br> <br> " .gettype($resp);

    // php nao obriga a declaração de variaveis
    /* Uma variavel existe a partir do momento que um valor é atribuido a ela em php toda
    variavel começa com cifrão ($).
    */


 









    ?>
    
</body>
</html>