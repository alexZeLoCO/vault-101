# RSA y DSA
2023-10-18 (YYYY-MM-DD) @ 12:04
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Viesques 
	Sobre #Seguridad 
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

## RSA

$p = 13$
$q = 19$
$e = 31$
$n = p \cdot q$
$\phi = (p - 1) \cdot (q - 1)$
$(d \cdot e) \mod \phi = 1$

Calcular claves pública y privada.

![[Drawing 2023-10-18 12.06.08.excalidraw|1900]]

## DSA

$p = 233$
$q = 29$
$g = 23$
$H = 15$
$X = 7$
$k = 8$
$r = [g^k \mod p] \mod q$
$s = [k^{-1} \cdot (H + X \cdot r)] \mod q$
$(a \cdot b) \mod n = [(a \mod n) \cdot (b \mod n)] \mod n$

![[RSA y DSA 2023-10-18 12.32.30.excalidraw]]
