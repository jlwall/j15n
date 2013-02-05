* Vacuum tube heater PSpice Model                9/96, Rev. 1.0  (fp)
*
* -------------------------------------------------------------------
*  This model is provided "as is", with no warranty of any kind,
*  either expressed or implied, about the suitability or fitness
*  of this model for any particular purpose.  Use of this model
*  shall be entirely at the user's own risk.
*
*  For a discussion about vacuum tube modeling please refer to:
*  W. Marshall Leach, jr: "SPICE Models for Vacuum-Tube Amplifiers";
*  J. Audio Eng. Soc., Vol 43, No 3, March 1995.
* -------------------------------------------------------------------
*
* This model is valid at the following conditions:
*  - Indirectly heated, oxide coated cathodes only;
*  - Tungsten wire, Tnom=1400..1500K (cathode T=1050K);
*  - Heater warm-up time=11s.
*
* This heater model can be operated either at AC (any waveform), DC
* or any combination thereof, just like a real heater.  VNOM and INOM
* are the nominal operating voltage and current of the heater
* respectively.  If many heaters are connected in parallel, set INOM
* to the sum of all heaters' currents.  These parameters are passed
* to the model in the following way:
*
*  X1  Va  Vb   Heater  params: VNOM=6.3 INOM=4.8  *(4x6L6+4x12AX7A)
*  X2  R1  R2   Heater  params: VNOM=5.0 INOM=1.9  *(1x5AR4/GZ34)
*
*
.SUBCKT Heater f1 f2  params: VNOM=6.3 INOM=300m
Grms  1  0  VALUE={1E-3*(V(f2,f1))*(V(f2,f1))/(VNOM*VNOM)}
Rt    1  0  1k
Ct    1  0  9.94m
Gf   f2 f1  VALUE={V(f2,f1)*1.16*INOM/(VNOM*(PWR(V(1),0.3)+0.16))}
.ENDS Heater
