/*@@
   @header  PUGHInterp_Prototypes.h
   @author  Automatically generated by CreateFunctionBindings.pl
   @desc
            Prototypes for overloaded functions used by this thorn
   @enddesc
  @@*/


#ifndef _PUGHINTERP_PROTOTYPES_H_
#define _PUGHINTERP_PROTOTYPES_H_  1

#ifdef CCODE
#ifdef __cplusplus
extern "C" {
#endif

CCTK_INT DriverInterpolate(const CCTK_POINTER_TO_CONST cctkGH ,
 const CCTK_INT N_dims ,
 const CCTK_INT local_interp_handle ,
 const CCTK_INT param_table_handle ,
 const CCTK_INT coord_system_handle ,
 const CCTK_INT N_interp_points ,
 const CCTK_INT interp_coords_type ,
 const CCTK_POINTER_TO_CONST* interp_coords ,
 const CCTK_INT N_input_arrays ,
 const CCTK_INT* input_array_indices ,
 const CCTK_INT N_output_arrays ,
 const CCTK_INT* output_array_types ,
 const CCTK_POINTER* output_arrays);
CCTK_INT PUGHInterp_DriverInterpolate(const CCTK_POINTER_TO_CONST cctkGH ,
 const CCTK_INT N_dims ,
 const CCTK_INT local_interp_handle ,
 const CCTK_INT param_table_handle ,
 const CCTK_INT coord_system_handle ,
 const CCTK_INT N_interp_points ,
 const CCTK_INT interp_coords_type ,
 const CCTK_POINTER_TO_CONST* interp_coords ,
 const CCTK_INT N_input_arrays ,
 const CCTK_INT* input_array_indices ,
 const CCTK_INT N_output_arrays ,
 const CCTK_INT* output_array_types ,
 const CCTK_POINTER* output_arrays);

CCTK_INT SymmetryInterpolate(const CCTK_POINTER_TO_CONST cctkGH ,
 const CCTK_INT N_dims ,
 const CCTK_INT local_interp_handle ,
 const CCTK_INT param_table_handle ,
 const CCTK_INT coord_system_handle ,
 const CCTK_INT N_interp_points ,
 const CCTK_INT interp_coords_type ,
 const CCTK_POINTER_TO_CONST* interp_coords ,
 const CCTK_INT N_input_arrays ,
 const CCTK_INT* input_array_indices ,
 const CCTK_INT N_output_arrays ,
 const CCTK_INT* output_array_types ,
 const CCTK_POINTER* output_arrays);

#ifdef __cplusplus
}
#endif
#endif /* CCODE */

#ifdef FCODE
#ifdef F90CODE
#define DECLARE_PUGHINTERP_FUNCTIONS _DECLARE_CCTK_FUNCTIONS \
  interface &&\
     CCTK_INT function DriverInterpolate (cctkGH, N_dims, local_interp_handle, param_table_handle, coord_system_handle, N_interp_points, interp_coords_type, interp_coords, N_input_arrays, input_array_indices, N_output_arrays, output_array_types, output_arrays) &&\
       implicit none &&\
       CCTK_POINTER_TO_CONST cctkGH &&\
       CCTK_INT N_dims &&\
       CCTK_INT local_interp_handle &&\
       CCTK_INT param_table_handle &&\
       CCTK_INT coord_system_handle &&\
       CCTK_INT N_interp_points &&\
       CCTK_INT interp_coords_type &&\
       CCTK_POINTER_TO_CONST interp_coords(*) &&\
       CCTK_INT N_input_arrays &&\
       CCTK_INT input_array_indices(*) &&\
       CCTK_INT N_output_arrays &&\
       CCTK_INT output_array_types(*) &&\
       CCTK_POINTER output_arrays(*) &&\
     end function DriverInterpolate &&\
  end interface &&\
  interface &&\
     CCTK_INT function SymmetryInterpolate (cctkGH, N_dims, local_interp_handle, param_table_handle, coord_system_handle, N_interp_points, interp_coords_type, interp_coords, N_input_arrays, input_array_indices, N_output_arrays, output_array_types, output_arrays) &&\
       implicit none &&\
       CCTK_POINTER_TO_CONST cctkGH &&\
       CCTK_INT N_dims &&\
       CCTK_INT local_interp_handle &&\
       CCTK_INT param_table_handle &&\
       CCTK_INT coord_system_handle &&\
       CCTK_INT N_interp_points &&\
       CCTK_INT interp_coords_type &&\
       CCTK_POINTER_TO_CONST interp_coords(*) &&\
       CCTK_INT N_input_arrays &&\
       CCTK_INT input_array_indices(*) &&\
       CCTK_INT N_output_arrays &&\
       CCTK_INT output_array_types(*) &&\
       CCTK_POINTER output_arrays(*) &&\
     end function SymmetryInterpolate &&\
  end interface &&\

#else /* ! F90CODE */

#define DECLARE_PUGHINTERP_FUNCTIONS _DECLARE_CCTK_FUNCTIONS \
  external DriverInterpolate &&\
  CCTK_INT DriverInterpolate &&\
  external SymmetryInterpolate &&\
  CCTK_INT SymmetryInterpolate &&\

#endif /* ! F90CODE */
#endif /* FCODE */

#endif
