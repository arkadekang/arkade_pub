/*@@
   @header  $thorn/cctk_Functions.h
   @author  Automatically generated by CreateFunctionBindings.pl
   @desc
            Prototypes for overloaded functions used by all thorns
   @enddesc
  @@*/


#ifndef _CCTK_FUNCTIONALIASES_H_
#define _CCTK_FUNCTIONALIASES_H_ 1

#ifdef CCODE
#ifdef __cplusplus
extern "C" {
#endif
  CCTK_INT CCTK_IsFunctionAliased(const char *function);
#ifdef __cplusplus
}
#endif
#endif

#include "ML_BSSN_Prototypes.h"
#define DECLARE_CCTK_FUNCTIONS DECLARE_ML_BSSN_FUNCTIONS
#endif  /* _CCTK_FUNCTIONALIASES_H_ */
