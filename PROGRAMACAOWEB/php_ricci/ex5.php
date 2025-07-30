<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>
        =Exemplo 5=
    </title>
</head>
<body>
    
    <?php
        /*faça um programa e php que gere um valo para um produto de 50 ate 300 , um valor para
        a quantidade de 10 até 100 . Exiba o valor a quantidade o total , o total dividido em 3 vezes
        , 4 vezes e 5 vezes
        Pesquisar e como se usa o number format e usa no exercicio todos os valores são reias(decimais)
        */
            
        /*echo "<br> <br> Valor do produto: R$ " ,  number_format($valor,2,',','.'); 
          echo "<br> <br> Quantidade: $quantidade";
          echo "<br> <br> Total:" , number_format($total,2,',','.') ;
          echo "<br> <br> 3x: " , number_format($parcela3x,2,',','.') ;
          echo "<br> <br> 4x: " , number_format($parcela4x,2,',','.');
          echo "<br> <br> 5x: " , number_format($parcela5x,2,',','.') ;*/
          

          $valor = rand(50, 300);
          $valor_formatado=number_format($valor,2,',','.');
          
          $quantidade = rand(10, 100);

          
          $total = $valor * $quantidade;
          $total_formatado=number_format($total,2,',','.');
          
          $parcela3x = $total / 3;
          $parcela3x_formatado=number_format($parcela3x,2,',','.');
          $parcela4x = $total / 4;
          $parcela4x_formatado=number_format($parcela4x,2,',','.');
          $parcela5x = $total / 5;
          $parcela5x_formatado=number_format($parcela5x,2,',','.');
      
          
         echo"<table style=
        'border: 3px #000000 solid;
        width: 40%'
        align='center'
        border='3'>
    <tbody>
        <tr>
           <th colspan='2'>Cálculo de Vendas</th>
        </tr>
        <tr>
            <td>Valor do Produto</td>
            <td>$valor_formatado</td>
        </tr>
        <tr>
            <td>Quantidade</td>
            <td>$quantidade</td>
        </tr>
        <tr>
            <td>Total:</td>
            <td>$total_formatado</td>
        </tr>
        <tr>
            <td>3x:</td>
            <td>$parcela3x_formatado</td>
        </tr>
        <tr>
            <td>4x:</td>
            <td>$parcela4x_formatado</td>
        </tr>
        <tr>
            <td>5x:</td>
            <td>$parcela5x_formatado</td>
        </tr>
    </tbody>
</table>"
 
          ?>
          
</body>
</html>