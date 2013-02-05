* 5U4GB pspice rectifier model
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
* 5U4GB maximum ratings:
*
*   PIV     1550V
*   Max in  550V RMS
*   Ia pk   1000mA repetitive  (4600mA transient)
*
*
*             .----- Anode
*             | .--- Cathode
*             | |
.SUBCKT 5U4GB A K
GP  A  K  VALUE={7.55E-4*(PWR(V(A,K),1.5)+PWRS(V(A,K),1.5))/2}
.ENDS 5U4GB

