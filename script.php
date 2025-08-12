<?php
// fgets(STDIN) inputs

$compras = [];

for ($i = 0; $i < 2; $i++) {
    $linha = explode(" ", trim(fgets(STDIN)));
    $codigo = intval($linha[0]);
    $quantidade = intval($linha[1]);
    $valorUnitario = floatval($linha[2]);

    $compras[] = [
        'codigo' => $codigo,
        'quantidade' => $quantidade,
        'valor' => $valorUnitario
    ];
}

$total = 0.0;

foreach ($compras as $compra) {
    $total += $compra['quantidade'] * $compra['valor'];
}

printf("VALOR A PAGAR: R$ %.2f\n", $total);
