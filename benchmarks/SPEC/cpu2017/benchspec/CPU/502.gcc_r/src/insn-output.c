/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_0[] = {
  "test{b}\t%0, %0",
  "cmp{b}\t{%1, %0|%0, %1}",
};

static const char * const output_1[] = {
  "test{w}\t%0, %0",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_2[] = {
  "test{l}\t%0, %0",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{q}\t%0, %0",
  "cmp{q}\t{%1, %0|%0, %1}",
};

static const char *
output_16 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1158 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_18 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1205 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_20 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1239 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_21 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1239 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_24 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1274 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 0, 1);
}

static const char *
output_26 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1324 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1324 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1377 "../../gcc/config/i386/i386.md" */
{
#ifdef HAVE_AS_IX86_SAHF
  return "sahf";
#else
  return ASM_BYTE "0x9e";
#endif
}
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1398 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1426 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1449 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1468 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_36 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1496 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1519 "../../gcc/config/i386/i386.md" */
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_43 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1613 "../../gcc/config/i386/i386.md" */
{
  operands[1] = constm1_rtx;
  return "or{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_44 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1627 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      if (get_attr_mode (insn) == MODE_TI)
        return "%vpxor\t%0, %d0";
      return "%vxorps\t%0, %d0";

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_SI:
          return "%vmovd\t{%1, %0|%0, %1}";
	case MODE_SF:
          return "%vmovss\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      if (get_attr_mode (insn) == MODE_DI)
	return "movq\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{l}\t{%1, %0|%0, %1}";

    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      return "mov{l}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_47 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1772 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_53 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1948 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]));
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_60 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2091 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_62 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2196 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_66[] = {
  "#",
  "#",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovdqa\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char *
output_67 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2635 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "vxorps\t%0, %0, %0";
    case 1:
    case 2:
      if (misaligned_operand (operands[0], OImode)
	  || misaligned_operand (operands[1], OImode))
	return "vmovdqu\t{%1, %0|%0, %1}";
      else
	return "vmovdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_68 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2674 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vxorps\t%0, %d0";
      else
	return "%vpxor\t%0, %d0";
    case 1:
    case 2:
      /* TDmode values are passed as TImode on the stack.  Moving them
	 to stack may result in unaligned memory access.  */
      if (misaligned_operand (operands[0], TImode)
	  || misaligned_operand (operands[1], TImode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	 else
	   return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	 else
	   return "%vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2809 "../../gcc/config/i386/i386.md" */
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{l}\t%1";
}
}

static const char *
output_70 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2867 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "mov{l}\t{%1, %0|%0, %1}";
    case 5:
      if (get_attr_mode (insn) == MODE_TI)
	return "%vpxor\t%0, %d0";
      else
	return "%vxorps\t%0, %d0";
    case 6:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vmovaps\t{%1, %0|%0, %1}";
      else
	return "%vmovss\t{%1, %d0|%d0, %1}";
    case 7:
      if (TARGET_AVX)
	return REG_P (operands[1]) ? "vmovss\t{%1, %0, %0|%0, %0, %1}"
				   : "vmovss\t{%1, %0|%0, %1}";
      else
	return "movss\t{%1, %0|%0, %1}";
    case 8:
      return "%vmovss\t{%1, %0|%0, %1}";

    case 9: case 10: case 14: case 15:
      return "movd\t{%1, %0|%0, %1}";
    case 12: case 13:
      return "%vmovd\t{%1, %0|%0, %1}";

    case 11:
      return "movq\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_71 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2957 "../../gcc/config/i386/i386.md" */
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_72 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2981 "../../gcc/config/i386/i386.md" */
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
#if defined(SPEC)
  return "";
#endif
}
}

static const char *
output_73 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2993 "../../gcc/config/i386/i386.md" */
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
#if defined(SPEC)
  return "";
#endif
}
}

static const char *
output_74 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3040 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";
    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "%vxorps\t%0, %d0";
	case MODE_V2DF:
	  return "%vxorpd\t%0, %d0";
	case MODE_TI:
	  return "%vpxor\t%0, %d0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "%vmovapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  if (TARGET_AVX)
	    {
	      if (REG_P (operands[0]) && REG_P (operands[1]))
		return "vmovsd\t{%1, %0, %0|%0, %0, %1}";
	      else
		return "vmovsd\t{%1, %0|%0, %1}";
	    }
	  else
	    return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  if (TARGET_AVX)
	    {
	      if (REG_P (operands[0]))
		return "vmovlpd\t{%1, %0, %0|%0, %0, %1}";
	      else
		return "vmovlpd\t{%1, %0|%0, %1}";
	    }
	  else
	    return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  if (TARGET_AVX)
	    {
	      if (REG_P (operands[0]))
		return "vmovlps\t{%1, %0, %0|%0, %0, %1}";
	      else
		return "vmovlps\t{%1, %0|%0, %1}";
	    }
	  else
	    return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_75 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3329 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "xorps\t%0, %0";
	case MODE_V2DF:
	  return "xorpd\t%0, %0";
	case MODE_TI:
	  return "pxor\t%0, %0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_76 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3458 "../../gcc/config/i386/i386.md" */
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_77 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3484 "../../gcc/config/i386/i386.md" */
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
#if defined(SPEC)
  return "";
#endif
}
}

static const char *
output_78 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3496 "../../gcc/config/i386/i386.md" */
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
#if defined(SPEC)
  return "";
#endif
}
}

static const char *
output_79 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3532 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_80 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3559 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";

    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_81 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3593 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vmovaps\t{%1, %0|%0, %1}";
      else
	return "%vmovdqa\t{%1, %0|%0, %1}";
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vxorps\t%0, %d0";
      else
	return "%vpxor\t%0, %d0";
    case 3:
    case 4:
	return "#";
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_82 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3637 "../../gcc/config/i386/i386.md" */
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
#if defined(SPEC)
  return "";
#endif
}
}

static const char *
output_83 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3746 "../../gcc/config/i386/i386.md" */
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char * const output_92[] = {
  "#",
  "#",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char *
output_94 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4196 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_95 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4249 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_97 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4400 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return "%vcvtss2sd\t{%1, %d0|%d0, %1}";

    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4431 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_100 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4460 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_101 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4460 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_102 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4550 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_104 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4582 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_105 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4592 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";

    default:
      return "#";
    }
}
}

static const char *
output_106 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4615 "../../gcc/config/i386/i386.md" */
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    default:
      return "#";
    }
}
}

static const char *
output_107 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4636 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_108 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4684 "../../gcc/config/i386/i386.md" */
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_109 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4698 "../../gcc/config/i386/i386.md" */
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4711 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_111 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4711 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_112 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4720 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4720 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4980 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4980 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4980 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5066 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5123 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5123 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_155[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_156[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_159[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_160[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_161[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_162[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_173[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_174[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_175[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_176[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_177[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_178[] = {
  "fild%Z1\t%1",
  "#",
};

static const char *
output_197 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5991 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      /* Use add as much as possible to replace lea for AGU optimization. */
      if (which_alternative == 2 && TARGET_OPT_AGU)
        return "add{l}\t{%1, %0|%0, %1}";
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4,%eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (SImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_198 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5991 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      /* Use add as much as possible to replace lea for AGU optimization. */
      if (which_alternative == 2 && TARGET_OPT_AGU)
        return "add{q}\t{%1, %0|%0, %1}";
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4,%eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (DImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6120 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subw $4,%ax' rather than `addw $-4,%ax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6168 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subw $4,%ax' rather than `addw $-4,%ax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6216 "../../gcc/config/i386/i386.md" */
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4,%al'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6268 "../../gcc/config/i386/i386.md" */
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4,%al'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6323 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[1] == const1_rtx)
	return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4,%al'.  */
      if (CONST_INT_P (operands[1])
	  && INTVAL (operands[1]) < 0)
	{
	  operands[1] = GEN_INT (-INTVAL (operands[1]));
	  return "sub{b}\t{%1, %0|%0, %1}";
	}
      return "add{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6370 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? In DImode, we ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4,%eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (SImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6370 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? In DImode, we ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4,%eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (DImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6475 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subw $4,%ax' rather than `addw $-4,%ax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6522 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
		          && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4,%al'.  */
      if (CONST_INT_P (operands[2])
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6564 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? In DImode, we ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (SImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6564 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? In DImode, we ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (DImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6666 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subw $4,%ax' rather than `addw $-4,%ax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6711 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4,%al'.  */
      if (CONST_INT_P (operands[2])
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6813 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4,%eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{l}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6858 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{w}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subw $4,%ax' rather than `addw $-4,%ax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{w}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6903 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx
	  || (CONST_INT_P (operands[2])
	      && INTVAL (operands[2]) == 255))
        return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{b}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (INTVAL (operands[2]) < 0)
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "add{b}\t{%2, %0|%0, %2}";
        }
      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6946 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4,%eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (SImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6946 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4,%eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
	  /* Avoid overflows.  */
	  && (DImode != DImode
	      || ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6997 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subw $4,%ax' rather than `addw $-4,%ax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 7043 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4,%al'.  */
      if (CONST_INT_P (operands[2])
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 7123 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
			  && INTVAL (operands[2]) == 255));
          return "dec{b}\t%h0";
	}

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_262[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_263[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 8168 "../../gcc/config/i386/i386.md" */
{
  if (which_alternative == 3)
    {
      if (CONST_INT_P (operands[1]) && INTVAL (operands[1]) < 0)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 8482 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	gcc_assert (CONST_INT_P (operands[2]));
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else
	  {
	    gcc_assert (INTVAL (operands[2]) == 0xffff);
	    mode = HImode;
	  }

	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bl|x}\t{%1, %0|%0, %1}";
	else
	  return "movz{wl|x}\t{%1, %0|%0, %1}";
      }

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 8539 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (CONST_INT_P (operands[2]));
      gcc_assert (INTVAL (operands[2]) == 0xff);
      return "movz{bl|x}\t{%b1, %k0|%k0, %b1}";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_291[] = {
  "and{b}\t{%2, %0|%0, %2}",
  "and{b}\t{%2, %0|%0, %2}",
  "and{l}\t{%k2, %k0|%k0, %k2}",
};

static const char *
output_293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 8658 "../../gcc/config/i386/i386.md" */
{
  if (which_alternative == 2)
    {
      if (CONST_INT_P (operands[2]) && INTVAL (operands[2]) < 0)
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_308[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_309[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_376[] = {
  "not{b}\t%0",
  "not{l}\t%k0",
};

static const char *
output_383 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10055 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{l}\t%0, %0";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_384 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10224 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_385 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10274 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_386 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10375 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_387 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10422 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_388 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10476 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_389 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10526 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_390 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10578 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t%k0, %k0";
      else
        return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10643 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t%k0, %k0";
      else
        return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10715 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 10765 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_396[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char * const output_398[] = {
  "sar{l}\t{%2, %0|%0, %2}",
  "sar{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_404[] = {
  "sar{w}\t{%2, %0|%0, %2}",
  "sar{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_411[] = {
  "sar{b}\t{%2, %0|%0, %2}",
  "sar{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_412[] = {
  "sar{b}\t{%1, %0|%0, %1}",
  "sar{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_419[] = {
  "shr{l}\t{%2, %0|%0, %2}",
  "shr{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_425[] = {
  "shr{w}\t{%2, %0|%0, %2}",
  "shr{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_432[] = {
  "shr{b}\t{%2, %0|%0, %2}",
  "shr{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_433[] = {
  "shr{b}\t{%1, %0|%0, %1}",
  "shr{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_440[] = {
  "rol{l}\t{%2, %0|%0, %2}",
  "rol{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_442[] = {
  "rol{w}\t{%2, %0|%0, %2}",
  "rol{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_445[] = {
  "rol{b}\t{%1, %0|%0, %1}",
  "rol{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_446[] = {
  "rol{b}\t{%2, %0|%0, %2}",
  "rol{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_449[] = {
  "ror{l}\t{%2, %0|%0, %2}",
  "ror{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_451[] = {
  "ror{w}\t{%2, %0|%0, %2}",
  "ror{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_454[] = {
  "ror{b}\t{%2, %0|%0, %2}",
  "ror{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_455[] = {
  "ror{b}\t{%1, %0|%0, %1}",
  "ror{b}\t{%b1, %0|%0, %b1}",
};

static const char *
output_481 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 13521 "../../gcc/config/i386/i386.md" */
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_482 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 13536 "../../gcc/config/i386/i386.md" */
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char * const output_483[] = {
  "jmp\t%P0",
  "jmp\t%A0",
};

static const char *
output_484 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 13579 "../../gcc/config/i386/i386.md" */
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_485 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 13591 "../../gcc/config/i386/i386.md" */
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char * const output_486[] = {
  "jmp\t%P0",
  "jmp\t%A0",
};

static const char *
output_496 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 13864 "../../gcc/config/i386/i386.md" */
{
#ifdef ASM_OUTPUT_MAX_SKIP_PAD
  ASM_OUTPUT_MAX_SKIP_PAD (asm_out_file, 4, (int)INTVAL (operands[0]));
#else
  /* It is tempting to use ASM_OUTPUT_ALIGN here, but we don't want to do that.
     The align insn is used to avoid 3 jump instructions in the row to improve
     branch prediction and the benefits hardly outweigh the cost of extra 8
     nops on the average inserted by full alignment pseudo operation.  */
#endif
  return "";
}
}

static const char *
output_497 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 13887 "../../gcc/config/i386/i386.md" */
{ return output_set_got (operands[0], NULL_RTX); }
}

static const char *
output_498 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 13897 "../../gcc/config/i386/i386.md" */
{ return output_set_got (operands[0], operands[1]); }
}

static const char *
output_506 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14144 "../../gcc/config/i386/i386.md" */
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_507 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14144 "../../gcc/config/i386/i386.md" */
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_508 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14164 "../../gcc/config/i386/i386.md" */
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_509 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14164 "../../gcc/config/i386/i386.md" */
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_510 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14164 "../../gcc/config/i386/i386.md" */
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{q}\t{%1, %0|%0, %1}";
#endif
}
}

static const char * const output_511[] = {
  "bswap\t%0",
  "movbe\t{%1, %0|%0, %1}",
  "movbe\t{%1, %0|%0, %1}",
};

static const char * const output_513[] = {
  "xchg{b}\t{%h0, %b0|%b0, %h0}",
  "rol{w}\t{$8, %0|%0, 8}",
};

static const char *
output_529 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14840 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_530 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14840 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_531 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14860 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14860 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14879 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14879 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14895 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14895 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14910 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14910 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14925 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14925 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14952 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14952 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14988 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 14988 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15006 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15006 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15026 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15026 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15046 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_551 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15046 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15046 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15046 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15066 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15066 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15066 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15066 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15086 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_559 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15104 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15123 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15140 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15154 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15171 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15171 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15189 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15189 "../../gcc/config/i386/i386.md" */
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15207 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15207 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15224 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15224 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15242 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15242 "../../gcc/config/i386/i386.md" */
 return output_387_binary_op (insn, operands);
}

static const char *
output_573 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15304 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_574 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 15304 "../../gcc/config/i386/i386.md" */
 return output_387_reg_move (insn, operands);
}

static const char *
output_613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 16624 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 16685 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 16685 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 16879 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 16938 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 16938 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_637 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 17141 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_639 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 17200 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_640 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 17200 "../../gcc/config/i386/i386.md" */
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_669[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_670[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_672[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_673[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
};

static const char * const output_674[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char *
output_693 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 18755 "../../gcc/config/i386/i386.md" */
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{l}\t{%2, %0|%0, %2}";
	}
      return "add{l}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_695 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 20064 "../../gcc/config/i386/i386.md" */
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_696 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 20080 "../../gcc/config/i386/i386.md" */
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char * const output_697[] = {
  "jmp\t%P1",
  "jmp\t%A1",
};

static const char *
output_698 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 20105 "../../gcc/config/i386/i386.md" */
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_699 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 20157 "../../gcc/config/i386/i386.md" */
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char * const output_700[] = {
  "jmp\t%P1",
  "jmp\t%A1",
};

static const char *
output_701 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 20238 "../../gcc/config/i386/i386.md" */
{ return ASM_SHORT "0x0b0f"; }
}

static const char *
output_702 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 20338 "../../gcc/config/i386/i386.md" */
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (locality >= 0 && locality <= 3);

  return patterns[locality];
}
}

static const char *
output_703 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 20378 "../../gcc/config/i386/i386.md" */
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char * const output_718[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_719[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_720[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_721[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_722[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_723[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_724[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_725[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_726[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vxorps\t%0, %0, %0",
  "vmovaps\t{%1, %0|%0, %1}",
  "vmovlps\t{%1, %0, %0|%0, %0, %1}",
  "vmovlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_727[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_730[] = {
  "pfsub\t{%2, %0|%0, %2}",
  "pfsubr\t{%1, %0|%0, %1}",
};

static const char * const output_753[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_755[] = {
  "punpckhdq\t%0, %0",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
  "#",
};

static const char *
output_817 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1251 "../../gcc/config/i386/mmx.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1298 "../../gcc/config/i386/mmx.md" */
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_823[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_825[] = {
  "punpckhdq\t%0, %0",
  "punpckhdq\t%0, %0",
  "pshufd\t{$85, %1, %0|%0, %1, 85}",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
};

static const char *
output_826 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 1543 "../../gcc/config/i386/mmx.md" */
{
  /* These two instructions have the same operation, but their encoding
     is different.  Prefer the one that is de facto standard.  */
  if (TARGET_SSE || TARGET_3DNOW_A)
    return "pavgb\t{%2, %0|%0, %2}";
  else
    return "pavgusb\t{%2, %0|%0, %2}";
}
}

static const char *
output_833 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_834 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_835 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_836 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_837 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_838 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_839 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_840 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_841 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_842 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_843 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_844 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_845 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 183 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_846 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 227 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_847 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 227 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_848 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 227 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_849 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 227 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_850 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 227 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_851 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 227 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_852 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 227 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1157 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2895 "../../gcc/config/i386/sse.md" */
 return TARGET_AVX ? "vcvtpd2dq{x}\t{%1, %0|%0, %1}"
		       : "cvtpd2dq\t{%1, %0|%0, %1}";
}

static const char *
output_1159 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 2927 "../../gcc/config/i386/sse.md" */
 return TARGET_AVX ? "vcvttpd2dq{x}\t{%1, %0|%0, %1}"
		       : "cvttpd2dq\t{%1, %0|%0, %1}";
}

static const char *
output_1165 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3019 "../../gcc/config/i386/sse.md" */
 return TARGET_AVX ? "vcvtpd2ps{x}\t{%1, %0|%0, %1}"
		       : "cvtpd2ps\t{%1, %0|%0, %1}";
}

static const char * const output_1168[] = {
  "vmovhlps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%H2, %1, %0|%0, %1, %H2}",
  "vmovhps\t{%2, %0|%0, %2}",
};

static const char * const output_1169[] = {
  "movhlps\t{%2, %0|%0, %2}",
  "movlps\t{%H2, %0|%0, %H2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1170[] = {
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1171[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char *
output_1182 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3573 "../../gcc/config/i386/sse.md" */
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 8) << 4;
  mask |= (INTVAL (operands[6]) - 8) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1183 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3615 "../../gcc/config/i386/sse.md" */
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1184 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3615 "../../gcc/config/i386/sse.md" */
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1185 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3641 "../../gcc/config/i386/sse.md" */
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1186 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 3641 "../../gcc/config/i386/sse.md" */
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1187[] = {
  "%vmovhps\t{%1, %0|%0, %1}",
  "%vmovhlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%H1, %d0|%d0, %H1}",
};

static const char * const output_1188[] = {
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1189[] = {
  "movhps\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1190[] = {
  "vmovlps\t{%1, %0|%0, %1}",
  "vmovaps\t{%1, %0|%0, %1}",
  "vmovlps\t{%1, %0, %0|%0, %0, %1}",
};

static const char * const output_1191[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1192[] = {
  "shufps\t{$0xe4, %1, %2, %0|%0, %2, %1, 0xe4}",
  "vmovlps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%2, %0|%0, %2}",
};

static const char * const output_1193[] = {
  "shufps\t{$0xe4, %1, %0|%0, %1, 0xe4}",
  "movlps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %0|%0, %2}",
};

static const char * const output_1196[] = {
  "vshufps\t{$0, %1, %1, %0|%0, %1, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
};

static const char * const output_1198[] = {
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
  "vinsertps\t{$0x10, %2, %1, %0|%0, %1, %2, 0x10}",
  "vmovss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1199[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "insertps\t{$0x10, %2, %0|%0, %2, 0x10}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1200[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1201[] = {
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1202[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1203[] = {
  "vinsertps\t{$0xe, %2, %2, %0|%0, %2, %2, 0xe}",
  "vmovss\t{%2, %0|%0, %2}",
  "vmovd\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
};

static const char * const output_1204[] = {
  "vinsertps\t{$0xe, %2, %2, %0|%0, %2, %2, 0xe}",
  "vmovd\t{%2, %0|%0, %2}",
  "vmovd\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
};

static const char * const output_1205[] = {
  "insertps\t{$0xe, %2, %0|%0, %2, 0xe}",
  "movss\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "#",
};

static const char * const output_1206[] = {
  "insertps\t{$0xe, %2, %0|%0, %2, 0xe}",
  "movd\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "#",
};

static const char * const output_1207[] = {
  "movss\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "#",
};

static const char * const output_1208[] = {
  "movd\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "#",
};

static const char * const output_1209[] = {
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "#",
};

static const char * const output_1210[] = {
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "#",
};

static const char *
output_1211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4014 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4032 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  return "insertps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1231[] = {
  "vunpckhpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovddup\t{%H1, %0|%0, %H1}",
  "vmovlpd\t{%H1, %2, %0|%0, %2, %H1}",
  "vmovhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1232[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "movddup\t{%H1, %0|%0, %H1}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "movhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1233[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "movhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1234[] = {
  "vmovddup\t{%1, %0|%0, %1}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1235[] = {
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovddup\t{%1, %0|%0, %1}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovlpd\t{%2, %H0|%H0, %2}",
};

static const char * const output_1236[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movddup\t{%1, %0|%0, %1}",
  "movhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %H0|%H0, %2}",
};

static const char * const output_1237[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %H0|%H0, %2}",
};

static const char *
output_1238 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4562 "../../gcc/config/i386/sse.md" */
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 4) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 6) << 3;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4677 "../../gcc/config/i386/sse.md" */
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4677 "../../gcc/config/i386/sse.md" */
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1245 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4699 "../../gcc/config/i386/sse.md" */
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 4699 "../../gcc/config/i386/sse.md" */
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1247[] = {
  "vmovhpd\t{%1, %0|%0, %1}",
  "vunpckhpd\t{%1, %1, %0|%0, %1, %1}",
  "#",
  "#",
  "#",
};

static const char * const output_1248[] = {
  "movhpd\t{%1, %0|%0, %1}",
  "unpckhpd\t%0, %0",
  "#",
  "#",
  "#",
};

static const char * const output_1249[] = {
  "%vmovlpd\t{%1, %0|%0, %1}",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_1250[] = {
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
  "#",
};

static const char * const output_1251[] = {
  "movhpd\t{%2, %0|%0, %2}",
  "unpcklpd\t{%2, %0|%0, %2}",
  "shufpd\t{$1, %1, %0|%0, %1, 1}",
  "#",
  "#",
  "#",
};

static const char * const output_1252[] = {
  "vmovsd\t{%2, %0|%0, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "vmovhpd\t{%H1, %2, %0|%0, %2, %H1}",
  "#",
  "#",
  "#",
};

static const char * const output_1253[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movsd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhpd\t{%H1, %0|%0, %H1}",
  "#",
  "#",
  "#",
};

static const char * const output_1254[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1255[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1256[] = {
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovlpd\t{%2, %0|%0, %2}",
  "vmovhps\t{%H1, %2, %0|%0, %2, %H1}",
  "vmovhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_1257[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhps\t{%H1, %0|%0, %H1}",
  "movhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_1261[] = {
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovsd\t{%1, %0|%0, %1}",
};

static const char * const output_1262[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movsd\t{%1, %0|%0, %1}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char *
output_1316 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5893 "../../gcc/config/i386/sse.md" */
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5923 "../../gcc/config/i386/sse.md" */
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "psrldq\t{%2, %0|%0, %2}";
}
}

static const char *
output_1324 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5952 "../../gcc/config/i386/sse.md" */
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1328 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 5981 "../../gcc/config/i386/sse.md" */
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "pslldq\t{%2, %0|%0, %2}";
}
}

static const char *
output_1458 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6906 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "vpinsrb\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  else
    return "vpinsrb\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
}
}

static const char *
output_1459 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6906 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "vpinsrw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  else
    return "vpinsrw\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
}
}

static const char *
output_1460 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6906 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "vpinsrd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  else
    return "vpinsrd\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
}
}

static const char *
output_1461 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6930 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrb\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrb\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1462 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6950 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1463 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 6971 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1469 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 7122 "../../gcc/config/i386/sse.md" */
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1470 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 7166 "../../gcc/config/i386/sse.md" */
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1471 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 7211 "../../gcc/config/i386/sse.md" */
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1472[] = {
  "vmovd\t{%2, %0|%0, %2}",
  "vmovd\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1473[] = {
  "movd\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
};

static const char * const output_1477[] = {
  "vmovhps\t{%1, %0|%0, %1}",
  "vpsrldq\t{$8, %1, %0|%0, %1, 8}",
  "vmovq\t{%H1, %0|%0, %H1}",
};

static const char * const output_1478[] = {
  "movhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "movq\t{%H1, %0|%0, %H1}",
};

static const char * const output_1479[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1480[] = {
  "vpshufd\t{$0, %1, %0|%0, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
};

static const char * const output_1481[] = {
  "%vpshufd\t{$0, %1, %0|%0, %1, 0}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1482[] = {
  "vpunpcklqdq\t{%1, %1, %0|%0, %1, %1}",
  "vmovddup\t{%1, %0|%0, %1}",
};

static const char * const output_1483[] = {
  "punpcklqdq\t%0, %0",
  "movddup\t{%1, %0|%0, %1}",
};

static const char * const output_1484[] = {
  "punpcklqdq\t%0, %0",
  "movlhps\t%0, %0",
};

static const char * const output_1485[] = {
  "vpinsrd\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
  "vmovd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1486[] = {
  "pinsrd\t{$0x1, %2, %0|%0, %2, 0x1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1487[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1488[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1489[] = {
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1490[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1491[] = {
  "vmovq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1492[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char *
output_1549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 9152 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 9169 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1551 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 9187 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1635[] = {
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
};

static const char * const output_1639[] = {
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
};

static const char *
output_1689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11215 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT ((16 * 8) - INTVAL (operands[2]));
  return "vprotb\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1690 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11215 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT ((8 * 8) - INTVAL (operands[2]));
  return "vprotw\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1691 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11215 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT ((4 * 8) - INTVAL (operands[2]));
  return "vprotd\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11215 "../../gcc/config/i386/sse.md" */
{
  operands[3] = GEN_INT ((2 * 8) - INTVAL (operands[2]));
  return "vprotq\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1723 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11531 "../../gcc/config/i386/sse.md" */
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueb\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseb\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11531 "../../gcc/config/i386/sse.md" */
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtruew\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsew\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1725 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11531 "../../gcc/config/i386/sse.md" */
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrued\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsed\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1726 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11531 "../../gcc/config/i386/sse.md" */
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueq\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseq\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char * const output_1745[] = {
  "vbroadcastss\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1746[] = {
  "vbroadcastss\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1747[] = {
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1748[] = {
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1749[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1750[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1751[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1752[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1753[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1754[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char *
output_1755 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11807 "../../gcc/config/i386/sse.md" */
{
  int elt = INTVAL (operands[3]);
  switch (which_alternative)
    {
    case 0:
    case 1:
      operands[1] = adjust_address_nv (operands[1], SFmode, elt * 4);
      return "vbroadcastss\t{%1, %0|%0, %1}";
    case 2:
      operands[2] = GEN_INT (elt * 0x55);
      return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1758 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11919 "../../gcc/config/i386/sse.md" */
{
  int mask = avx_vpermilp_parallel (operands[2], V4SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1759 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11919 "../../gcc/config/i386/sse.md" */
{
  int mask = avx_vpermilp_parallel (operands[2], V2DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1760 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11919 "../../gcc/config/i386/sse.md" */
{
  int mask = avx_vpermilp_parallel (operands[2], V8SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 11919 "../../gcc/config/i386/sse.md" */
{
  int mask = avx_vpermilp_parallel (operands[2], V4DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1769 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12004 "../../gcc/config/i386/sse.md" */
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SImode) - 1;
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12004 "../../gcc/config/i386/sse.md" */
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SFmode) - 1;
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12004 "../../gcc/config/i386/sse.md" */
{
  int mask = avx_vperm2f128_parallel (operands[3], V4DFmode) - 1;
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1792 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12214 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1793 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12214 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1794 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12214 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1795 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12250 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%x1, %0|%0, %x1}";
	case MODE_V4DF:
	  return "vmovapd\t{%x1, %0|%0, %x1}";
	case MODE_OI:
	  return "vmovdqa\t{%x1, %0|%0, %x1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1796 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12250 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%x1, %0|%0, %x1}";
	case MODE_V4DF:
	  return "vmovapd\t{%x1, %0|%0, %x1}";
	case MODE_OI:
	  return "vmovdqa\t{%x1, %0|%0, %x1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12250 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%x1, %0|%0, %x1}";
	case MODE_V4DF:
	  return "vmovapd\t{%x1, %0|%0, %x1}";
	case MODE_OI:
	  return "vmovdqa\t{%x1, %0|%0, %x1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1798 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12295 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12295 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1800 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12295 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1801 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12295 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1802 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12295 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
#if defined(SPEC)
    return "";
#endif
}
}

static const char *
output_1803 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 12295 "../../gcc/config/i386/sse.md" */
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
#if defined(SPEC)
    return "";
#endif
}

static const char *
output_1816 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 196 "../../gcc/config/i386/sync.md" */
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }inc{b}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }dec{b}\t%0";
    }

  return "lock{%;| }add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1817 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 196 "../../gcc/config/i386/sync.md" */
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }inc{w}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }dec{w}\t%0";
    }

  return "lock{%;| }add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1818 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 196 "../../gcc/config/i386/sync.md" */
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }inc{l}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }dec{l}\t%0";
    }

  return "lock{%;| }add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 216 "../../gcc/config/i386/sync.md" */
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }dec{b}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }inc{b}\t%0";
    }

  return "lock{%;| }sub{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1820 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 216 "../../gcc/config/i386/sync.md" */
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }dec{w}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }inc{w}\t%0";
    }

  return "lock{%;| }sub{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
/* #line 216 "../../gcc/config/i386/sync.md" */
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }dec{l}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }inc{l}\t%0";
    }

  return "lock{%;| }sub{l}\t{%1, %0|%0, %1}";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    DImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,*y,*y,?rm,?*y,*x,*x,?r,m,?*Yi,*x",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,ri,C,*y,*y,rm,C,*x,*Yi,*x,r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "r,rn,rm,rn",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    1
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "*qn,m",
    QImode,
    0,
    1
  },
  {
    q_regs_operand,
    "+q",
    QImode,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?r",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "riF*m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,*y,m*y,*y,*Y2,m,*Y2,*Y2,*x,m,*x,*x",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,*y,m,C,*Y2,*Y2,m,C,*x,*x,m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    OImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    TImode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFm,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,m,x,x,x,m,!*y,!m,!*y,?Yi,?r,!*Ym,!r",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,rmF,Fr,C,x,xm,x,m,*y,*y,r,Yi,r,*Ym",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r,Y2",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFo,Y2",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o,Y2*x,Y2*x,Y2*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,*Fr,C,Y2*x,mY2*x,Y2*x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o,Y2*x,Y2*x,Y2*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr,C,Y2*x,m,Y2*x",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,ro",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,x,?r,?o",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "xm,x,C,roF,Fr",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    TFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "x,Fo,*r",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,?r,?o,?*Ym,?*y,?*Yi,*Y2",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,r,r,m,r,m",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f,xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=fm,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,Y2,?f,?x,?*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,Y2m,f,f,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f,f,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?Y2,?*r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,&x",
    V4SFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V4SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,&x",
    V2DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V2DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,ri,0,li",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0,le",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm,ln",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn,ln",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qnm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmn,rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmn",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qnm",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rnm",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "K,n,mr",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "i,i,ri",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm,L",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "=q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,f,!r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x,f,!r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "xm,0,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "xm,0,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0",
    TFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_pm1_operand,
    "n,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc,Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Ic",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,l",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,qm",
    QImode,
    1,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=q",
    SImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "lsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,U",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "lsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,U",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&q",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+Q,r",
    HImode,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&Q",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "1",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    const_double_operand,
    "F",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    const_double_operand,
    "F",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    const_double_operand,
    "F",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,&r,&r",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "lsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,U",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V1DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V1DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*x,*x,*x,m,r,m",
    V2SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!?ym,!?y,*Y2,!y,C,*x,m,*x,irm,r",
    V2SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,ym",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,f,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,y,x,f,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,o,o,o,o",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,Y2,Y2,x,y,x,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,Y2,0,o,o,o",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    emms_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V1TImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V1TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=?x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&x,X",
    V4SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V8SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V4DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "y,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,x",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,x,m",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,m,C,*ym,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,m,0,m",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,m,C,*ym,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,m",
    SFmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,C,x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x,*rm,x*rfF",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,C,x,x,0",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x,*rm,x*rfF",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,C,0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x,*rm,*rfF",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,C,0,0,0",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x,*rm,*rfF",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,0,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "m,*r,x,x*rfF",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,m",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,0,0",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "m,*r,x,x*rfF",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,0,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "m,x,x*rfF",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,0,0",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "m,x,x*rfF",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,f,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,m,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x*rf",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "o",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,1,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,o,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,1,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "1,xm",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,1,m,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,1,m,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_5_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_6_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,0,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m,m,m",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,x,x,o,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m,m,m",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,0,0,x,o,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,0,0,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0,x,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,m,C",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,Y2,Y2,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,m,0,0",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "Y2,m,C,x,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V1TImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V1TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V1TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V1TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    QImode,
    0,
    1
  },
  {
    const_pow2_1_to_32768_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_128_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    QImode,
    0,
    1
  },
  {
    const_pow2_1_to_32768_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_128_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x,Yi,x",
    V4SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "C,C,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,x",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,Yi,x,x",
    V4SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "C,C,C,0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,m,x",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,Yi",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "o",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "Y2,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "rm,x,C,*ym,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "rm,x,C,*ym,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,*rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y2,x,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,?x,x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,*y,x,x",
    DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,x,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,?Y2,Y2,x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mY2,*y,0,0,0",
    DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,Y2,x,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    DImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "Yz",
    V4SFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "Yz",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "Yz",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a,a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V8HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V2DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V32QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V16HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V8SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V4DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V8SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,x",
    V4DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_63_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V16QImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V8HImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V2DImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V16QImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V8HImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V2DImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    vzeroall_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    vzeroupper_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?x",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,o,x",
    V4SFmode,
    0,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,o,?x",
    V8SFmode,
    0,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,o,?x",
    V4DFmode,
    0,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    avx_vpermilp_v4sf_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    avx_vpermilp_v2df_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    avx_vpermilp_v8sf_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    avx_vpermilp_v4df_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    avx_vperm2f128_v8si_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    avx_vperm2f128_v8sf_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    avx_vperm2f128_v4df_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    cmpxchg8b_pic_memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "SD",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "qn",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rn",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    CDImode,
    0,
    1
  },
  {
    general_operand,
    "",
    CDImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Y2",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Y2",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    TFmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ashldi_input_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    promotable_binary_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0
  },
  {
    push_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    push_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    commutative_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    commutative_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1TImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* ../../gcc/config/i386/i386.md:903 */
  {
    "*cmpqi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_0 },
#else
    { 0, output_0, 0 },
#endif
    0,
    &operand_data[1],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:903 */
  {
    "*cmphi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1 },
#else
    { 0, output_1, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:903 */
  {
    "*cmpsi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_2 },
#else
    { 0, output_2, 0 },
#endif
    0,
    &operand_data[5],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:903 */
  {
    "*cmpdi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    0,
    &operand_data[7],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:915 */
  {
    "*cmpqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:915 */
  {
    "*cmphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:915 */
  {
    "*cmpsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:915 */
  {
    "*cmpdi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[15],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:924 */
  {
    "*cmpqi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:924 */
  {
    "*cmphi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:924 */
  {
    "*cmpsi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:924 */
  {
    "*cmpdi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[15],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:935 */
  {
    "*cmpqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:963 */
  {
    "*cmpqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%h0, %h0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[18],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:990 */
  {
    "*cmpqi_ext_3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[20],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1020 */
  {
    "*cmpqi_ext_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[22],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1149 */
  {
    "*cmpfp_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_16 },
#else
    { 0, 0, output_16 },
#endif
    0,
    &operand_data[24],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1169 */
  {
    "*cmpfp_0_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1197 */
  {
    "*cmpfp_xf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_18 },
#else
    { 0, 0, output_18 },
#endif
    0,
    &operand_data[27],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1210 */
  {
    "*cmpfp_xf_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[27],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1231 */
  {
    "*cmpfp_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_20 },
#else
    { 0, 0, output_20 },
#endif
    0,
    &operand_data[30],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1231 */
  {
    "*cmpfp_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_21 },
#else
    { 0, 0, output_21 },
#endif
    0,
    &operand_data[33],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1244 */
  {
    "*cmpfp_sf_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[30],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1244 */
  {
    "*cmpfp_df_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[33],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1265 */
  {
    "*cmpfp_u",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_24 },
#else
    { 0, 0, output_24 },
#endif
    0,
    &operand_data[36],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1285 */
  {
    "*cmpfp_u_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[36],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1313 */
  {
    "*cmpfp_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_26 },
#else
    { 0, 0, output_26 },
#endif
    0,
    &operand_data[39],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1313 */
  {
    "*cmpfp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    0,
    &operand_data[43],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1330 */
  {
    "*cmpfp_hi_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[39],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1330 */
  {
    "*cmpfp_si_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1360 */
  {
    "x86_fnstsw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstsw_1,
    &operand_data[24],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1372 */
  {
    "x86_sahf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    (insn_gen_fn) gen_x86_sahf_1,
    &operand_data[47],
    1,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1391 */
  {
    "*cmpfp_i_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    0,
    &operand_data[48],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:1419 */
  {
    "*cmpfp_i_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[50],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1441 */
  {
    "*cmpfp_i_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1461 */
  {
    "*cmpfp_iu_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    0,
    &operand_data[48],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:1489 */
  {
    "*cmpfp_iu_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_36 },
#else
    { 0, 0, output_36 },
#endif
    0,
    &operand_data[50],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1511 */
  {
    "*cmpfp_iu_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_37 },
#else
    { 0, 0, output_37 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1550 */
  {
    "*pushsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1567 */
  {
    "*pushsi2_prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1576 */
  {
    "*popsi1_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[54],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1587 */
  {
    "popsi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popsi1,
    &operand_data[54],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1597 */
  {
    "*movsi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1607 */
  {
    "*movsi_or",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_43 },
#else
    { 0, 0, output_43 },
#endif
    0,
    &operand_data[57],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:1621 */
  {
    "*movsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_44 },
#else
    { 0, 0, output_44 },
#endif
    0,
    &operand_data[59],
    2,
    0,
    12,
    3
  },
  /* ../../gcc/config/i386/i386.md:1732 */
  {
    "*swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[61],
    2,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1751 */
  {
    "*pushhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[63],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1768 */
  {
    "*movhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_47 },
#else
    { 0, 0, output_47 },
#endif
    0,
    &operand_data[65],
    2,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:1850 */
  {
    "*swaphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    2,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1864 */
  {
    "*swaphi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    2,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1888 */
  {
    "*movstricthi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[69],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:1897 */
  {
    "*movstricthi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[71],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1917 */
  {
    "*pushqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[73],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:1944 */
  {
    "*movqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_53 },
#else
    { 0, 0, output_53 },
#endif
    0,
    &operand_data[75],
    2,
    0,
    7,
    3
  },
  /* ../../gcc/config/i386/i386.md:2008 */
  {
    "*swapqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    2,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2022 */
  {
    "*swapqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[79],
    2,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2046 */
  {
    "*movstrictqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:2055 */
  {
    "*movstrictqi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[83],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2065 */
  {
    "*movsi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2075 */
  {
    "*movhi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[87],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2085 */
  {
    "*movqi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_60 },
#else
    { 0, 0, output_60 },
#endif
    0,
    &operand_data[89],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:2180 */
  {
    "*movsi_extzv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2190 */
  {
    "*movqi_extzv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_62 },
#else
    { 0, 0, output_62 },
#endif
    0,
    &operand_data[91],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:2243 */
  {
    "movsi_insv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%b1, %h0|%h0, %b1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_insv_1,
    &operand_data[93],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2273 */
  {
    "*movqi_insv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[95],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2290 */
  {
    "*pushdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:2407 */
  {
    "*movdi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_66 },
#else
    { 0, output_66, 0 },
#endif
    0,
    &operand_data[99],
    2,
    0,
    13,
    2
  },
  /* ../../gcc/config/i386/i386.md:2630 */
  {
    "*movoi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_67 },
#else
    { 0, 0, output_67 },
#endif
    0,
    &operand_data[101],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:2669 */
  {
    "*movti_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_68 },
#else
    { 0, 0, output_68 },
#endif
    0,
    &operand_data[103],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:2805 */
  {
    "*pushsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    0,
    &operand_data[105],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:2855 */
  {
    "*movsf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_70 },
#else
    { 0, 0, output_70 },
#endif
    0,
    &operand_data[107],
    2,
    0,
    16,
    3
  },
  /* ../../gcc/config/i386/i386.md:2951 */
  {
    "*swapsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_71 },
#else
    { 0, 0, output_71 },
#endif
    0,
    &operand_data[109],
    2,
    2,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:2977 */
  {
    "*pushdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_72 },
#else
    { 0, 0, output_72 },
#endif
    0,
    &operand_data[111],
    2,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:2989 */
  {
    "*pushdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_73 },
#else
    { 0, 0, output_73 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:3021 */
  {
    "*movdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_74 },
#else
    { 0, 0, output_74 },
#endif
    0,
    &operand_data[115],
    2,
    0,
    9,
    3
  },
  /* ../../gcc/config/i386/i386.md:3314 */
  {
    "*movdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_75 },
#else
    { 0, 0, output_75 },
#endif
    0,
    &operand_data[117],
    2,
    0,
    9,
    3
  },
  /* ../../gcc/config/i386/i386.md:3452 */
  {
    "*swapdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_76 },
#else
    { 0, 0, output_76 },
#endif
    0,
    &operand_data[119],
    2,
    2,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:3480 */
  {
    "*pushxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_77 },
#else
    { 0, 0, output_77 },
#endif
    0,
    &operand_data[121],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:3492 */
  {
    "*pushxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_78 },
#else
    { 0, 0, output_78 },
#endif
    0,
    &operand_data[123],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:3523 */
  {
    "*movxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_79 },
#else
    { 0, 0, output_79 },
#endif
    0,
    &operand_data[125],
    2,
    0,
    5,
    3
  },
  /* ../../gcc/config/i386/i386.md:3551 */
  {
    "*movxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_80 },
#else
    { 0, 0, output_80 },
#endif
    0,
    &operand_data[127],
    2,
    0,
    5,
    3
  },
  /* ../../gcc/config/i386/i386.md:3588 */
  {
    "*movtf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_81 },
#else
    { 0, 0, output_81 },
#endif
    0,
    &operand_data[129],
    2,
    0,
    5,
    3
  },
  /* ../../gcc/config/i386/i386.md:3633 */
  {
    "*pushtf_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_82 },
#else
    { 0, 0, output_82 },
#endif
    0,
    &operand_data[131],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:3740 */
  {
    "swapxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_83 },
#else
    { 0, 0, output_83 },
#endif
    (insn_gen_fn) gen_swapxf,
    &operand_data[133],
    2,
    2,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:3798 */
  {
    "zero_extendhisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2_and,
    &operand_data[135],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:3817 */
  {
    "*zero_extendhisi2_movzwl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[137],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:3834 */
  {
    "*zero_extendqihi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[139],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:3843 */
  {
    "*zero_extendqihi2_movzbw_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[141],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:3853 */
  {
    "*zero_extendqihi2_movzbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[143],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:3910 */
  {
    "*zero_extendqisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:3919 */
  {
    "*zero_extendqisi2_movzbl_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[147],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:3928 */
  {
    "*zero_extendqisi2_movzbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[149],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:3989 */
  {
    "zero_extendsidi2_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2_32,
    &operand_data[151],
    2,
    0,
    7,
    2
  },
  /* ../../gcc/config/i386/i386.md:4082 */
  {
    "*extendsidi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[153],
    3,
    0,
    4,
    1
  },
  /* ../../gcc/config/i386/i386.md:4192 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_94 },
#else
    { 0, 0, output_94 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[156],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:4245 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_95 },
#else
    { 0, 0, output_95 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[158],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:4271 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[149],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:4395 */
  {
    "*extendsfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_97 },
#else
    { 0, 0, output_97 },
#endif
    0,
    &operand_data[160],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:4418 */
  {
    "*extendsfdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[162],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:4427 */
  {
    "*extendsfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[164],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:4455 */
  {
    "*extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_100 },
#else
    { 0, 0, output_100 },
#endif
    0,
    &operand_data[166],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:4455 */
  {
    "*extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_101 },
#else
    { 0, 0, output_101 },
#endif
    0,
    &operand_data[168],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:4545 */
  {
    "*truncdfsf_fast_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_102 },
#else
    { 0, 0, output_102 },
#endif
    0,
    &operand_data[170],
    2,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:4567 */
  {
    "*truncdfsf_fast_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[172],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:4577 */
  {
    "*truncdfsf_fast_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_104 },
#else
    { 0, 0, output_104 },
#endif
    0,
    &operand_data[174],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4586 */
  {
    "*truncdfsf_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_105 },
#else
    { 0, 0, output_105 },
#endif
    0,
    &operand_data[176],
    3,
    0,
    5,
    3
  },
  /* ../../gcc/config/i386/i386.md:4609 */
  {
    "*truncdfsf_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_106 },
#else
    { 0, 0, output_106 },
#endif
    0,
    &operand_data[179],
    3,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:4629 */
  {
    "*truncdfsf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_107 },
#else
    { 0, 0, output_107 },
#endif
    0,
    &operand_data[182],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4678 */
  {
    "*truncxfsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_108 },
#else
    { 0, 0, output_108 },
#endif
    0,
    &operand_data[184],
    3,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:4692 */
  {
    "*truncxfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_109 },
#else
    { 0, 0, output_109 },
#endif
    0,
    &operand_data[187],
    3,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:4706 */
  {
    "truncxfsf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_110 },
#else
    { 0, 0, output_110 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop,
    &operand_data[190],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4706 */
  {
    "truncxfdf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_111 },
#else
    { 0, 0, output_111 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop,
    &operand_data[192],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4715 */
  {
    "*truncxfsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_112 },
#else
    { 0, 0, output_112 },
#endif
    0,
    &operand_data[194],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4715 */
  {
    "*truncxfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_113 },
#else
    { 0, 0, output_113 },
#endif
    0,
    &operand_data[196],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4859 */
  {
    "*fixuns_truncsf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[198],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:4859 */
  {
    "*fixuns_truncdf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[203],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:4902 */
  {
    "fix_truncsfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi_sse,
    &operand_data[208],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:4902 */
  {
    "fix_truncdfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi_sse,
    &operand_data[210],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:4944 */
  {
    "fix_trunchi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_fisttp_i387_1,
    &operand_data[212],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:4944 */
  {
    "fix_truncsi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_fisttp_i387_1,
    &operand_data[214],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:4944 */
  {
    "fix_truncdi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_fisttp_i387_1,
    &operand_data[216],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:4971 */
  {
    "fix_trunchi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp,
    &operand_data[218],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4971 */
  {
    "fix_truncsi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp,
    &operand_data[221],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4971 */
  {
    "fix_truncdi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp,
    &operand_data[224],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:4984 */
  {
    "fix_trunchi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp_with_temp,
    &operand_data[227],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:4984 */
  {
    "fix_truncsi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp_with_temp,
    &operand_data[231],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:4984 */
  {
    "fix_truncdi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp_with_temp,
    &operand_data[235],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5024 */
  {
    "*fix_trunchi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[212],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5024 */
  {
    "*fix_truncsi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[214],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5024 */
  {
    "*fix_truncdi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[216],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5057 */
  {
    "fix_truncdi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387,
    &operand_data[239],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:5071 */
  {
    "fix_truncdi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_with_temp,
    &operand_data[244],
    6,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5115 */
  {
    "fix_trunchi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387,
    &operand_data[250],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:5115 */
  {
    "fix_truncsi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387,
    &operand_data[254],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:5128 */
  {
    "fix_trunchi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_with_temp,
    &operand_data[258],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5128 */
  {
    "fix_truncsi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_with_temp,
    &operand_data[263],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5167 */
  {
    "x86_fnstcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstcw_1,
    &operand_data[218],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5176 */
  {
    "x86_fldcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fldcw_1,
    &operand_data[41],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5201 */
  {
    "*floathisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[268],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5201 */
  {
    "*floathidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[270],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5201 */
  {
    "*floathixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[272],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5215 */
  {
    "*floathisf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[274],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5215 */
  {
    "*floathidf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[277],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5215 */
  {
    "*floathixf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[280],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5228 */
  {
    "*floathisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[283],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5228 */
  {
    "*floathidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[285],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5228 */
  {
    "*floathixf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[287],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5292 */
  {
    "*floatsisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[289],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5292 */
  {
    "*floatdisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[291],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5292 */
  {
    "*floatsidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5292 */
  {
    "*floatdidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[295],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5292 */
  {
    "*floatsixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[297],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5292 */
  {
    "*floatdixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[299],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:5329 */
  {
    "*floatsisf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[301],
    3,
    0,
    5,
    1
  },
  /* ../../gcc/config/i386/i386.md:5329 */
  {
    "*floatsidf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[304],
    3,
    0,
    5,
    1
  },
  /* ../../gcc/config/i386/i386.md:5344 */
  {
    "*floatsisf2_vector_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_155 },
#else
    { 0, output_155, 0 },
#endif
    0,
    &operand_data[307],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5344 */
  {
    "*floatsidf2_vector_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_156 },
#else
    { 0, output_156, 0 },
#endif
    0,
    &operand_data[309],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5359 */
  {
    "*floatsisf2_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[311],
    3,
    0,
    4,
    1
  },
  /* ../../gcc/config/i386/i386.md:5359 */
  {
    "*floatsidf2_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[314],
    3,
    0,
    4,
    1
  },
  /* ../../gcc/config/i386/i386.md:5403 */
  {
    "*floatsisf2_mixed_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[317],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:5403 */
  {
    "*floatsidf2_mixed_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    0,
    &operand_data[319],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:5428 */
  {
    "*floatsisf2_mixed_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_161 },
#else
    { 0, output_161, 0 },
#endif
    0,
    &operand_data[307],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5428 */
  {
    "*floatsidf2_mixed_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_162 },
#else
    { 0, output_162, 0 },
#endif
    0,
    &operand_data[309],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5451 */
  {
    "*floatsisf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[321],
    3,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/i386.md:5451 */
  {
    "*floatsidf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[324],
    3,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/i386.md:5465 */
  {
    "*floatsisf2_vector_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[327],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5465 */
  {
    "*floatsidf2_vector_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[329],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5598 */
  {
    "*floatsisf2_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[331],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5598 */
  {
    "*floatsidf2_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[334],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5612 */
  {
    "*floatsisf2_sse_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[331],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5612 */
  {
    "*floatsidf2_sse_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[334],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5647 */
  {
    "*floatsisf2_sse_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[327],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5647 */
  {
    "*floatsidf2_sse_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[329],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5696 */
  {
    "*floatsisf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_173 },
#else
    { 0, output_173, 0 },
#endif
    0,
    &operand_data[337],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5696 */
  {
    "*floatdisf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_174 },
#else
    { 0, output_174, 0 },
#endif
    0,
    &operand_data[340],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5696 */
  {
    "*floatsidf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[343],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5696 */
  {
    "*floatdidf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    0,
    &operand_data[346],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5696 */
  {
    "*floatsixf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_177 },
#else
    { 0, output_177, 0 },
#endif
    0,
    &operand_data[349],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5696 */
  {
    "*floatdixf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_178 },
#else
    { 0, output_178, 0 },
#endif
    0,
    &operand_data[352],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:5711 */
  {
    "*floatsisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[355],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5711 */
  {
    "*floatdisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[357],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5711 */
  {
    "*floatsidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[359],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5711 */
  {
    "*floatdidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[361],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5711 */
  {
    "*floatsixf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[363],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5711 */
  {
    "*floatdixf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[365],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5748 */
  {
    "floatdisf2_i387_with_xmm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2_i387_with_xmm,
    &operand_data[367],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5748 */
  {
    "floatdidf2_i387_with_xmm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2_i387_with_xmm,
    &operand_data[372],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5748 */
  {
    "floatdixf2_i387_with_xmm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdixf2_i387_with_xmm,
    &operand_data[377],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5810 */
  {
    "*floatunssisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[382],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5810 */
  {
    "*floatunssidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[386],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5810 */
  {
    "*floatunssixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[390],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5910 */
  {
    "*adddi3_doubleword",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[394],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5910 */
  {
    "*addti3_doubleword",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5933 */
  {
    "*addsi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[400],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5933 */
  {
    "*adddi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[403],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5946 */
  {
    "addqi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_cc,
    &operand_data[406],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:5959 */
  {
    "*lea_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[409],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:5984 */
  {
    "*addsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_197 },
#else
    { 0, 0, output_197 },
#endif
    0,
    &operand_data[411],
    3,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:5984 */
  {
    "*adddi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_198 },
#else
    { 0, 0, output_198 },
#endif
    0,
    &operand_data[414],
    3,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:6113 */
  {
    "*addhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    0,
    &operand_data[417],
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:6161 */
  {
    "*addhi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    0,
    &operand_data[420],
    3,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:6209 */
  {
    "*addqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    0,
    &operand_data[423],
    3,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:6261 */
  {
    "*addqi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    0,
    &operand_data[426],
    3,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:6316 */
  {
    "*addqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    0,
    &operand_data[429],
    2,
    1,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:6356 */
  {
    "*addsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    0,
    &operand_data[431],
    3,
    2,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:6356 */
  {
    "*adddi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    0,
    &operand_data[434],
    3,
    2,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:6465 */
  {
    "*addhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    0,
    &operand_data[437],
    3,
    2,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:6512 */
  {
    "*addqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    0,
    &operand_data[440],
    3,
    2,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:6553 */
  {
    "*addsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    0,
    &operand_data[443],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6553 */
  {
    "*adddi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    0,
    &operand_data[446],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6658 */
  {
    "*addhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    0,
    &operand_data[449],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6703 */
  {
    "*addqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6805 */
  {
    "*addsi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6850 */
  {
    "*addhi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[458],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6895 */
  {
    "*addqi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[461],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6933 */
  {
    "*addsi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    0,
    &operand_data[443],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6933 */
  {
    "*adddi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    0,
    &operand_data[446],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:6988 */
  {
    "*addhi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    0,
    &operand_data[449],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:7034 */
  {
    "*addqi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:7111 */
  {
    "addqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    (insn_gen_fn) gen_addqi_ext_1,
    &operand_data[464],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:7148 */
  {
    "*addqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7170 */
  {
    "*lea_general_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[470],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7223 */
  {
    "*lea_general_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7273 */
  {
    "*lea_general_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7394 */
  {
    "*subdi3_doubleword",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[483],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7394 */
  {
    "*subti3_doubleword",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[486],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7416 */
  {
    "*subqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[489],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7416 */
  {
    "*subhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[492],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7416 */
  {
    "*subsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[495],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7416 */
  {
    "*subdi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[498],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7438 */
  {
    "*subqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[501],
    2,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7449 */
  {
    "*subqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[489],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7449 */
  {
    "*subhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[492],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7449 */
  {
    "*subsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[495],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7449 */
  {
    "*subdi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[498],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7480 */
  {
    "*subqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[489],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7480 */
  {
    "*subhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[492],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7480 */
  {
    "*subsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[495],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7480 */
  {
    "*subdi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[498],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*addqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[503],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*subqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[507],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*addhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[511],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*subhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[515],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*addsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[519],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*subsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[523],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*adddi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[527],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7521 */
  {
    "*subdi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[531],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7568 */
  {
    "*addqi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[535],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7568 */
  {
    "*addhi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[538],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7568 */
  {
    "*addsi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[541],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7568 */
  {
    "*adddi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[544],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7581 */
  {
    "*subqi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7581 */
  {
    "*subhi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7581 */
  {
    "*subsi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*addqi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[406],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*subqi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[489],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*addhi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[417],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*subhi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[492],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*addsi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[400],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*subsi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[495],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*adddi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[403],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7593 */
  {
    "*subdi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[498],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:7668 */
  {
    "*mulsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_262 },
#else
    { 0, output_262, 0 },
#endif
    0,
    &operand_data[547],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:7735 */
  {
    "*mulhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_263 },
#else
    { 0, output_263, 0 },
#endif
    0,
    &operand_data[550],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:7764 */
  {
    "*mulqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[553],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7803 */
  {
    "*mulsidi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7803 */
  {
    "*umulsidi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7822 */
  {
    "*mulqihi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[559],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7822 */
  {
    "*umulqihi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[559],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7881 */
  {
    "*smulsi3_highpart_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[562],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7881 */
  {
    "*umulsi3_highpart_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[562],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7946 */
  {
    "divqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divqi3,
    &operand_data[566],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:7946 */
  {
    "udivqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivqi3,
    &operand_data[566],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8004 */
  {
    "*divmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[569],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8004 */
  {
    "*divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[573],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8039 */
  {
    "*divmodhi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{w}\t%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[577],
    5,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8039 */
  {
    "*divmodsi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{l}\t%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[582],
    5,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8063 */
  {
    "*udivmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[569],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8063 */
  {
    "*udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[573],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8084 */
  {
    "*udivmodhi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{w}\t%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[577],
    5,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8084 */
  {
    "*udivmodsi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{l}\t%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[582],
    5,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8157 */
  {
    "*testqi_1_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    0,
    &operand_data[587],
    2,
    0,
    4,
    3
  },
  /* ../../gcc/config/i386/i386.md:8182 */
  {
    "*testqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[589],
    2,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/i386.md:8182 */
  {
    "*testhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[591],
    2,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/i386.md:8182 */
  {
    "*testsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[593],
    2,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/i386.md:8210 */
  {
    "*testqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[595],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8244 */
  {
    "*testqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[597],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8260 */
  {
    "*testqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[22],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8300 */
  {
    "*testqi_ext_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[599],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8476 */
  {
    "*andsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_289 },
#else
    { 0, 0, output_289 },
#endif
    0,
    &operand_data[602],
    3,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:8533 */
  {
    "*andhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    0,
    &operand_data[605],
    3,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:8564 */
  {
    "*andqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_291 },
#else
    { 0, output_291, 0 },
#endif
    0,
    &operand_data[423],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:8577 */
  {
    "*andqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[608],
    2,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8646 */
  {
    "*andqi_2_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_293 },
#else
    { 0, 0, output_293 },
#endif
    0,
    &operand_data[610],
    3,
    2,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:8670 */
  {
    "*andqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8670 */
  {
    "*andhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8670 */
  {
    "*andsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8699 */
  {
    "*andqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[613],
    2,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8717 */
  {
    "andqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andqi_ext_0,
    &operand_data[615],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8737 */
  {
    "*andqi_ext_0_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[615],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8781 */
  {
    "*andqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[618],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8799 */
  {
    "*andqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8876 */
  {
    "*iorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8876 */
  {
    "*xorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8876 */
  {
    "*iorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8876 */
  {
    "*xorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8876 */
  {
    "*iordi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8876 */
  {
    "*xordi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8888 */
  {
    "*iorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_308 },
#else
    { 0, output_308, 0 },
#endif
    0,
    &operand_data[621],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:8888 */
  {
    "*xorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_309 },
#else
    { 0, output_309, 0 },
#endif
    0,
    &operand_data[621],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:8924 */
  {
    "*iorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[624],
    2,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8924 */
  {
    "*xorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[624],
    2,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*iorqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*xorqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*iorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*xorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*iorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*xorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*iordi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8935 */
  {
    "*xordi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    2,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8978 */
  {
    "*iorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[626],
    2,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8978 */
  {
    "*xorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[626],
    2,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*iorqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*xorqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*iorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[449],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*xorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[449],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*iorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*xorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*iordi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[446],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:8992 */
  {
    "*xordi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[446],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9005 */
  {
    "*iorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[615],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9005 */
  {
    "*xorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[615],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9042 */
  {
    "*iorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[618],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9042 */
  {
    "*xorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[618],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9061 */
  {
    "*iorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[628],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9061 */
  {
    "*xorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[628],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9167 */
  {
    "*xorqi_cc_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9200 */
  {
    "*negdi2_doubleword",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[634],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9200 */
  {
    "*negti2_doubleword",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[636],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9223 */
  {
    "*negqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[638],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9223 */
  {
    "*neghi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[640],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9223 */
  {
    "*negsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9223 */
  {
    "*negdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[644],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9249 */
  {
    "*negqi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[638],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9249 */
  {
    "*neghi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[640],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9249 */
  {
    "*negsi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9249 */
  {
    "*negdi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[644],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9287 */
  {
    "*absnegsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[646],
    4,
    0,
    4,
    1
  },
  /* ../../gcc/config/i386/i386.md:9287 */
  {
    "*absnegdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[650],
    4,
    0,
    4,
    1
  },
  /* ../../gcc/config/i386/i386.md:9296 */
  {
    "*absnegsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[654],
    4,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/i386.md:9296 */
  {
    "*absnegdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[658],
    4,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/i386.md:9305 */
  {
    "*absnegsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:9305 */
  {
    "*absnegdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[666],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:9305 */
  {
    "*absnegxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:9320 */
  {
    "*absnegtf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[674],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:9458 */
  {
    "*abssf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[678],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9458 */
  {
    "*negsf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[678],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9458 */
  {
    "*absdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[680],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9458 */
  {
    "*negdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[680],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9458 */
  {
    "*absxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9458 */
  {
    "*negxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9468 */
  {
    "*absextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[684],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9468 */
  {
    "*negextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[684],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9477 */
  {
    "*absextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[686],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9477 */
  {
    "*negextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[686],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9486 */
  {
    "*absextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[688],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9486 */
  {
    "*negextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[688],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9511 */
  {
    "copysignsf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_const,
    &operand_data[690],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9511 */
  {
    "copysigndf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_const,
    &operand_data[694],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9511 */
  {
    "copysigntf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigntf3_const,
    &operand_data[698],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9528 */
  {
    "copysignsf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_var,
    &operand_data[702],
    6,
    0,
    5,
    1
  },
  /* ../../gcc/config/i386/i386.md:9528 */
  {
    "copysigndf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_var,
    &operand_data[708],
    6,
    0,
    5,
    1
  },
  /* ../../gcc/config/i386/i386.md:9528 */
  {
    "copysigntf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigntf3_var,
    &operand_data[714],
    6,
    0,
    5,
    1
  },
  /* ../../gcc/config/i386/i386.md:9567 */
  {
    "*one_cmplhi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[640],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9567 */
  {
    "*one_cmplsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9567 */
  {
    "*one_cmpldi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[644],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9576 */
  {
    "*one_cmplqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_376 },
#else
    { 0, output_376, 0 },
#endif
    0,
    &operand_data[720],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:9596 */
  {
    "*one_cmplqi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[638],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9596 */
  {
    "*one_cmplhi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[640],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9596 */
  {
    "*one_cmplsi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9596 */
  {
    "*one_cmpldi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[644],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:9949 */
  {
    "*ashldi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[722],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:9982 */
  {
    "x86_shld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shld{l}\t{%s2%1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_shld,
    &operand_data[725],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:10049 */
  {
    "*ashlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_383 },
#else
    { 0, 0, output_383 },
#endif
    0,
    &operand_data[728],
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:10209 */
  {
    "*ashlsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_384 },
#else
    { 0, 0, output_384 },
#endif
    0,
    &operand_data[731],
    3,
    2,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:10260 */
  {
    "*ashlsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_385 },
#else
    { 0, 0, output_385 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:10368 */
  {
    "*ashlhi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_386 },
#else
    { 0, 0, output_386 },
#endif
    0,
    &operand_data[737],
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:10415 */
  {
    "*ashlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_387 },
#else
    { 0, 0, output_387 },
#endif
    0,
    &operand_data[740],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:10461 */
  {
    "*ashlhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_388 },
#else
    { 0, 0, output_388 },
#endif
    0,
    &operand_data[743],
    3,
    2,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:10512 */
  {
    "*ashlhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_389 },
#else
    { 0, 0, output_389 },
#endif
    0,
    &operand_data[746],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:10571 */
  {
    "*ashlqi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_390 },
#else
    { 0, 0, output_390 },
#endif
    0,
    &operand_data[749],
    3,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:10636 */
  {
    "*ashlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_391 },
#else
    { 0, 0, output_391 },
#endif
    0,
    &operand_data[752],
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:10700 */
  {
    "*ashlqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_392 },
#else
    { 0, 0, output_392 },
#endif
    0,
    &operand_data[755],
    3,
    2,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:10751 */
  {
    "*ashlqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_393 },
#else
    { 0, 0, output_393 },
#endif
    0,
    &operand_data[758],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:11002 */
  {
    "*ashrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[761],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11035 */
  {
    "x86_shrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shrd{l}\t{%s2%1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_shrd,
    &operand_data[725],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11084 */
  {
    "*ashrsi3_31",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_396 },
#else
    { 0, output_396, 0 },
#endif
    0,
    &operand_data[764],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11125 */
  {
    "*ashrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[767],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11150 */
  {
    "*ashrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_398 },
#else
    { 0, output_398, 0 },
#endif
    0,
    &operand_data[770],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11177 */
  {
    "*ashrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[767],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11193 */
  {
    "*ashrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[773],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11228 */
  {
    "*ashrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11243 */
  {
    "*ashrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11280 */
  {
    "*ashrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11292 */
  {
    "*ashrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_404 },
#else
    { 0, output_404, 0 },
#endif
    0,
    &operand_data[779],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11307 */
  {
    "*ashrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11323 */
  {
    "*ashrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[782],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11341 */
  {
    "*ashrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11356 */
  {
    "*ashrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[746],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11377 */
  {
    "*ashrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11389 */
  {
    "*ashrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11402 */
  {
    "*ashrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_411 },
#else
    { 0, output_411, 0 },
#endif
    0,
    &operand_data[790],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11414 */
  {
    "*ashrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_412 },
#else
    { 0, output_412, 0 },
#endif
    0,
    &operand_data[793],
    2,
    1,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11430 */
  {
    "*ashrqi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11446 */
  {
    "*ashrqi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[798],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11464 */
  {
    "*ashrqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[755],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11479 */
  {
    "*ashrqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[758],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11637 */
  {
    "*lshrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[761],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11677 */
  {
    "*lshrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[767],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11702 */
  {
    "*lshrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_419 },
#else
    { 0, output_419, 0 },
#endif
    0,
    &operand_data[770],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11730 */
  {
    "*lshrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[767],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11746 */
  {
    "*lshrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[773],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11781 */
  {
    "*lshrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11796 */
  {
    "*lshrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11833 */
  {
    "*lshrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11845 */
  {
    "*lshrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_425 },
#else
    { 0, output_425, 0 },
#endif
    0,
    &operand_data[779],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11860 */
  {
    "*lshrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11876 */
  {
    "*lshrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[782],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11894 */
  {
    "*lshrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11909 */
  {
    "*lshrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[746],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11930 */
  {
    "*lshrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11942 */
  {
    "*lshrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11954 */
  {
    "*lshrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_432 },
#else
    { 0, output_432, 0 },
#endif
    0,
    &operand_data[790],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11966 */
  {
    "*lshrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_433 },
#else
    { 0, output_433, 0 },
#endif
    0,
    &operand_data[793],
    2,
    1,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:11982 */
  {
    "*lshrqi2_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:11998 */
  {
    "*lshrqi2_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[798],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12016 */
  {
    "*lshrqi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[755],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12031 */
  {
    "*lshrqi2_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[758],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12066 */
  {
    "ix86_rotldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotldi3,
    &operand_data[801],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12122 */
  {
    "*rotlsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[767],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12148 */
  {
    "*rotlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_440 },
#else
    { 0, output_440, 0 },
#endif
    0,
    &operand_data[770],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12180 */
  {
    "*rotlhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12192 */
  {
    "*rotlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_442 },
#else
    { 0, output_442, 0 },
#endif
    0,
    &operand_data[779],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12221 */
  {
    "*rotlqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12233 */
  {
    "*rotlqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12245 */
  {
    "*rotlqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_445 },
#else
    { 0, output_445, 0 },
#endif
    0,
    &operand_data[793],
    2,
    1,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12258 */
  {
    "*rotlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_446 },
#else
    { 0, output_446, 0 },
#endif
    0,
    &operand_data[790],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12289 */
  {
    "ix86_rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotrdi3,
    &operand_data[801],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12345 */
  {
    "*rotrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[767],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12371 */
  {
    "*rotrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_449 },
#else
    { 0, output_449, 0 },
#endif
    0,
    &operand_data[770],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12403 */
  {
    "*rotrhi3_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12415 */
  {
    "*rotrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_451 },
#else
    { 0, output_451, 0 },
#endif
    0,
    &operand_data[779],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12444 */
  {
    "*rotrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12456 */
  {
    "*rotrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12468 */
  {
    "*rotrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_454 },
#else
    { 0, output_454, 0 },
#endif
    0,
    &operand_data[790],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12480 */
  {
    "*rotrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_455 },
#else
    { 0, output_455, 0 },
#endif
    0,
    &operand_data[793],
    2,
    1,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:12715 */
  {
    "*btsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bt{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[805],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12748 */
  {
    "*setcc_si_1_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[807],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12765 */
  {
    "*setcc_si_1_movzbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[807],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12780 */
  {
    "*setcc_qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[809],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12789 */
  {
    "*setcc_qi_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[811],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12873 */
  {
    "*avx_setccsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D1ss\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[813],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12873 */
  {
    "*avx_setccdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D1sd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[817],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12885 */
  {
    "*sse_setccsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1ss\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[821],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12885 */
  {
    "*sse_setccdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1sd\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[825],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:12899 */
  {
    "*jcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%C1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[829],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:12917 */
  {
    "*jcc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%c1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[829],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13055 */
  {
    "*jcc_btsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[831],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13088 */
  {
    "*jcc_btsi_mask",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[835],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13117 */
  {
    "*jcc_btsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[831],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13150 */
  {
    "*jcc_btsi_mask_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[835],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13186 */
  {
    "*fp_jcc_3_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[840],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13204 */
  {
    "*fp_jcc_4_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[840],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13222 */
  {
    "*fp_jcc_5_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[845],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13237 */
  {
    "*fp_jcc_6_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[845],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13252 */
  {
    "*fp_jcc_7_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[850],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13274 */
  {
    "*fp_jcc_8hi_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[855],
    6,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:13274 */
  {
    "*fp_jcc_8si_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[861],
    6,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:13373 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[664],
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13393 */
  {
    "*indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[558],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13438 */
  {
    "*tablejump_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[867],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13514 */
  {
    "*call_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_481 },
#else
    { 0, 0, output_481 },
#endif
    0,
    &operand_data[869],
    3,
    0,
    0,
    3
  },
  /* ../../gcc/config/i386/i386.md:13529 */
  {
    "*call_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_482 },
#else
    { 0, 0, output_482 },
#endif
    0,
    &operand_data[872],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:13543 */
  {
    "*sibcall_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_483 },
#else
    { 0, output_483, 0 },
#endif
    0,
    &operand_data[875],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:13575 */
  {
    "*call_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_484 },
#else
    { 0, 0, output_484 },
#endif
    0,
    &operand_data[878],
    2,
    0,
    0,
    3
  },
  /* ../../gcc/config/i386/i386.md:13587 */
  {
    "*call_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_485 },
#else
    { 0, 0, output_485 },
#endif
    0,
    &operand_data[880],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:13598 */
  {
    "*sibcall_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_486 },
#else
    { 0, output_486, 0 },
#endif
    0,
    &operand_data[882],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:13750 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13767 */
  {
    "*memory_blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[884],
    1,
    1,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13776 */
  {
    "prologue_use",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prologue_use,
    &operand_data[664],
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13798 */
  {
    "return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13810 */
  {
    "return_internal_long",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep\n\tret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal_long,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13821 */
  {
    "return_pop_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_pop_internal,
    &operand_data[600],
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13831 */
  {
    "return_indirect_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_indirect_internal,
    &operand_data[726],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13839 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13847 */
  {
    "vswapmov",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movl.s\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vswapmov,
    &operand_data[885],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:13861 */
  {
    "pad",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_496 },
#else
    { 0, 0, output_496 },
#endif
    (insn_gen_fn) gen_pad,
    &operand_data[664],
    1,
    0,
    0,
    3
  },
  /* ../../gcc/config/i386/i386.md:13882 */
  {
    "set_got",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_497 },
#else
    { 0, 0, output_497 },
#endif
    (insn_gen_fn) gen_set_got,
    &operand_data[55],
    1,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:13891 */
  {
    "set_got_labelled",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_498 },
#else
    { 0, 0, output_498 },
#endif
    (insn_gen_fn) gen_set_got_labelled,
    &operand_data[887],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:13960 */
  {
    "eh_return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:13968 */
  {
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_leave,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:14015 */
  {
    "*ffs_no_cmove",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14039 */
  {
    "*ffssi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14079 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ctzsi2,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14117 */
  {
    "clzsi2_abm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lzcnt{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2_abm,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14127 */
  {
    "bsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bsr,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14138 */
  {
    "popcounthi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_506 },
#else
    { 0, 0, output_506 },
#endif
    (insn_gen_fn) gen_popcounthi2,
    &operand_data[892],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14138 */
  {
    "popcountsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_507 },
#else
    { 0, 0, output_507 },
#endif
    (insn_gen_fn) gen_popcountsi2,
    &operand_data[889],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14155 */
  {
    "*popcounthi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_508 },
#else
    { 0, 0, output_508 },
#endif
    0,
    &operand_data[892],
    2,
    1,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14155 */
  {
    "*popcountsi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_509 },
#else
    { 0, 0, output_509 },
#endif
    0,
    &operand_data[889],
    2,
    1,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14155 */
  {
    "*popcountdi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_510 },
#else
    { 0, 0, output_510 },
#endif
    0,
    &operand_data[894],
    2,
    1,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14211 */
  {
    "*bswapsi_movbe",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_511 },
#else
    { 0, output_511, 0 },
#endif
    0,
    &operand_data[896],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/i386.md:14226 */
  {
    "*bswapsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bswap\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[898],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14234 */
  {
    "*bswaphi_lowpart_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_513 },
#else
    { 0, output_513, 0 },
#endif
    0,
    &operand_data[900],
    1,
    1,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:14245 */
  {
    "bswaphi_lowpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{w}\t{$8, %0|%0, 8}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bswaphi_lowpart,
    &operand_data[71],
    1,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14341 */
  {
    "clzhi2_abm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lzcnt{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzhi2_abm,
    &operand_data[892],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14351 */
  {
    "*bsrhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[892],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14390 */
  {
    "paritydi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_paritydi2_cmp,
    &operand_data[901],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14439 */
  {
    "paritysi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_paritysi2_cmp,
    &operand_data[905],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14462 */
  {
    "*parityhi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h0, %b0|%b0, %h0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14471 */
  {
    "*parityqi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[910],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14484 */
  {
    "*tls_global_dynamic_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@tlsgd(,%1,1), %0|%0, %a2@tlsgd[%1*1]}\n\tcall\t%P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[911],
    6,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14553 */
  {
    "*tls_local_dynamic_base_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%&@tlsldm(%1), %0|%0, %&@tlsldm[%1]}\n\tcall\t%P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[917],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14619 */
  {
    "*tls_local_dynamic_32_once",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[922],
    6,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14643 */
  {
    "*load_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:0, %0|%0, DWORD PTR gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14654 */
  {
    "*add_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%%gs:0, %0|%0, DWORD PTR gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[898],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14711 */
  {
    "*tls_dynamic_lea_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSDESC(%1), %0|%0, %a2@TLSDESC[%1]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[928],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14724 */
  {
    "*tls_dynamic_call_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t{*%a1@TLSCALL(%2)|[DWORD PTR [%2+%a1@TLSCALL]]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[931],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14739 */
  {
    "*tls_dynamic_gnu2_combine_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[935],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14832 */
  {
    "*fop_sf_comm_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_529 },
#else
    { 0, 0, output_529 },
#endif
    0,
    &operand_data[940],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:14832 */
  {
    "*fop_df_comm_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_530 },
#else
    { 0, 0, output_530 },
#endif
    0,
    &operand_data[944],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:14852 */
  {
    "*fop_sf_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_531 },
#else
    { 0, 0, output_531 },
#endif
    0,
    &operand_data[948],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:14852 */
  {
    "*fop_df_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_532 },
#else
    { 0, 0, output_532 },
#endif
    0,
    &operand_data[952],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:14871 */
  {
    "*fop_sf_comm_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_533 },
#else
    { 0, 0, output_533 },
#endif
    0,
    &operand_data[956],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14871 */
  {
    "*fop_df_comm_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_534 },
#else
    { 0, 0, output_534 },
#endif
    0,
    &operand_data[960],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14887 */
  {
    "*fop_sf_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_535 },
#else
    { 0, 0, output_535 },
#endif
    0,
    &operand_data[964],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14887 */
  {
    "*fop_df_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_536 },
#else
    { 0, 0, output_536 },
#endif
    0,
    &operand_data[968],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14902 */
  {
    "*fop_sf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_537 },
#else
    { 0, 0, output_537 },
#endif
    0,
    &operand_data[972],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14902 */
  {
    "*fop_df_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_538 },
#else
    { 0, 0, output_538 },
#endif
    0,
    &operand_data[976],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14917 */
  {
    "*fop_sf_1_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_539 },
#else
    { 0, 0, output_539 },
#endif
    0,
    &operand_data[980],
    4,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:14917 */
  {
    "*fop_df_1_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_540 },
#else
    { 0, 0, output_540 },
#endif
    0,
    &operand_data[984],
    4,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:14944 */
  {
    "*fop_sf_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_541 },
#else
    { 0, 0, output_541 },
#endif
    0,
    &operand_data[988],
    4,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:14944 */
  {
    "*fop_df_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_542 },
#else
    { 0, 0, output_542 },
#endif
    0,
    &operand_data[992],
    4,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/i386.md:14970 */
  {
    "*rcpsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrcpss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[996],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:14981 */
  {
    "*fop_sf_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_544 },
#else
    { 0, 0, output_544 },
#endif
    0,
    &operand_data[998],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14981 */
  {
    "*fop_df_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_545 },
#else
    { 0, 0, output_545 },
#endif
    0,
    &operand_data[1002],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14999 */
  {
    "*fop_sf_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_546 },
#else
    { 0, 0, output_546 },
#endif
    0,
    &operand_data[1006],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:14999 */
  {
    "*fop_df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_547 },
#else
    { 0, 0, output_547 },
#endif
    0,
    &operand_data[1010],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:15017 */
  {
    "*fop_sf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_548 },
#else
    { 0, 0, output_548 },
#endif
    0,
    &operand_data[1014],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15017 */
  {
    "*fop_df_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_549 },
#else
    { 0, 0, output_549 },
#endif
    0,
    &operand_data[1018],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15037 */
  {
    "*fop_sf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_550 },
#else
    { 0, 0, output_550 },
#endif
    0,
    &operand_data[1022],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15037 */
  {
    "*fop_df_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_551 },
#else
    { 0, 0, output_551 },
#endif
    0,
    &operand_data[1026],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15037 */
  {
    "*fop_sf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_552 },
#else
    { 0, 0, output_552 },
#endif
    0,
    &operand_data[1030],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15037 */
  {
    "*fop_df_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_553 },
#else
    { 0, 0, output_553 },
#endif
    0,
    &operand_data[1034],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15057 */
  {
    "*fop_sf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_554 },
#else
    { 0, 0, output_554 },
#endif
    0,
    &operand_data[1038],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15057 */
  {
    "*fop_df_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_555 },
#else
    { 0, 0, output_555 },
#endif
    0,
    &operand_data[1042],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15057 */
  {
    "*fop_sf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_556 },
#else
    { 0, 0, output_556 },
#endif
    0,
    &operand_data[1046],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15057 */
  {
    "*fop_df_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_557 },
#else
    { 0, 0, output_557 },
#endif
    0,
    &operand_data[1050],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15077 */
  {
    "*fop_df_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_558 },
#else
    { 0, 0, output_558 },
#endif
    0,
    &operand_data[1054],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15096 */
  {
    "*fop_df_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_559 },
#else
    { 0, 0, output_559 },
#endif
    0,
    &operand_data[1058],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15114 */
  {
    "*fop_df_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_560 },
#else
    { 0, 0, output_560 },
#endif
    0,
    &operand_data[1062],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15133 */
  {
    "*fop_xf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_561 },
#else
    { 0, 0, output_561 },
#endif
    0,
    &operand_data[1066],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:15147 */
  {
    "*fop_xf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_562 },
#else
    { 0, 0, output_562 },
#endif
    0,
    &operand_data[1070],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15164 */
  {
    "*fop_xf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_563 },
#else
    { 0, 0, output_563 },
#endif
    0,
    &operand_data[1074],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15164 */
  {
    "*fop_xf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_564 },
#else
    { 0, 0, output_564 },
#endif
    0,
    &operand_data[1078],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15182 */
  {
    "*fop_xf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_565 },
#else
    { 0, 0, output_565 },
#endif
    0,
    &operand_data[1082],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15182 */
  {
    "*fop_xf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_566 },
#else
    { 0, 0, output_566 },
#endif
    0,
    &operand_data[1086],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15200 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_567 },
#else
    { 0, 0, output_567 },
#endif
    0,
    &operand_data[1090],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15200 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_568 },
#else
    { 0, 0, output_568 },
#endif
    0,
    &operand_data[1094],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15217 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_569 },
#else
    { 0, 0, output_569 },
#endif
    0,
    &operand_data[1098],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15217 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_570 },
#else
    { 0, 0, output_570 },
#endif
    0,
    &operand_data[1102],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15234 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_571 },
#else
    { 0, 0, output_571 },
#endif
    0,
    &operand_data[1106],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15234 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_572 },
#else
    { 0, 0, output_572 },
#endif
    0,
    &operand_data[1110],
    4,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:15299 */
  {
    "truncxfsf2_i387_noop_unspec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_573 },
#else
    { 0, 0, output_573 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop_unspec,
    &operand_data[190],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:15299 */
  {
    "truncxfdf2_i387_noop_unspec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_574 },
#else
    { 0, 0, output_574 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop_unspec,
    &operand_data[192],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:15308 */
  {
    "sqrtxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtxf2,
    &operand_data[682],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15318 */
  {
    "sqrt_extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrt_extendsfxf2_i387,
    &operand_data[686],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15318 */
  {
    "sqrt_extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrt_extenddfxf2_i387,
    &operand_data[688],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15330 */
  {
    "*rsqrtsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrsqrtss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[996],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15351 */
  {
    "*sqrtsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[996],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15351 */
  {
    "*sqrtdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtsd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1114],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15391 */
  {
    "fpremxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpremxf4_i387,
    &operand_data[1116],
    4,
    4,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15459 */
  {
    "fprem1xf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fprem1xf4_i387,
    &operand_data[1116],
    4,
    4,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15528 */
  {
    "*sinxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15537 */
  {
    "*sin_extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[686],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15537 */
  {
    "*sin_extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[688],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15550 */
  {
    "*cosxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15559 */
  {
    "*cos_extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[686],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15559 */
  {
    "*cos_extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[688],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15578 */
  {
    "sincosxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincosxf3,
    &operand_data[1116],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15612 */
  {
    "sincos_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincos_extendsfxf3_i387,
    &operand_data[1120],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15612 */
  {
    "sincos_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincos_extenddfxf3_i387,
    &operand_data[1123],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15669 */
  {
    "fptanxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptanxf4_i387,
    &operand_data[1126],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15682 */
  {
    "fptan_extendsfxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptan_extendsfxf4_i387,
    &operand_data[1130],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15682 */
  {
    "fptan_extenddfxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptan_extenddfxf4_i387,
    &operand_data[1134],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15730 */
  {
    "*fpatanxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15742 */
  {
    "fpatan_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpatan_extendsfxf3_i387,
    &operand_data[1142],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15742 */
  {
    "fpatan_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpatan_extenddfxf3_i387,
    &operand_data[1146],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15903 */
  {
    "fyl2xxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xxf3_i387,
    &operand_data[1138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15915 */
  {
    "fyl2x_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_extendsfxf3_i387,
    &operand_data[1150],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:15915 */
  {
    "fyl2x_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_extenddfxf3_i387,
    &operand_data[1154],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16020 */
  {
    "fyl2xp1xf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1xf3_i387,
    &operand_data[1138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16032 */
  {
    "fyl2xp1_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_extendsfxf3_i387,
    &operand_data[1150],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16032 */
  {
    "fyl2xp1_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_extenddfxf3_i387,
    &operand_data[1154],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16082 */
  {
    "fxtractxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtractxf3_i387,
    &operand_data[1116],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16094 */
  {
    "fxtract_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtract_extendsfxf3_i387,
    &operand_data[1120],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16094 */
  {
    "fxtract_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtract_extenddfxf3_i387,
    &operand_data[1123],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16177 */
  {
    "*f2xm1xf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "f2xm1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16187 */
  {
    "*fscalexf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fscale",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1116],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16524 */
  {
    "sse4_1_roundsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundss\t{%2, %1, %d0|%d0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundsf2,
    &operand_data[1158],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16524 */
  {
    "sse4_1_rounddf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundsd\t{%2, %1, %d0|%d0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_rounddf2,
    &operand_data[1161],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16536 */
  {
    "rintxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frndint",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rintxf2,
    &operand_data[682],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16595 */
  {
    "*fistdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1164],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:16618 */
  {
    "fistdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_613 },
#else
    { 0, 0, output_613 },
#endif
    (insn_gen_fn) gen_fistdi2,
    &operand_data[1166],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:16628 */
  {
    "fistdi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_with_temp,
    &operand_data[1169],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:16662 */
  {
    "*fisthi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[271],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:16662 */
  {
    "*fistsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[298],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:16680 */
  {
    "fisthi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_617 },
#else
    { 0, 0, output_617 },
#endif
    (insn_gen_fn) gen_fisthi2,
    &operand_data[1173],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:16680 */
  {
    "fistsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_618 },
#else
    { 0, 0, output_618 },
#endif
    (insn_gen_fn) gen_fistsi2,
    &operand_data[1175],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:16689 */
  {
    "fisthi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_with_temp,
    &operand_data[1177],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16689 */
  {
    "fistsi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_with_temp,
    &operand_data[1180],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16747 */
  {
    "frndintxf2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor,
    &operand_data[1183],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:16772 */
  {
    "frndintxf2_floor_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor_i387,
    &operand_data[1185],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:16838 */
  {
    "*fisthi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1189],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:16838 */
  {
    "*fistsi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:16838 */
  {
    "*fistdi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1164],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:16870 */
  {
    "fistdi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_626 },
#else
    { 0, 0, output_626 },
#endif
    (insn_gen_fn) gen_fistdi2_floor,
    &operand_data[1193],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:16884 */
  {
    "fistdi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_floor_with_temp,
    &operand_data[1198],
    6,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:16930 */
  {
    "fisthi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_628 },
#else
    { 0, 0, output_628 },
#endif
    (insn_gen_fn) gen_fisthi2_floor,
    &operand_data[1204],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:16930 */
  {
    "fistsi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_629 },
#else
    { 0, 0, output_629 },
#endif
    (insn_gen_fn) gen_fistsi2_floor,
    &operand_data[1208],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:16943 */
  {
    "fisthi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_floor_with_temp,
    &operand_data[1212],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:16943 */
  {
    "fistsi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_floor_with_temp,
    &operand_data[1217],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:17009 */
  {
    "frndintxf2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil,
    &operand_data[1183],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17034 */
  {
    "frndintxf2_ceil_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil_i387,
    &operand_data[1185],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17100 */
  {
    "*fisthi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1189],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17100 */
  {
    "*fistsi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17100 */
  {
    "*fistdi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1164],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17132 */
  {
    "fistdi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_637 },
#else
    { 0, 0, output_637 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil,
    &operand_data[1193],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:17146 */
  {
    "fistdi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil_with_temp,
    &operand_data[1198],
    6,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:17192 */
  {
    "fisthi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_639 },
#else
    { 0, 0, output_639 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil,
    &operand_data[1204],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:17192 */
  {
    "fistsi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_640 },
#else
    { 0, 0, output_640 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil,
    &operand_data[1208],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:17205 */
  {
    "fisthi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil_with_temp,
    &operand_data[1212],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:17205 */
  {
    "fistsi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil_with_temp,
    &operand_data[1217],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:17269 */
  {
    "frndintxf2_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc,
    &operand_data[1183],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17294 */
  {
    "frndintxf2_trunc_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc_i387,
    &operand_data[1185],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17361 */
  {
    "frndintxf2_mask_pm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm,
    &operand_data[1183],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17386 */
  {
    "frndintxf2_mask_pm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfclex\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm_i387,
    &operand_data[1185],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17428 */
  {
    "fxamsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamsf2_i387,
    &operand_data[30],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17428 */
  {
    "fxamdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamdf2_i387,
    &operand_data[33],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17428 */
  {
    "fxamxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamxf2_i387,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17440 */
  {
    "fxamsf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamsf2_i387_with_temp,
    &operand_data[1222],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17440 */
  {
    "fxamdf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamdf2_i387_with_temp,
    &operand_data[1224],
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17543 */
  {
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cld,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/i386.md:17640 */
  {
    "*strmovsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1226],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17670 */
  {
    "*strmovhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1226],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17700 */
  {
    "*strmovqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1226],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17762 */
  {
    "*rep_movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep movs{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1230],
    6,
    4,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17800 */
  {
    "*rep_movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1230],
    6,
    4,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17915 */
  {
    "*strsetsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stos{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1236],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17939 */
  {
    "*strsethi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1239],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:17963 */
  {
    "*strsetqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1242],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18015 */
  {
    "*rep_stossi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep stos{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1245],
    5,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18049 */
  {
    "*rep_stosqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1250],
    5,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18181 */
  {
    "*cmpstrnqi_nz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1255],
    7,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18229 */
  {
    "*cmpstrnqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1255],
    7,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18299 */
  {
    "*strlenqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repnz scasb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1262],
    6,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18436 */
  {
    "*x86_movsicc_0_m1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1268],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18455 */
  {
    "*x86_movsicc_0_m1_se",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1268],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18472 */
  {
    "*x86_movsicc_0_m1_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1268],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18486 */
  {
    "*movhicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_669 },
#else
    { 0, output_669, 0 },
#endif
    0,
    &operand_data[1270],
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:18486 */
  {
    "*movsicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_670 },
#else
    { 0, output_670, 0 },
#endif
    0,
    &operand_data[1274],
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:18499 */
  {
    "*movqicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1278],
    5,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/i386.md:18529 */
  {
    "*movsfcc_1_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_672 },
#else
    { 0, output_672, 0 },
#endif
    0,
    &operand_data[1283],
    4,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/i386.md:18545 */
  {
    "*movdfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_673 },
#else
    { 0, output_673, 0 },
#endif
    0,
    &operand_data[1287],
    4,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/i386.md:18596 */
  {
    "*movxfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_674 },
#else
    { 0, output_674, 0 },
#endif
    0,
    &operand_data[1291],
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:18613 */
  {
    "*xop_pcmov_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%1, %3, %2, %0|%0, %2, %3, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1295],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18613 */
  {
    "*xop_pcmov_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%1, %3, %2, %0|%0, %2, %3, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1299],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18628 */
  {
    "*avx_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[956],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18628 */
  {
    "*avx_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[956],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18628 */
  {
    "*avx_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[960],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18628 */
  {
    "*avx_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[960],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18639 */
  {
    "smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxsf3,
    &operand_data[964],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18639 */
  {
    "sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminsf3,
    &operand_data[964],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18639 */
  {
    "smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxdf3,
    &operand_data[968],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18639 */
  {
    "smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smindf3,
    &operand_data[968],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18655 */
  {
    "*avx_ieee_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[998],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18655 */
  {
    "*avx_ieee_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1002],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18667 */
  {
    "*ieee_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1006],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18667 */
  {
    "*ieee_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1010],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18678 */
  {
    "*avx_ieee_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1006],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18678 */
  {
    "*avx_ieee_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1010],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18690 */
  {
    "*ieee_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1006],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18690 */
  {
    "*ieee_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1010],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:18748 */
  {
    "pro_epilogue_adjust_stack_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_693 },
#else
    { 0, 0, output_693 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_1,
    &operand_data[1303],
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/i386/i386.md:18875 */
  {
    "allocate_stack_worker_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t___chkstk",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_32,
    &operand_data[1306],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20056 */
  {
    "*call_value_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_695 },
#else
    { 0, 0, output_695 },
#endif
    0,
    &operand_data[868],
    4,
    0,
    0,
    3
  },
  /* ../../gcc/config/i386/i386.md:20072 */
  {
    "*call_value_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_696 },
#else
    { 0, 0, output_696 },
#endif
    0,
    &operand_data[1308],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:20087 */
  {
    "*sibcall_value_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_697 },
#else
    { 0, output_697, 0 },
#endif
    0,
    &operand_data[1312],
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:20100 */
  {
    "*call_value_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_698 },
#else
    { 0, 0, output_698 },
#endif
    0,
    &operand_data[868],
    3,
    0,
    0,
    3
  },
  /* ../../gcc/config/i386/i386.md:20152 */
  {
    "*call_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_699 },
#else
    { 0, 0, output_699 },
#endif
    0,
    &operand_data[1308],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:20164 */
  {
    "*sibcall_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_700 },
#else
    { 0, output_700, 0 },
#endif
    0,
    &operand_data[1312],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/i386.md:20235 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_701 },
#else
    { 0, 0, output_701 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc/config/i386/i386.md:20333 */
  {
    "*prefetch_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_702 },
#else
    { 0, 0, output_702 },
#endif
    0,
    &operand_data[1316],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:20373 */
  {
    "*prefetch_3dnow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_703 },
#else
    { 0, 0, output_703 },
#endif
    0,
    &operand_data[1318],
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/i386.md:20424 */
  {
    "stack_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %2|%2, %1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_si,
    &operand_data[1320],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20442 */
  {
    "stack_tls_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:%P1, %2|%2, DWORD PTR gs:%P1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_si,
    &operand_data[1323],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20495 */
  {
    "stack_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_si,
    &operand_data[1326],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20515 */
  {
    "stack_tls_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%%gs:%P2, %3|%3, DWORD PTR gs:%P2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_si,
    &operand_data[1330],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20543 */
  {
    "sse4_2_crc32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32qi,
    &operand_data[1334],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20543 */
  {
    "sse4_2_crc32hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32hi,
    &operand_data[1337],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20543 */
  {
    "sse4_2_crc32si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32si,
    &operand_data[1340],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20613 */
  {
    "*rdpmc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdpmc",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1343],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20659 */
  {
    "*rdtsc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdtsc",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20718 */
  {
    "*rdtscp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdtscp",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1345],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20752 */
  {
    "*lwp_llwpcbsi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "llwpcb\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[726],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20773 */
  {
    "lwp_slwpcbsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slwpcb\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lwp_slwpcbsi,
    &operand_data[55],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20791 */
  {
    "*lwp_lwpvalsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwpval\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1347],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/i386.md:20814 */
  {
    "*lwp_lwpinssi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwpins\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1347],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:100 */
  {
    "*movv8qi_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_718 },
#else
    { 0, output_718, 0 },
#endif
    0,
    &operand_data[1350],
    2,
    0,
    10,
    2
  },
  /* ../../gcc/config/i386/mmx.md:100 */
  {
    "*movv4hi_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_719 },
#else
    { 0, output_719, 0 },
#endif
    0,
    &operand_data[1352],
    2,
    0,
    10,
    2
  },
  /* ../../gcc/config/i386/mmx.md:100 */
  {
    "*movv2si_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_720 },
#else
    { 0, output_720, 0 },
#endif
    0,
    &operand_data[1354],
    2,
    0,
    10,
    2
  },
  /* ../../gcc/config/i386/mmx.md:100 */
  {
    "*movv1di_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_721 },
#else
    { 0, output_721, 0 },
#endif
    0,
    &operand_data[1356],
    2,
    0,
    10,
    2
  },
  /* ../../gcc/config/i386/mmx.md:127 */
  {
    "*movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_722 },
#else
    { 0, output_722, 0 },
#endif
    0,
    &operand_data[1358],
    2,
    0,
    14,
    2
  },
  /* ../../gcc/config/i386/mmx.md:127 */
  {
    "*movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_723 },
#else
    { 0, output_723, 0 },
#endif
    0,
    &operand_data[1360],
    2,
    0,
    14,
    2
  },
  /* ../../gcc/config/i386/mmx.md:127 */
  {
    "*movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_724 },
#else
    { 0, output_724, 0 },
#endif
    0,
    &operand_data[1362],
    2,
    0,
    14,
    2
  },
  /* ../../gcc/config/i386/mmx.md:127 */
  {
    "*movv1di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_725 },
#else
    { 0, output_725, 0 },
#endif
    0,
    &operand_data[1364],
    2,
    0,
    14,
    2
  },
  /* ../../gcc/config/i386/mmx.md:221 */
  {
    "*movv2sf_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_726 },
#else
    { 0, output_726, 0 },
#endif
    0,
    &operand_data[1366],
    2,
    0,
    11,
    2
  },
  /* ../../gcc/config/i386/mmx.md:249 */
  {
    "*movv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_727 },
#else
    { 0, output_727, 0 },
#endif
    0,
    &operand_data[1366],
    2,
    0,
    11,
    2
  },
  /* ../../gcc/config/i386/mmx.md:300 */
  {
    "sse_movntdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntdi,
    &operand_data[1368],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:323 */
  {
    "*mmx_addv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfadd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:347 */
  {
    "*mmx_subv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_730 },
#else
    { 0, output_730, 0 },
#endif
    0,
    &operand_data[1373],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/mmx.md:366 */
  {
    "*mmx_mulv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmul\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:392 */
  {
    "*mmx_smaxv2sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:392 */
  {
    "*mmx_sminv2sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:404 */
  {
    "*mmx_smaxv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1376],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:404 */
  {
    "*mmx_sminv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1376],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:415 */
  {
    "mmx_rcpv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcp\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpv2sf2,
    &operand_data[1379],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:425 */
  {
    "mmx_rcpit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit1v2sf3,
    &operand_data[1376],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:436 */
  {
    "mmx_rcpit2v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit2\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit2v2sf3,
    &operand_data[1376],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:447 */
  {
    "mmx_rsqrtv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqrt\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqrtv2sf2,
    &operand_data[1379],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:457 */
  {
    "mmx_rsqit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqit1v2sf3,
    &operand_data[1376],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:468 */
  {
    "mmx_haddv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_haddv2sf3,
    &operand_data[1376],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:487 */
  {
    "mmx_hsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_hsubv2sf3,
    &operand_data[1376],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:506 */
  {
    "mmx_addsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfpnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addsubv2sf3,
    &operand_data[1376],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:533 */
  {
    "*mmx_eqv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpeq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1381],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:543 */
  {
    "mmx_gtv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpgt\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2sf3,
    &operand_data[1384],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:553 */
  {
    "mmx_gev2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpge\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gev2sf3,
    &operand_data[1384],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:569 */
  {
    "mmx_pf2id",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2id\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2id,
    &operand_data[1387],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:578 */
  {
    "mmx_pf2iw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2iw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2iw,
    &operand_data[1387],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:590 */
  {
    "mmx_pi2fw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pi2fw,
    &operand_data[1389],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:602 */
  {
    "mmx_floatv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_floatv2si2,
    &operand_data[1389],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:617 */
  {
    "mmx_pswapdv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2sf2,
    &operand_data[1379],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:627 */
  {
    "*vec_dupv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1391],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:636 */
  {
    "*mmx_concatv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_753 },
#else
    { 0, output_753, 0 },
#endif
    0,
    &operand_data[1393],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/mmx.md:661 */
  {
    "*vec_extractv2sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1396],
    2,
    0,
    6,
    1
  },
  /* ../../gcc/config/i386/mmx.md:682 */
  {
    "*vec_extractv2sf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_755 },
#else
    { 0, output_755, 0 },
#endif
    0,
    &operand_data[1398],
    2,
    0,
    6,
    2
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_addv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_subv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1415],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_addv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1418],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:745 */
  {
    "*mmx_subv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1421],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:764 */
  {
    "*mmx_ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:781 */
  {
    "*mmx_mulv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:803 */
  {
    "*mmx_smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:831 */
  {
    "*mmx_umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:869 */
  {
    "*mmx_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1424],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:909 */
  {
    "*mmx_pmulhrwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:942 */
  {
    "*sse2_umulv1siv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1427],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:966 */
  {
    "*mmx_smaxv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:966 */
  {
    "*mmx_sminv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:985 */
  {
    "*mmx_umaxv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:985 */
  {
    "*mmx_uminv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:996 */
  {
    "mmx_ashrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv4hi3,
    &operand_data[1430],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:996 */
  {
    "mmx_ashrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv2si3,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1010 */
  {
    "mmx_lshrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv4hi3,
    &operand_data[1430],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1010 */
  {
    "mmx_lshrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv2si3,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1010 */
  {
    "mmx_lshrv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv1di3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1024 */
  {
    "mmx_ashlv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv4hi3,
    &operand_data[1430],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1024 */
  {
    "mmx_ashlv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv2si3,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1024 */
  {
    "mmx_ashlv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv1di3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1052 */
  {
    "*mmx_eqv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1052 */
  {
    "*mmx_eqv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1052 */
  {
    "*mmx_eqv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1062 */
  {
    "mmx_gtv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv8qi3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1062 */
  {
    "mmx_gtv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv4hi3,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1062 */
  {
    "mmx_gtv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2si3,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1078 */
  {
    "mmx_andnotv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv8qi3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1078 */
  {
    "mmx_andnotv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv4hi3,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1078 */
  {
    "mmx_andnotv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv2si3,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1096 */
  {
    "*mmx_xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1112 */
  {
    "mmx_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packsswb,
    &operand_data[1448],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1124 */
  {
    "mmx_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packssdw,
    &operand_data[1451],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1136 */
  {
    "mmx_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packuswb,
    &operand_data[1448],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1148 */
  {
    "mmx_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhbw,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1163 */
  {
    "mmx_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklbw,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1178 */
  {
    "mmx_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhwd,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1191 */
  {
    "mmx_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklwd,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1204 */
  {
    "mmx_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhdq,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1217 */
  {
    "mmx_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckldq,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1243 */
  {
    "*mmx_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_817 },
#else
    { 0, 0, output_817 },
#endif
    0,
    &operand_data[1454],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/mmx.md:1262 */
  {
    "mmx_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pextrw,
    &operand_data[1458],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1289 */
  {
    "mmx_pshufw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_819 },
#else
    { 0, 0, output_819 },
#endif
    (insn_gen_fn) gen_mmx_pshufw_1,
    &operand_data[1461],
    6,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/mmx.md:1312 */
  {
    "mmx_pswapdv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2si2,
    &operand_data[1467],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1323 */
  {
    "*vec_dupv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufw\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1469],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1334 */
  {
    "*vec_dupv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1471],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1343 */
  {
    "*mmx_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_823 },
#else
    { 0, output_823, 0 },
#endif
    0,
    &operand_data[1473],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/mmx.md:1368 */
  {
    "*vec_extractv2si_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1476],
    2,
    0,
    5,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1389 */
  {
    "*vec_extractv2si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_825 },
#else
    { 0, output_825, 0 },
#endif
    0,
    &operand_data[1478],
    2,
    0,
    7,
    2
  },
  /* ../../gcc/config/i386/mmx.md:1526 */
  {
    "*mmx_uavgv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_826 },
#else
    { 0, 0, output_826 },
#endif
    0,
    &operand_data[1400],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/mmx.md:1575 */
  {
    "*mmx_uavgv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1594 */
  {
    "mmx_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_psadbw,
    &operand_data[1480],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1604 */
  {
    "mmx_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmovmskb,
    &operand_data[1483],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1622 */
  {
    "*mmx_maskmovq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovq\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1485],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1670 */
  {
    "*mmx_emms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "emms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1488],
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/mmx.md:1703 */
  {
    "*mmx_femms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "femms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1488],
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_833 },
#else
    { 0, 0, output_833 },
#endif
    0,
    &operand_data[1489],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_834 },
#else
    { 0, 0, output_834 },
#endif
    0,
    &operand_data[1491],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_835 },
#else
    { 0, 0, output_835 },
#endif
    0,
    &operand_data[1493],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_836 },
#else
    { 0, 0, output_836 },
#endif
    0,
    &operand_data[1495],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv1ti_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_837 },
#else
    { 0, 0, output_837 },
#endif
    0,
    &operand_data[1497],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_838 },
#else
    { 0, 0, output_838 },
#endif
    0,
    &operand_data[1499],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv2df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_839 },
#else
    { 0, 0, output_839 },
#endif
    0,
    &operand_data[1501],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv32qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_840 },
#else
    { 0, 0, output_840 },
#endif
    0,
    &operand_data[1503],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv16hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_841 },
#else
    { 0, 0, output_841 },
#endif
    0,
    &operand_data[1505],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv8si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_842 },
#else
    { 0, 0, output_842 },
#endif
    0,
    &operand_data[1507],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv4di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_843 },
#else
    { 0, 0, output_843 },
#endif
    0,
    &operand_data[1509],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv8sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_844 },
#else
    { 0, 0, output_844 },
#endif
    0,
    &operand_data[1511],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:177 */
  {
    "*avx_movv4df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_845 },
#else
    { 0, 0, output_845 },
#endif
    0,
    &operand_data[1513],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:221 */
  {
    "*movv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_846 },
#else
    { 0, 0, output_846 },
#endif
    0,
    &operand_data[1489],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:221 */
  {
    "*movv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_847 },
#else
    { 0, 0, output_847 },
#endif
    0,
    &operand_data[1491],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:221 */
  {
    "*movv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_848 },
#else
    { 0, 0, output_848 },
#endif
    0,
    &operand_data[1493],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:221 */
  {
    "*movv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_849 },
#else
    { 0, 0, output_849 },
#endif
    0,
    &operand_data[1495],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:221 */
  {
    "*movv1ti_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_850 },
#else
    { 0, 0, output_850 },
#endif
    0,
    &operand_data[1497],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:221 */
  {
    "*movv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_851 },
#else
    { 0, 0, output_851 },
#endif
    0,
    &operand_data[1499],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:221 */
  {
    "*movv2df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_852 },
#else
    { 0, 0, output_852 },
#endif
    0,
    &operand_data[1501],
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:271 */
  {
    "movdi_to_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdi_to_sse,
    &operand_data[1515],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:357 */
  {
    "avx_movups",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movups,
    &operand_data[1518],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:357 */
  {
    "avx_movupd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movupd,
    &operand_data[1520],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:357 */
  {
    "avx_movups256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movups256,
    &operand_data[1522],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:357 */
  {
    "avx_movupd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movupd256,
    &operand_data[1524],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:370 */
  {
    "sse2_movq128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movq128,
    &operand_data[1526],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:383 */
  {
    "sse_movups",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movups,
    &operand_data[1518],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:383 */
  {
    "sse2_movupd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movupd,
    &operand_data[1520],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:395 */
  {
    "avx_movdqu256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movdqu256,
    &operand_data[1528],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:395 */
  {
    "avx_movdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movdqu,
    &operand_data[1530],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:407 */
  {
    "sse2_movdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movdqu,
    &operand_data[1530],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:418 */
  {
    "avx_movntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv4sf,
    &operand_data[1532],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:418 */
  {
    "avx_movntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv2df,
    &operand_data[1534],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:418 */
  {
    "avx_movntv8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv8sf,
    &operand_data[1536],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:418 */
  {
    "avx_movntv4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv4df,
    &operand_data[1538],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:429 */
  {
    "sse_movntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntv4sf,
    &operand_data[1532],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:429 */
  {
    "sse2_movntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2df,
    &operand_data[1534],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:439 */
  {
    "avx_movntv4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv4di,
    &operand_data[1540],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:439 */
  {
    "avx_movntv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv2di,
    &operand_data[1542],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:450 */
  {
    "sse2_movntv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2di,
    &operand_data[1542],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:460 */
  {
    "sse2_movntsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movnti\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntsi,
    &operand_data[1544],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:470 */
  {
    "avx_lddqu256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vlddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_lddqu256,
    &operand_data[1546],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:470 */
  {
    "avx_lddqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vlddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_lddqu,
    &operand_data[1548],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:482 */
  {
    "sse3_lddqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_lddqu,
    &operand_data[1548],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1553],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_addv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_subv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1559],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_addv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_subv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1565],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_addv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:549 */
  {
    "*avx_subv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:569 */
  {
    "*addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:569 */
  {
    "*subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1577],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:569 */
  {
    "*addv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:569 */
  {
    "*subv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:580 */
  {
    "*avx_vmaddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:580 */
  {
    "*avx_vmsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:580 */
  {
    "*avx_vmaddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:580 */
  {
    "*avx_vmsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:594 */
  {
    "sse_vmaddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmaddv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:594 */
  {
    "sse_vmsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsubv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:594 */
  {
    "sse2_vmaddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmaddv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:594 */
  {
    "sse2_vmsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsubv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:615 */
  {
    "*avx_mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:615 */
  {
    "*avx_mulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:615 */
  {
    "*avx_mulv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:615 */
  {
    "*avx_mulv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:635 */
  {
    "*mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:635 */
  {
    "*mulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:646 */
  {
    "*avx_vmmulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:646 */
  {
    "*avx_vmmulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:660 */
  {
    "sse_vmmulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmulv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:660 */
  {
    "sse2_vmmulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmulv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:698 */
  {
    "avx_divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv4sf3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:698 */
  {
    "avx_divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv2df3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:698 */
  {
    "avx_divv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv8sf3,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:698 */
  {
    "avx_divv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv4df3,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:732 */
  {
    "*avx_divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:732 */
  {
    "*avx_divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:743 */
  {
    "sse_divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_divv4sf3,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:743 */
  {
    "sse2_divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_divv2df3,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:753 */
  {
    "*avx_vmdivv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:753 */
  {
    "*avx_vmdivv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:767 */
  {
    "sse_vmdivv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmdivv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:767 */
  {
    "sse2_vmdivv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmdivv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:780 */
  {
    "avx_rcpv8sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrcpps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_rcpv8sf2,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:790 */
  {
    "sse_rcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrcpps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rcpv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:801 */
  {
    "*avx_vmrcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrcpss\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:814 */
  {
    "sse_vmrcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcpss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrcpv4sf2,
    &operand_data[1609],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:841 */
  {
    "avx_sqrtv8sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_sqrtv8sf2,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:864 */
  {
    "sse_sqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_sqrtv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:874 */
  {
    "sqrtv4df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv4df2,
    &operand_data[1612],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:883 */
  {
    "sqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv2df2,
    &operand_data[1614],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:892 */
  {
    "*avx_vmsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtss\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:892 */
  {
    "*avx_vmsqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtsd\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1614],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:905 */
  {
    "sse_vmsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsqrtv4sf2,
    &operand_data[1609],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:905 */
  {
    "sse2_vmsqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsqrtv2df2,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:928 */
  {
    "avx_rsqrtv8sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_rsqrtv8sf2,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:948 */
  {
    "sse_rsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rsqrtv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:958 */
  {
    "*avx_vmrsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrsqrtss\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:971 */
  {
    "sse_vmrsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrsqrtv4sf2,
    &operand_data[1609],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_smaxv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_sminv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_smaxv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_sminv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_smaxv8sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_sminv8sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_smaxv4df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1011 */
  {
    "*avx_sminv4df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1023 */
  {
    "*smaxv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1023 */
  {
    "*sminv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1023 */
  {
    "*smaxv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1023 */
  {
    "*sminv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_smaxv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_sminv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_smaxv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1034 */
  {
    "*avx_sminv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1045 */
  {
    "*smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1045 */
  {
    "*sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1045 */
  {
    "*smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1045 */
  {
    "*sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1055 */
  {
    "*avx_vmsmaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1055 */
  {
    "*avx_vmsminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1055 */
  {
    "*avx_vmsmaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1055 */
  {
    "*avx_vmsminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1069 */
  {
    "sse_vmsmaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsmaxv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1069 */
  {
    "sse_vmsminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsminv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1069 */
  {
    "sse2_vmsmaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsmaxv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1069 */
  {
    "sse2_vmsminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsminv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1088 */
  {
    "*avx_ieee_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1088 */
  {
    "*avx_ieee_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1088 */
  {
    "*avx_ieee_sminv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1088 */
  {
    "*avx_ieee_sminv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1100 */
  {
    "*avx_ieee_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1100 */
  {
    "*avx_ieee_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1100 */
  {
    "*avx_ieee_smaxv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1100 */
  {
    "*avx_ieee_smaxv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1112 */
  {
    "*ieee_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1112 */
  {
    "*ieee_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1123 */
  {
    "*ieee_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1123 */
  {
    "*ieee_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1134 */
  {
    "avx_addsubv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_addsubv8sf3,
    &operand_data[1598],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1148 */
  {
    "avx_addsubv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_addsubv4df3,
    &operand_data[1601],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1162 */
  {
    "*avx_addsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1176 */
  {
    "sse3_addsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv4sf3,
    &operand_data[1592],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1190 */
  {
    "*avx_addsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1204 */
  {
    "sse3_addsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv2df3,
    &operand_data[1595],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1218 */
  {
    "avx_haddv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_haddv4df3,
    &operand_data[1601],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1218 */
  {
    "avx_hsubv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_hsubv4df3,
    &operand_data[1601],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1245 */
  {
    "avx_haddv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_haddv8sf3,
    &operand_data[1598],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1245 */
  {
    "avx_hsubv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_hsubv8sf3,
    &operand_data[1598],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1288 */
  {
    "*avx_haddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1288 */
  {
    "*avx_hsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1315 */
  {
    "sse3_haddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv4sf3,
    &operand_data[1592],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1315 */
  {
    "sse3_hsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv4sf3,
    &operand_data[1592],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1343 */
  {
    "*avx_haddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1343 */
  {
    "*avx_hsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1362 */
  {
    "sse3_haddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv2df3,
    &operand_data[1595],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1362 */
  {
    "sse3_hsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv2df3,
    &operand_data[1595],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1429 */
  {
    "avx_cmppsv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppsv4sf3,
    &operand_data[1620],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1429 */
  {
    "avx_cmppdv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppdv2df3,
    &operand_data[1624],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1429 */
  {
    "avx_cmppsv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppsv8sf3,
    &operand_data[1628],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1429 */
  {
    "avx_cmppdv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppdv4df3,
    &operand_data[1632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1443 */
  {
    "avx_cmpssv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmpssv4sf3,
    &operand_data[1636],
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1443 */
  {
    "avx_cmpsdv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmpsdv2df3,
    &operand_data[1640],
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1462 */
  {
    "*avx_maskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1644],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1462 */
  {
    "*avx_maskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1648],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1462 */
  {
    "*avx_maskcmpv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1652],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1462 */
  {
    "*avx_maskcmpv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1656],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1474 */
  {
    "sse_maskcmpsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_maskcmpsf3,
    &operand_data[1660],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1474 */
  {
    "sse2_maskcmpdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_maskcmpdf3,
    &operand_data[1664],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1474 */
  {
    "sse_maskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_maskcmpv4sf3,
    &operand_data[1668],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1474 */
  {
    "sse2_maskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3pd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_maskcmpv2df3,
    &operand_data[1672],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1486 */
  {
    "sse_vmmaskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmaskcmpv4sf3,
    &operand_data[1668],
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1486 */
  {
    "sse2_vmmaskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmaskcmpv2df3,
    &operand_data[1672],
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1500 */
  {
    "sse_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcomiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_comi,
    &operand_data[1587],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1500 */
  {
    "sse2_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcomisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_comi,
    &operand_data[1590],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1520 */
  {
    "sse_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vucomiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ucomi,
    &operand_data[1587],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1520 */
  {
    "sse2_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vucomisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ucomi,
    &operand_data[1590],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1561 */
  {
    "avx_andnotv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv4sf3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1561 */
  {
    "avx_andnotv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv2df3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1561 */
  {
    "avx_andnotv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv8sf3,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1561 */
  {
    "avx_andnotv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv4df3,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1573 */
  {
    "sse_andnotv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_andnotv4sf3,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1573 */
  {
    "sse2_andnotv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv2df3,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_andv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_iorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_xorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_andv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_iorv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_xorv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_andv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_iorv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1592 */
  {
    "*avx_xorv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1612 */
  {
    "*andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1612 */
  {
    "*iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1612 */
  {
    "*xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1612 */
  {
    "*andv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1612 */
  {
    "*iorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1612 */
  {
    "*xorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1646 */
  {
    "*avx_andnotsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1295],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1646 */
  {
    "*avx_andnotdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1299],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1658 */
  {
    "*andnotsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1658 */
  {
    "*andnotdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1669 */
  {
    "*avx_andsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1295],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1669 */
  {
    "*avx_iorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1295],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1669 */
  {
    "*avx_xorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1295],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1669 */
  {
    "*avx_anddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1299],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1669 */
  {
    "*avx_iordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1299],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1669 */
  {
    "*avx_xordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1299],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1680 */
  {
    "*andsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1680 */
  {
    "*iorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1680 */
  {
    "*xorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1680 */
  {
    "*anddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1680 */
  {
    "*iordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1680 */
  {
    "*xordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:1709 */
  {
    "fma4_fmaddv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1709 */
  {
    "fma4_fmaddv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1722 */
  {
    "fma4_fmsubv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1722 */
  {
    "fma4_fmsubv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1736 */
  {
    "fma4_fnmaddv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmaddv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1736 */
  {
    "fma4_fnmaddv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmaddv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1749 */
  {
    "fma4_fnmsubv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmsubv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1749 */
  {
    "fma4_fnmsubv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmsubv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1762 */
  {
    "fma4_fmaddsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddsf4,
    &operand_data[1690],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1762 */
  {
    "fma4_fmadddf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmadddf4,
    &operand_data[1694],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1762 */
  {
    "fma4_fmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1762 */
  {
    "fma4_fmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1777 */
  {
    "fma4_vmfmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfmaddv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1777 */
  {
    "fma4_vmfmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfmaddv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1794 */
  {
    "fma4_fmsubsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubsf4,
    &operand_data[1690],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1794 */
  {
    "fma4_fmsubdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubdf4,
    &operand_data[1694],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1794 */
  {
    "fma4_fmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1794 */
  {
    "fma4_fmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1809 */
  {
    "fma4_vmfmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfmsubv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1809 */
  {
    "fma4_vmfmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfmsubv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1826 */
  {
    "fma4_fnmaddsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmaddsf4,
    &operand_data[1690],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1826 */
  {
    "fma4_fnmadddf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmadddf4,
    &operand_data[1694],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1826 */
  {
    "fma4_fnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmaddv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1826 */
  {
    "fma4_fnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmaddv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1841 */
  {
    "fma4_vmfnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfnmaddv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1841 */
  {
    "fma4_vmfnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfnmaddv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1858 */
  {
    "fma4_fnmsubsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmsubsf4,
    &operand_data[1690],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1858 */
  {
    "fma4_fnmsubdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmsubdf4,
    &operand_data[1694],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1858 */
  {
    "fma4_fnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmsubv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1858 */
  {
    "fma4_fnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fnmsubv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1874 */
  {
    "fma4_vmfnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfnmsubv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1874 */
  {
    "fma4_vmfnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_vmfnmsubv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1890 */
  {
    "fma4i_fmaddv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1890 */
  {
    "fma4i_fmaddv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1904 */
  {
    "fma4i_fmsubv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1904 */
  {
    "fma4i_fmsubv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1918 */
  {
    "fma4i_fnmaddv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmaddv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1918 */
  {
    "fma4i_fnmaddv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmaddv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1932 */
  {
    "fma4i_fnmsubv8sf4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmsubv8sf4256,
    &operand_data[1682],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1932 */
  {
    "fma4i_fnmsubv4df4256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmsubv4df4256,
    &operand_data[1686],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1947 */
  {
    "fma4i_fmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1947 */
  {
    "fma4i_fmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1961 */
  {
    "fma4i_fmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1961 */
  {
    "fma4i_fmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1975 */
  {
    "fma4i_fnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmaddv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1975 */
  {
    "fma4i_fnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmaddv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1989 */
  {
    "fma4i_fnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmsubv4sf4,
    &operand_data[1698],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:1989 */
  {
    "fma4i_fnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fnmsubv2df4,
    &operand_data[1702],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2006 */
  {
    "fma4i_vmfmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfmaddv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2006 */
  {
    "fma4i_vmfmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfmaddv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2023 */
  {
    "fma4i_vmfmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfmsubv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2023 */
  {
    "fma4i_vmfmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfmsubv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2040 */
  {
    "fma4i_vmfnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfnmaddv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2040 */
  {
    "fma4i_vmfnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfnmaddv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2057 */
  {
    "fma4i_vmfnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfnmsubv4sf4,
    &operand_data[1698],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2057 */
  {
    "fma4i_vmfnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_vmfnmsubv2df4,
    &operand_data[1702],
    4,
    1,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2081 */
  {
    "fma4_fmaddsubv8sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddsubv8sf4,
    &operand_data[1682],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2100 */
  {
    "fma4_fmaddsubv4df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddsubv4df4,
    &operand_data[1686],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2119 */
  {
    "fma4_fmaddsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddsubv4sf4,
    &operand_data[1698],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2138 */
  {
    "fma4_fmaddsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmaddsubv2df4,
    &operand_data[1702],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2157 */
  {
    "fma4_fmsubaddv8sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubaddv8sf4,
    &operand_data[1682],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2176 */
  {
    "fma4_fmsubaddv4df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubaddv4df4,
    &operand_data[1686],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2195 */
  {
    "fma4_fmsubaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubaddv4sf4,
    &operand_data[1698],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2214 */
  {
    "fma4_fmsubaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4_fmsubaddv2df4,
    &operand_data[1702],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2233 */
  {
    "fma4i_fmaddsubv8sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddsubv8sf4,
    &operand_data[1682],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2254 */
  {
    "fma4i_fmaddsubv4df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddsubv4df4,
    &operand_data[1686],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2275 */
  {
    "fma4i_fmaddsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddsubv4sf4,
    &operand_data[1698],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2296 */
  {
    "fma4i_fmaddsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmaddsubv2df4,
    &operand_data[1702],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2317 */
  {
    "fma4i_fmsubaddv8sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubaddv8sf4,
    &operand_data[1682],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2338 */
  {
    "fma4i_fmsubaddv4df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubaddv4df4,
    &operand_data[1686],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2359 */
  {
    "fma4i_fmsubaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubaddv4sf4,
    &operand_data[1698],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2380 */
  {
    "fma4i_fmsubaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fma4i_fmsubaddv2df4,
    &operand_data[1702],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2407 */
  {
    "sse_cvtpi2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtpi2ps,
    &operand_data[1706],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2419 */
  {
    "sse_cvtps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtps2pi,
    &operand_data[1709],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2431 */
  {
    "sse_cvttps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttps2pi,
    &operand_data[1709],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2443 */
  {
    "*avx_cvtsi2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtsi2ss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1711],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2456 */
  {
    "sse_cvtsi2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtsi2ss,
    &operand_data[1714],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2499 */
  {
    "sse_cvtss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2si,
    &operand_data[1717],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2514 */
  {
    "sse_cvtss2si_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2si_2,
    &operand_data[208],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2555 */
  {
    "sse_cvttss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttss2si,
    &operand_data[1717],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2585 */
  {
    "avx_cvtdq2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtdq2ps,
    &operand_data[1719],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2585 */
  {
    "avx_cvtdq2ps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtdq2ps256,
    &operand_data[1721],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2595 */
  {
    "sse2_cvtdq2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2ps,
    &operand_data[1719],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2628 */
  {
    "avx_cvtps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtps2dq,
    &operand_data[1723],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2628 */
  {
    "avx_cvtps2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtps2dq256,
    &operand_data[1725],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2639 */
  {
    "sse2_cvtps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2dq,
    &operand_data[1723],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2649 */
  {
    "avx_cvttps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvttps2dq,
    &operand_data[1723],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2649 */
  {
    "avx_cvttps2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvttps2dq256,
    &operand_data[1725],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2659 */
  {
    "sse2_cvttps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttps2dq,
    &operand_data[1723],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2675 */
  {
    "sse2_cvtpi2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpi2pd,
    &operand_data[1727],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2685 */
  {
    "sse2_cvtpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpd2pi,
    &operand_data[1729],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2696 */
  {
    "sse2_cvttpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttpd2pi,
    &operand_data[1729],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2706 */
  {
    "*avx_cvtsi2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtsi2sd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1731],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2719 */
  {
    "sse2_cvtsi2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsi2sd,
    &operand_data[1734],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2762 */
  {
    "sse2_cvtsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2si,
    &operand_data[1737],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2777 */
  {
    "sse2_cvtsd2si_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2si_2,
    &operand_data[210],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2818 */
  {
    "sse2_cvttsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttsd2si,
    &operand_data[1737],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2848 */
  {
    "avx_cvtdq2pd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtdq2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtdq2pd256,
    &operand_data[1739],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2857 */
  {
    "sse2_cvtdq2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtdq2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2pd,
    &operand_data[1741],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2869 */
  {
    "avx_cvtpd2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtpd2dq{y}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtpd2dq256,
    &operand_data[1743],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2888 */
  {
    "*sse2_cvtpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1157 },
#else
    { 0, 0, output_1157 },
#endif
    0,
    &operand_data[1745],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:2904 */
  {
    "avx_cvttpd2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvttpd2dq{y}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvttpd2dq256,
    &operand_data[1743],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2921 */
  {
    "*sse2_cvttpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1159 },
#else
    { 0, 0, output_1159 },
#endif
    0,
    &operand_data[1745],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:2934 */
  {
    "*avx_cvtsd2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtsd2ss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1748],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2948 */
  {
    "sse2_cvtsd2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2ss,
    &operand_data[1751],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2963 */
  {
    "*avx_cvtss2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtss2sd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1754],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:2978 */
  {
    "sse2_cvtss2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtss2sd,
    &operand_data[1757],
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:2993 */
  {
    "avx_cvtpd2ps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtpd2ps{y}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtpd2ps256,
    &operand_data[1760],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3012 */
  {
    "*sse2_cvtpd2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1165 },
#else
    { 0, 0, output_1165 },
#endif
    0,
    &operand_data[1762],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:3027 */
  {
    "avx_cvtps2pd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtps2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtps2pd256,
    &operand_data[1765],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3037 */
  {
    "sse2_cvtps2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtps2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2pd,
    &operand_data[1767],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3290 */
  {
    "*avx_movhlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1168 },
#else
    { 0, output_1168, 0 },
#endif
    0,
    &operand_data[1769],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3309 */
  {
    "sse_movhlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1169 },
#else
    { 0, output_1169, 0 },
#endif
    (insn_gen_fn) gen_sse_movhlps,
    &operand_data[1772],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3340 */
  {
    "*avx_movlhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1170 },
#else
    { 0, output_1170, 0 },
#endif
    0,
    &operand_data[1775],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3359 */
  {
    "sse_movlhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1171 },
#else
    { 0, output_1171, 0 },
#endif
    (insn_gen_fn) gen_sse_movlhps,
    &operand_data[1778],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3378 */
  {
    "avx_unpckhps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpckhps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_unpckhps256,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3394 */
  {
    "*avx_interleave_highv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpckhps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3408 */
  {
    "vec_interleave_highv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpckhps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv4sf,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3422 */
  {
    "avx_unpcklps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_unpcklps256,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3438 */
  {
    "*avx_interleave_lowv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3452 */
  {
    "vec_interleave_lowv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv4sf,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3467 */
  {
    "avx_movshdup256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovshdup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movshdup256,
    &operand_data[1604],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3483 */
  {
    "sse3_movshdup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovshdup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movshdup,
    &operand_data[1606],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3500 */
  {
    "avx_movsldup256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovsldup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movsldup256,
    &operand_data[1604],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3516 */
  {
    "sse3_movsldup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovsldup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movsldup,
    &operand_data[1606],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3554 */
  {
    "avx_shufps256_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1182 },
#else
    { 0, 0, output_1182 },
#endif
    (insn_gen_fn) gen_avx_shufps256_1,
    &operand_data[1781],
    11,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:3604 */
  {
    "*avx_shufps_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1183 },
#else
    { 0, 0, output_1183 },
#endif
    0,
    &operand_data[1792],
    7,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:3604 */
  {
    "*avx_shufps_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1184 },
#else
    { 0, 0, output_1184 },
#endif
    0,
    &operand_data[1799],
    7,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:3630 */
  {
    "sse_shufps_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1185 },
#else
    { 0, 0, output_1185 },
#endif
    (insn_gen_fn) gen_sse_shufps_v4sf,
    &operand_data[1806],
    7,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:3630 */
  {
    "sse_shufps_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1186 },
#else
    { 0, 0, output_1186 },
#endif
    (insn_gen_fn) gen_sse_shufps_v4si,
    &operand_data[1813],
    7,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:3655 */
  {
    "sse_storehps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1187 },
#else
    { 0, output_1187, 0 },
#endif
    (insn_gen_fn) gen_sse_storehps,
    &operand_data[1820],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3679 */
  {
    "*avx_loadhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1188 },
#else
    { 0, output_1188, 0 },
#endif
    0,
    &operand_data[1822],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3695 */
  {
    "sse_loadhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1189 },
#else
    { 0, output_1189, 0 },
#endif
    (insn_gen_fn) gen_sse_loadhps,
    &operand_data[1825],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3710 */
  {
    "*avx_storelps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1190 },
#else
    { 0, output_1190, 0 },
#endif
    0,
    &operand_data[1828],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3724 */
  {
    "sse_storelps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1191 },
#else
    { 0, output_1191, 0 },
#endif
    (insn_gen_fn) gen_sse_storelps,
    &operand_data[1828],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3747 */
  {
    "*avx_loadlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1192 },
#else
    { 0, output_1192, 0 },
#endif
    0,
    &operand_data[1830],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3764 */
  {
    "sse_loadlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1193 },
#else
    { 0, output_1193, 0 },
#endif
    (insn_gen_fn) gen_sse_loadlps,
    &operand_data[1833],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3780 */
  {
    "*avx_movss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1836],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3792 */
  {
    "sse_movss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movss,
    &operand_data[1839],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3813 */
  {
    "*vec_dupv4sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1196 },
#else
    { 0, output_1196, 0 },
#endif
    0,
    &operand_data[1842],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:3827 */
  {
    "*vec_dupv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shufps\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1844],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:3837 */
  {
    "*vec_concatv2sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1198 },
#else
    { 0, output_1198, 0 },
#endif
    0,
    &operand_data[1846],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:3860 */
  {
    "*vec_concatv2sf_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1199 },
#else
    { 0, output_1199, 0 },
#endif
    0,
    &operand_data[1849],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:3881 */
  {
    "*vec_concatv2sf_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1200 },
#else
    { 0, output_1200, 0 },
#endif
    0,
    &operand_data[1852],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:3895 */
  {
    "*vec_concatv4sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1201 },
#else
    { 0, output_1201, 0 },
#endif
    0,
    &operand_data[1855],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:3908 */
  {
    "*vec_concatv4sf_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1202 },
#else
    { 0, output_1202, 0 },
#endif
    0,
    &operand_data[1858],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:3929 */
  {
    "*vec_setv4sf_0_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1203 },
#else
    { 0, output_1203, 0 },
#endif
    0,
    &operand_data[1861],
    3,
    0,
    6,
    2
  },
  /* ../../gcc/config/i386/sse.md:3929 */
  {
    "*vec_setv4si_0_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1204 },
#else
    { 0, output_1204, 0 },
#endif
    0,
    &operand_data[1864],
    3,
    0,
    6,
    2
  },
  /* ../../gcc/config/i386/sse.md:3951 */
  {
    "*vec_setv4sf_0_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1205 },
#else
    { 0, output_1205, 0 },
#endif
    0,
    &operand_data[1867],
    3,
    0,
    6,
    2
  },
  /* ../../gcc/config/i386/sse.md:3951 */
  {
    "*vec_setv4si_0_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1206 },
#else
    { 0, output_1206, 0 },
#endif
    0,
    &operand_data[1870],
    3,
    0,
    6,
    2
  },
  /* ../../gcc/config/i386/sse.md:3972 */
  {
    "*vec_setv4sf_0_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1207 },
#else
    { 0, output_1207, 0 },
#endif
    0,
    &operand_data[1873],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:3972 */
  {
    "*vec_setv4si_0_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1208 },
#else
    { 0, output_1208, 0 },
#endif
    0,
    &operand_data[1876],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:3989 */
  {
    "vec_setv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1209 },
#else
    { 0, output_1209, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4sf_0,
    &operand_data[1879],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:3989 */
  {
    "vec_setv4si_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1210 },
#else
    { 0, output_1210, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4si_0,
    &operand_data[1882],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:4006 */
  {
    "*vec_setv4sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1211 },
#else
    { 0, 0, output_1211 },
#endif
    0,
    &operand_data[1885],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:4024 */
  {
    "*vec_setv4sf_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1212 },
#else
    { 0, 0, output_1212 },
#endif
    0,
    &operand_data[1889],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:4042 */
  {
    "*avx_insertps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1893],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4056 */
  {
    "sse4_1_insertps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_insertps,
    &operand_data[1897],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4095 */
  {
    "*vec_extractv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1901],
    2,
    0,
    4,
    1
  },
  /* ../../gcc/config/i386/sse.md:4134 */
  {
    "vec_extract_lo_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x0, %1, %0|%0, %1, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v4di,
    &operand_data[1903],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4134 */
  {
    "vec_extract_lo_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x0, %1, %0|%0, %1, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v4df,
    &operand_data[1905],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4148 */
  {
    "vec_extract_hi_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v4di,
    &operand_data[1903],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4148 */
  {
    "vec_extract_hi_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v4df,
    &operand_data[1905],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4162 */
  {
    "vec_extract_lo_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v8si,
    &operand_data[1907],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4162 */
  {
    "vec_extract_lo_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v8sf,
    &operand_data[1909],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4177 */
  {
    "vec_extract_hi_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v8si,
    &operand_data[1907],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4177 */
  {
    "vec_extract_hi_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v8sf,
    &operand_data[1909],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4192 */
  {
    "vec_extract_lo_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v16hi,
    &operand_data[1911],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4209 */
  {
    "vec_extract_hi_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v16hi,
    &operand_data[1911],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4226 */
  {
    "vec_extract_lo_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v32qi,
    &operand_data[1913],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4247 */
  {
    "vec_extract_hi_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v32qi,
    &operand_data[1913],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:4268 */
  {
    "*sse4_1_extractps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vextractps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1915],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4282 */
  {
    "*vec_extract_v4sf_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1918],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4316 */
  {
    "avx_unpckhpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpckhpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_unpckhpd256,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4344 */
  {
    "*avx_interleave_highv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1231 },
#else
    { 0, output_1231, 0 },
#endif
    0,
    &operand_data[1921],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:4362 */
  {
    "*sse3_interleave_highv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1232 },
#else
    { 0, output_1232, 0 },
#endif
    0,
    &operand_data[1924],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:4380 */
  {
    "*sse2_interleave_highv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1233 },
#else
    { 0, output_1233, 0 },
#endif
    0,
    &operand_data[1927],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:4420 */
  {
    "*avx_unpcklpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1234 },
#else
    { 0, output_1234, 0 },
#endif
    0,
    &operand_data[1930],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:4451 */
  {
    "*avx_interleave_lowv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1235 },
#else
    { 0, output_1235, 0 },
#endif
    0,
    &operand_data[1933],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:4469 */
  {
    "*sse3_interleave_lowv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1236 },
#else
    { 0, output_1236, 0 },
#endif
    0,
    &operand_data[1936],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:4487 */
  {
    "*sse2_interleave_lowv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1237 },
#else
    { 0, output_1237, 0 },
#endif
    0,
    &operand_data[1939],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:4551 */
  {
    "avx_shufpd256_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1238 },
#else
    { 0, 0, output_1238 },
#endif
    (insn_gen_fn) gen_avx_shufpd256_1,
    &operand_data[1942],
    7,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:4612 */
  {
    "*avx_interleave_highv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhqdq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4626 */
  {
    "vec_interleave_highv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv2di,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4640 */
  {
    "*avx_interleave_lowv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4654 */
  {
    "vec_interleave_lowv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv2di,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4668 */
  {
    "*avx_shufpd_v2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1243 },
#else
    { 0, 0, output_1243 },
#endif
    0,
    &operand_data[1955],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:4668 */
  {
    "*avx_shufpd_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1244 },
#else
    { 0, 0, output_1244 },
#endif
    0,
    &operand_data[1960],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:4690 */
  {
    "sse2_shufpd_v2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1245 },
#else
    { 0, 0, output_1245 },
#endif
    (insn_gen_fn) gen_sse2_shufpd_v2df,
    &operand_data[1965],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:4690 */
  {
    "sse2_shufpd_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1246 },
#else
    { 0, 0, output_1246 },
#endif
    (insn_gen_fn) gen_sse2_shufpd_v2di,
    &operand_data[1970],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:4713 */
  {
    "*avx_storehpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1247 },
#else
    { 0, output_1247, 0 },
#endif
    0,
    &operand_data[1975],
    2,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:4729 */
  {
    "sse2_storehpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1248 },
#else
    { 0, output_1248, 0 },
#endif
    (insn_gen_fn) gen_sse2_storehpd,
    &operand_data[1977],
    2,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:4758 */
  {
    "sse2_storelpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1249 },
#else
    { 0, output_1249, 0 },
#endif
    (insn_gen_fn) gen_sse2_storelpd,
    &operand_data[1979],
    2,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:4804 */
  {
    "*avx_loadhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1250 },
#else
    { 0, output_1250, 0 },
#endif
    0,
    &operand_data[1981],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:4822 */
  {
    "sse2_loadhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1251 },
#else
    { 0, output_1251, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadhpd,
    &operand_data[1984],
    3,
    0,
    6,
    2
  },
  /* ../../gcc/config/i386/sse.md:4865 */
  {
    "*avx_loadlpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1252 },
#else
    { 0, output_1252, 0 },
#endif
    0,
    &operand_data[1987],
    3,
    0,
    7,
    2
  },
  /* ../../gcc/config/i386/sse.md:4885 */
  {
    "sse2_loadlpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1253 },
#else
    { 0, output_1253, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadlpd,
    &operand_data[1990],
    3,
    0,
    8,
    2
  },
  /* ../../gcc/config/i386/sse.md:4920 */
  {
    "*vec_extractv2df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1254 },
#else
    { 0, output_1254, 0 },
#endif
    0,
    &operand_data[1993],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:4934 */
  {
    "*vec_extractv2df_0_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1255 },
#else
    { 0, output_1255, 0 },
#endif
    0,
    &operand_data[1995],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:4948 */
  {
    "*avx_movsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1256 },
#else
    { 0, output_1256, 0 },
#endif
    0,
    &operand_data[1997],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:4965 */
  {
    "sse2_movsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1257 },
#else
    { 0, output_1257, 0 },
#endif
    (insn_gen_fn) gen_sse2_movsd,
    &operand_data[2000],
    3,
    0,
    6,
    2
  },
  /* ../../gcc/config/i386/sse.md:4984 */
  {
    "*vec_dupv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2003],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:4994 */
  {
    "vec_dupv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklpd\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_dupv2df,
    &operand_data[2005],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5003 */
  {
    "*vec_concatv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2003],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5014 */
  {
    "*vec_concatv2df_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1261 },
#else
    { 0, output_1261, 0 },
#endif
    0,
    &operand_data[2007],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:5028 */
  {
    "*vec_concatv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1262 },
#else
    { 0, output_1262, 0 },
#endif
    0,
    &operand_data[2010],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2016],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2022],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2028],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_addv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2031],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5066 */
  {
    "*avx_subv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2034],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2040],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2046],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2052],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*addv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5077 */
  {
    "*subv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2058],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_ssaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_usaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_sssubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2016],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_ussubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2016],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_ssaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_usaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_sssubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2022],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5096 */
  {
    "*avx_ussubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2022],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_ssaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_usaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_sssubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2040],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_ussubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2040],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_ssaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_usaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_sssubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2046],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5107 */
  {
    "*sse2_ussubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2046],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5118 */
  {
    "mulv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv16qi3,
    &operand_data[2061],
    3,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:5165 */
  {
    "*avx_mulv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmullw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5175 */
  {
    "*mulv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5198 */
  {
    "*avxv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5214 */
  {
    "*smulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5243 */
  {
    "*avx_umulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5259 */
  {
    "*umulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5289 */
  {
    "*avx_umulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmuludq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2064],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5306 */
  {
    "*sse2_umulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2067],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5337 */
  {
    "*avx_mulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmuldq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2064],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5355 */
  {
    "*sse4_1_mulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2067],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5406 */
  {
    "*avx_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaddwd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2070],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5443 */
  {
    "*sse2_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2073],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5491 */
  {
    "*avx_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5502 */
  {
    "*sse4_1_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5512 */
  {
    "*sse2_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2076],
    3,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:5565 */
  {
    "mulv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2di3,
    &operand_data[2079],
    3,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:5857 */
  {
    "*avx_ashrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsraw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2082],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5857 */
  {
    "*avx_ashrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrad\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2085],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5872 */
  {
    "ashrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv8hi3,
    &operand_data[2088],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5872 */
  {
    "ashrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4si3,
    &operand_data[2091],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5887 */
  {
    "*avx_lshrv1ti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1316 },
#else
    { 0, 0, output_1316 },
#endif
    0,
    &operand_data[2094],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:5902 */
  {
    "*avx_lshrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2082],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5902 */
  {
    "*avx_lshrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2085],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5902 */
  {
    "*avx_lshrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2097],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5917 */
  {
    "sse2_lshrv1ti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1320 },
#else
    { 0, 0, output_1320 },
#endif
    (insn_gen_fn) gen_sse2_lshrv1ti3,
    &operand_data[2100],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:5932 */
  {
    "lshrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv8hi3,
    &operand_data[2088],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5932 */
  {
    "lshrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4si3,
    &operand_data[2091],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5932 */
  {
    "lshrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2di3,
    &operand_data[2103],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5947 */
  {
    "*avx_ashlv1ti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1324 },
#else
    { 0, 0, output_1324 },
#endif
    0,
    &operand_data[2094],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:5961 */
  {
    "*avx_ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsllw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2082],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5961 */
  {
    "*avx_ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpslld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2085],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5961 */
  {
    "*avx_ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsllq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2097],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5976 */
  {
    "sse2_ashlv1ti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1328 },
#else
    { 0, 0, output_1328 },
#endif
    (insn_gen_fn) gen_sse2_ashlv1ti3,
    &operand_data[2100],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:5990 */
  {
    "ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8hi3,
    &operand_data[2088],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5990 */
  {
    "ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4si3,
    &operand_data[2091],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:5990 */
  {
    "ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2di3,
    &operand_data[2103],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_smaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_sminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxub\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminub\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_umaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxuw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_uminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminuw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_smaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_sminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_umaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxud\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6027 */
  {
    "*avx_uminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminud\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6052 */
  {
    "*umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6052 */
  {
    "*uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6071 */
  {
    "*smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6071 */
  {
    "*sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6126 */
  {
    "*sse4_1_smaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6126 */
  {
    "*sse4_1_sminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6126 */
  {
    "*sse4_1_smaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6126 */
  {
    "*sse4_1_sminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6182 */
  {
    "*sse4_1_umaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6182 */
  {
    "*sse4_1_uminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6182 */
  {
    "*sse4_1_umaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxud\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6182 */
  {
    "*sse4_1_uminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminud\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6317 */
  {
    "*avx_eqv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6317 */
  {
    "*avx_eqv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6317 */
  {
    "*avx_eqv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6317 */
  {
    "*avx_eqv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2031],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6332 */
  {
    "*sse2_eqv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6332 */
  {
    "*sse2_eqv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6332 */
  {
    "*sse2_eqv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6352 */
  {
    "*sse4_1_eqv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6363 */
  {
    "*avx_gtv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6363 */
  {
    "*avx_gtv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6363 */
  {
    "*avx_gtv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1799],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6363 */
  {
    "*avx_gtv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6378 */
  {
    "sse2_gtv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv16qi3,
    &operand_data[2112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6378 */
  {
    "sse2_gtv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv8hi3,
    &operand_data[2115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6378 */
  {
    "sse2_gtv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv4si3,
    &operand_data[1813],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6389 */
  {
    "sse4_2_gtv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_gtv2di3,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6451 */
  {
    "*avx_andnotv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2118],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6451 */
  {
    "*avx_andnotv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2121],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6451 */
  {
    "*avx_andnotv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2124],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6451 */
  {
    "*avx_andnotv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2127],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6462 */
  {
    "*sse_andnotv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6462 */
  {
    "*sse_andnotv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6462 */
  {
    "*sse_andnotv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1813],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6462 */
  {
    "*sse_andnotv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6472 */
  {
    "*avx_andnotv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6472 */
  {
    "*avx_andnotv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6472 */
  {
    "*avx_andnotv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1799],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6472 */
  {
    "*avx_andnotv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6483 */
  {
    "sse2_andnotv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv16qi3,
    &operand_data[2112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6483 */
  {
    "sse2_andnotv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv8hi3,
    &operand_data[2115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6483 */
  {
    "sse2_andnotv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv4si3,
    &operand_data[1813],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6483 */
  {
    "sse2_andnotv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv2di3,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6494 */
  {
    "*andnottf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2130],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_andv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2133],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_iorv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2133],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_xorv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2133],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_andv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2136],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_iorv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2136],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_xorv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2136],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_andv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2139],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_iorv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2139],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_xorv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2139],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_andv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2142],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_iorv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2142],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6513 */
  {
    "*avx_xorv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2142],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6525 */
  {
    "*sse_xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2025],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2031],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2031],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6536 */
  {
    "*avx_xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2031],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6548 */
  {
    "*sse2_xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2055],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6567 */
  {
    "*andtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2145],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6567 */
  {
    "*iortf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2145],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6567 */
  {
    "*xortf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2145],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6620 */
  {
    "*avx_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2148],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6633 */
  {
    "sse2_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packsswb,
    &operand_data[2151],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6646 */
  {
    "*avx_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2154],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6659 */
  {
    "sse2_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packssdw,
    &operand_data[2157],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6672 */
  {
    "*avx_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2148],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6685 */
  {
    "sse2_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packuswb,
    &operand_data[2151],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6698 */
  {
    "*avx_interleave_highv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhbw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6718 */
  {
    "vec_interleave_highv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv16qi,
    &operand_data[2112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6738 */
  {
    "*avx_interleave_lowv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpcklbw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6758 */
  {
    "vec_interleave_lowv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv16qi,
    &operand_data[2112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6778 */
  {
    "*avx_interleave_highv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhwd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6794 */
  {
    "vec_interleave_highv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv8hi,
    &operand_data[2115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6810 */
  {
    "*avx_interleave_lowv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpcklwd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6826 */
  {
    "vec_interleave_lowv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv8hi,
    &operand_data[2115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6842 */
  {
    "*avx_interleave_highv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhdq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1799],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6856 */
  {
    "vec_interleave_highv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv4si,
    &operand_data[1813],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6870 */
  {
    "*avx_interleave_lowv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1799],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6884 */
  {
    "vec_interleave_lowv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv4si,
    &operand_data[1813],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:6898 */
  {
    "*avx_pinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1458 },
#else
    { 0, 0, output_1458 },
#endif
    0,
    &operand_data[2160],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:6898 */
  {
    "*avx_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1459 },
#else
    { 0, 0, output_1459 },
#endif
    0,
    &operand_data[2164],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:6898 */
  {
    "*avx_pinsrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1460 },
#else
    { 0, 0, output_1460 },
#endif
    0,
    &operand_data[2168],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:6922 */
  {
    "*sse4_1_pinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1461 },
#else
    { 0, 0, output_1461 },
#endif
    0,
    &operand_data[2172],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:6942 */
  {
    "*sse2_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1462 },
#else
    { 0, 0, output_1462 },
#endif
    0,
    &operand_data[2176],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:6963 */
  {
    "*sse4_1_pinsrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1463 },
#else
    { 0, 0, output_1463 },
#endif
    0,
    &operand_data[2180],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:7016 */
  {
    "*sse4_1_pextrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2184],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7030 */
  {
    "*sse4_1_pextrb_memory",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2187],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7043 */
  {
    "*sse2_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2190],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7057 */
  {
    "*sse4_1_pextrw_memory",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2193],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7070 */
  {
    "*sse4_1_pextrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2196],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7113 */
  {
    "sse2_pshufd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1469 },
#else
    { 0, 0, output_1469 },
#endif
    (insn_gen_fn) gen_sse2_pshufd_1,
    &operand_data[2199],
    6,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:7153 */
  {
    "sse2_pshuflw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1470 },
#else
    { 0, 0, output_1470 },
#endif
    (insn_gen_fn) gen_sse2_pshuflw_1,
    &operand_data[2205],
    6,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:7198 */
  {
    "sse2_pshufhw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1471 },
#else
    { 0, 0, output_1471 },
#endif
    (insn_gen_fn) gen_sse2_pshufhw_1,
    &operand_data[2211],
    6,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:7238 */
  {
    "*avx_loadld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1472 },
#else
    { 0, output_1472, 0 },
#endif
    0,
    &operand_data[2217],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:7254 */
  {
    "sse2_loadld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1473 },
#else
    { 0, output_1473, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadld,
    &operand_data[2220],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:7270 */
  {
    "sse2_stored",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_stored,
    &operand_data[2223],
    2,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:7286 */
  {
    "*vec_ext_v4si_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2225],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7324 */
  {
    "*sse2_storeq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2228],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7383 */
  {
    "*vec_extractv2di_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1477 },
#else
    { 0, output_1477, 0 },
#endif
    0,
    &operand_data[2230],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:7401 */
  {
    "*vec_extractv2di_1_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1478 },
#else
    { 0, output_1478, 0 },
#endif
    0,
    &operand_data[2232],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:7419 */
  {
    "*vec_extractv2di_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1479 },
#else
    { 0, output_1479, 0 },
#endif
    0,
    &operand_data[2230],
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:7433 */
  {
    "*vec_dupv4si_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1480 },
#else
    { 0, output_1480, 0 },
#endif
    0,
    &operand_data[2234],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:7447 */
  {
    "*vec_dupv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1481 },
#else
    { 0, output_1481, 0 },
#endif
    0,
    &operand_data[2236],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:7459 */
  {
    "*vec_dupv2di_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1482 },
#else
    { 0, output_1482, 0 },
#endif
    0,
    &operand_data[2238],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:7471 */
  {
    "*vec_dupv2di_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1483 },
#else
    { 0, output_1483, 0 },
#endif
    0,
    &operand_data[2240],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:7482 */
  {
    "*vec_dupv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1484 },
#else
    { 0, output_1484, 0 },
#endif
    0,
    &operand_data[2242],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:7493 */
  {
    "*vec_concatv2si_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1485 },
#else
    { 0, output_1485, 0 },
#endif
    0,
    &operand_data[2244],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:7514 */
  {
    "*vec_concatv2si_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1486 },
#else
    { 0, output_1486, 0 },
#endif
    0,
    &operand_data[2247],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:7534 */
  {
    "*vec_concatv2si_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1487 },
#else
    { 0, output_1487, 0 },
#endif
    0,
    &operand_data[2250],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:7548 */
  {
    "*vec_concatv2si_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1488 },
#else
    { 0, output_1488, 0 },
#endif
    0,
    &operand_data[2253],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:7562 */
  {
    "*vec_concatv4si_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1489 },
#else
    { 0, output_1489, 0 },
#endif
    0,
    &operand_data[2256],
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:7575 */
  {
    "*vec_concatv4si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1490 },
#else
    { 0, output_1490, 0 },
#endif
    0,
    &operand_data[2259],
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:7588 */
  {
    "*vec_concatv2di_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1491 },
#else
    { 0, output_1491, 0 },
#endif
    0,
    &operand_data[2262],
    3,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:7606 */
  {
    "vec_concatv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1492 },
#else
    { 0, output_1492, 0 },
#endif
    (insn_gen_fn) gen_vec_concatv2di,
    &operand_data[2265],
    3,
    0,
    5,
    2
  },
  /* ../../gcc/config/i386/sse.md:7852 */
  {
    "*avx_uavgv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpavgb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7877 */
  {
    "*sse2_uavgv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2037],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7920 */
  {
    "*avx_uavgv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpavgw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7941 */
  {
    "*sse2_uavgv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7964 */
  {
    "*avx_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2268],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7975 */
  {
    "sse2_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_psadbw,
    &operand_data[2271],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7987 */
  {
    "avx_movmskps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovmskps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movmskps256,
    &operand_data[2274],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7987 */
  {
    "avx_movmskpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovmskpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movmskpd256,
    &operand_data[2276],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7998 */
  {
    "sse_movmskps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovmskps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movmskps,
    &operand_data[2278],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:7998 */
  {
    "sse2_movmskpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovmskpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movmskpd,
    &operand_data[2280],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8009 */
  {
    "sse2_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pmovmskb,
    &operand_data[2184],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8029 */
  {
    "*sse2_maskmovdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmaskmovdqu\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2282],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8062 */
  {
    "sse_ldmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vldmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ldmxcsr,
    &operand_data[45],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8072 */
  {
    "sse_stmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vstmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_stmxcsr,
    &operand_data[221],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8091 */
  {
    "*sse_sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[884],
    1,
    1,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:8101 */
  {
    "sse2_clflush",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clflush\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_clflush,
    &operand_data[2285],
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8119 */
  {
    "*sse2_mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[884],
    1,
    1,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:8138 */
  {
    "*sse2_lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[884],
    1,
    1,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:8148 */
  {
    "sse3_mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_mwait,
    &operand_data[2286],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8159 */
  {
    "sse3_monitor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "monitor\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_monitor,
    &operand_data[2286],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8186 */
  {
    "*avx_phaddwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8230 */
  {
    "ssse3_phaddwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddwv8hi3,
    &operand_data[2115],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8275 */
  {
    "ssse3_phaddwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddwv4hi3,
    &operand_data[1442],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8304 */
  {
    "*avx_phadddv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1799],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8332 */
  {
    "ssse3_phadddv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phadddv4si3,
    &operand_data[1813],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8361 */
  {
    "ssse3_phadddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phadddv2si3,
    &operand_data[1445],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8382 */
  {
    "*avx_phaddswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8426 */
  {
    "ssse3_phaddswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddswv8hi3,
    &operand_data[2115],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8471 */
  {
    "ssse3_phaddswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddswv4hi3,
    &operand_data[1442],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8500 */
  {
    "*avx_phsubwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8544 */
  {
    "ssse3_phsubwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubwv8hi3,
    &operand_data[2115],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8589 */
  {
    "ssse3_phsubwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubwv4hi3,
    &operand_data[1442],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8618 */
  {
    "*avx_phsubdv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1799],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8646 */
  {
    "ssse3_phsubdv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubdv4si3,
    &operand_data[1813],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8675 */
  {
    "ssse3_phsubdv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubdv2si3,
    &operand_data[1445],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8696 */
  {
    "*avx_phsubswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8740 */
  {
    "ssse3_phsubswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubswv8hi3,
    &operand_data[2115],
    3,
    14,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8785 */
  {
    "ssse3_phsubswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubswv4hi3,
    &operand_data[1442],
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8814 */
  {
    "*avx_pmaddubsw128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaddubsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2289],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8868 */
  {
    "ssse3_pmaddubsw128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmaddubsw128,
    &operand_data[2292],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8923 */
  {
    "ssse3_pmaddubsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmaddubsw,
    &operand_data[2295],
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:8982 */
  {
    "*avx_pmulhrswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2019],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9006 */
  {
    "*ssse3_pmulhrswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2043],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9048 */
  {
    "*ssse3_pmulhrswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9070 */
  {
    "*avx_pshufbv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshufb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9082 */
  {
    "ssse3_pshufbv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pshufbv16qi3,
    &operand_data[2112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9094 */
  {
    "ssse3_pshufbv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pshufbv8qi3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9106 */
  {
    "*avx_psignv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsignb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9106 */
  {
    "*avx_psignv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsignw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9106 */
  {
    "*avx_psignv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsignd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1799],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9119 */
  {
    "ssse3_psignv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv16qi3,
    &operand_data[2112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9119 */
  {
    "ssse3_psignv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv8hi3,
    &operand_data[2115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9119 */
  {
    "ssse3_psignv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv4si3,
    &operand_data[1813],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9132 */
  {
    "ssse3_psignv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv8qi3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9132 */
  {
    "ssse3_psignv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv4hi3,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9132 */
  {
    "ssse3_psignv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv2si3,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9145 */
  {
    "*avx_palignrti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1549 },
#else
    { 0, 0, output_1549 },
#endif
    0,
    &operand_data[2298],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:9162 */
  {
    "ssse3_palignrti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1550 },
#else
    { 0, 0, output_1550 },
#endif
    (insn_gen_fn) gen_ssse3_palignrti,
    &operand_data[2302],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:9180 */
  {
    "ssse3_palignrdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1551 },
#else
    { 0, 0, output_1551 },
#endif
    (insn_gen_fn) gen_ssse3_palignrdi,
    &operand_data[2306],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:9198 */
  {
    "absv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpabsb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv16qi2,
    &operand_data[2310],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9198 */
  {
    "absv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpabsw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv8hi2,
    &operand_data[2205],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9198 */
  {
    "absv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpabsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv4si2,
    &operand_data[2199],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9209 */
  {
    "absv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv8qi2,
    &operand_data[2312],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9209 */
  {
    "absv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv4hi2,
    &operand_data[1461],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9209 */
  {
    "absv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv2si2,
    &operand_data[1467],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9226 */
  {
    "sse4a_movntsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_movntsf,
    &operand_data[2314],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9226 */
  {
    "sse4a_movntdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_movntdf,
    &operand_data[2316],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9236 */
  {
    "sse4a_vmmovntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_vmmovntv4sf,
    &operand_data[2318],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9236 */
  {
    "sse4a_vmmovntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_vmmovntv2df,
    &operand_data[2320],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9248 */
  {
    "sse4a_extrqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extrq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_extrqi,
    &operand_data[2322],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9261 */
  {
    "sse4a_extrq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extrq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_extrq,
    &operand_data[2326],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9272 */
  {
    "sse4a_insertqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertq\t{%4, %3, %2, %0|%0, %2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_insertqi,
    &operand_data[2329],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9287 */
  {
    "sse4a_insertq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_insertq,
    &operand_data[2329],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9305 */
  {
    "avx_blendps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendps,
    &operand_data[2334],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9305 */
  {
    "avx_blendpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendpd,
    &operand_data[2338],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9305 */
  {
    "avx_blendps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendps256,
    &operand_data[2342],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9305 */
  {
    "avx_blendpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendpd256,
    &operand_data[2346],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9319 */
  {
    "avx_blendvps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvps,
    &operand_data[2350],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9319 */
  {
    "avx_blendvpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvpd,
    &operand_data[2354],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9319 */
  {
    "avx_blendvps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvps256,
    &operand_data[2358],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9319 */
  {
    "avx_blendvpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvpd256,
    &operand_data[2362],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9334 */
  {
    "sse4_1_blendps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendps,
    &operand_data[2366],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9334 */
  {
    "sse4_1_blendpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendpd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendpd,
    &operand_data[2370],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9348 */
  {
    "sse4_1_blendvps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendvps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendvps,
    &operand_data[2374],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9348 */
  {
    "sse4_1_blendvpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendvpd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendvpd,
    &operand_data[2378],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9362 */
  {
    "avx_dpps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dpps,
    &operand_data[2382],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9362 */
  {
    "avx_dppd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dppd,
    &operand_data[2386],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9362 */
  {
    "avx_dpps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dpps256,
    &operand_data[2390],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9362 */
  {
    "avx_dppd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dppd256,
    &operand_data[2394],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9377 */
  {
    "sse4_1_dpps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_dpps,
    &operand_data[2398],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9377 */
  {
    "sse4_1_dppd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dppd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_dppd,
    &operand_data[2402],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9392 */
  {
    "sse4_1_movntdqa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovntdqa\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_movntdqa,
    &operand_data[2406],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9403 */
  {
    "*avx_mpsadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2408],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9417 */
  {
    "sse4_1_mpsadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_mpsadbw,
    &operand_data[2412],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9430 */
  {
    "*avx_packusdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpackusdw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2154],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9444 */
  {
    "sse4_1_packusdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packusdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_packusdw,
    &operand_data[2157],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9457 */
  {
    "*avx_pblendvb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2416],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9471 */
  {
    "sse4_1_pblendvb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pblendvb\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_pblendvb,
    &operand_data[2420],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9483 */
  {
    "*avx_pblendw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2424],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9497 */
  {
    "sse4_1_pblendw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pblendw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_pblendw,
    &operand_data[2428],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9510 */
  {
    "sse4_1_phminposuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vphminposuw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_phminposuw,
    &operand_data[2205],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9521 */
  {
    "sse4_1_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv8qiv8hi2,
    &operand_data[2289],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9541 */
  {
    "*sse4_1_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2432],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9562 */
  {
    "sse4_1_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv4qiv4si2,
    &operand_data[2434],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9578 */
  {
    "*sse4_1_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2436],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9595 */
  {
    "sse4_1_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2qiv2di2,
    &operand_data[2268],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9609 */
  {
    "*sse4_1_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2438],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9624 */
  {
    "sse4_1_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv4hiv4si2,
    &operand_data[2440],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9640 */
  {
    "*sse4_1_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2442],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9657 */
  {
    "sse4_1_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2hiv2di2,
    &operand_data[2444],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9671 */
  {
    "*sse4_1_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2446],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9686 */
  {
    "sse4_1_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2siv2di2,
    &operand_data[2448],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9700 */
  {
    "*sse4_1_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2450],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9715 */
  {
    "sse4_1_zero_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv8qiv8hi2,
    &operand_data[2289],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9735 */
  {
    "*sse4_1_zero_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2432],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9756 */
  {
    "sse4_1_zero_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv4qiv4si2,
    &operand_data[2434],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9772 */
  {
    "*sse4_1_zero_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2436],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9789 */
  {
    "sse4_1_zero_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2qiv2di2,
    &operand_data[2268],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9803 */
  {
    "*sse4_1_zero_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2438],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9818 */
  {
    "sse4_1_zero_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv4hiv4si2,
    &operand_data[2440],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9834 */
  {
    "*sse4_1_zero_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2452],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9851 */
  {
    "sse4_1_zero_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2hiv2di2,
    &operand_data[2444],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9865 */
  {
    "*sse4_1_zero_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2454],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9880 */
  {
    "sse4_1_zero_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2siv2di2,
    &operand_data[2448],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9894 */
  {
    "*sse4_1_zero_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2450],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9911 */
  {
    "avx_vtestps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestps,
    &operand_data[1587],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9911 */
  {
    "avx_vtestpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestpd,
    &operand_data[1590],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9911 */
  {
    "avx_vtestps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestps256,
    &operand_data[1599],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9911 */
  {
    "avx_vtestpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestpd256,
    &operand_data[1602],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9925 */
  {
    "avx_ptest256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vptest\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_ptest256,
    &operand_data[2128],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9937 */
  {
    "sse4_1_ptest",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vptest\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_ptest,
    &operand_data[1950],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9949 */
  {
    "avx_roundps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_roundps256,
    &operand_data[2456],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9949 */
  {
    "avx_roundpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_roundpd256,
    &operand_data[2459],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9963 */
  {
    "sse4_1_roundps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundps,
    &operand_data[2462],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9963 */
  {
    "sse4_1_roundpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundpd,
    &operand_data[2465],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9978 */
  {
    "*avx_roundss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2468],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9978 */
  {
    "*avx_roundsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2472],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9995 */
  {
    "sse4_1_roundss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundss\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundss,
    &operand_data[2476],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:9995 */
  {
    "sse4_1_roundsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundsd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundsd,
    &operand_data[2480],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10018 */
  {
    "sse4_2_pcmpestr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestr,
    &operand_data[2484],
    7,
    10,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10075 */
  {
    "sse4_2_pcmpestri",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpestri\t{%5, %3, %1|%1, %3, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestri,
    &operand_data[2491],
    6,
    5,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10102 */
  {
    "sse4_2_pcmpestrm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpestrm\t{%5, %3, %1|%1, %3, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestrm,
    &operand_data[2497],
    6,
    5,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10129 */
  {
    "sse4_2_pcmpestr_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1635 },
#else
    { 0, output_1635, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestr_cconly,
    &operand_data[2503],
    7,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:10154 */
  {
    "sse4_2_pcmpistr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistr,
    &operand_data[2510],
    5,
    6,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10202 */
  {
    "sse4_2_pcmpistri",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpistri\t{%3, %2, %1|%1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistri,
    &operand_data[2515],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10225 */
  {
    "sse4_2_pcmpistrm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpistrm\t{%3, %2, %1|%1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistrm,
    &operand_data[2519],
    4,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10248 */
  {
    "sse4_2_pcmpistr_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1639 },
#else
    { 0, output_1639, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistr_cconly,
    &operand_data[2523],
    5,
    0,
    4,
    2
  },
  /* ../../gcc/config/i386/sse.md:10281 */
  {
    "xop_pmacsww",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacsww\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacsww,
    &operand_data[2528],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10293 */
  {
    "xop_pmacssww",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacssww\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacssww,
    &operand_data[2528],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10304 */
  {
    "xop_pmacsdd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacsdd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacsdd,
    &operand_data[2532],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10316 */
  {
    "xop_pmacssdd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacssdd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacssdd,
    &operand_data[2532],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10327 */
  {
    "xop_pmacssdql",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacssdql\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacssdql,
    &operand_data[2536],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10346 */
  {
    "xop_pmacssdqh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacssdqh\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacssdqh,
    &operand_data[2536],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10366 */
  {
    "xop_pmacsdql",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacsdql\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacsdql,
    &operand_data[2536],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10390 */
  {
    "xop_mulv2div2di3_low",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_mulv2div2di3_low,
    &operand_data[2540],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10428 */
  {
    "xop_pmacsdqh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacsdqh\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacsdqh,
    &operand_data[2536],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10452 */
  {
    "xop_mulv2div2di3_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_mulv2div2di3_high,
    &operand_data[2540],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10491 */
  {
    "xop_pmacsswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacsswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacsswd,
    &operand_data[2543],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10515 */
  {
    "xop_pmacswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmacswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmacswd,
    &operand_data[2543],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10539 */
  {
    "xop_pmadcsswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmadcsswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmadcsswd,
    &operand_data[2543],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10579 */
  {
    "xop_pmadcswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmadcswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pmadcswd,
    &operand_data[2543],
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10620 */
  {
    "xop_pcmov_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v16qi,
    &operand_data[2547],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10620 */
  {
    "xop_pcmov_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v8hi,
    &operand_data[2551],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10620 */
  {
    "xop_pcmov_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v4si,
    &operand_data[2555],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10620 */
  {
    "xop_pcmov_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v2di,
    &operand_data[2559],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10620 */
  {
    "xop_pcmov_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v4sf,
    &operand_data[2563],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10620 */
  {
    "xop_pcmov_v2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v2df,
    &operand_data[2567],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10630 */
  {
    "xop_pcmov_v32qi256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v32qi256,
    &operand_data[2571],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10630 */
  {
    "xop_pcmov_v16hi256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v16hi256,
    &operand_data[2575],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10630 */
  {
    "xop_pcmov_v8si256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v8si256,
    &operand_data[2579],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10630 */
  {
    "xop_pcmov_v4di256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v4di256,
    &operand_data[2583],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10630 */
  {
    "xop_pcmov_v8sf256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v8sf256,
    &operand_data[2587],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10630 */
  {
    "xop_pcmov_v4df256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pcmov_v4df256,
    &operand_data[2591],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:10641 */
  {
    "xop_phaddbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddbw,
    &operand_data[2595],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10670 */
  {
    "xop_phaddbd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddbd,
    &operand_data[2597],
    2,
    3,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10707 */
  {
    "xop_phaddbq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddbq,
    &operand_data[2599],
    2,
    7,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10760 */
  {
    "xop_phaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddwd,
    &operand_data[2601],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10781 */
  {
    "xop_phaddwq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddwq,
    &operand_data[2446],
    2,
    3,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10810 */
  {
    "xop_phadddq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphadddq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phadddq,
    &operand_data[2603],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10827 */
  {
    "xop_phaddubw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddubw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddubw,
    &operand_data[2595],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10856 */
  {
    "xop_phaddubd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddubd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddubd,
    &operand_data[2597],
    2,
    3,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10893 */
  {
    "xop_phaddubq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddubq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddubq,
    &operand_data[2599],
    2,
    7,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10946 */
  {
    "xop_phadduwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphadduwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phadduwd,
    &operand_data[2601],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10967 */
  {
    "xop_phadduwq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphadduwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phadduwq,
    &operand_data[2446],
    2,
    3,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:10996 */
  {
    "xop_phaddudq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddudq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phaddudq,
    &operand_data[2603],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11013 */
  {
    "xop_phsubbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phsubbw,
    &operand_data[2595],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11042 */
  {
    "xop_phsubwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phsubwd,
    &operand_data[2601],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11063 */
  {
    "xop_phsubdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_phsubdq,
    &operand_data[2603],
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11081 */
  {
    "xop_pperm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pperm,
    &operand_data[2605],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11094 */
  {
    "xop_pperm_pack_v2di_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pperm_pack_v2di_v4si,
    &operand_data[2609],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11107 */
  {
    "xop_pperm_pack_v4si_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pperm_pack_v4si_v8hi,
    &operand_data[2613],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11120 */
  {
    "xop_pperm_pack_v8hi_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_pperm_pack_v8hi_v16qi,
    &operand_data[2617],
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11198 */
  {
    "xop_rotlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_rotlv16qi3,
    &operand_data[2621],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11198 */
  {
    "xop_rotlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_rotlv8hi3,
    &operand_data[2624],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11198 */
  {
    "xop_rotlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_rotlv4si3,
    &operand_data[2627],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11198 */
  {
    "xop_rotlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_rotlv2di3,
    &operand_data[2630],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11209 */
  {
    "xop_rotrv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1689 },
#else
    { 0, 0, output_1689 },
#endif
    (insn_gen_fn) gen_xop_rotrv16qi3,
    &operand_data[2621],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11209 */
  {
    "xop_rotrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1690 },
#else
    { 0, 0, output_1690 },
#endif
    (insn_gen_fn) gen_xop_rotrv8hi3,
    &operand_data[2624],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11209 */
  {
    "xop_rotrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1691 },
#else
    { 0, 0, output_1691 },
#endif
    (insn_gen_fn) gen_xop_rotrv4si3,
    &operand_data[2627],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11209 */
  {
    "xop_rotrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1692 },
#else
    { 0, 0, output_1692 },
#endif
    (insn_gen_fn) gen_xop_rotrv2di3,
    &operand_data[2630],
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11245 */
  {
    "xop_vrotlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vrotlv16qi3,
    &operand_data[2633],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11245 */
  {
    "xop_vrotlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vrotlv8hi3,
    &operand_data[2636],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11245 */
  {
    "xop_vrotlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vrotlv4si3,
    &operand_data[2639],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11245 */
  {
    "xop_vrotlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vprotq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vrotlv2di3,
    &operand_data[2642],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11300 */
  {
    "xop_ashlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshab\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_ashlv16qi3,
    &operand_data[2633],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11300 */
  {
    "xop_ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshaw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_ashlv8hi3,
    &operand_data[2636],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11300 */
  {
    "xop_ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshad\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_ashlv4si3,
    &operand_data[2639],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11300 */
  {
    "xop_ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshaq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_ashlv2di3,
    &operand_data[2642],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11319 */
  {
    "xop_lshlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshlb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_lshlv16qi3,
    &operand_data[2633],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11319 */
  {
    "xop_lshlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshlw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_lshlv8hi3,
    &operand_data[2636],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11319 */
  {
    "xop_lshlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_lshlv4si3,
    &operand_data[2639],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11319 */
  {
    "xop_lshlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshlq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_lshlv2di3,
    &operand_data[2642],
    3,
    3,
    2,
    1
  },
  /* ../../gcc/config/i386/sse.md:11441 */
  {
    "xop_frczv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfrczps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_frczv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11441 */
  {
    "xop_frczv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfrczpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_frczv2df2,
    &operand_data[1614],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11452 */
  {
    "xop_vmfrczv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfrczss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vmfrczv4sf2,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11452 */
  {
    "xop_vmfrczv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfrczsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vmfrczv2df2,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11465 */
  {
    "xop_frczv8sf2256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfrczps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_frczv8sf2256,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11465 */
  {
    "xop_frczv4df2256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vfrczpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_frczv4df2256,
    &operand_data[1612],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11475 */
  {
    "xop_maskcmpv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1b\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmpv16qi3,
    &operand_data[2645],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11475 */
  {
    "xop_maskcmpv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1w\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmpv8hi3,
    &operand_data[2649],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11475 */
  {
    "xop_maskcmpv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1d\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmpv4si3,
    &operand_data[2653],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11475 */
  {
    "xop_maskcmpv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1q\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmpv2di3,
    &operand_data[2657],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11489 */
  {
    "xop_maskcmp_unsv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1ub\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_unsv16qi3,
    &operand_data[2661],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11489 */
  {
    "xop_maskcmp_unsv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1uw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_unsv8hi3,
    &operand_data[2665],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11489 */
  {
    "xop_maskcmp_unsv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1ud\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_unsv4si3,
    &operand_data[2669],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11489 */
  {
    "xop_maskcmp_unsv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1uq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_unsv2di3,
    &operand_data[2673],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11506 */
  {
    "xop_maskcmp_uns2v16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1ub\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_uns2v16qi3,
    &operand_data[2661],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11506 */
  {
    "xop_maskcmp_uns2v8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1uw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_uns2v8hi3,
    &operand_data[2665],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11506 */
  {
    "xop_maskcmp_uns2v4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1ud\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_uns2v4si3,
    &operand_data[2669],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11506 */
  {
    "xop_maskcmp_uns2v2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcom%Y1uq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_maskcmp_uns2v2di3,
    &operand_data[2673],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11523 */
  {
    "xop_pcom_tfv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1723 },
#else
    { 0, 0, output_1723 },
#endif
    (insn_gen_fn) gen_xop_pcom_tfv16qi3,
    &operand_data[2677],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11523 */
  {
    "xop_pcom_tfv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1724 },
#else
    { 0, 0, output_1724 },
#endif
    (insn_gen_fn) gen_xop_pcom_tfv8hi3,
    &operand_data[2681],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11523 */
  {
    "xop_pcom_tfv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1725 },
#else
    { 0, 0, output_1725 },
#endif
    (insn_gen_fn) gen_xop_pcom_tfv4si3,
    &operand_data[2685],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11523 */
  {
    "xop_pcom_tfv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1726 },
#else
    { 0, 0, output_1726 },
#endif
    (insn_gen_fn) gen_xop_pcom_tfv2di3,
    &operand_data[2689],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11542 */
  {
    "xop_vpermil2v4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermil2ps\t{%4, %3, %2, %1, %0|%0, %1, %2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vpermil2v4sf3,
    &operand_data[2693],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11542 */
  {
    "xop_vpermil2v2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermil2pd\t{%4, %3, %2, %1, %0|%0, %1, %2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vpermil2v2df3,
    &operand_data[2698],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11542 */
  {
    "xop_vpermil2v8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermil2ps\t{%4, %3, %2, %1, %0|%0, %1, %2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vpermil2v8sf3,
    &operand_data[2703],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11542 */
  {
    "xop_vpermil2v4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermil2pd\t{%4, %3, %2, %1, %0|%0, %1, %2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xop_vpermil2v4df3,
    &operand_data[2708],
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11557 */
  {
    "*avx_aesenc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesenc\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11569 */
  {
    "aesenc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesenc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesenc,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11580 */
  {
    "*avx_aesenclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesenclast\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11592 */
  {
    "aesenclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesenclast\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesenclast,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11603 */
  {
    "*avx_aesdec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesdec\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11615 */
  {
    "aesdec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesdec\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesdec,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11626 */
  {
    "*avx_aesdeclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesdeclast\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11638 */
  {
    "aesdeclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesdeclast\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesdeclast,
    &operand_data[1952],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11649 */
  {
    "aesimc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vaesimc\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesimc,
    &operand_data[1526],
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11660 */
  {
    "aeskeygenassist",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vaeskeygenassist\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aeskeygenassist,
    &operand_data[2713],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11673 */
  {
    "*vpclmulqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpclmulqdq\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2716],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11687 */
  {
    "pclmulqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pclmulqdq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pclmulqdq,
    &operand_data[2720],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11720 */
  {
    "*avx_vzeroall",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vzeroall",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2724],
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:11751 */
  {
    "*avx_vzeroupper",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vzeroupper",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2725],
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/i386/sse.md:11762 */
  {
    "vec_dupv8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1745 },
#else
    { 0, output_1745, 0 },
#endif
    (insn_gen_fn) gen_vec_dupv8si,
    &operand_data[2726],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:11762 */
  {
    "vec_dupv8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1746 },
#else
    { 0, output_1746, 0 },
#endif
    (insn_gen_fn) gen_vec_dupv8sf,
    &operand_data[2728],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:11762 */
  {
    "vec_dupv4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1747 },
#else
    { 0, output_1747, 0 },
#endif
    (insn_gen_fn) gen_vec_dupv4di,
    &operand_data[2730],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:11762 */
  {
    "vec_dupv4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1748 },
#else
    { 0, output_1748, 0 },
#endif
    (insn_gen_fn) gen_vec_dupv4df,
    &operand_data[2732],
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/i386/sse.md:11781 */
  {
    "avx_vbroadcastf128_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1749 },
#else
    { 0, output_1749, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_v32qi,
    &operand_data[2734],
    2,
    1,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:11781 */
  {
    "avx_vbroadcastf128_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1750 },
#else
    { 0, output_1750, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_v16hi,
    &operand_data[2736],
    2,
    1,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:11781 */
  {
    "avx_vbroadcastf128_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1751 },
#else
    { 0, output_1751, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_v8si,
    &operand_data[2738],
    2,
    1,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:11781 */
  {
    "avx_vbroadcastf128_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1752 },
#else
    { 0, output_1752, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_v4di,
    &operand_data[2740],
    2,
    1,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:11781 */
  {
    "avx_vbroadcastf128_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1753 },
#else
    { 0, output_1753, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_v8sf,
    &operand_data[2742],
    2,
    1,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:11781 */
  {
    "avx_vbroadcastf128_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1754 },
#else
    { 0, output_1754, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_v4df,
    &operand_data[2744],
    2,
    1,
    3,
    2
  },
  /* ../../gcc/config/i386/sse.md:11800 */
  {
    "*avx_vperm_broadcast_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1755 },
#else
    { 0, 0, output_1755 },
#endif
    0,
    &operand_data[2746],
    4,
    0,
    3,
    3
  },
  /* ../../gcc/config/i386/sse.md:11828 */
  {
    "*avx_vperm_broadcast_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2750],
    4,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/sse.md:11828 */
  {
    "*avx_vperm_broadcast_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2754],
    4,
    0,
    3,
    1
  },
  /* ../../gcc/config/i386/sse.md:11912 */
  {
    "*avx_vpermilpv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1758 },
#else
    { 0, 0, output_1758 },
#endif
    0,
    &operand_data[2758],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11912 */
  {
    "*avx_vpermilpv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1759 },
#else
    { 0, 0, output_1759 },
#endif
    0,
    &operand_data[2762],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11912 */
  {
    "*avx_vpermilpv8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1760 },
#else
    { 0, 0, output_1760 },
#endif
    0,
    &operand_data[2766],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11912 */
  {
    "*avx_vpermilpv4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1761 },
#else
    { 0, 0, output_1761 },
#endif
    0,
    &operand_data[2770],
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11930 */
  {
    "avx_vpermilvarv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv4sf3,
    &operand_data[2774],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11930 */
  {
    "avx_vpermilvarv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv2df3,
    &operand_data[2777],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11930 */
  {
    "avx_vpermilvarv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv8sf3,
    &operand_data[2780],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11930 */
  {
    "avx_vpermilvarv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv4df3,
    &operand_data[2783],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11980 */
  {
    "*avx_vperm2f128v8si_full",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2786],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11980 */
  {
    "*avx_vperm2f128v8sf_full",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2342],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11980 */
  {
    "*avx_vperm2f128v4df_full",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2790],
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:11995 */
  {
    "*avx_vperm2f128v8si_nozero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1769 },
#else
    { 0, 0, output_1769 },
#endif
    0,
    &operand_data[2794],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11995 */
  {
    "*avx_vperm2f128v8sf_nozero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1770 },
#else
    { 0, 0, output_1770 },
#endif
    0,
    &operand_data[2799],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:11995 */
  {
    "*avx_vperm2f128v4df_nozero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1771 },
#else
    { 0, 0, output_1771 },
#endif
    0,
    &operand_data[2804],
    5,
    0,
    1,
    3
  },
  /* ../../gcc/config/i386/sse.md:12038 */
  {
    "vec_set_lo_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v4di,
    &operand_data[2809],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12038 */
  {
    "vec_set_lo_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v4df,
    &operand_data[2812],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12053 */
  {
    "vec_set_hi_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v4di,
    &operand_data[2809],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12053 */
  {
    "vec_set_hi_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v4df,
    &operand_data[2812],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12068 */
  {
    "vec_set_lo_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v8si,
    &operand_data[2815],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12068 */
  {
    "vec_set_lo_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v8sf,
    &operand_data[2818],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12084 */
  {
    "vec_set_hi_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v8si,
    &operand_data[2815],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12084 */
  {
    "vec_set_hi_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v8sf,
    &operand_data[2818],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12100 */
  {
    "vec_set_lo_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v16hi,
    &operand_data[2821],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12118 */
  {
    "vec_set_hi_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v16hi,
    &operand_data[2821],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12136 */
  {
    "vec_set_lo_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v32qi,
    &operand_data[2824],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12158 */
  {
    "vec_set_hi_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v32qi,
    &operand_data[2824],
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12180 */
  {
    "avx_maskloadps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadps,
    &operand_data[2827],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12180 */
  {
    "avx_maskloadpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadpd,
    &operand_data[2830],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12180 */
  {
    "avx_maskloadps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadps256,
    &operand_data[2833],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12180 */
  {
    "avx_maskloadpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadpd256,
    &operand_data[2836],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12194 */
  {
    "avx_maskstoreps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstoreps,
    &operand_data[2839],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12194 */
  {
    "avx_maskstorepd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstorepd,
    &operand_data[2842],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12194 */
  {
    "avx_maskstoreps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstoreps256,
    &operand_data[2845],
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/i386/sse.md:12194 */
  {
    "avx_maskstorepd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstorepd256,
    &operand_data[2848],
    3,
    1,
    1,
    1
  },
  {
    "avx_si256_si",
#else
};