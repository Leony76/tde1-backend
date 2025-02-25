<?php

    $C = intval(fgets(STDIN));  
    $A = intval(fgets(STDIN));  

    $viagens = ceil($A / ($C - 1));

    echo $viagens;

?>
