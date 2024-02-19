<?php

    $dbHost = 'Localhost';
    $dbUsername = 'Proprietario';
    $dbPassword = 'Crectas@103';
    $dbName = 'GarantiaColchoes';

    $conexao = new mysqli($dbHost, $dbUsername,$dbPassword,$dbName);

    if ($conexao->connect_errno){
        echo "Erro";
    } else {
        echo "Conexão efetuada com sucesso";
    }

?>