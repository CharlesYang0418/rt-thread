/******************************************************************************
**
** \file      gh_debug_rct.c
**
** \brief     PLL Registers.
**
**            Copyright:   2012 - 2013 (C) GoKe Microelectronics ShangHai Branch
**
** \attention THIS SAMPLE CODE IS PROVIDED AS IS. GOKE MICROELECTRONICS
**            ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR
**            OMMISSIONS.
**
** \note      Do not modify this file as it is generated automatically.
**
******************************************************************************/
#include "gh_debug_rct.h"

/*----------------------------------------------------------------------------*/
/* mirror variables                                                           */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* register PLL_CORE_CTRL (read/write)                                        */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CORE_CTRL(U32 data)
{
    *(volatile U32 *)REG_PLL_CORE_CTRL = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL,data,data);
    #endif
}
U32  GH_PLL_get_CORE_CTRL(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL,value);
    #endif
    return value;
}
void GH_PLL_set_CORE_CTRL_REFDIV(U8 data)
{
    GH_PLL_CORE_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL;
    d.bitc.refdiv = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL_REFDIV] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL_REFDIV(void)
{
    GH_PLL_CORE_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL_REFDIV] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL,value);
    #endif
    return tmp_value.bitc.refdiv;
}
void GH_PLL_set_CORE_CTRL_FBDIV(U16 data)
{
    GH_PLL_CORE_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL;
    d.bitc.fbdiv = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL_FBDIV] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL,d.all,d.all);
    #endif
}
U16  GH_PLL_get_CORE_CTRL_FBDIV(void)
{
    GH_PLL_CORE_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL_FBDIV] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL,value);
    #endif
    return tmp_value.bitc.fbdiv;
}
void GH_PLL_set_CORE_CTRL_PSTDIV1(U8 data)
{
    GH_PLL_CORE_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL;
    d.bitc.pstdiv1 = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL_PSTDIV1] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL_PSTDIV1(void)
{
    GH_PLL_CORE_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL_PSTDIV1] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv1;
}
void GH_PLL_set_CORE_CTRL_PSTDIV2(U8 data)
{
    GH_PLL_CORE_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL;
    d.bitc.pstdiv2 = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL_PSTDIV2] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL_PSTDIV2(void)
{
    GH_PLL_CORE_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL_PSTDIV2] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv2;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_CORE_FRAC (read/write)                                        */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CORE_FRAC(U32 data)
{
    *(volatile U32 *)REG_PLL_CORE_FRAC = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_FRAC] <-- 0x%08x\n",
                        REG_PLL_CORE_FRAC,data,data);
    #endif
}
U32  GH_PLL_get_CORE_FRAC(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CORE_FRAC);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_FRAC] --> 0x%08x\n",
                        REG_PLL_CORE_FRAC,value);
    #endif
    return value;
}
void GH_PLL_set_CORE_FRAC_Div(U32 data)
{
    GH_PLL_CORE_FRAC_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_FRAC;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_CORE_FRAC = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_FRAC_Div] <-- 0x%08x\n",
                        REG_PLL_CORE_FRAC,d.all,d.all);
    #endif
}
U32  GH_PLL_get_CORE_FRAC_Div(void)
{
    GH_PLL_CORE_FRAC_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_FRAC);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_FRAC_Div] --> 0x%08x\n",
                        REG_PLL_CORE_FRAC,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_SD48 (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_SD48(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_SD48 = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SD48] <-- 0x%08x\n",
                        REG_PLL_SCALER_SD48,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_SD48(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SD48);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SD48] --> 0x%08x\n",
                        REG_PLL_SCALER_SD48,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_SD48_Div(U16 data)
{
    GH_PLL_SCALER_SD48_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_SD48;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_SD48 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SD48_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_SD48,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_SD48_Div(void)
{
    GH_PLL_SCALER_SD48_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SD48);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SD48_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_SD48,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_VIDEO_CTRL (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_VIDEO_CTRL(U32 data)
{
    *(volatile U32 *)REG_PLL_VIDEO_CTRL = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,data,data);
    #endif
}
U32  GH_PLL_get_VIDEO_CTRL(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,value);
    #endif
    return value;
}
void GH_PLL_set_VIDEO_CTRL_REFDIV(U8 data)
{
    GH_PLL_VIDEO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL;
    d.bitc.refdiv = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL_REFDIV] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL_REFDIV(void)
{
    GH_PLL_VIDEO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL_REFDIV] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,value);
    #endif
    return tmp_value.bitc.refdiv;
}
void GH_PLL_set_VIDEO_CTRL_FBDIV(U16 data)
{
    GH_PLL_VIDEO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL;
    d.bitc.fbdiv = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL_FBDIV] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,d.all,d.all);
    #endif
}
U16  GH_PLL_get_VIDEO_CTRL_FBDIV(void)
{
    GH_PLL_VIDEO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL_FBDIV] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,value);
    #endif
    return tmp_value.bitc.fbdiv;
}
void GH_PLL_set_VIDEO_CTRL_PSTDIV1(U8 data)
{
    GH_PLL_VIDEO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL;
    d.bitc.pstdiv1 = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL_PSTDIV1] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL_PSTDIV1(void)
{
    GH_PLL_VIDEO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL_PSTDIV1] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv1;
}
void GH_PLL_set_VIDEO_CTRL_PSTDIV2(U8 data)
{
    GH_PLL_VIDEO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL;
    d.bitc.pstdiv2 = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL_PSTDIV2] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL_PSTDIV2(void)
{
    GH_PLL_VIDEO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL_PSTDIV2] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv2;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_VIDEO_FRAC (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_VIDEO_FRAC(U32 data)
{
    *(volatile U32 *)REG_PLL_VIDEO_FRAC = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_FRAC] <-- 0x%08x\n",
                        REG_PLL_VIDEO_FRAC,data,data);
    #endif
}
U32  GH_PLL_get_VIDEO_FRAC(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_FRAC);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_FRAC] --> 0x%08x\n",
                        REG_PLL_VIDEO_FRAC,value);
    #endif
    return value;
}
void GH_PLL_set_VIDEO_FRAC_Div(U32 data)
{
    GH_PLL_VIDEO_FRAC_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_FRAC;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_VIDEO_FRAC = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_FRAC_Div] <-- 0x%08x\n",
                        REG_PLL_VIDEO_FRAC,d.all,d.all);
    #endif
}
U32  GH_PLL_get_VIDEO_FRAC_Div(void)
{
    GH_PLL_VIDEO_FRAC_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_FRAC);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_FRAC_Div] --> 0x%08x\n",
                        REG_PLL_VIDEO_FRAC,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_VIDEO_PRE (read/write)                                 */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_VIDEO_PRE(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_VIDEO_PRE = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_VIDEO_PRE] <-- 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_PRE,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_VIDEO_PRE(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_VIDEO_PRE);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_VIDEO_PRE] --> 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_PRE,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_VIDEO_PRE_Div(U16 data)
{
    GH_PLL_SCALER_VIDEO_PRE_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_VIDEO_PRE;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_VIDEO_PRE = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_VIDEO_PRE_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_PRE,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_VIDEO_PRE_Div(void)
{
    GH_PLL_SCALER_VIDEO_PRE_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_VIDEO_PRE);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_VIDEO_PRE_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_PRE,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SENSOR_CTRL (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SENSOR_CTRL(U32 data)
{
    *(volatile U32 *)REG_PLL_SENSOR_CTRL = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,data,data);
    #endif
}
U32  GH_PLL_get_SENSOR_CTRL(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,value);
    #endif
    return value;
}
void GH_PLL_set_SENSOR_CTRL_REFDIV(U8 data)
{
    GH_PLL_SENSOR_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL;
    d.bitc.refdiv = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL_REFDIV] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL_REFDIV(void)
{
    GH_PLL_SENSOR_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL_REFDIV] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,value);
    #endif
    return tmp_value.bitc.refdiv;
}
void GH_PLL_set_SENSOR_CTRL_FBDIV(U16 data)
{
    GH_PLL_SENSOR_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL;
    d.bitc.fbdiv = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL_FBDIV] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SENSOR_CTRL_FBDIV(void)
{
    GH_PLL_SENSOR_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL_FBDIV] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,value);
    #endif
    return tmp_value.bitc.fbdiv;
}
void GH_PLL_set_SENSOR_CTRL_PSTDIV1(U8 data)
{
    GH_PLL_SENSOR_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL;
    d.bitc.pstdiv1 = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL_PSTDIV1] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL_PSTDIV1(void)
{
    GH_PLL_SENSOR_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL_PSTDIV1] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv1;
}
void GH_PLL_set_SENSOR_CTRL_PSTDIV2(U8 data)
{
    GH_PLL_SENSOR_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL;
    d.bitc.pstdiv2 = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL_PSTDIV2] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL_PSTDIV2(void)
{
    GH_PLL_SENSOR_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL_PSTDIV2] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv2;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SENSOR_FRAC (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SENSOR_FRAC(U32 data)
{
    *(volatile U32 *)REG_PLL_SENSOR_FRAC = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_FRAC] <-- 0x%08x\n",
                        REG_PLL_SENSOR_FRAC,data,data);
    #endif
}
U32  GH_PLL_get_SENSOR_FRAC(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_FRAC);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_FRAC] --> 0x%08x\n",
                        REG_PLL_SENSOR_FRAC,value);
    #endif
    return value;
}
void GH_PLL_set_SENSOR_FRAC_Div(U32 data)
{
    GH_PLL_SENSOR_FRAC_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_FRAC;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SENSOR_FRAC = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_FRAC_Div] <-- 0x%08x\n",
                        REG_PLL_SENSOR_FRAC,d.all,d.all);
    #endif
}
U32  GH_PLL_get_SENSOR_FRAC_Div(void)
{
    GH_PLL_SENSOR_FRAC_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_FRAC);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_FRAC_Div] --> 0x%08x\n",
                        REG_PLL_SENSOR_FRAC,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_LOCK (read)                                                   */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
U32  GH_PLL_get_LOCK(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return value;
}
U8   GH_PLL_get_LOCK_VIDEO2(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_VIDEO2] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.video2;
}
U8   GH_PLL_get_LOCK_VIDEO(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_VIDEO] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.video;
}
U8   GH_PLL_get_LOCK_USB(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_USB] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.usb;
}
U8   GH_PLL_get_LOCK_SENSOR(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_SENSOR] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.sensor;
}
U8   GH_PLL_get_LOCK_IDSP(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_IDSP] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.idsp;
}
U8   GH_PLL_get_LOCK_DDR(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_DDR] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.ddr;
}
U8   GH_PLL_get_LOCK_CORE(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_CORE] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.core;
}
U8   GH_PLL_get_LOCK_AUDIO(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_AUDIO] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.audio;
}
U8   GH_PLL_get_LOCK_HDMI(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_HDMI] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.hdmi;
}
U8   GH_PLL_get_LOCK_VIN(void)
{
    GH_PLL_LOCK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_LOCK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_LOCK_VIN] --> 0x%08x\n",
                        REG_PLL_LOCK,value);
    #endif
    return tmp_value.bitc.vin;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_SENSOR_POST (read/write)                               */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_SENSOR_POST(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_SENSOR_POST = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SENSOR_POST] <-- 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_POST,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_SENSOR_POST(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SENSOR_POST);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SENSOR_POST] --> 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_POST,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_SENSOR_POST_Div(U16 data)
{
    GH_PLL_SCALER_SENSOR_POST_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_SENSOR_POST;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_SENSOR_POST = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SENSOR_POST_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_POST,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_SENSOR_POST_Div(void)
{
    GH_PLL_SCALER_SENSOR_POST_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SENSOR_POST);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SENSOR_POST_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_POST,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_USB_GRST (read/write)                                         */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_USB_GRST(U32 data)
{
    *(volatile U32 *)REG_PLL_USB_GRST = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_USB_GRST] <-- 0x%08x\n",
                        REG_PLL_USB_GRST,data,data);
    #endif
}
U32  GH_PLL_get_USB_GRST(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_USB_GRST);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_USB_GRST] --> 0x%08x\n",
                        REG_PLL_USB_GRST,value);
    #endif
    return value;
}
void GH_PLL_set_USB_GRST_en(U8 data)
{
    GH_PLL_USB_GRST_S d;
    d.all = *(volatile U32 *)REG_PLL_USB_GRST;
    d.bitc.en = data;
    *(volatile U32 *)REG_PLL_USB_GRST = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_USB_GRST_en] <-- 0x%08x\n",
                        REG_PLL_USB_GRST,d.all,d.all);
    #endif
}
U8   GH_PLL_get_USB_GRST_en(void)
{
    GH_PLL_USB_GRST_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_USB_GRST);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_USB_GRST_en] --> 0x%08x\n",
                        REG_PLL_USB_GRST,value);
    #endif
    return tmp_value.bitc.en;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SYS_CONFIG (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SYS_CONFIG(U32 data)
{
    *(volatile U32 *)REG_PLL_SYS_CONFIG = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,data,data);
    #endif
}
U32  GH_PLL_get_SYS_CONFIG(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return value;
}
void GH_PLL_set_SYS_CONFIG_BootMedia(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.bootmedia = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_BootMedia] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_BootMedia(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_BootMedia] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.bootmedia;
}
void GH_PLL_set_SYS_CONFIG_clock(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.clock = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_clock] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_clock(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_clock] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.clock;
}
void GH_PLL_set_SYS_CONFIG_grst(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.grst = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_grst] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_grst(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_grst] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.grst;
}
void GH_PLL_set_SYS_CONFIG_page_size(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.page_size = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_page_size] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_page_size(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_page_size] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.page_size;
}
void GH_PLL_set_SYS_CONFIG_read(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.read = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_read] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_read(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_read] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.read;
}
void GH_PLL_set_SYS_CONFIG_enet(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.enet = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_enet] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_enet(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_enet] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.enet;
}
void GH_PLL_set_SYS_CONFIG_Boot_Bypass(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.boot_bypass = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_Boot_Bypass] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_Boot_Bypass(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_Boot_Bypass] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.boot_bypass;
}
void GH_PLL_set_SYS_CONFIG_fastboot(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.fastboot = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_fastboot] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_fastboot(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_fastboot] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.fastboot;
}
void GH_PLL_set_SYS_CONFIG_IO_Flash_boot(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.io_flash_boot = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_IO_Flash_boot] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_IO_Flash_boot(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_IO_Flash_boot] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.io_flash_boot;
}
void GH_PLL_set_SYS_CONFIG_SD_BOOT(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.sd_boot = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_SD_BOOT] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_SD_BOOT(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_SD_BOOT] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.sd_boot;
}
void GH_PLL_set_SYS_CONFIG_EMA_SEL(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.ema_sel = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_EMA_SEL] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_EMA_SEL(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_EMA_SEL] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.ema_sel;
}
void GH_PLL_set_SYS_CONFIG_lock_mode(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.lock_mode = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_lock_mode] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_lock_mode(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_lock_mode] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.lock_mode;
}
void GH_PLL_set_SYS_CONFIG_grst_l(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.grst_l = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_grst_l] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_grst_l(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_grst_l] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.grst_l;
}
void GH_PLL_set_SYS_CONFIG_RMII_SEL(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.rmii_sel = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_RMII_SEL] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_RMII_SEL(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_RMII_SEL] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.rmii_sel;
}
void GH_PLL_set_SYS_CONFIG_spi_boot(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.spi_boot = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_spi_boot] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_spi_boot(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_spi_boot] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.spi_boot;
}
void GH_PLL_set_SYS_CONFIG_hif_en(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.hif_en = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_hif_en] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_hif_en(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_hif_en] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.hif_en;
}
void GH_PLL_set_SYS_CONFIG_FREE(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.free = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_FREE] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_FREE(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_FREE] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.free;
}
void GH_PLL_set_SYS_CONFIG_hif_type(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.hif_type = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_hif_type] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_hif_type(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_hif_type] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.hif_type;
}
void GH_PLL_set_SYS_CONFIG_rdy_pl(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.rdy_pl = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_rdy_pl] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_rdy_pl(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_rdy_pl] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.rdy_pl;
}
void GH_PLL_set_SYS_CONFIG_rct_ahb_hif_secure_mode(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.rct_ahb_hif_secure_mode = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_rct_ahb_hif_secure_mode] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_rct_ahb_hif_secure_mode(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_rct_ahb_hif_secure_mode] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.rct_ahb_hif_secure_mode;
}
void GH_PLL_set_SYS_CONFIG_usbp(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.usbp = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_usbp] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_usbp(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_usbp] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.usbp;
}
void GH_PLL_set_SYS_CONFIG_ref_clk_is_24Mhz(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.ref_clk_is_24mhz = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_ref_clk_is_24Mhz] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_ref_clk_is_24Mhz(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_ref_clk_is_24Mhz] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.ref_clk_is_24mhz;
}
void GH_PLL_set_SYS_CONFIG_rct_bira_efuse_disable(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.rct_bira_efuse_disable = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_rct_bira_efuse_disable] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_rct_bira_efuse_disable(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_rct_bira_efuse_disable] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.rct_bira_efuse_disable;
}
void GH_PLL_set_SYS_CONFIG_hardcoded(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.hardcoded = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_hardcoded] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_hardcoded(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_hardcoded] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.hardcoded;
}
void GH_PLL_set_SYS_CONFIG_source(U8 data)
{
    GH_PLL_SYS_CONFIG_S d;
    d.all = *(volatile U32 *)REG_PLL_SYS_CONFIG;
    d.bitc.source = data;
    *(volatile U32 *)REG_PLL_SYS_CONFIG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SYS_CONFIG_source] <-- 0x%08x\n",
                        REG_PLL_SYS_CONFIG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SYS_CONFIG_source(void)
{
    GH_PLL_SYS_CONFIG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SYS_CONFIG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SYS_CONFIG_source] --> 0x%08x\n",
                        REG_PLL_SYS_CONFIG,value);
    #endif
    return tmp_value.bitc.source;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_UART (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_UART(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_UART = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_UART] <-- 0x%08x\n",
                        REG_PLL_SCALER_UART,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_UART(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_UART);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_UART] --> 0x%08x\n",
                        REG_PLL_SCALER_UART,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_UART_Div(U32 data)
{
    GH_PLL_SCALER_UART_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_UART;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_UART = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_UART_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_UART,d.all,d.all);
    #endif
}
U32  GH_PLL_get_SCALER_UART_Div(void)
{
    GH_PLL_SCALER_UART_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_UART);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_UART_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_UART,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_SSI (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_SSI(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_SSI = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SSI] <-- 0x%08x\n",
                        REG_PLL_SCALER_SSI,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_SSI(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SSI);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SSI] --> 0x%08x\n",
                        REG_PLL_SCALER_SSI,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_SSI_Div(U32 data)
{
    GH_PLL_SCALER_SSI_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_SSI;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_SSI = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SSI_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_SSI,d.all,d.all);
    #endif
}
U32  GH_PLL_get_SCALER_SSI_Div(void)
{
    GH_PLL_SCALER_SSI_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SSI);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SSI_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_SSI,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_SENSOR_PRE (read/write)                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_SENSOR_PRE(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_SENSOR_PRE = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SENSOR_PRE] <-- 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_PRE,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_SENSOR_PRE(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SENSOR_PRE);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SENSOR_PRE] --> 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_PRE,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_SENSOR_PRE_Div(U16 data)
{
    GH_PLL_SCALER_SENSOR_PRE_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_SENSOR_PRE;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_SENSOR_PRE = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SENSOR_PRE_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_PRE,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_SENSOR_PRE_Div(void)
{
    GH_PLL_SCALER_SENSOR_PRE_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SENSOR_PRE);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SENSOR_PRE_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_SENSOR_PRE,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_AUDIO_CTRL (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_AUDIO_CTRL(U32 data)
{
    *(volatile U32 *)REG_PLL_AUDIO_CTRL = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,data,data);
    #endif
}
U32  GH_PLL_get_AUDIO_CTRL(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,value);
    #endif
    return value;
}
void GH_PLL_set_AUDIO_CTRL_REFDIV(U8 data)
{
    GH_PLL_AUDIO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL;
    d.bitc.refdiv = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL_REFDIV] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL_REFDIV(void)
{
    GH_PLL_AUDIO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL_REFDIV] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,value);
    #endif
    return tmp_value.bitc.refdiv;
}
void GH_PLL_set_AUDIO_CTRL_FBDIV(U16 data)
{
    GH_PLL_AUDIO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL;
    d.bitc.fbdiv = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL_FBDIV] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,d.all,d.all);
    #endif
}
U16  GH_PLL_get_AUDIO_CTRL_FBDIV(void)
{
    GH_PLL_AUDIO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL_FBDIV] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,value);
    #endif
    return tmp_value.bitc.fbdiv;
}
void GH_PLL_set_AUDIO_CTRL_PSTDIV1(U8 data)
{
    GH_PLL_AUDIO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL;
    d.bitc.pstdiv1 = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL_PSTDIV1] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL_PSTDIV1(void)
{
    GH_PLL_AUDIO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL_PSTDIV1] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv1;
}
void GH_PLL_set_AUDIO_CTRL_PSTDIV2(U8 data)
{
    GH_PLL_AUDIO_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL;
    d.bitc.pstdiv2 = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL_PSTDIV2] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL_PSTDIV2(void)
{
    GH_PLL_AUDIO_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL_PSTDIV2] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv2;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_AUDIO_FRAC (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_AUDIO_FRAC(U32 data)
{
    *(volatile U32 *)REG_PLL_AUDIO_FRAC = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_FRAC] <-- 0x%08x\n",
                        REG_PLL_AUDIO_FRAC,data,data);
    #endif
}
U32  GH_PLL_get_AUDIO_FRAC(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_FRAC);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_FRAC] --> 0x%08x\n",
                        REG_PLL_AUDIO_FRAC,value);
    #endif
    return value;
}
void GH_PLL_set_AUDIO_FRAC_Div(U32 data)
{
    GH_PLL_AUDIO_FRAC_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_FRAC;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_AUDIO_FRAC = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_FRAC_Div] <-- 0x%08x\n",
                        REG_PLL_AUDIO_FRAC,d.all,d.all);
    #endif
}
U32  GH_PLL_get_AUDIO_FRAC_Div(void)
{
    GH_PLL_AUDIO_FRAC_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_FRAC);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_FRAC_Div] --> 0x%08x\n",
                        REG_PLL_AUDIO_FRAC,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_AUDIO_POST (read/write)                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_AUDIO_POST(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_AUDIO_POST = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_AUDIO_POST] <-- 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_POST,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_AUDIO_POST(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_AUDIO_POST);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_AUDIO_POST] --> 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_POST,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_AUDIO_POST_Div(U16 data)
{
    GH_PLL_SCALER_AUDIO_POST_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_AUDIO_POST;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_AUDIO_POST = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_AUDIO_POST_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_POST,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_AUDIO_POST_Div(void)
{
    GH_PLL_SCALER_AUDIO_POST_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_AUDIO_POST);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_AUDIO_POST_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_POST,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_AUDIO_PRE (read/write)                                 */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_AUDIO_PRE(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_AUDIO_PRE = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_AUDIO_PRE] <-- 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_PRE,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_AUDIO_PRE(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_AUDIO_PRE);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_AUDIO_PRE] --> 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_PRE,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_AUDIO_PRE_Div(U16 data)
{
    GH_PLL_SCALER_AUDIO_PRE_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_AUDIO_PRE;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_AUDIO_PRE = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_AUDIO_PRE_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_PRE,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_AUDIO_PRE_Div(void)
{
    GH_PLL_SCALER_AUDIO_PRE_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_AUDIO_PRE);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_AUDIO_PRE_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_AUDIO_PRE,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SOFT_OR_DLL_RESET (read/write)                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SOFT_OR_DLL_RESET(U32 data)
{
    *(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SOFT_OR_DLL_RESET] <-- 0x%08x\n",
                        REG_PLL_SOFT_OR_DLL_RESET,data,data);
    #endif
}
U32  GH_PLL_get_SOFT_OR_DLL_RESET(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SOFT_OR_DLL_RESET] --> 0x%08x\n",
                        REG_PLL_SOFT_OR_DLL_RESET,value);
    #endif
    return value;
}
void GH_PLL_set_SOFT_OR_DLL_RESET_Soft(U8 data)
{
    GH_PLL_SOFT_OR_DLL_RESET_S d;
    d.all = *(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET;
    d.bitc.soft = data;
    *(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SOFT_OR_DLL_RESET_Soft] <-- 0x%08x\n",
                        REG_PLL_SOFT_OR_DLL_RESET,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SOFT_OR_DLL_RESET_Soft(void)
{
    GH_PLL_SOFT_OR_DLL_RESET_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SOFT_OR_DLL_RESET_Soft] --> 0x%08x\n",
                        REG_PLL_SOFT_OR_DLL_RESET,value);
    #endif
    return tmp_value.bitc.soft;
}
void GH_PLL_set_SOFT_OR_DLL_RESET_dll(U8 data)
{
    GH_PLL_SOFT_OR_DLL_RESET_S d;
    d.all = *(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET;
    d.bitc.dll = data;
    *(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SOFT_OR_DLL_RESET_dll] <-- 0x%08x\n",
                        REG_PLL_SOFT_OR_DLL_RESET,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SOFT_OR_DLL_RESET_dll(void)
{
    GH_PLL_SOFT_OR_DLL_RESET_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SOFT_OR_DLL_RESET);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SOFT_OR_DLL_RESET_dll] --> 0x%08x\n",
                        REG_PLL_SOFT_OR_DLL_RESET,value);
    #endif
    return tmp_value.bitc.dll;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_WDT_RST_L (read)                                              */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
U32  GH_PLL_get_WDT_RST_L(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_WDT_RST_L);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_WDT_RST_L] --> 0x%08x\n",
                        REG_PLL_WDT_RST_L,value);
    #endif
    return value;
}
U8   GH_PLL_get_WDT_RST_L_reset(void)
{
    GH_PLL_WDT_RST_L_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_WDT_RST_L);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_WDT_RST_L_reset] --> 0x%08x\n",
                        REG_PLL_WDT_RST_L,value);
    #endif
    return tmp_value.bitc.reset;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_DEBOUNCE (read/write)                                  */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_DEBOUNCE(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_DEBOUNCE = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_DEBOUNCE] <-- 0x%08x\n",
                        REG_PLL_SCALER_DEBOUNCE,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_DEBOUNCE(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_DEBOUNCE);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_DEBOUNCE] --> 0x%08x\n",
                        REG_PLL_SCALER_DEBOUNCE,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_DEBOUNCE_Div(U32 data)
{
    GH_PLL_SCALER_DEBOUNCE_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_DEBOUNCE;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_DEBOUNCE = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_DEBOUNCE_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_DEBOUNCE,d.all,d.all);
    #endif
}
U32  GH_PLL_get_SCALER_DEBOUNCE_Div(void)
{
    GH_PLL_SCALER_DEBOUNCE_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_DEBOUNCE);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_DEBOUNCE_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_DEBOUNCE,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_PWM (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_PWM(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_PWM = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_PWM] <-- 0x%08x\n",
                        REG_PLL_SCALER_PWM,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_PWM(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_PWM);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_PWM] --> 0x%08x\n",
                        REG_PLL_SCALER_PWM,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_PWM_Div(U32 data)
{
    GH_PLL_SCALER_PWM_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_PWM;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_PWM = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_PWM_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_PWM,d.all,d.all);
    #endif
}
U32  GH_PLL_get_SCALER_PWM_Div(void)
{
    GH_PLL_SCALER_PWM_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_PWM);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_PWM_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_PWM,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_CKEN_VDSP (read/write)                                        */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CKEN_VDSP(U32 data)
{
    *(volatile U32 *)REG_PLL_CKEN_VDSP = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CKEN_VDSP] <-- 0x%08x\n",
                        REG_PLL_CKEN_VDSP,data,data);
    #endif
}
U32  GH_PLL_get_CKEN_VDSP(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CKEN_VDSP);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CKEN_VDSP] --> 0x%08x\n",
                        REG_PLL_CKEN_VDSP,value);
    #endif
    return value;
}
void GH_PLL_set_CKEN_VDSP_memd(U8 data)
{
    GH_PLL_CKEN_VDSP_S d;
    d.all = *(volatile U32 *)REG_PLL_CKEN_VDSP;
    d.bitc.memd = data;
    *(volatile U32 *)REG_PLL_CKEN_VDSP = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CKEN_VDSP_memd] <-- 0x%08x\n",
                        REG_PLL_CKEN_VDSP,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CKEN_VDSP_memd(void)
{
    GH_PLL_CKEN_VDSP_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CKEN_VDSP);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CKEN_VDSP_memd] --> 0x%08x\n",
                        REG_PLL_CKEN_VDSP,value);
    #endif
    return tmp_value.bitc.memd;
}
void GH_PLL_set_CKEN_VDSP_code(U8 data)
{
    GH_PLL_CKEN_VDSP_S d;
    d.all = *(volatile U32 *)REG_PLL_CKEN_VDSP;
    d.bitc.code = data;
    *(volatile U32 *)REG_PLL_CKEN_VDSP = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CKEN_VDSP_code] <-- 0x%08x\n",
                        REG_PLL_CKEN_VDSP,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CKEN_VDSP_code(void)
{
    GH_PLL_CKEN_VDSP_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CKEN_VDSP);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CKEN_VDSP_code] --> 0x%08x\n",
                        REG_PLL_CKEN_VDSP,value);
    #endif
    return tmp_value.bitc.code;
}
void GH_PLL_set_CKEN_VDSP_tsfm(U8 data)
{
    GH_PLL_CKEN_VDSP_S d;
    d.all = *(volatile U32 *)REG_PLL_CKEN_VDSP;
    d.bitc.tsfm = data;
    *(volatile U32 *)REG_PLL_CKEN_VDSP = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CKEN_VDSP_tsfm] <-- 0x%08x\n",
                        REG_PLL_CKEN_VDSP,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CKEN_VDSP_tsfm(void)
{
    GH_PLL_CKEN_VDSP_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CKEN_VDSP);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CKEN_VDSP_tsfm] --> 0x%08x\n",
                        REG_PLL_CKEN_VDSP,value);
    #endif
    return tmp_value.bitc.tsfm;
}
void GH_PLL_set_CKEN_VDSP_smem(U8 data)
{
    GH_PLL_CKEN_VDSP_S d;
    d.all = *(volatile U32 *)REG_PLL_CKEN_VDSP;
    d.bitc.smem = data;
    *(volatile U32 *)REG_PLL_CKEN_VDSP = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CKEN_VDSP_smem] <-- 0x%08x\n",
                        REG_PLL_CKEN_VDSP,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CKEN_VDSP_smem(void)
{
    GH_PLL_CKEN_VDSP_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CKEN_VDSP);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CKEN_VDSP_smem] --> 0x%08x\n",
                        REG_PLL_CKEN_VDSP,value);
    #endif
    return tmp_value.bitc.smem;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_ADC (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_ADC(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_ADC = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_ADC] <-- 0x%08x\n",
                        REG_PLL_SCALER_ADC,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_ADC(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_ADC);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_ADC] --> 0x%08x\n",
                        REG_PLL_SCALER_ADC,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_ADC_Div(U16 data)
{
    GH_PLL_SCALER_ADC_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_ADC;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_ADC = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_ADC_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_ADC,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_ADC_Div(void)
{
    GH_PLL_SCALER_ADC_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_ADC);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_ADC_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_ADC,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_VIDEO_POST (read/write)                                */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_VIDEO_POST(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_VIDEO_POST = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_VIDEO_POST] <-- 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_POST,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_VIDEO_POST(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_VIDEO_POST);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_VIDEO_POST] --> 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_POST,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_VIDEO_POST_Div(U16 data)
{
    GH_PLL_SCALER_VIDEO_POST_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_VIDEO_POST;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_VIDEO_POST = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_VIDEO_POST_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_POST,d.all,d.all);
    #endif
}
U16  GH_PLL_get_SCALER_VIDEO_POST_Div(void)
{
    GH_PLL_SCALER_VIDEO_POST_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_VIDEO_POST);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_VIDEO_POST_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_VIDEO_POST,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_CLK_SI_INPUT (read/write)                                     */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CLK_SI_INPUT(U32 data)
{
    *(volatile U32 *)REG_PLL_CLK_SI_INPUT = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CLK_SI_INPUT] <-- 0x%08x\n",
                        REG_PLL_CLK_SI_INPUT,data,data);
    #endif
}
U32  GH_PLL_get_CLK_SI_INPUT(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CLK_SI_INPUT);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CLK_SI_INPUT] --> 0x%08x\n",
                        REG_PLL_CLK_SI_INPUT,value);
    #endif
    return value;
}
void GH_PLL_set_CLK_SI_INPUT_mode(U8 data)
{
    GH_PLL_CLK_SI_INPUT_S d;
    d.all = *(volatile U32 *)REG_PLL_CLK_SI_INPUT;
    d.bitc.mode = data;
    *(volatile U32 *)REG_PLL_CLK_SI_INPUT = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CLK_SI_INPUT_mode] <-- 0x%08x\n",
                        REG_PLL_CLK_SI_INPUT,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CLK_SI_INPUT_mode(void)
{
    GH_PLL_CLK_SI_INPUT_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CLK_SI_INPUT);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CLK_SI_INPUT_mode] --> 0x%08x\n",
                        REG_PLL_CLK_SI_INPUT,value);
    #endif
    return tmp_value.bitc.mode;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IDSP_CTRL (read/write)                                        */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IDSP_CTRL(U32 data)
{
    *(volatile U32 *)REG_PLL_IDSP_CTRL = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL,data,data);
    #endif
}
U32  GH_PLL_get_IDSP_CTRL(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL,value);
    #endif
    return value;
}
void GH_PLL_set_IDSP_CTRL_REFDIV(U8 data)
{
    GH_PLL_IDSP_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL;
    d.bitc.refdiv = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL_REFDIV] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL_REFDIV(void)
{
    GH_PLL_IDSP_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL_REFDIV] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL,value);
    #endif
    return tmp_value.bitc.refdiv;
}
void GH_PLL_set_IDSP_CTRL_FBDIV(U16 data)
{
    GH_PLL_IDSP_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL;
    d.bitc.fbdiv = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL_FBDIV] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL,d.all,d.all);
    #endif
}
U16  GH_PLL_get_IDSP_CTRL_FBDIV(void)
{
    GH_PLL_IDSP_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL_FBDIV] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL,value);
    #endif
    return tmp_value.bitc.fbdiv;
}
void GH_PLL_set_IDSP_CTRL_PSTDIV1(U8 data)
{
    GH_PLL_IDSP_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL;
    d.bitc.pstdiv1 = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL_PSTDIV1] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL_PSTDIV1(void)
{
    GH_PLL_IDSP_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL_PSTDIV1] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv1;
}
void GH_PLL_set_IDSP_CTRL_PSTDIV2(U8 data)
{
    GH_PLL_IDSP_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL;
    d.bitc.pstdiv2 = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL_PSTDIV2] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL_PSTDIV2(void)
{
    GH_PLL_IDSP_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL_PSTDIV2] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL,value);
    #endif
    return tmp_value.bitc.pstdiv2;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IDSP_FRAC (read/write)                                        */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IDSP_FRAC(U32 data)
{
    *(volatile U32 *)REG_PLL_IDSP_FRAC = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_FRAC] <-- 0x%08x\n",
                        REG_PLL_IDSP_FRAC,data,data);
    #endif
}
U32  GH_PLL_get_IDSP_FRAC(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_FRAC);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_FRAC] --> 0x%08x\n",
                        REG_PLL_IDSP_FRAC,value);
    #endif
    return value;
}
void GH_PLL_set_IDSP_FRAC_Div(U32 data)
{
    GH_PLL_IDSP_FRAC_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_FRAC;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_IDSP_FRAC = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_FRAC_Div] <-- 0x%08x\n",
                        REG_PLL_IDSP_FRAC,d.all,d.all);
    #endif
}
U32  GH_PLL_get_IDSP_FRAC_Div(void)
{
    GH_PLL_IDSP_FRAC_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_FRAC);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_FRAC_Div] --> 0x%08x\n",
                        REG_PLL_IDSP_FRAC,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_SSI2 (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_SSI2(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_SSI2 = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SSI2] <-- 0x%08x\n",
                        REG_PLL_SCALER_SSI2,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_SSI2(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SSI2);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SSI2] --> 0x%08x\n",
                        REG_PLL_SCALER_SSI2,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_SSI2_Div(U32 data)
{
    GH_PLL_SCALER_SSI2_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_SSI2;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_SSI2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_SSI2_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_SSI2,d.all,d.all);
    #endif
}
U32  GH_PLL_get_SCALER_SSI2_Div(void)
{
    GH_PLL_SCALER_SSI2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_SSI2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_SSI2_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_SSI2,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_CORE_CTRL2 (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CORE_CTRL2(U32 data)
{
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,data,data);
    #endif
}
U32  GH_PLL_get_CORE_CTRL2(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return value;
}
void GH_PLL_set_CORE_CTRL2_BYPASS(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.bypass = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_BYPASS] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_BYPASS(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_BYPASS] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.bypass;
}
void GH_PLL_set_CORE_CTRL2_FOUTVCOPD(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.foutvcopd = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_FOUTVCOPD] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_FOUTVCOPD(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_FOUTVCOPD] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.foutvcopd;
}
void GH_PLL_set_CORE_CTRL2_FOUT4PHASEPD(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.fout4phasepd = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_FOUT4PHASEPD] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_FOUT4PHASEPD(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_FOUT4PHASEPD] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.fout4phasepd;
}
void GH_PLL_set_CORE_CTRL2_FOUTPOSTDIVPD(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.foutpostdivpd = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_FOUTPOSTDIVPD] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_FOUTPOSTDIVPD(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_FOUTPOSTDIVPD] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.foutpostdivpd;
}
void GH_PLL_set_CORE_CTRL2_DSMPD(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.dsmpd = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_DSMPD] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_DSMPD(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_DSMPD] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.dsmpd;
}
void GH_PLL_set_CORE_CTRL2_DACPD(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.dacpd = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_DACPD] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_DACPD(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_DACPD] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.dacpd;
}
void GH_PLL_set_CORE_CTRL2_PWRDN(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.pwrdn = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_PWRDN] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_PWRDN(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_PWRDN] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.pwrdn;
}
void GH_PLL_set_CORE_CTRL2_LOCK_FORCE(U8 data)
{
    GH_PLL_CORE_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_CORE_CTRL2;
    d.bitc.lock_force = data;
    *(volatile U32 *)REG_PLL_CORE_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CORE_CTRL2_LOCK_FORCE] <-- 0x%08x\n",
                        REG_PLL_CORE_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CORE_CTRL2_LOCK_FORCE(void)
{
    GH_PLL_CORE_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CORE_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CORE_CTRL2_LOCK_FORCE] --> 0x%08x\n",
                        REG_PLL_CORE_CTRL2,value);
    #endif
    return tmp_value.bitc.lock_force;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IDSP_CTRL2 (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IDSP_CTRL2(U32 data)
{
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,data,data);
    #endif
}
U32  GH_PLL_get_IDSP_CTRL2(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return value;
}
void GH_PLL_set_IDSP_CTRL2_BYPASS(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.bypass = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_BYPASS] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_BYPASS(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_BYPASS] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.bypass;
}
void GH_PLL_set_IDSP_CTRL2_FOUTVCOPD(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.foutvcopd = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_FOUTVCOPD] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_FOUTVCOPD(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_FOUTVCOPD] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.foutvcopd;
}
void GH_PLL_set_IDSP_CTRL2_FOUT4PHASEPD(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.fout4phasepd = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_FOUT4PHASEPD] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_FOUT4PHASEPD(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_FOUT4PHASEPD] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.fout4phasepd;
}
void GH_PLL_set_IDSP_CTRL2_FOUTPOSTDIVPD(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.foutpostdivpd = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_FOUTPOSTDIVPD] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_FOUTPOSTDIVPD(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_FOUTPOSTDIVPD] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.foutpostdivpd;
}
void GH_PLL_set_IDSP_CTRL2_DSMPD(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.dsmpd = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_DSMPD] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_DSMPD(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_DSMPD] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.dsmpd;
}
void GH_PLL_set_IDSP_CTRL2_DACPD(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.dacpd = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_DACPD] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_DACPD(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_DACPD] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.dacpd;
}
void GH_PLL_set_IDSP_CTRL2_PWRDN(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.pwrdn = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_PWRDN] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_PWRDN(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_PWRDN] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.pwrdn;
}
void GH_PLL_set_IDSP_CTRL2_LOCK_FORCE(U8 data)
{
    GH_PLL_IDSP_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_IDSP_CTRL2;
    d.bitc.lock_force = data;
    *(volatile U32 *)REG_PLL_IDSP_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IDSP_CTRL2_LOCK_FORCE] <-- 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IDSP_CTRL2_LOCK_FORCE(void)
{
    GH_PLL_IDSP_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IDSP_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IDSP_CTRL2_LOCK_FORCE] --> 0x%08x\n",
                        REG_PLL_IDSP_CTRL2,value);
    #endif
    return tmp_value.bitc.lock_force;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_CORE_POST (read/write)                                 */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_CORE_POST(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_CORE_POST = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_CORE_POST] <-- 0x%08x\n",
                        REG_PLL_SCALER_CORE_POST,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_CORE_POST(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_CORE_POST);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_CORE_POST] --> 0x%08x\n",
                        REG_PLL_SCALER_CORE_POST,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_CORE_POST_Div(U8 data)
{
    GH_PLL_SCALER_CORE_POST_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_CORE_POST;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_CORE_POST = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_CORE_POST_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_CORE_POST,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SCALER_CORE_POST_Div(void)
{
    GH_PLL_SCALER_CORE_POST_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_CORE_POST);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_CORE_POST_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_CORE_POST,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SENSOR_CTRL2 (read/write)                                     */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SENSOR_CTRL2(U32 data)
{
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,data,data);
    #endif
}
U32  GH_PLL_get_SENSOR_CTRL2(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return value;
}
void GH_PLL_set_SENSOR_CTRL2_BYPASS(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.bypass = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_BYPASS] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_BYPASS(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_BYPASS] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.bypass;
}
void GH_PLL_set_SENSOR_CTRL2_FOUTVCOPD(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.foutvcopd = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_FOUTVCOPD] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_FOUTVCOPD(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_FOUTVCOPD] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.foutvcopd;
}
void GH_PLL_set_SENSOR_CTRL2_FOUT4PHASEPD(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.fout4phasepd = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_FOUT4PHASEPD] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_FOUT4PHASEPD(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_FOUT4PHASEPD] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.fout4phasepd;
}
void GH_PLL_set_SENSOR_CTRL2_FOUTPOSTDIVPD(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.foutpostdivpd = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_FOUTPOSTDIVPD] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_FOUTPOSTDIVPD(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_FOUTPOSTDIVPD] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.foutpostdivpd;
}
void GH_PLL_set_SENSOR_CTRL2_DSMPD(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.dsmpd = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_DSMPD] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_DSMPD(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_DSMPD] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.dsmpd;
}
void GH_PLL_set_SENSOR_CTRL2_DACPD(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.dacpd = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_DACPD] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_DACPD(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_DACPD] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.dacpd;
}
void GH_PLL_set_SENSOR_CTRL2_PWRDN(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.pwrdn = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_PWRDN] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_PWRDN(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_PWRDN] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.pwrdn;
}
void GH_PLL_set_SENSOR_CTRL2_LOCK_FORCE(U8 data)
{
    GH_PLL_SENSOR_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_SENSOR_CTRL2;
    d.bitc.lock_force = data;
    *(volatile U32 *)REG_PLL_SENSOR_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SENSOR_CTRL2_LOCK_FORCE] <-- 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SENSOR_CTRL2_LOCK_FORCE(void)
{
    GH_PLL_SENSOR_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SENSOR_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SENSOR_CTRL2_LOCK_FORCE] --> 0x%08x\n",
                        REG_PLL_SENSOR_CTRL2,value);
    #endif
    return tmp_value.bitc.lock_force;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_AUDIO_CTRL2 (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_AUDIO_CTRL2(U32 data)
{
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,data,data);
    #endif
}
U32  GH_PLL_get_AUDIO_CTRL2(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return value;
}
void GH_PLL_set_AUDIO_CTRL2_BYPASS(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.bypass = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_BYPASS] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_BYPASS(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_BYPASS] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.bypass;
}
void GH_PLL_set_AUDIO_CTRL2_FOUTVCOPD(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.foutvcopd = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_FOUTVCOPD] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_FOUTVCOPD(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_FOUTVCOPD] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.foutvcopd;
}
void GH_PLL_set_AUDIO_CTRL2_FOUT4PHASEPD(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.fout4phasepd = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_FOUT4PHASEPD] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_FOUT4PHASEPD(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_FOUT4PHASEPD] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.fout4phasepd;
}
void GH_PLL_set_AUDIO_CTRL2_FOUTPOSTDIVPD(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.foutpostdivpd = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_FOUTPOSTDIVPD] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_FOUTPOSTDIVPD(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_FOUTPOSTDIVPD] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.foutpostdivpd;
}
void GH_PLL_set_AUDIO_CTRL2_DSMPD(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.dsmpd = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_DSMPD] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_DSMPD(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_DSMPD] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.dsmpd;
}
void GH_PLL_set_AUDIO_CTRL2_DACPD(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.dacpd = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_DACPD] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_DACPD(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_DACPD] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.dacpd;
}
void GH_PLL_set_AUDIO_CTRL2_PWRDN(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.pwrdn = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_PWRDN] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_PWRDN(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_PWRDN] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.pwrdn;
}
void GH_PLL_set_AUDIO_CTRL2_LOCK_FORCE(U8 data)
{
    GH_PLL_AUDIO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_AUDIO_CTRL2;
    d.bitc.lock_force = data;
    *(volatile U32 *)REG_PLL_AUDIO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AUDIO_CTRL2_LOCK_FORCE] <-- 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AUDIO_CTRL2_LOCK_FORCE(void)
{
    GH_PLL_AUDIO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AUDIO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AUDIO_CTRL2_LOCK_FORCE] --> 0x%08x\n",
                        REG_PLL_AUDIO_CTRL2,value);
    #endif
    return tmp_value.bitc.lock_force;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_VIDEO_CTRL2 (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_VIDEO_CTRL2(U32 data)
{
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,data,data);
    #endif
}
U32  GH_PLL_get_VIDEO_CTRL2(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return value;
}
void GH_PLL_set_VIDEO_CTRL2_BYPASS(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.bypass = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_BYPASS] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_BYPASS(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_BYPASS] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.bypass;
}
void GH_PLL_set_VIDEO_CTRL2_FOUTVCOPD(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.foutvcopd = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_FOUTVCOPD] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_FOUTVCOPD(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_FOUTVCOPD] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.foutvcopd;
}
void GH_PLL_set_VIDEO_CTRL2_FOUT4PHASEPD(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.fout4phasepd = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_FOUT4PHASEPD] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_FOUT4PHASEPD(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_FOUT4PHASEPD] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.fout4phasepd;
}
void GH_PLL_set_VIDEO_CTRL2_FOUTPOSTDIVPD(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.foutpostdivpd = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_FOUTPOSTDIVPD] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_FOUTPOSTDIVPD(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_FOUTPOSTDIVPD] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.foutpostdivpd;
}
void GH_PLL_set_VIDEO_CTRL2_DSMPD(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.dsmpd = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_DSMPD] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_DSMPD(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_DSMPD] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.dsmpd;
}
void GH_PLL_set_VIDEO_CTRL2_DACPD(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.dacpd = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_DACPD] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_DACPD(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_DACPD] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.dacpd;
}
void GH_PLL_set_VIDEO_CTRL2_PWRDN(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.pwrdn = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_PWRDN] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_PWRDN(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_PWRDN] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.pwrdn;
}
void GH_PLL_set_VIDEO_CTRL2_LOCK_FORCE(U8 data)
{
    GH_PLL_VIDEO_CTRL2_S d;
    d.all = *(volatile U32 *)REG_PLL_VIDEO_CTRL2;
    d.bitc.lock_force = data;
    *(volatile U32 *)REG_PLL_VIDEO_CTRL2 = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_VIDEO_CTRL2_LOCK_FORCE] <-- 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,d.all,d.all);
    #endif
}
U8   GH_PLL_get_VIDEO_CTRL2_LOCK_FORCE(void)
{
    GH_PLL_VIDEO_CTRL2_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_VIDEO_CTRL2);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_VIDEO_CTRL2_LOCK_FORCE] --> 0x%08x\n",
                        REG_PLL_VIDEO_CTRL2,value);
    #endif
    return tmp_value.bitc.lock_force;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_DDR_CALIB (read/write)                                 */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_DDR_CALIB(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_DDR_CALIB = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_DDR_CALIB] <-- 0x%08x\n",
                        REG_PLL_SCALER_DDR_CALIB,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_DDR_CALIB(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_DDR_CALIB);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_DDR_CALIB] --> 0x%08x\n",
                        REG_PLL_SCALER_DDR_CALIB,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_DDR_CALIB_Div(U8 data)
{
    GH_PLL_SCALER_DDR_CALIB_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_DDR_CALIB;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_DDR_CALIB = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_DDR_CALIB_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_DDR_CALIB,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SCALER_DDR_CALIB_Div(void)
{
    GH_PLL_SCALER_DDR_CALIB_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_DDR_CALIB);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_DDR_CALIB_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_DDR_CALIB,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_ADC_CTRL (read/write)                                         */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_ADC_CTRL(U32 data)
{
    *(volatile U32 *)REG_PLL_ADC_CTRL = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_ADC_CTRL] <-- 0x%08x\n",
                        REG_PLL_ADC_CTRL,data,data);
    #endif
}
U32  GH_PLL_get_ADC_CTRL(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_ADC_CTRL);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_ADC_CTRL] --> 0x%08x\n",
                        REG_PLL_ADC_CTRL,value);
    #endif
    return value;
}
void GH_PLL_set_ADC_CTRL_clk(U8 data)
{
    GH_PLL_ADC_CTRL_S d;
    d.all = *(volatile U32 *)REG_PLL_ADC_CTRL;
    d.bitc.clk = data;
    *(volatile U32 *)REG_PLL_ADC_CTRL = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_ADC_CTRL_clk] <-- 0x%08x\n",
                        REG_PLL_ADC_CTRL,d.all,d.all);
    #endif
}
U8   GH_PLL_get_ADC_CTRL_clk(void)
{
    GH_PLL_ADC_CTRL_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_ADC_CTRL);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_ADC_CTRL_clk] --> 0x%08x\n",
                        REG_PLL_ADC_CTRL,value);
    #endif
    return tmp_value.bitc.clk;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_CLK_REF_SSI (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CLK_REF_SSI(U32 data)
{
    *(volatile U32 *)REG_PLL_CLK_REF_SSI = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CLK_REF_SSI] <-- 0x%08x\n",
                        REG_PLL_CLK_REF_SSI,data,data);
    #endif
}
U32  GH_PLL_get_CLK_REF_SSI(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CLK_REF_SSI);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CLK_REF_SSI] --> 0x%08x\n",
                        REG_PLL_CLK_REF_SSI,value);
    #endif
    return value;
}
void GH_PLL_set_CLK_REF_SSI_clk(U8 data)
{
    GH_PLL_CLK_REF_SSI_S d;
    d.all = *(volatile U32 *)REG_PLL_CLK_REF_SSI;
    d.bitc.clk = data;
    *(volatile U32 *)REG_PLL_CLK_REF_SSI = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CLK_REF_SSI_clk] <-- 0x%08x\n",
                        REG_PLL_CLK_REF_SSI,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CLK_REF_SSI_clk(void)
{
    GH_PLL_CLK_REF_SSI_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CLK_REF_SSI);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CLK_REF_SSI_clk] --> 0x%08x\n",
                        REG_PLL_CLK_REF_SSI,value);
    #endif
    return tmp_value.bitc.clk;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_CLOCK_OBSV (read/write)                                       */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CLOCK_OBSV(U32 data)
{
    *(volatile U32 *)REG_PLL_CLOCK_OBSV = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CLOCK_OBSV] <-- 0x%08x\n",
                        REG_PLL_CLOCK_OBSV,data,data);
    #endif
}
U32  GH_PLL_get_CLOCK_OBSV(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CLOCK_OBSV);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CLOCK_OBSV] --> 0x%08x\n",
                        REG_PLL_CLOCK_OBSV,value);
    #endif
    return value;
}
void GH_PLL_set_CLOCK_OBSV_pll(U8 data)
{
    GH_PLL_CLOCK_OBSV_S d;
    d.all = *(volatile U32 *)REG_PLL_CLOCK_OBSV;
    d.bitc.pll = data;
    *(volatile U32 *)REG_PLL_CLOCK_OBSV = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CLOCK_OBSV_pll] <-- 0x%08x\n",
                        REG_PLL_CLOCK_OBSV,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CLOCK_OBSV_pll(void)
{
    GH_PLL_CLOCK_OBSV_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CLOCK_OBSV);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CLOCK_OBSV_pll] --> 0x%08x\n",
                        REG_PLL_CLOCK_OBSV,value);
    #endif
    return tmp_value.bitc.pll;
}
void GH_PLL_set_CLOCK_OBSV_en(U8 data)
{
    GH_PLL_CLOCK_OBSV_S d;
    d.all = *(volatile U32 *)REG_PLL_CLOCK_OBSV;
    d.bitc.en = data;
    *(volatile U32 *)REG_PLL_CLOCK_OBSV = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CLOCK_OBSV_en] <-- 0x%08x\n",
                        REG_PLL_CLOCK_OBSV,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CLOCK_OBSV_en(void)
{
    GH_PLL_CLOCK_OBSV_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CLOCK_OBSV);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CLOCK_OBSV_en] --> 0x%08x\n",
                        REG_PLL_CLOCK_OBSV,value);
    #endif
    return tmp_value.bitc.en;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_DISABLE_EXT (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_DISABLE_EXT(U32 data)
{
    *(volatile U32 *)REG_PLL_DISABLE_EXT = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_DISABLE_EXT] <-- 0x%08x\n",
                        REG_PLL_DISABLE_EXT,data,data);
    #endif
}
U32  GH_PLL_get_DISABLE_EXT(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_DISABLE_EXT);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_DISABLE_EXT] --> 0x%08x\n",
                        REG_PLL_DISABLE_EXT,value);
    #endif
    return value;
}
void GH_PLL_set_DISABLE_EXT_bypass(U8 data)
{
    GH_PLL_DISABLE_EXT_S d;
    d.all = *(volatile U32 *)REG_PLL_DISABLE_EXT;
    d.bitc.bypass = data;
    *(volatile U32 *)REG_PLL_DISABLE_EXT = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_DISABLE_EXT_bypass] <-- 0x%08x\n",
                        REG_PLL_DISABLE_EXT,d.all,d.all);
    #endif
}
U8   GH_PLL_get_DISABLE_EXT_bypass(void)
{
    GH_PLL_DISABLE_EXT_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_DISABLE_EXT);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_DISABLE_EXT_bypass] --> 0x%08x\n",
                        REG_PLL_DISABLE_EXT,value);
    #endif
    return tmp_value.bitc.bypass;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_SCALER_IDSP_POST (read/write)                                 */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_SCALER_IDSP_POST(U32 data)
{
    *(volatile U32 *)REG_PLL_SCALER_IDSP_POST = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_IDSP_POST] <-- 0x%08x\n",
                        REG_PLL_SCALER_IDSP_POST,data,data);
    #endif
}
U32  GH_PLL_get_SCALER_IDSP_POST(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_IDSP_POST);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_IDSP_POST] --> 0x%08x\n",
                        REG_PLL_SCALER_IDSP_POST,value);
    #endif
    return value;
}
void GH_PLL_set_SCALER_IDSP_POST_Div(U8 data)
{
    GH_PLL_SCALER_IDSP_POST_S d;
    d.all = *(volatile U32 *)REG_PLL_SCALER_IDSP_POST;
    d.bitc.div = data;
    *(volatile U32 *)REG_PLL_SCALER_IDSP_POST = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_SCALER_IDSP_POST_Div] <-- 0x%08x\n",
                        REG_PLL_SCALER_IDSP_POST,d.all,d.all);
    #endif
}
U8   GH_PLL_get_SCALER_IDSP_POST_Div(void)
{
    GH_PLL_SCALER_IDSP_POST_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_SCALER_IDSP_POST);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_SCALER_IDSP_POST_Div] --> 0x%08x\n",
                        REG_PLL_SCALER_IDSP_POST,value);
    #endif
    return tmp_value.bitc.div;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IOCTRL_JTAG (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IOCTRL_JTAG(U32 data)
{
    *(volatile U32 *)REG_PLL_IOCTRL_JTAG = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_JTAG] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_JTAG,data,data);
    #endif
}
U32  GH_PLL_get_IOCTRL_JTAG(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_JTAG);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_JTAG] --> 0x%08x\n",
                        REG_PLL_IOCTRL_JTAG,value);
    #endif
    return value;
}
void GH_PLL_set_IOCTRL_JTAG_level(U8 data)
{
    GH_PLL_IOCTRL_JTAG_S d;
    d.all = *(volatile U32 *)REG_PLL_IOCTRL_JTAG;
    d.bitc.level = data;
    *(volatile U32 *)REG_PLL_IOCTRL_JTAG = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_JTAG_level] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_JTAG,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_JTAG_level(void)
{
    GH_PLL_IOCTRL_JTAG_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_JTAG);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_JTAG_level] --> 0x%08x\n",
                        REG_PLL_IOCTRL_JTAG,value);
    #endif
    return tmp_value.bitc.level;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IOCTRL_SFLASH (read/write)                                    */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IOCTRL_SFLASH(U32 data)
{
    *(volatile U32 *)REG_PLL_IOCTRL_SFLASH = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_SFLASH] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_SFLASH,data,data);
    #endif
}
U32  GH_PLL_get_IOCTRL_SFLASH(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_SFLASH);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_SFLASH] --> 0x%08x\n",
                        REG_PLL_IOCTRL_SFLASH,value);
    #endif
    return value;
}
void GH_PLL_set_IOCTRL_SFLASH_level(U8 data)
{
    GH_PLL_IOCTRL_SFLASH_S d;
    d.all = *(volatile U32 *)REG_PLL_IOCTRL_SFLASH;
    d.bitc.level = data;
    *(volatile U32 *)REG_PLL_IOCTRL_SFLASH = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_SFLASH_level] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_SFLASH,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_SFLASH_level(void)
{
    GH_PLL_IOCTRL_SFLASH_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_SFLASH);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_SFLASH_level] --> 0x%08x\n",
                        REG_PLL_IOCTRL_SFLASH,value);
    #endif
    return tmp_value.bitc.level;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IOCTRL_SENSOR (read/write)                                    */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IOCTRL_SENSOR(U32 data)
{
    *(volatile U32 *)REG_PLL_IOCTRL_SENSOR = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_SENSOR] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_SENSOR,data,data);
    #endif
}
U32  GH_PLL_get_IOCTRL_SENSOR(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_SENSOR);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_SENSOR] --> 0x%08x\n",
                        REG_PLL_IOCTRL_SENSOR,value);
    #endif
    return value;
}
void GH_PLL_set_IOCTRL_SENSOR_level(U8 data)
{
    GH_PLL_IOCTRL_SENSOR_S d;
    d.all = *(volatile U32 *)REG_PLL_IOCTRL_SENSOR;
    d.bitc.level = data;
    *(volatile U32 *)REG_PLL_IOCTRL_SENSOR = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_SENSOR_level] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_SENSOR,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_SENSOR_level(void)
{
    GH_PLL_IOCTRL_SENSOR_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_SENSOR);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_SENSOR_level] --> 0x%08x\n",
                        REG_PLL_IOCTRL_SENSOR,value);
    #endif
    return tmp_value.bitc.level;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_AHB_MISC_EN (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_AHB_MISC_EN(U32 data)
{
    *(volatile U32 *)REG_PLL_AHB_MISC_EN = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AHB_MISC_EN] <-- 0x%08x\n",
                        REG_PLL_AHB_MISC_EN,data,data);
    #endif
}
U32  GH_PLL_get_AHB_MISC_EN(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_AHB_MISC_EN);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AHB_MISC_EN] --> 0x%08x\n",
                        REG_PLL_AHB_MISC_EN,value);
    #endif
    return value;
}
void GH_PLL_set_AHB_MISC_EN_rct_ahb(U8 data)
{
    GH_PLL_AHB_MISC_EN_S d;
    d.all = *(volatile U32 *)REG_PLL_AHB_MISC_EN;
    d.bitc.rct_ahb = data;
    *(volatile U32 *)REG_PLL_AHB_MISC_EN = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_AHB_MISC_EN_rct_ahb] <-- 0x%08x\n",
                        REG_PLL_AHB_MISC_EN,d.all,d.all);
    #endif
}
U8   GH_PLL_get_AHB_MISC_EN_rct_ahb(void)
{
    GH_PLL_AHB_MISC_EN_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_AHB_MISC_EN);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_AHB_MISC_EN_rct_ahb] --> 0x%08x\n",
                        REG_PLL_AHB_MISC_EN,value);
    #endif
    return tmp_value.bitc.rct_ahb;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_DDRC_IDSP_RESET (read/write)                                  */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_DDRC_IDSP_RESET(U32 data)
{
    *(volatile U32 *)REG_PLL_DDRC_IDSP_RESET = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_DDRC_IDSP_RESET] <-- 0x%08x\n",
                        REG_PLL_DDRC_IDSP_RESET,data,data);
    #endif
}
U32  GH_PLL_get_DDRC_IDSP_RESET(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_DDRC_IDSP_RESET);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_DDRC_IDSP_RESET] --> 0x%08x\n",
                        REG_PLL_DDRC_IDSP_RESET,value);
    #endif
    return value;
}
void GH_PLL_set_DDRC_IDSP_RESET_ddrc(U8 data)
{
    GH_PLL_DDRC_IDSP_RESET_S d;
    d.all = *(volatile U32 *)REG_PLL_DDRC_IDSP_RESET;
    d.bitc.ddrc = data;
    *(volatile U32 *)REG_PLL_DDRC_IDSP_RESET = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_DDRC_IDSP_RESET_ddrc] <-- 0x%08x\n",
                        REG_PLL_DDRC_IDSP_RESET,d.all,d.all);
    #endif
}
U8   GH_PLL_get_DDRC_IDSP_RESET_ddrc(void)
{
    GH_PLL_DDRC_IDSP_RESET_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_DDRC_IDSP_RESET);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_DDRC_IDSP_RESET_ddrc] --> 0x%08x\n",
                        REG_PLL_DDRC_IDSP_RESET,value);
    #endif
    return tmp_value.bitc.ddrc;
}
void GH_PLL_set_DDRC_IDSP_RESET_idsp(U8 data)
{
    GH_PLL_DDRC_IDSP_RESET_S d;
    d.all = *(volatile U32 *)REG_PLL_DDRC_IDSP_RESET;
    d.bitc.idsp = data;
    *(volatile U32 *)REG_PLL_DDRC_IDSP_RESET = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_DDRC_IDSP_RESET_idsp] <-- 0x%08x\n",
                        REG_PLL_DDRC_IDSP_RESET,d.all,d.all);
    #endif
}
U8   GH_PLL_get_DDRC_IDSP_RESET_idsp(void)
{
    GH_PLL_DDRC_IDSP_RESET_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_DDRC_IDSP_RESET);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_DDRC_IDSP_RESET_idsp] --> 0x%08x\n",
                        REG_PLL_DDRC_IDSP_RESET,value);
    #endif
    return tmp_value.bitc.idsp;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_CKEN_IDSP (read/write)                                        */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_CKEN_IDSP(U32 data)
{
    *(volatile U32 *)REG_PLL_CKEN_IDSP = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CKEN_IDSP] <-- 0x%08x\n",
                        REG_PLL_CKEN_IDSP,data,data);
    #endif
}
U32  GH_PLL_get_CKEN_IDSP(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_CKEN_IDSP);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CKEN_IDSP] --> 0x%08x\n",
                        REG_PLL_CKEN_IDSP,value);
    #endif
    return value;
}
void GH_PLL_set_CKEN_IDSP_en(U8 data)
{
    GH_PLL_CKEN_IDSP_S d;
    d.all = *(volatile U32 *)REG_PLL_CKEN_IDSP;
    d.bitc.en = data;
    *(volatile U32 *)REG_PLL_CKEN_IDSP = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_CKEN_IDSP_en] <-- 0x%08x\n",
                        REG_PLL_CKEN_IDSP,d.all,d.all);
    #endif
}
U8   GH_PLL_get_CKEN_IDSP_en(void)
{
    GH_PLL_CKEN_IDSP_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_CKEN_IDSP);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_CKEN_IDSP_en] --> 0x%08x\n",
                        REG_PLL_CKEN_IDSP,value);
    #endif
    return tmp_value.bitc.en;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IOCTRL_GPIO (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IOCTRL_GPIO(U8 index, U32 data)
{
    *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)) = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_GPIO] <-- 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),data,data);
    #endif
}
U32  GH_PLL_get_IOCTRL_GPIO(U8 index)
{
    U32 value = (*(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)));

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_GPIO] --> 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),value);
    #endif
    return value;
}
void GH_PLL_set_IOCTRL_GPIO_io0(U8 index, U8 data)
{
    GH_PLL_IOCTRL_GPIO_S d;
    d.all = *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004));
    d.bitc.io0 = data;
    *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)) = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_GPIO_io0] <-- 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_GPIO_io0(U8 index)
{
    GH_PLL_IOCTRL_GPIO_S tmp_value;
    U32 value = (*(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)));

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_GPIO_io0] --> 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),value);
    #endif
    return tmp_value.bitc.io0;
}
void GH_PLL_set_IOCTRL_GPIO_io1(U8 index, U8 data)
{
    GH_PLL_IOCTRL_GPIO_S d;
    d.all = *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004));
    d.bitc.io1 = data;
    *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)) = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_GPIO_io1] <-- 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_GPIO_io1(U8 index)
{
    GH_PLL_IOCTRL_GPIO_S tmp_value;
    U32 value = (*(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)));

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_GPIO_io1] --> 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),value);
    #endif
    return tmp_value.bitc.io1;
}
void GH_PLL_set_IOCTRL_GPIO_io2(U8 index, U8 data)
{
    GH_PLL_IOCTRL_GPIO_S d;
    d.all = *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004));
    d.bitc.io2 = data;
    *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)) = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_GPIO_io2] <-- 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_GPIO_io2(U8 index)
{
    GH_PLL_IOCTRL_GPIO_S tmp_value;
    U32 value = (*(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)));

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_GPIO_io2] --> 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),value);
    #endif
    return tmp_value.bitc.io2;
}
void GH_PLL_set_IOCTRL_GPIO_io3(U8 index, U8 data)
{
    GH_PLL_IOCTRL_GPIO_S d;
    d.all = *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004));
    d.bitc.io3 = data;
    *(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)) = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_GPIO_io3] <-- 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_GPIO_io3(U8 index)
{
    GH_PLL_IOCTRL_GPIO_S tmp_value;
    U32 value = (*(volatile U32 *)(REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)));

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_GPIO_io3] --> 0x%08x\n",
                        (REG_PLL_IOCTRL_GPIO + index * FIO_MOFFSET(PLL,0x00000004)),value);
    #endif
    return tmp_value.bitc.io3;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* register PLL_IOCTRL_XCLK (read/write)                                      */
/*----------------------------------------------------------------------------*/
#if GH_INLINE_LEVEL == 0
void GH_PLL_set_IOCTRL_XCLK(U32 data)
{
    *(volatile U32 *)REG_PLL_IOCTRL_XCLK = data;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_XCLK] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_XCLK,data,data);
    #endif
}
U32  GH_PLL_get_IOCTRL_XCLK(void)
{
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_XCLK);

    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_XCLK] --> 0x%08x\n",
                        REG_PLL_IOCTRL_XCLK,value);
    #endif
    return value;
}
void GH_PLL_set_IOCTRL_XCLK_bypass(U8 data)
{
    GH_PLL_IOCTRL_XCLK_S d;
    d.all = *(volatile U32 *)REG_PLL_IOCTRL_XCLK;
    d.bitc.bypass = data;
    *(volatile U32 *)REG_PLL_IOCTRL_XCLK = d.all;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "WRREG(0x%08x,0x%08x); \\\\ [GH_PLL_set_IOCTRL_XCLK_bypass] <-- 0x%08x\n",
                        REG_PLL_IOCTRL_XCLK,d.all,d.all);
    #endif
}
U8   GH_PLL_get_IOCTRL_XCLK_bypass(void)
{
    GH_PLL_IOCTRL_XCLK_S tmp_value;
    U32 value = (*(volatile U32 *)REG_PLL_IOCTRL_XCLK);

    tmp_value.all = value;
    #if GH_PLL_ENABLE_DEBUG_PRINT
    GH_PLL_DEBUG_PRINT_FUNCTION( "value = RDREG(0x%08x); \\\\ [GH_PLL_get_IOCTRL_XCLK_bypass] --> 0x%08x\n",
                        REG_PLL_IOCTRL_XCLK,value);
    #endif
    return tmp_value.bitc.bypass;
}
#endif /* GH_INLINE_LEVEL == 0 */

/*----------------------------------------------------------------------------*/
/* init function                                                              */
/*----------------------------------------------------------------------------*/
void GH_PLL_init(void)
{
    int i;

    GH_PLL_set_CORE_CTRL((U32)0x01202e01);
    GH_PLL_set_CORE_FRAC((U32)0x00000000);
    GH_PLL_set_SCALER_SD48((U32)0x0000000c);
    GH_PLL_set_VIDEO_CTRL((U32)0x01202401);
    GH_PLL_set_VIDEO_FRAC((U32)0x00000000);
    GH_PLL_set_SCALER_VIDEO_PRE((U32)0x00000001);
    GH_PLL_set_SENSOR_CTRL((U32)0x02406301);
    GH_PLL_set_SENSOR_FRAC((U32)0x00000000);
    GH_PLL_set_SCALER_SENSOR_POST((U32)0x00000000);
    GH_PLL_set_SYS_CONFIG((U32)0x00000000);
    GH_PLL_set_SCALER_UART((U32)0x00000008);
    GH_PLL_set_SCALER_SSI((U32)0x00000008);
    GH_PLL_set_SCALER_SENSOR_PRE((U32)0x00000001);
    GH_PLL_set_AUDIO_CTRL((U32)0x01202001);
    GH_PLL_set_AUDIO_FRAC((U32)0x00c49ba5);
    GH_PLL_set_SCALER_AUDIO_POST((U32)0x00000008);
    GH_PLL_set_SCALER_AUDIO_PRE((U32)0x00000001);
    GH_PLL_set_SOFT_OR_DLL_RESET((U32)0x00000002);
    GH_PLL_set_SCALER_DEBOUNCE((U32)0x00206978);
    GH_PLL_set_SCALER_PWM((U32)0x00000020);
    GH_PLL_set_CKEN_VDSP((U32)0x0000000f);
    GH_PLL_set_SCALER_ADC((U32)0x00000002);
    GH_PLL_set_SCALER_VIDEO_POST((U32)0x00000010);
    GH_PLL_set_CLK_SI_INPUT((U32)0x00000001);
    GH_PLL_set_IDSP_CTRL((U32)0x01203201);
    GH_PLL_set_IDSP_FRAC((U32)0x00000000);
    GH_PLL_set_SCALER_SSI2((U32)0x00000008);
    GH_PLL_set_CORE_CTRL2((U32)0x00000030);
    GH_PLL_set_IDSP_CTRL2((U32)0x00000030);
    GH_PLL_set_SCALER_CORE_POST((U32)0x00000002);
    GH_PLL_set_SENSOR_CTRL2((U32)0x00000030);
    GH_PLL_set_AUDIO_CTRL2((U32)0x00000030);
    GH_PLL_set_VIDEO_CTRL2((U32)0x00000030);
    GH_PLL_set_SCALER_DDR_CALIB((U32)0x00000001);
    GH_PLL_set_ADC_CTRL((U32)0x00000000);
    GH_PLL_set_CLK_REF_SSI((U32)0x00000000);
    GH_PLL_set_CLOCK_OBSV((U32)0x00000000);
    GH_PLL_set_DISABLE_EXT((U32)0x00000000);
    GH_PLL_set_SCALER_IDSP_POST((U32)0x00000002);
    GH_PLL_set_IOCTRL_JTAG((U32)0x00000021);
    GH_PLL_set_IOCTRL_SFLASH((U32)0x00000022);
    GH_PLL_set_IOCTRL_SENSOR((U32)0x00000022);
    GH_PLL_set_AHB_MISC_EN((U32)0x00000000);
    GH_PLL_set_DDRC_IDSP_RESET((U32)0x00000000);
    GH_PLL_set_CKEN_IDSP((U32)0x00000000);
    for (i=0; i<14; i++)
    {
        GH_PLL_set_IOCTRL_GPIO(i, (U32)0x11111111);
    }
    GH_PLL_set_IOCTRL_XCLK((U32)0x00000000);
    /* read read-clear registers in order to set mirror variables */
}

/*----------------------------------------------------------------------------*/
/* end of file                                                                */
/*----------------------------------------------------------------------------*/

