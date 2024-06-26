/*
 * parameters.h
 *
 */

#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include <stdio.h>
#include "mt.h"

#define PARAMETER_LENGTH						100
#define PARAMETER_STRING_UNDEFINED				"NONE"

/*
 * Configuration file parameters names
 */
#define PARAMETER_DEVICE						"device"

#define PARAMETER_DEVICE                        "device"
#define PARAMETER_MPI_RANK                      "mpi_rank"
#define PARAMETER_MPI_DEV_AUTO                  "mpi_device_auto"
#define PARAMETER_MPI_DEVICE(i)                 parameter_mpi_device(i)
#define PARAMETER_MPI_DEV_CUR                   "mpi_device_current"
#define PARAMETER_MPI_FIRSTRUN                  "mpi_firstrun_auto"
#define PARAMETER_MPI_DEVPERNODE                "mpi_dpn"

#define PARAMETER_REDIRECT_STDOUT               "stdout"
#define PARAMETER_REDIRECT_STDERR               "stderr"

#define PARAMETER_COORD_FILE_XYZ				"coordinates_xyz"
#define PARAMETER_DCD_FILE_XYZ					"dcd_xyz"
#define PARAMETER_COORD_FILE_ANG				"coordinates_ang"
#define PARAMETER_DCD_FILE_ANG					"dcd_ang"
#define PARAMETER_FORCEFIELD_FILE				"forcefield"
#define PARAMETER_CONDITIONS_FILE				"conditions"
#define PARAMETER_RESTART_XYZ_FILE              "restart_xyz"
#define PARAMETER_RESTART_ANG_FILE              "restart_ang"

#define PARAMETER_NUMSTEPS						"steps"
#define PARAMETER_FIRSTSTEP                     "firststep"
#define PARAMETER_TIMESTEP						"dt"
#define PARAMETER_RUNNUM						"runnum"
#define PARAMETER_MT_STRIDE						"mt_stride"
#define PARAMETER_STRIDE 						"stride"
#define PARAMETER_TEMPERATURE					"Temp"
#define PARAMETER_MICROTUBE_RADIUS				"R_MT"
#define PARAMETER_MONOMER_RADIUS				"r_mon"
#define PARAMETER_RANDOM_SEED					"rseed"

#define PARAMETER_HARMONIC_C					"C"

#define PARAMETER_BENDING_B_PSI					"B_psi"
#define PARAMETER_BENDING_W_PSI					"W_psi"
#define PARAMETER_BENDING_B_FI					"B_fi"
#define PARAMETER_BENDING_W_FI					"W_fi"
#define PARAMETER_BENDING_B_THETA				"B_theta"
#define PARAMETER_BENDING_W_THETA				"W_theta"
#define PARAMETER_BENDING_PSI_0					"psi0"
#define PARAMETER_BENDING_FI_0					"fi0"
#define PARAMETER_BENDING_THETA0_GDP			"theta0_gdp"
#define PARAMETER_BENDING_THETA0_GTP			"theta0_gtp"

#define PARAMETER_LONGITUDINAL_A				"A_long"
#define PARAMETER_LONGITUDINAL_B				"b_long"
#define PARAMETER_LONGITUDINAL_C				"c_long"
#define PARAMETER_LONGITUDINAL_R_0				"r0_long"
#define PARAMETER_LONGITUDINAL_D				"d_long"

#define PARAMETER_LATERAL_A						"A_lat"
#define PARAMETER_LATERAL_B						"b_lat"
#define PARAMETER_LATERAL_C						"c_lat"
#define PARAMETER_LATERAL_R_0					"r0_lat"
#define PARAMETER_LATERAL_D						"d_lat"

#define PARAMETER_XX_A							"A_xx"
#define PARAMETER_XX_B							"b_xx"
#define PARAMETER_XX_C							"c_xx"
#define PARAMETER_XX_D							"d_xx"

#define PARAMETER_XY_A							"A_xy"
#define PARAMETER_XY_B							"b_xy"
#define PARAMETER_XY_C							"c_xy"
#define PARAMETER_XY_D							"d_xy"

#define PARAMETER_AB_A							"A_ab"
#define PARAMETER_AB_B							"b_ab"
#define PARAMETER_AB_C							"c_ab"
#define PARAMETER_AB_D							"d_ab"

#define PARAMETER_BA_A							"A_ba"
#define PARAMETER_BA_B							"b_ba"
#define PARAMETER_BA_C							"c_ba"
#define PARAMETER_BA_D							"d_ba"

#define PARAMETER_AA_A							"A_aa"
#define PARAMETER_AA_B							"b_aa"
#define PARAMETER_AA_C							"c_aa"
#define PARAMETER_AA_D							"d_aa"

#define PARAMETER_BB_A							"A_bb"
#define PARAMETER_BB_B							"b_bb"
#define PARAMETER_BB_C							"c_bb"
#define PARAMETER_BB_D							"d_bb"

#define  H_XX_PSI      "h_xx_psi"
#define  G_XX_PSI      "g_xx_psi"
#define  F_XX_PSI      "f_xx_psi"
#define  E_XX_PSI      "e_xx_psi"
#define  D_XX_PSI      "d_xx_psi"
#define  C_XX_PSI      "c_xx_psi"
#define  B_XX_PSI      "b_xx_psi"
#define  A_XX_PSI      "a_xx_psi"
#define  X0_XX_PSI     "x0_xx_psi"
                   
#define  H_XY_PSI      "h_xy_psi"
#define  G_XY_PSI      "g_xy_psi"
#define  F_XY_PSI      "f_xy_psi"
#define  E_XY_PSI      "e_xy_psi"
#define  D_XY_PSI      "d_xy_psi"
#define  C_XY_PSI      "c_xy_psi"
#define  B_XY_PSI      "b_xy_psi"
#define  A_XY_PSI      "a_xy_psi"
#define  X0_XY_PSI     "x0_xy_psi"
                   
#define  H_XX_PHI      "h_xx_phi"
#define  G_XX_PHI      "g_xx_phi"
#define  F_XX_PHI      "f_xx_phi"
#define  E_XX_PHI      "e_xx_phi"
#define  D_XX_PHI      "d_xx_phi"
#define  C_XX_PHI      "c_xx_phi"
#define  B_XX_PHI      "b_xx_phi"
#define  A_XX_PHI      "a_xx_phi"
#define  X0_XX_PHI     "x0_xx_phi"
                   
#define  H_XX_THETA    "h_xx_theta"
#define  G_XX_THETA    "g_xx_theta"
#define  F_XX_THETA    "f_xx_theta"
#define  E_XX_THETA    "e_xx_theta"
#define  D_XX_THETA    "d_xx_theta"
#define  C_XX_THETA    "c_xx_theta"
#define  B_XX_THETA    "b_xx_theta"
#define  A_XX_THETA    "a_xx_theta"
#define  X0_XX_THETA   "x0_xx_theta"
                   
#define  H_XY_PHI      "h_xy_phi"
#define  G_XY_PHI      "g_xy_phi"
#define  F_XY_PHI      "f_xy_phi"
#define  E_XY_PHI      "e_xy_phi"
#define  D_XY_PHI      "d_xy_phi"
#define  C_XY_PHI      "c_xy_phi"
#define  B_XY_PHI      "b_xy_phi"
#define  A_XY_PHI      "a_xy_phi"
#define  X0_XY_PHI     "x0_xy_phi"
                   
#define  H_XY_THETA    "h_xy_theta"
#define  G_XY_THETA    "g_xy_theta"
#define  F_XY_THETA    "f_xy_theta"
#define  E_XY_THETA    "e_xy_theta"
#define  D_XY_THETA    "d_xy_theta"
#define  C_XY_THETA    "c_xy_theta"
#define  B_XY_THETA    "b_xy_theta"
#define  A_XY_THETA    "a_xy_theta"
#define  X0_XY_THETA   "x0_xy_theta"

#define  A1_theta      "A1_theta"
#define  A2_theta      "A2_theta"
#define  x01_theta     "x01_theta"
#define  x02_theta     "x02_theta"
#define  c1_theta      "c1_theta"
#define  c2_theta      "c2_theta"
#define  A_theta       "A_theta"
#define  x0_theta      "x0_theta"
#define  A_ang         "A_ang"
#define  x0_ang        "x0_ang"

#define  A_DEXP_LAT    "a_dexp_lat"
#define  A_DEXP_LONG   "a_dexp_long"
#define  B_DEXP_LAT    "b_dexp_lat"
#define  B_DEXP_LONG   "b_dexp_long"
#define  R_DEXP_LAT    "r_dexp_lat"
#define  R_DEXP_LONG   "r_dexp_long"
#define  W_DEXP_LAT    "w_dexp_lat"
#define  W_DEXP_LONG   "w_dexp_long"

#define  BARRIER 	   "barrier"
#define  A_BARR_LONG   "a_barr_long"
#define  R_BARR_LONG   "r_barr_long"
#define  W_BARR_LONG   "w_barr_long"
#define  A_BARR_LAT    "a_barr_lat"
#define  R_BARR_LAT    "r_barr_lat"
#define  W_BARR_LAT    "w_barr_lat"

#define  G0_LONG       "g0_long"
#define  G0_LAT        "g0_lat"
#define  K_LONG        "k_long"
#define  K_LAT         "k_lat"

#define  A_LONG       "A_long"
#define  A_LAT        "A_lat"
#define  D_LONG       "D_long"
#define  D_LAT        "D_lat"
#define  SEAM_COEFF   "seam_coeff"

#define  REPULSIVE_WALLS        "repulsive_walls"
#define  REP_H                  "rep_h"
#define  REP_R                  "rep_r"
#define  REP_EPS                "rep_eps"
#define  REP_LEFTBORDER         "rep_leftborder"

#define TUB_LENGTH              "tubule_length"
#define PAR_OUTPUT_ENERGY       "output_energy"
#define PAR_OUTPUT_FORCE        "output_force"
#define PAR_ASSEMBLY            "is_assembly" 

#define ALPHA_GEOMETRY                         "alpha"
#define FREEZE_TEMP                            "freeze_temp"
#define CONC                                   "conc"
#define CONST_CONC                             "is_const_conc"

#define HYDROLYSIS 								"hydrolysis"
#define KHYDRO 									"khydro"

#define PARAMETER_GAMMA_R						"gammaR"
#define PARAMETER_GAMMA_THETA					"gammaTheta"
#define PARAMETER_VISCOSITY						"viscosity"

#define PARAMETER_LJ_ON							"LJ_on"
#define PARAMETER_LJPAIRSCUTOFF					"LJPairsCutoff"
#define PARAMETER_LJPAIRSUPDATEFREQ				"LJPairsUpdateFreq"
#define PARAMETER_LJSIGMA						"LJSigma"
#define PARAMETER_LJSCALE						"LJScale"

#define PARAMETER_FIX							"fix"
#define PARAMETER_ISRESTART                     "is_restart"
#define PARAMETER_RESTARTKEY                    "restartkey" 

#define BDHITEA_ON_STRING "tea_on" // enable/disable TEA
#define BDHITEA_EXACT_STRING "tea_exact" // use Cholesky-based HI treatment; it's not TEA anymore
#define BDHITEA_A_STRING "tea_a" // set hydrodynamic radii of single bead, Angstroms
#define BDHITEA_EPSILONFREQ_STRING "tea_epsilon_freq" // frequncy of updating ersatz coefficients, steps
#define BDHITEA_CAPRICIOUS_STRING "tea_capricious" // whether to abort execution on weird values of HI tensor
#define BDHITEA_UNLISTED_STRING "tea_unlisted" // whether to calculate all-to-all interactions, or just the ones in pairlist
#define BDHITEA_EPSMAX_STRING "tea_epsmax" // Abort simulation if epsilon reaches this value, unitless	


typedef struct {
	bool hdi_on;
	int rseed;
	real Temp;
	real varR;
	real gammaR;
	real varTheta;
	real gammaTheta;
	real viscosity;
    real freeze_temp;
    bool is_assembly;
    bool is_const_conc;
    bool out_energy;
    bool out_force;
    bool tub_length;
    real conc;          //[muM/L]
    real alpha;
	real dt;
	int device;
	long long int steps;
	long long int firststep;
	long long int stride;
	long long int mt_stride;
	int Ntot;
	int Ntr;
	int firstrun;
	real C;	
	real B_psi;	
	real B_fi;	
	real B_theta;	
	real psi_0;	
	real fi_0;	
	real theta0_gtp;	
	real theta0_gdp;
    real A_lat;
    real A_long;
    real D_lat;
    real D_long;
    real seam_coeff;

    bool hydrolysis;
    real khydro;
    long int hydrostep;

    bool is_wall;
    real rep_h;
    real rep_r;
    real rep_eps;
    float zs[PARAMETER_LENGTH];
    real rep_leftborder;

    bool barrier;
    real a_barr_long;
    real r_barr_long;
    real w_barr_long;
    real a_barr_lat;
    real r_barr_lat;
    real w_barr_lat;

	real ljpairscutoff;
	int ljpairsupdatefreq;
	bool lj_on;	
	real ljscale;	
	real ljsigma6;	
	char coordFilename_xyz[PARAMETER_LENGTH], coordFilename_ang[PARAMETER_LENGTH];
	char **dcdFilename_xyz, **dcdFilename_ang;
	int fix;
	char** restart_angFilename;
	char** restart_xyzFilename;
	char restartkey[PARAMETER_LENGTH];
	char ffFilename[PARAMETER_LENGTH];
	char condFilename[PARAMETER_LENGTH];
    bool is_restart;
} Parameters;


void parseParametersFileNAMD(char* filename, Parameters* parameters);
char *parameter_mpi_device(int i);

#endif
