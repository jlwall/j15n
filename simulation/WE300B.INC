* WE300B Triode PSpice Model                     8/96, Rev. 1.0  (fp)
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
* WE300B, STC4300B;
* at the following conditions:
*  Plate voltage  : 0..650V
*  Grid voltage   : 0..-160V
*  Cathode current: 0..200mA
*
*
* Connections: Plate
*              | Grid
*              | | Cathode
*              | | |
.SUBCKT WE300B P G K
E1  2  0  VALUE={V(P,K)+3.87*V(G,K)}
R1  2  0  1.0K
Gp  P  K  VALUE={119.5E-6*(PWR(V(2),1.5)+PWRS(V(2),1.5))/2}
Cgk G  K  9.0P
Cgp G  P  15P
Cpk P  K  4.3P
.ENDS WE300B
