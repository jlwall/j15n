* 5V3A pspice rectifier model
*
* The following parameters are not modelled:
*
*   (1) Filament and filament warmup time
*   (2) Reverse voltage breakdown
*   (3) Saturation
*   (4) Interelectrode capacitance
*
* Please note that this model is provided "as is" and
* no warranty is provided in respect of its suitability
* for any application.
*
* 5V3A maximum ratings:
*
*   PIV     1550V
*   Max in  550V RMS
*   Iout    550mA DC output current
*   Ia pk   1400mA repetitive  (6600mA transient)
*
*
*            .----- Anode
*            | .--- Cathode
*            | |
.SUBCKT 5V3A A K
GP  A  K  VALUE={1.287E-3*(PWR(V(A,K),1.5)+PWRS(V(A,K),1.5))/2}
.ENDS 5V3A

