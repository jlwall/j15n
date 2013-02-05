* 6V6GTA Beam Power Tube PSpice Model            8/96, Rev. 1.0  (fp)
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
* This model is valid for the following tubes (within max. ratings):
*                   6V6GTA,   6AQ5A/EL90,
*                   7408,     6669.
* --------------+----------------------------
* Plate Dissip. :    14W          12W
* Screen Input  :   2.2W         2.0W
* Plate Voltage :   350V         275V
* Screen Voltage:   315V         275V
*
* at the following conditions:
*  Plate voltage  : 0..500V
*  Screen voltage : 0..450V
*  Grid voltage   : 0..-50V
*  Cathode current: 0..200mA
*
*
* Connections: Plate
*              | Screen Grid
*              | | Control Grid
*              | | | Cathode
*              | | | |
.SUBCKT 6V6GTA P S G K
Esp 2  0  VALUE={V(P,K)+13.49*V(S,K)+130.4*V(G,K)}
E1  3  2  VALUE={5.521E-7*(PWR(V(2),1.5)+PWRS(V(2),1.5))/2}
E2  3  4  VALUE={5.521E-7*PWR(13.49*V(S,K),1.5)*V(P,K)/25}
E3  5  4  VALUE={(1-V(4,2)/ABS(V(4,2)+0.001))/2}
R1  5  0  1.0K
Gk  S  K  VALUE={V(3,2)}
Gp  P  S  VALUE={0.92*(V(3,4)*(1-V(5,4))+V(3,2)*V(5,4))}
Cgk G  K  4.5P
Cgs G  S  4.5P
Cgp G  P  0.7P
Cpk P  K  7.5P
.ENDS 6V6GTA
