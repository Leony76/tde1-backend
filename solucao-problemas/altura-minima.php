<?php

    list($N, $H) = explode(" ", trim(fgets(STDIN))); 
    $alturas = explode(" ", trim(fgets(STDIN))); 

    $countagem = 0;

    foreach ($alturas as $altura) {
        if ($H >= $altura) {
            $countagem++; 
        }
    }

    echo $countagem;
?>
