* 5V4GA pspice rectifier model
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
* 5V4GA maximum ratings:
*
*   PIV     1400V
*   Ia pk   525mA repetitive  (3500mA transient)
*
*
*             .----- Anode
*             | .--- Cathode
*             | |
.SUBCKT 5V4GA A K
GP  A  K  VALUE={1.4E-3*(PWR(V(A,K),1.5)+PWRS(V(A,K),1.5))/2}
.ENDS 5V4GA

