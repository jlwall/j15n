* 6DJ8 Triode PSpice Model                       9/96, Rev. 1.0  (fp)
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
* 6DJ8/ECC88, 6922/E88CC, 7308;
* at the following conditions:
*  Plate voltage  : 0..300V
*  Grid voltage   : 0..-8V
*  Cathode current: 0..100mA
*
*
* Connections: Plate
*              | Grid
*              | | Cathode
*              | | |
.SUBCKT 6DJ8   P G K
E1  2  0  VALUE={V(P,K)+30.95*V(G,K)}
R1  2  0  1.0K
Gp  P  K  VALUE={34.56E-6*(PWR(V(2),1.5)+PWRS(V(2),1.5))/2}
Cgk G  K  3.1P
Cgp G  P  1.4P
Cpk P  K  0.18P
.ENDS 6DJ8
