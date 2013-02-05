* GL211 Triode PSpice Model                      9/96, Rev. 1.0  (fp)
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
* This model is valid for the following tubes:
* GL211, VT4C;
* at the following conditions:
*  Plate voltage  :  0..2200V (grid negative),
*                   100..700V (grid positive) (1)
*  Grid voltage   : +50..-180V (2)
*  Cathode current: 0..200mA
*
* (1) Plate current decrease and grid current increase at low plate
*     voltage are not modeled.
* (2) Since no data was available, grid current modeling is only 
*     approximate. Adjust Gg if required.
*
*
* Connections: Plate
*              | Grid
*              | | Cathode
*              | | |
.SUBCKT GL211  P G K
E1  2  0  VALUE={V(P,K)+12.11*V(G,K)}
R1  2  0  1.0K
Gp  P  K  VALUE={9.39E-6*(PWR(V(2),1.5)+PWRS(V(2),1.5))/2}
Gg  G  K  VALUE={358E-6*(PWR(V(G,K),1.5)+PWRS(V(G,K),1.5))/2}
Cgk G  K  6.0P
Cgp G  P  14.5P
Cpk P  K  5.5P
.ENDS GL211
