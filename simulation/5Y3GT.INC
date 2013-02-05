* 5Y3GT pspice rectifier model
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
* 5Y3GT maximum ratings:
*
*   PIV     1400V
*   Max in  500V RMS
*   Iout    42mA DC output current (per anode)
*   Ia pk   400mA repetitive  (2200mA transient)
*
*
*             .----- Anode
*             | .--- Cathode
*             | |
.SUBCKT 5Y3GT A K
GP  A  K  VALUE={2.69E-4*(PWR(V(A,K),1.5)+PWRS(V(A,K),1.5))/2}
.ENDS 5Y3GT

