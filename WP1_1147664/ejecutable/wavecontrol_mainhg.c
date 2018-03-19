/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#include "libmatlb.h"
#include "libsgl.h"
#include "wavecontrol.h"
#include "cont_exacto.h"
#include "exact_cont2d.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "stab_1d.h"
#include "stab_2d.h"
#include "cla.h"
#include "data0.h"
#include "data1.h"
#include "data2.h"
#include "data3.h"
#include "data4.h"
#include "dibujo_sol.h"
#include "difcent.h"
#include "elftos.h"
#include "initialdata1.h"
#include "parametros.h"
#include "surf.h"
#include "xlabel.h"
#include "ylabel.h"
#include "zlabel.h"
#include "animcont_2d.h"
#include "cont_2d.h"
#include "cont_2dmix.h"
#include "cont_bigrid2d.h"
#include "data1_2d.h"
#include "data2_2d.h"
#include "data3_2d.h"
#include "data4_2d.h"
#include "mesh.h"
#include "paramcont2d.h"
#include "guihandles.h"
#include "openfig.h"
#include "animstab1d.h"
#include "initialdatastab1.h"
#include "paramstab1d.h"
#include "stab1dcalcul.h"
#include "damping2d.h"
#include "grahanimstab2d.h"
#include "paramstab2d.h"
#include "stab2dcalcul.h"
#include "error1.h"
#include "error2.h"
#include "bdycond2d.h"
#include "controle2d.h"
#include "matr2d.h"
#include "normel22.h"
#include "numgrid.h"
#include "title.h"
#include "delsq.h"
#include "error3.h"
#include "forward2d.h"
#include "nl2domeg2d.h"
#include "normehm12d.h"
#include "normel22d.h"
#include "phiback2d.h"
#include "prosca2d.h"
#include "psiback2d.h"
#include "matrsc_mix2d.h"
#include "injecte.h"
#include "parseparams.h"
#include "isvarname.h"
#include "movegui.h"
#include "normel2.h"
#include "spy.h"
#include "animstab2d.h"
#include "stop1.h"
#include "matrstab2d.h"
#include "grdiv.h"
#include "nested.h"
#include "normeh102d.h"
#include "grdivk.h"
#include "grdivm.h"
#include "iskeyword.h"
#include "grdiv1.h"
#include "nestdiss.h"
#include "libmmfile.h"
#include "libmwsglm.h"

extern _mex_information _main_info;

static mexFunctionTableEntry function_table[77]
  = { { "wavecontrol", mlxWavecontrol, -1, -1,
        &_local_function_table_wavecontrol },
      { "cont_exacto", mlxCont_exacto, -1, -1,
        &_local_function_table_cont_exacto },
      { "exact_cont2d", mlxExact_cont2d, -1, -1,
        &_local_function_table_exact_cont2d },
      { "gui_mainfcn", mlxGui_mainfcn, -2, -1,
        &_local_function_table_gui_mainfcn },
      { "guidata", mlxGuidata, 2, 1, &_local_function_table_guidata },
      { "stab_1d", mlxStab_1d, -1, -1, &_local_function_table_stab_1d },
      { "stab_2d", mlxStab_2d, -1, -1, &_local_function_table_stab_2d },
      { "cla", mlxCla, -1, 1, &_local_function_table_cla },
      { "data0", mlxData0, 1, 2, &_local_function_table_data0 },
      { "data1", mlxData1, 1, 2, &_local_function_table_data1 },
      { "data2", mlxData2, 1, 2, &_local_function_table_data2 },
      { "data3", mlxData3, 1, 2, &_local_function_table_data3 },
      { "data4", mlxData4, 1, 2, &_local_function_table_data4 },
      { "dibujo_sol", mlxDibujo_sol, 8, 1, &_local_function_table_dibujo_sol },
      { "difcent", mlxDifcent, 8, 3, &_local_function_table_difcent },
      { "elftos", mlxElftos, 11, 3, &_local_function_table_elftos },
      { "initialdata1", mlxInitialdata1, -1, -1,
        &_local_function_table_initialdata1 },
      { "parametros", mlxParametros, -1, -1,
        &_local_function_table_parametros },
      { "surf", mlxSurf, -1, 1, &_local_function_table_surf },
      { "xlabel", mlxXlabel, -2, 1, &_local_function_table_xlabel },
      { "ylabel", mlxYlabel, -2, 1, &_local_function_table_ylabel },
      { "zlabel", mlxZlabel, -2, 1, &_local_function_table_zlabel },
      { "animcont_2d", mlxAnimcont_2d, 10, 1,
        &_local_function_table_animcont_2d },
      { "cont_2d", mlxCont_2d, 8, 5, &_local_function_table_cont_2d },
      { "cont_2dmix", mlxCont_2dmix, 8, 5, &_local_function_table_cont_2dmix },
      { "cont_bigrid2d", mlxCont_bigrid2d, 8, 5,
        &_local_function_table_cont_bigrid2d },
      { "data1_2d", mlxData1_2d, 3, 2, &_local_function_table_data1_2d },
      { "data2_2d", mlxData2_2d, 3, 2, &_local_function_table_data2_2d },
      { "data3_2d", mlxData3_2d, 3, 2, &_local_function_table_data3_2d },
      { "data4_2d", mlxData4_2d, 3, 2, &_local_function_table_data4_2d },
      { "mesh", mlxMesh, -1, 1, &_local_function_table_mesh },
      { "paramcont2d", mlxParamcont2d, -1, -1,
        &_local_function_table_paramcont2d },
      { "guihandles", mlxGuihandles, 1, 1, &_local_function_table_guihandles },
      { "openfig", mlxOpenfig, 3, 1, &_local_function_table_openfig },
      { "animstab1d", mlxAnimstab1d, 12, 1,
        &_local_function_table_animstab1d },
      { "initialdatastab1", mlxInitialdatastab1, -1,
        -1, &_local_function_table_initialdatastab1 },
      { "paramstab1d", mlxParamstab1d, -1, -1,
        &_local_function_table_paramstab1d },
      { "stab1dcalcul", mlxStab1dcalcul, 11, 2,
        &_local_function_table_stab1dcalcul },
      { "damping2d", mlxDamping2d, 5, 1, &_local_function_table_damping2d },
      { "grahanimstab2d", mlxGrahanimstab2d, -1, -1,
        &_local_function_table_grahanimstab2d },
      { "paramstab2d", mlxParamstab2d, -1, -1,
        &_local_function_table_paramstab2d },
      { "stab2dcalcul", mlxStab2dcalcul, 10, 2,
        &_local_function_table_stab2dcalcul },
      { "error1", mlxError1, -1, -1, &_local_function_table_error1 },
      { "error2", mlxError2, -1, -1, &_local_function_table_error2 },
      { "bdycond2d", mlxBdycond2d, 7, 1, &_local_function_table_bdycond2d },
      { "controle2d", mlxControle2d, 5, 1, &_local_function_table_controle2d },
      { "matr2d", mlxMatr2d, 3, 1, &_local_function_table_matr2d },
      { "normel22", mlxNormel22, 3, 1, &_local_function_table_normel22 },
      { "numgrid", mlxNumgrid, 2, 1, &_local_function_table_numgrid },
      { "title", mlxTitle, -2, 1, &_local_function_table_title },
      { "delsq", mlxDelsq, 1, 1, &_local_function_table_delsq },
      { "error3", mlxError3, -1, -1, &_local_function_table_error3 },
      { "forward2d", mlxForward2d, 9, 2, &_local_function_table_forward2d },
      { "nl2domeg2d", mlxNl2domeg2d, 5, 1, &_local_function_table_nl2domeg2d },
      { "normehm12d", mlxNormehm12d, 7, 1, &_local_function_table_normehm12d },
      { "normel22d", mlxNormel22d, 3, 2, &_local_function_table_normel22d },
      { "phiback2d", mlxPhiback2d, 7, 1, &_local_function_table_phiback2d },
      { "prosca2d", mlxProsca2d, 10, 1, &_local_function_table_prosca2d },
      { "psiback2d", mlxPsiback2d, 4, 1, &_local_function_table_psiback2d },
      { "matrsc_mix2d", mlxMatrsc_mix2d, 3, 2,
        &_local_function_table_matrsc_mix2d },
      { "injecte", mlxInjecte, 3, 1, &_local_function_table_injecte },
      { "parseparams", mlxParseparams, 1, 2,
        &_local_function_table_parseparams },
      { "isvarname", mlxIsvarname, 1, 1, &_local_function_table_isvarname },
      { "movegui", mlxMovegui, -1, 0, &_local_function_table_movegui },
      { "normel2", mlxNormel2, 3, 2, &_local_function_table_normel2 },
      { "spy", mlxSpy, 3, 0, &_local_function_table_spy },
      { "animstab2d", mlxAnimstab2d, 13, 1,
        &_local_function_table_animstab2d },
      { "stop1", mlxStop1, -1, -1, &_local_function_table_stop1 },
      { "matrstab2d", mlxMatrstab2d, 7, 3, &_local_function_table_matrstab2d },
      { "grdiv", mlxGrdiv, 1, 2, &_local_function_table_grdiv },
      { "nested", mlxNested, 1, 1, &_local_function_table_nested },
      { "normeh102d", mlxNormeh102d, 5, 1, &_local_function_table_normeh102d },
      { "grdivk", mlxGrdivk, 1, 1, &_local_function_table_grdivk },
      { "grdivm", mlxGrdivm, 1, 1, &_local_function_table_grdivm },
      { "iskeyword", mlxIskeyword, 1, 1, &_local_function_table_iskeyword },
      { "grdiv1", mlxGrdiv1, 1, 1, &_local_function_table_grdiv1 },
      { "nestdiss", mlxNestdiss, 2, 2, &_local_function_table_nestdiss } };

static _mexInitTermTableEntry init_term_table[79]
  = { { libmmfileInitialize, libmmfileTerminate },
      { libmwsglmInitialize, libmwsglmTerminate },
      { InitializeModule_wavecontrol, TerminateModule_wavecontrol },
      { InitializeModule_cont_exacto, TerminateModule_cont_exacto },
      { InitializeModule_exact_cont2d, TerminateModule_exact_cont2d },
      { InitializeModule_gui_mainfcn, TerminateModule_gui_mainfcn },
      { InitializeModule_guidata, TerminateModule_guidata },
      { InitializeModule_stab_1d, TerminateModule_stab_1d },
      { InitializeModule_stab_2d, TerminateModule_stab_2d },
      { InitializeModule_cla, TerminateModule_cla },
      { InitializeModule_data0, TerminateModule_data0 },
      { InitializeModule_data1, TerminateModule_data1 },
      { InitializeModule_data2, TerminateModule_data2 },
      { InitializeModule_data3, TerminateModule_data3 },
      { InitializeModule_data4, TerminateModule_data4 },
      { InitializeModule_dibujo_sol, TerminateModule_dibujo_sol },
      { InitializeModule_difcent, TerminateModule_difcent },
      { InitializeModule_elftos, TerminateModule_elftos },
      { InitializeModule_initialdata1, TerminateModule_initialdata1 },
      { InitializeModule_parametros, TerminateModule_parametros },
      { InitializeModule_surf, TerminateModule_surf },
      { InitializeModule_xlabel, TerminateModule_xlabel },
      { InitializeModule_ylabel, TerminateModule_ylabel },
      { InitializeModule_zlabel, TerminateModule_zlabel },
      { InitializeModule_animcont_2d, TerminateModule_animcont_2d },
      { InitializeModule_cont_2d, TerminateModule_cont_2d },
      { InitializeModule_cont_2dmix, TerminateModule_cont_2dmix },
      { InitializeModule_cont_bigrid2d, TerminateModule_cont_bigrid2d },
      { InitializeModule_data1_2d, TerminateModule_data1_2d },
      { InitializeModule_data2_2d, TerminateModule_data2_2d },
      { InitializeModule_data3_2d, TerminateModule_data3_2d },
      { InitializeModule_data4_2d, TerminateModule_data4_2d },
      { InitializeModule_mesh, TerminateModule_mesh },
      { InitializeModule_paramcont2d, TerminateModule_paramcont2d },
      { InitializeModule_guihandles, TerminateModule_guihandles },
      { InitializeModule_openfig, TerminateModule_openfig },
      { InitializeModule_animstab1d, TerminateModule_animstab1d },
      { InitializeModule_initialdatastab1, TerminateModule_initialdatastab1 },
      { InitializeModule_paramstab1d, TerminateModule_paramstab1d },
      { InitializeModule_stab1dcalcul, TerminateModule_stab1dcalcul },
      { InitializeModule_damping2d, TerminateModule_damping2d },
      { InitializeModule_grahanimstab2d, TerminateModule_grahanimstab2d },
      { InitializeModule_paramstab2d, TerminateModule_paramstab2d },
      { InitializeModule_stab2dcalcul, TerminateModule_stab2dcalcul },
      { InitializeModule_error1, TerminateModule_error1 },
      { InitializeModule_error2, TerminateModule_error2 },
      { InitializeModule_bdycond2d, TerminateModule_bdycond2d },
      { InitializeModule_controle2d, TerminateModule_controle2d },
      { InitializeModule_matr2d, TerminateModule_matr2d },
      { InitializeModule_normel22, TerminateModule_normel22 },
      { InitializeModule_numgrid, TerminateModule_numgrid },
      { InitializeModule_title, TerminateModule_title },
      { InitializeModule_delsq, TerminateModule_delsq },
      { InitializeModule_error3, TerminateModule_error3 },
      { InitializeModule_forward2d, TerminateModule_forward2d },
      { InitializeModule_nl2domeg2d, TerminateModule_nl2domeg2d },
      { InitializeModule_normehm12d, TerminateModule_normehm12d },
      { InitializeModule_normel22d, TerminateModule_normel22d },
      { InitializeModule_phiback2d, TerminateModule_phiback2d },
      { InitializeModule_prosca2d, TerminateModule_prosca2d },
      { InitializeModule_psiback2d, TerminateModule_psiback2d },
      { InitializeModule_matrsc_mix2d, TerminateModule_matrsc_mix2d },
      { InitializeModule_injecte, TerminateModule_injecte },
      { InitializeModule_parseparams, TerminateModule_parseparams },
      { InitializeModule_isvarname, TerminateModule_isvarname },
      { InitializeModule_movegui, TerminateModule_movegui },
      { InitializeModule_normel2, TerminateModule_normel2 },
      { InitializeModule_spy, TerminateModule_spy },
      { InitializeModule_animstab2d, TerminateModule_animstab2d },
      { InitializeModule_stop1, TerminateModule_stop1 },
      { InitializeModule_matrstab2d, TerminateModule_matrstab2d },
      { InitializeModule_grdiv, TerminateModule_grdiv },
      { InitializeModule_nested, TerminateModule_nested },
      { InitializeModule_normeh102d, TerminateModule_normeh102d },
      { InitializeModule_grdivk, TerminateModule_grdivk },
      { InitializeModule_grdivm, TerminateModule_grdivm },
      { InitializeModule_iskeyword, TerminateModule_iskeyword },
      { InitializeModule_grdiv1, TerminateModule_grdiv1 },
      { InitializeModule_nestdiss, TerminateModule_nestdiss } };

_mex_information _main_info
  = { 1, 77, function_table, 0, NULL, 0, NULL, 79, init_term_table };

/*
 * The function "main" is a Compiler-generated main wrapper, suitable for
 * building a stand-alone application.  It calls a library function to perform
 * initialization, call the main function, and perform library termination.
 */
int main(int argc, const char * * argv) {
    return mclMainhg(argc, argv, mlxWavecontrol, 1, &_main_info);
}
