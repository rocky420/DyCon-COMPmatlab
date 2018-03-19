/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "stab_1d.h"
#include "animstab1d.h"
#include "cla.h"
#include "data1.h"
#include "data2.h"
#include "data3.h"
#include "data4.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "initialdatastab1.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
#include "paramstab1d.h"
#include "stab1dcalcul.h"
#include "xlabel.h"
#include "ylabel.h"
static mxArray * _mxarray0_;

static mxChar _array2_[8] = { 'g', 'u', 'i', '_', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray1_;

static mxChar _array4_[13] = { 'g', 'u', 'i', '_', 'S', 'i', 'n',
                               'g', 'l', 'e', 't', 'o', 'n' };
static mxArray * _mxarray3_;

static mxChar _array6_[14] = { 'g', 'u', 'i', '_', 'O', 'p', 'e',
                               'n', 'i', 'n', 'g', 'F', 'c', 'n' };
static mxArray * _mxarray5_;

static mxChar _array8_[13] = { 'g', 'u', 'i', '_', 'O', 'u', 't',
                               'p', 'u', 't', 'F', 'c', 'n' };
static mxArray * _mxarray7_;

static mxChar _array10_[13] = { 'g', 'u', 'i', '_', 'L', 'a', 'y',
                                'o', 'u', 't', 'F', 'c', 'n' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;

static mxChar _array13_[12] = { 'g', 'u', 'i', '_', 'C', 'a',
                                'l', 'l', 'b', 'a', 'c', 'k' };
static mxArray * _mxarray12_;

static mxChar _array15_[7] = { 'd', 'i', 'f', 'c', 'e', 'n', 't' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;

static mxChar _array22_[9] = { 's', 'i', 'n', '(', 'p', 'i', '*', 'x', ')' };
static mxArray * _mxarray21_;

static mxChar _array24_[13] = { '-', 'p', 'i', '*', 's', 'i', 'n',
                                '(', 'p', 'i', '*', 'x', ')' };
static mxArray * _mxarray23_;

static mxChar _array26_[4] = { 'd', 'a', 't', 'a' };
static mxArray * _mxarray25_;

static mxChar _array28_[15] = { 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray27_;

static mxChar _array30_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray29_;

static mxChar _array32_[31] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray31_;

static mxChar _array34_[5] = { 'V', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray33_;

static mxChar _array36_[6] = { 'S', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray35_;

static mxChar _array38_[6] = { 'e', 'n', 'e', 'r', 'g', 'y' };
static mxArray * _mxarray37_;
static mxArray * _mxarray39_;

static mxChar _array41_[4] = { 't', 'i', 'm', 'e' };
static mxArray * _mxarray40_;

static mxChar _array43_[11] = { 'l', 'o', 'g', '(', 'E', 'n',
                                'e', 'r', 'g', 'y', ')' };
static mxArray * _mxarray42_;
static mxArray * _mxarray44_;
static mxArray * _mxarray45_;

static mxChar _array47_[2] = { 'o', 'n' };
static mxArray * _mxarray46_;

static mxChar _array49_[3] = { 'r', 'e', 'd' };
static mxArray * _mxarray48_;

static mxChar _array51_[3] = { 'o', 'f', 'f' };
static mxArray * _mxarray50_;

static mxChar _array53_[9] = { 'a', 'n', 'i', 'm', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray52_;

static mxChar _array55_[19] = { 'd', 'i', 'f', 'e', 'r', 'e', 'n',
                                'c', 'i', 'a', 's', ' ', 'f', 'i',
                                'n', 'i', 't', 'a', 's' };
static mxArray * _mxarray54_;

static mxChar _array57_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '1' };
static mxArray * _mxarray56_;

static mxChar _array59_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '2' };
static mxArray * _mxarray58_;

static mxChar _array61_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '3' };
static mxArray * _mxarray60_;

static mxChar _array63_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '4' };
static mxArray * _mxarray62_;

void InitializeModule_stab_1d(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
    _mxarray14_ = mclInitializeString(7, _array15_);
    _mxarray16_ = mclInitializeDouble(41.0);
    _mxarray17_ = mclInitializeDouble(.8);
    _mxarray18_ = mclInitializeDouble(0.0);
    _mxarray19_ = mclInitializeDouble(10.0);
    _mxarray20_ = mclInitializeDouble(.9);
    _mxarray21_ = mclInitializeString(9, _array22_);
    _mxarray23_ = mclInitializeString(13, _array24_);
    _mxarray25_ = mclInitializeString(4, _array26_);
    _mxarray27_ = mclInitializeString(15, _array28_);
    _mxarray29_ = mclInitializeString(5, _array30_);
    _mxarray31_ = mclInitializeString(31, _array32_);
    _mxarray33_ = mclInitializeString(5, _array34_);
    _mxarray35_ = mclInitializeString(6, _array36_);
    _mxarray37_ = mclInitializeString(6, _array38_);
    _mxarray39_ = mclInitializeDouble(2.0);
    _mxarray40_ = mclInitializeString(4, _array41_);
    _mxarray42_ = mclInitializeString(11, _array43_);
    _mxarray44_ = mclInitializeDouble(.95);
    _mxarray45_ = mclInitializeDouble(1.05);
    _mxarray46_ = mclInitializeString(2, _array47_);
    _mxarray48_ = mclInitializeString(3, _array49_);
    _mxarray50_ = mclInitializeString(3, _array51_);
    _mxarray52_ = mclInitializeString(9, _array53_);
    _mxarray54_ = mclInitializeString(19, _array55_);
    _mxarray56_ = mclInitializeString(8, _array57_);
    _mxarray58_ = mclInitializeString(8, _array59_);
    _mxarray60_ = mclInitializeString(8, _array61_);
    _mxarray62_ = mclInitializeString(8, _array63_);
}

void TerminateModule_stab_1d(void) {
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static void mlfStab_1d_stab_1d_OpeningFcn(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles,
                                          ...);
static void mlxStab_1d_stab_1d_OpeningFcn(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static mxArray * mlfStab_1d_stab_1d_OutputFcn(mlfVarargoutList * varargout,
                                              mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxStab_1d_stab_1d_OutputFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_1d_des_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_1d_des_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_1d_par_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_1d_par_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_1d_push_cambcf_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxStab_1d_push_cambcf_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static void mlfStab_1d_pop_gra_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_1d_pop_gra_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_1d_pop_gra_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void mlxStab_1d_pop_gra_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static void mlfStab_1d_sol_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_1d_sol_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_1d_pop_met_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_1d_pop_met_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_1d_pop_met_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void mlxStab_1d_pop_met_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static void mlfStab_1d_pop_in_CreateFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void mlxStab_1d_pop_in_CreateFcn(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static void mlfStab_1d_pop_in_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void mlxStab_1d_pop_in_Callback(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]);
static void mlfStab_1d_pushbutton7_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxStab_1d_pushbutton7_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static mxArray * Mstab_1d(int nargout_, mxArray * varargin);
static void Mstab_1d_stab_1d_OpeningFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles,
                                        mxArray * varargin);
static mxArray * Mstab_1d_stab_1d_OutputFcn(int nargout_,
                                            mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mstab_1d_des_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_1d_par_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_1d_push_cambcf_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Mstab_1d_pop_gra_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_1d_pop_gra_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles);
static void Mstab_1d_sol_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_1d_pop_met_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_1d_pop_met_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles);
static void Mstab_1d_pop_in_CreateFcn(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles);
static void Mstab_1d_pop_in_Callback(mxArray * hObject,
                                     mxArray * eventdata,
                                     mxArray * handles);
static void Mstab_1d_pushbutton7_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);

static mexFunctionTableEntry local_function_table_[13]
  = { { "stab_1d_OpeningFcn", mlxStab_1d_stab_1d_OpeningFcn, -4, 0, NULL },
      { "stab_1d_OutputFcn", mlxStab_1d_stab_1d_OutputFcn, 3, -1, NULL },
      { "des_push_Callback", mlxStab_1d_des_push_Callback, 3, 0, NULL },
      { "par_push_Callback", mlxStab_1d_par_push_Callback, 3, 0, NULL },
      { "push_cambcf_Callback", mlxStab_1d_push_cambcf_Callback, 3, 0, NULL },
      { "pop_gra_CreateFcn", mlxStab_1d_pop_gra_CreateFcn, 3, 0, NULL },
      { "pop_gra_Callback", mlxStab_1d_pop_gra_Callback, 3, 0, NULL },
      { "sol_push_Callback", mlxStab_1d_sol_push_Callback, 3, 0, NULL },
      { "pop_met_CreateFcn", mlxStab_1d_pop_met_CreateFcn, 3, 0, NULL },
      { "pop_met_Callback", mlxStab_1d_pop_met_Callback, 3, 0, NULL },
      { "pop_in_CreateFcn", mlxStab_1d_pop_in_CreateFcn, 3, 0, NULL },
      { "pop_in_Callback", mlxStab_1d_pop_in_Callback, 3, 0, NULL },
      { "pushbutton7_Callback",
        mlxStab_1d_pushbutton7_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_stab_1d
  = { 13, local_function_table_ };

/*
 * The function "mlfNStab_1d" contains the nargout interface for the "stab_1d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 1-48). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNStab_1d(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mstab_1d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfStab_1d" contains the normal interface for the "stab_1d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 1-48). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfStab_1d(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mstab_1d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVStab_1d" contains the void interface for the "stab_1d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 1-48). The void
 * interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVStab_1d(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mstab_1d(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxStab_1d" contains the feval interface for the "stab_1d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 1-48). The feval
 * function calls the implementation version of stab_1d through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxStab_1d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mstab_1d(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfStab_1d_stab_1d_OpeningFcn" contains the normal interface
 * for the "stab_1d/stab_1d_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 48-105). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_stab_1d_OpeningFcn(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles,
                                          ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mstab_1d_stab_1d_OpeningFcn(hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxStab_1d_stab_1d_OpeningFcn" contains the feval interface
 * for the "stab_1d/stab_1d_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 48-105). The feval
 * function calls the implementation version of stab_1d/stab_1d_OpeningFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_stab_1d_OpeningFcn(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/stab_1d_OpeningFcn Line: 48 C"
            "olumn: 1 The function \"stab_1d/stab_1d_OpeningFcn\" was ca"
            "lled with more than the declared number of outputs (0)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mprhs[3] = NULL;
    mlfAssign(&mprhs[3], mclCreateVararginCell(nrhs - 3, prhs + 3));
    Mstab_1d_stab_1d_OpeningFcn(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfStab_1d_stab_1d_OutputFcn" contains the normal interface
 * for the "stab_1d/stab_1d_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 105-116). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfStab_1d_stab_1d_OutputFcn(mlfVarargoutList * varargout,
                                              mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mstab_1d_stab_1d_OutputFcn(nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxStab_1d_stab_1d_OutputFcn" contains the feval interface for
 * the "stab_1d/stab_1d_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 105-116). The
 * feval function calls the implementation version of stab_1d/stab_1d_OutputFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_stab_1d_OutputFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/stab_1d_OutputFcn Line: 105 "
            "Column: 1 The function \"stab_1d/stab_1d_OutputFcn\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mstab_1d_stab_1d_OutputFcn(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_des_push_Callback" contains the normal interface
 * for the "stab_1d/des_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 116-122). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_des_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_des_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_des_push_Callback" contains the feval interface for
 * the "stab_1d/des_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 116-122). The
 * feval function calls the implementation version of stab_1d/des_push_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_des_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/des_push_Callback Line: 116 "
            "Column: 1 The function \"stab_1d/des_push_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/des_push_Callback Line: 116 "
            "Column: 1 The function \"stab_1d/des_push_Callback\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_des_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_par_push_Callback" contains the normal interface
 * for the "stab_1d/par_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 122-136). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_par_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_par_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_par_push_Callback" contains the feval interface for
 * the "stab_1d/par_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 122-136). The
 * feval function calls the implementation version of stab_1d/par_push_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_par_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/par_push_Callback Line: 122 "
            "Column: 1 The function \"stab_1d/par_push_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/par_push_Callback Line: 122 "
            "Column: 1 The function \"stab_1d/par_push_Callback\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_par_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_push_cambcf_Callback" contains the normal interface
 * for the "stab_1d/push_cambcf_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 136-160). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_push_cambcf_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_push_cambcf_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_push_cambcf_Callback" contains the feval interface
 * for the "stab_1d/push_cambcf_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 136-160). The
 * feval function calls the implementation version of
 * stab_1d/push_cambcf_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxStab_1d_push_cambcf_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/push_cambcf_Callback Line: 136"
            " Column: 1 The function \"stab_1d/push_cambcf_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/push_cambcf_Callback Line: 136"
            " Column: 1 The function \"stab_1d/push_cambcf_Callback\" was"
            " called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_push_cambcf_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_pop_gra_CreateFcn" contains the normal interface
 * for the "stab_1d/pop_gra_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 160-174). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_pop_gra_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_pop_gra_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_pop_gra_CreateFcn" contains the feval interface for
 * the "stab_1d/pop_gra_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 160-174). The
 * feval function calls the implementation version of stab_1d/pop_gra_CreateFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_pop_gra_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_gra_CreateFcn Line: 160 "
            "Column: 1 The function \"stab_1d/pop_gra_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_gra_CreateFcn Line: 160 "
            "Column: 1 The function \"stab_1d/pop_gra_CreateFcn\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_pop_gra_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_pop_gra_Callback" contains the normal interface for
 * the "stab_1d/pop_gra_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 174-220). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_pop_gra_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_pop_gra_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_pop_gra_Callback" contains the feval interface for
 * the "stab_1d/pop_gra_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 174-220). The
 * feval function calls the implementation version of stab_1d/pop_gra_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_pop_gra_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_gra_Callback Line: 174 C"
            "olumn: 1 The function \"stab_1d/pop_gra_Callback\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_gra_Callback Line: 174 "
            "Column: 1 The function \"stab_1d/pop_gra_Callback\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_pop_gra_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_sol_push_Callback" contains the normal interface
 * for the "stab_1d/sol_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 220-246). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_sol_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_sol_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_sol_push_Callback" contains the feval interface for
 * the "stab_1d/sol_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 220-246). The
 * feval function calls the implementation version of stab_1d/sol_push_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_sol_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/sol_push_Callback Line: 220 "
            "Column: 1 The function \"stab_1d/sol_push_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/sol_push_Callback Line: 220 "
            "Column: 1 The function \"stab_1d/sol_push_Callback\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_sol_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_pop_met_CreateFcn" contains the normal interface
 * for the "stab_1d/pop_met_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 246-260). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_pop_met_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_pop_met_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_pop_met_CreateFcn" contains the feval interface for
 * the "stab_1d/pop_met_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 246-260). The
 * feval function calls the implementation version of stab_1d/pop_met_CreateFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_pop_met_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_met_CreateFcn Line: 246 "
            "Column: 1 The function \"stab_1d/pop_met_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_met_CreateFcn Line: 246 "
            "Column: 1 The function \"stab_1d/pop_met_CreateFcn\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_pop_met_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_pop_met_Callback" contains the normal interface for
 * the "stab_1d/pop_met_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 260-285). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_pop_met_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_pop_met_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_pop_met_Callback" contains the feval interface for
 * the "stab_1d/pop_met_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 260-285). The
 * feval function calls the implementation version of stab_1d/pop_met_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_pop_met_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_met_Callback Line: 260 C"
            "olumn: 1 The function \"stab_1d/pop_met_Callback\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_met_Callback Line: 260 "
            "Column: 1 The function \"stab_1d/pop_met_Callback\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_pop_met_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_pop_in_CreateFcn" contains the normal interface for
 * the "stab_1d/pop_in_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 285-299). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_pop_in_CreateFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_pop_in_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_pop_in_CreateFcn" contains the feval interface for
 * the "stab_1d/pop_in_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 285-299). The
 * feval function calls the implementation version of stab_1d/pop_in_CreateFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_pop_in_CreateFcn(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_in_CreateFcn Line: 285 C"
            "olumn: 1 The function \"stab_1d/pop_in_CreateFcn\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_in_CreateFcn Line: 285 "
            "Column: 1 The function \"stab_1d/pop_in_CreateFcn\" was c"
            "alled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_pop_in_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_pop_in_Callback" contains the normal interface for
 * the "stab_1d/pop_in_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 299-335). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_pop_in_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_pop_in_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_pop_in_Callback" contains the feval interface for
 * the "stab_1d/pop_in_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 299-335). The
 * feval function calls the implementation version of stab_1d/pop_in_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_1d_pop_in_Callback(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_in_Callback Line: 299 C"
            "olumn: 1 The function \"stab_1d/pop_in_Callback\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pop_in_Callback Line: 299 C"
            "olumn: 1 The function \"stab_1d/pop_in_Callback\" was cal"
            "led with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_pop_in_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_1d_pushbutton7_Callback" contains the normal interface
 * for the "stab_1d/pushbutton7_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 335-345). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_1d_pushbutton7_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_1d_pushbutton7_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_1d_pushbutton7_Callback" contains the feval interface
 * for the "stab_1d/pushbutton7_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 335-345). The
 * feval function calls the implementation version of
 * stab_1d/pushbutton7_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxStab_1d_pushbutton7_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pushbutton7_Callback Line: 335"
            " Column: 1 The function \"stab_1d/pushbutton7_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_1d/pushbutton7_Callback Line: 335"
            " Column: 1 The function \"stab_1d/pushbutton7_Callback\" was"
            " called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mstab_1d_pushbutton7_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mstab_1d" is the implementation version of the "stab_1d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 1-48). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function varargout = stab_1d(varargin)
 */
static mxArray * Mstab_1d(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % STAB_1D M-file for stab_1d.fig
     * %      STAB_1D, by itself, creates a new STAB_1D or raises the existing
     * %      singleton*.
     * %
     * %      H = STAB_1D returns the handle to a new STAB_1D or the handle to
     * %      the existing singleton*.
     * %
     * %      STAB_1D('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in STAB_1D.M with the given input arguments.
     * %
     * %      STAB_1D('Property','Value',...) creates a new STAB_1D or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before stab_1d_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to stab_1d_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help stab_1d
     * 
     * % Last Modified by GUIDE v2.5 08-Jul-2005 12:04:21
     * 
     * % Begin initialization code - DO NOT EDIT
     * gui_Singleton = 1;
     */
    mlfAssign(&gui_Singleton, _mxarray0_);
    /*
     * gui_State = struct('gui_Name',       mfilename, ...
     */
    mlfAssign(
      &gui_State,
      mlfStruct(
        _mxarray1_,
        mxCreateString("stab_1d"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxStab_1d_stab_1d_OpeningFcn, "stab_1d_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxStab_1d_stab_1d_OutputFcn, "stab_1d_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @stab_1d_OpeningFcn, ...
     * 'gui_OutputFcn',  @stab_1d_OutputFcn, ...
     * 'gui_LayoutFcn',  [] , ...
     * 'gui_Callback',   []);
     * if nargin & isstr(varargin{1})
     */
    {
        mxArray * a_ = mclInitialize(mlfScalar(nargin_));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclFeval(
                     mclValueVarargout(),
                     mlxIsstr,
                     mlfIndexRef(
                       mclVa(varargin, "varargin"), "{?}", _mxarray0_),
                     NULL)))) {
            mxDestroyArray(a_);
            /*
             * gui_State.gui_Callback = str2func(varargin{1});
             */
            mlfIndexAssign(
              &gui_State,
              ".gui_Callback",
              mclFeval(
                mclValueVarargout(),
                mlxStr2func,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_),
                NULL));
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * if nargout
     */
    if (nargout_ != 0) {
        mlfAssign(&_T0_, mlfColon(_mxarray0_, mlfScalar(nargout_), NULL));
        /*
         * [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
         */
        mlfNGui_mainfcn(
          0,
          mlfIndexVarargout(&varargout, "{?}", _T0_, NULL),
          mclVv(gui_State, "gui_State"),
          mlfIndexRef(
            mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
          NULL);
    /*
     * else
     */
    } else {
        /*
         * gui_mainfcn(gui_State, varargin{:});
         */
        mclAssignAns(
          &ans,
          mlfNGui_mainfcn(
            0,
            mclAnsVarargout(),
            mclVv(gui_State, "gui_State"),
            mlfIndexRef(
              mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
            NULL));
    /*
     * end
     */
    }
    mxDestroyArray(gui_Singleton);
    mxDestroyArray(gui_State);
    mxDestroyArray(_T0_);
    mxDestroyArray(ans);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
    /*
     * % End initialization code - DO NOT EDIT
     * 
     * 
     * % --- Executes just before stab_1d is made visible.
     */
}

/*
 * The function "Mstab_1d_stab_1d_OpeningFcn" is the implementation version of
 * the "stab_1d/stab_1d_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 48-105). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function stab_1d_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mstab_1d_stab_1d_OpeningFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles,
                                        mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mxArray * u1 = NULL;
    mxArray * u0 = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * data = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    mclCopyArray(&varargin);
    /*
     * % This function has no output args, see OutputFcn.
     * % hObject    handle to figure
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * % varargin   command line arguments to stab_1d (see VARARGIN)
     * 
     * 
     * % Metodo de resolucion por defecto
     * handles.file = 'difcent'; 
     */
    mlfIndexAssign(&handles, ".file", _mxarray14_);
    /*
     * 
     * % Parametros del programa por defecto
     * data.n = 41;
     */
    mlfIndexAssign(&data, ".n", _mxarray16_);
    /*
     * data.mu = 0.8;
     */
    mlfIndexAssign(&data, ".mu", _mxarray17_);
    /*
     * data.a = 0;
     */
    mlfIndexAssign(&data, ".a", _mxarray18_);
    /*
     * data.b = 1;
     */
    mlfIndexAssign(&data, ".b", _mxarray0_);
    /*
     * data.T = 10.;
     */
    mlfIndexAssign(&data, ".T", _mxarray19_);
    /*
     * data.coeffdamp=10;
     */
    mlfIndexAssign(&data, ".coeffdamp", _mxarray19_);
    /*
     * data.dampa=0.8;
     */
    mlfIndexAssign(&data, ".dampa", _mxarray17_);
    /*
     * data.dampb=0.9;
     */
    mlfIndexAssign(&data, ".dampb", _mxarray20_);
    /*
     * data.viscosity=0.;
     */
    mlfIndexAssign(&data, ".viscosity", _mxarray18_);
    /*
     * %setappdata(hObject, 'data', data);
     * 
     * % Dibujo de los datos iniciales
     * h=(data.b-data.a)/(data.n+1);
     */
    mlfAssign(
      &h,
      mclMrdivide(
        mclFeval(
          mclValueVarargout(),
          mlxMinus,
          mlfIndexRef(mclVv(data, "data"), ".b"),
          mlfIndexRef(mclVv(data, "data"), ".a"),
          NULL),
        mclFeval(
          mclValueVarargout(),
          mlxPlus,
          mlfIndexRef(mclVv(data, "data"), ".n"),
          _mxarray0_,
          NULL)));
    /*
     * x=[data.a:h:data.b];
     */
    mlfAssign(
      &x,
      mclFeval(
        mclValueVarargout(),
        mlxColon,
        mlfIndexRef(mclVv(data, "data"), ".a"),
        mclVv(h, "h"),
        mlfIndexRef(mclVv(data, "data"), ".b"),
        NULL));
    /*
     * [u0 u1]=data1(x);
     */
    mlfAssign(&u0, mlfData1(&u1, mclVv(x, "x")));
    /*
     * axes(handles.axes_u0);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u0"), NULL));
    /*
     * plot(x,u0);
     */
    mclAssignAns(&ans, mlfNPlot(0, mclVv(x, "x"), mclVv(u0, "u0"), NULL));
    /*
     * axes(handles.axes_u1);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u1"), NULL));
    /*
     * plot(x,u1);
     */
    mclAssignAns(&ans, mlfNPlot(0, mclVv(x, "x"), mclVv(u1, "u1"), NULL));
    /*
     * handles.u0=u0;
     */
    mlfIndexAssign(&handles, ".u0", mclVv(u0, "u0"));
    /*
     * handles.u1=u1;
     */
    mlfIndexAssign(&handles, ".u1", mclVv(u1, "u1"));
    /*
     * handles.x=x;
     */
    mlfIndexAssign(&handles, ".x", mclVv(x, "x"));
    /*
     * guidata(hObject, handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    /*
     * 
     * data.u0='sin(pi*x)';
     */
    mlfIndexAssign(&data, ".u0", _mxarray21_);
    /*
     * data.u1='-pi*sin(pi*x)';
     */
    mlfIndexAssign(&data, ".u1", _mxarray23_);
    /*
     * data.x=handles.x;
     */
    mlfIndexAssign(&data, ".x", mlfIndexRef(mclVa(handles, "handles"), ".x"));
    /*
     * setappdata(hObject, 'data', data);
     */
    mlfSetappdata(
      mclVa(hObject, "hObject"), _mxarray25_, mclVv(data, "data"), NULL);
    /*
     * 
     * % cla
     * % Variable que permite saber si se ha realizado el calculo necesario para
     * % dibujar la solucion 
     * handles.solactual=0;
     */
    mlfIndexAssign(&handles, ".solactual", _mxarray18_);
    /*
     * 
     * % Choose default command line output for stab_1d
     * handles.output = hObject;
     */
    mlfIndexAssign(&handles, ".output", mclVa(hObject, "hObject"));
    /*
     * 
     * % Update handles structure
     * guidata(hObject, handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(data);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(u0);
    mxDestroyArray(u1);
    mxDestroyArray(ans);
    mxDestroyArray(varargin);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % UIWAIT makes stab_1d wait for user response (see UIRESUME)
     * % uiwait(handles.figure1);
     * 
     * 
     * % --- Outputs from this function are returned to the command line.
     */
}

/*
 * The function "Mstab_1d_stab_1d_OutputFcn" is the implementation version of
 * the "stab_1d/stab_1d_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 105-116). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = stab_1d_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mstab_1d_stab_1d_OutputFcn(int nargout_,
                                            mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * varargout = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % varargout  cell array for returning output args (see VARARGOUT);
     * % hObject    handle to figure
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Get default command line output from handles structure
     * varargout{1} = handles.output;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray0_,
      mlfIndexRef(mclVa(handles, "handles"), ".output"));
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
    /*
     * 
     * 
     * % --- Executes on button press in des_push.
     */
}

/*
 * The function "Mstab_1d_des_push_Callback" is the implementation version of
 * the "stab_1d/des_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 116-122). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function des_push_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_des_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * % hObject    handle to des_push (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % --- Executes on button press in par_push.
     */
}

/*
 * The function "Mstab_1d_par_push_Callback" is the implementation version of
 * the "stab_1d/par_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 122-136). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function par_push_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_par_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mxArray * h1 = NULL;
    mxArray * data = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to par_push (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * data=getappdata(gcbf,'data');
     */
    mlfAssign(&data, mlfGetappdata(mlfGcbf(), _mxarray25_));
    /*
     * %paramet=[data.n data.l data.a data.b data.T data.ep];
     * [h1 data.a data.b data.n data.mu data.T data.coeffdamp data.dampa data.dampb data.viscosity]=paramstab1d(data);
     */
    mlfNParamstab1d(
      0,
      mlfIndexVarargout(
        &h1, "",
        &data, ".a",
        &data, ".b",
        &data, ".n",
        &data, ".mu",
        &data, ".T",
        &data, ".coeffdamp",
        &data, ".dampa",
        &data, ".dampb",
        &data, ".viscosity",
        NULL),
      mclVv(data, "data"),
      NULL);
    /*
     * delete(h1);
     */
    mlfDelete(mclVv(h1, "h1"), NULL);
    /*
     * setappdata(gcbf,'data',data);
     */
    mlfSetappdata(mlfGcbf(), _mxarray25_, mclVv(data, "data"), NULL);
    mxDestroyArray(data);
    mxDestroyArray(h1);
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * % --- Executes on button press in par_push.
     */
}

/*
 * The function "Mstab_1d_push_cambcf_Callback" is the implementation version
 * of the "stab_1d/push_cambcf_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 136-160). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function push_cambcf_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_push_cambcf_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mxArray * h1 = NULL;
    mxArray * data = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to par_push (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * data=getappdata(gcbf,'data');
     */
    mlfAssign(&data, mlfGetappdata(mlfGcbf(), _mxarray25_));
    /*
     * %paramet=[data.n data.l data.a data.b data.T data.ep];
     * [h1 data.a data.b data.n data.mu data.T data.coeffdamp data.dampa data.dampb data.viscosity data.u0 data.u1]=initialdatastab1(data);
     */
    mlfNInitialdatastab1(
      0,
      mlfIndexVarargout(
        &h1, "",
        &data, ".a",
        &data, ".b",
        &data, ".n",
        &data, ".mu",
        &data, ".T",
        &data, ".coeffdamp",
        &data, ".dampa",
        &data, ".dampb",
        &data, ".viscosity",
        &data, ".u0",
        &data, ".u1",
        NULL),
      mclVv(data, "data"),
      NULL);
    /*
     * delete(h1);
     */
    mlfDelete(mclVv(h1, "h1"), NULL);
    /*
     * cla
     */
    mclPrintAns(&ans, mlfNCla(0, NULL));
    /*
     * axes(handles.axes_u0);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u0"), NULL));
    /*
     * plot(handles.x,data.u0);
     */
    mclAssignAns(
      &ans,
      mlfNPlot(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".x"),
        mlfIndexRef(mclVv(data, "data"), ".u0"),
        NULL));
    /*
     * axes(handles.axes_u1);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u1"), NULL));
    /*
     * plot(handles.x,data.u1);
     */
    mclAssignAns(
      &ans,
      mlfNPlot(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".x"),
        mlfIndexRef(mclVv(data, "data"), ".u1"),
        NULL));
    /*
     * %G=[0 ones(1,data.n) 0];
     * handles.u0=data.u0;%(G>0);
     */
    mlfIndexAssign(&handles, ".u0", mlfIndexRef(mclVv(data, "data"), ".u0"));
    /*
     * handles.u1=data.u1;%(G>0);
     */
    mlfIndexAssign(&handles, ".u1", mlfIndexRef(mclVv(data, "data"), ".u1"));
    /*
     * setappdata(gcbf,'data',data);
     */
    mlfSetappdata(mlfGcbf(), _mxarray25_, mclVv(data, "data"), NULL);
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(data);
    mxDestroyArray(h1);
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * %setappdata(gcbf,'data',data);
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%5
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mstab_1d_pop_gra_CreateFcn" is the implementation version of
 * the "stab_1d/pop_gra_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 160-174). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_CreateFcn(hObject, eventdata, handles)
 */
static void Mstab_1d_pop_gra_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pop_gra (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    empty - handles not created until after all CreateFcns called
     * 
     * % Hint: popupmenu controls usually have a white background on Windows.
     * %       See ISPC and COMPUTER.
     * if ispc
     */
    if (mlfTobool(mlfIspc())) {
        /*
         * set(hObject,'BackgroundColor','white');
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray27_, _mxarray29_, NULL));
    /*
     * else
     */
    } else {
        /*
         * set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0,
            mclVa(hObject, "hObject"),
            _mxarray27_,
            mlfNGet(1, _mxarray18_, _mxarray31_, NULL),
            NULL));
    /*
     * end
     */
    }
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes on selection change in pop_gra.
     */
}

/*
 * The function "Mstab_1d_pop_gra_Callback" is the implementation version of
 * the "stab_1d/pop_gra_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 174-220). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_pop_gra_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * solu = NULL;
    mxArray * plog = NULL;
    mxArray * s = NULL;
    mxArray * p = NULL;
    mxArray * N = NULL;
    mxArray * ans = NULL;
    mxArray * param = NULL;
    mxArray * str = NULL;
    mxArray * val = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pop_gra (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: contents = get(hObject,'String') returns pop_gra contents as cell array
     * %        contents{get(hObject,'Value')} returns selected item from pop_gra
     * 
     * val = get(hObject,'Value');
     */
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray33_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray35_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray37_)) {
            /*
             * case 'energy' % User selects peaks
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray25_));
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * N=size(handles.temps)
             */
            mlfAssign(
              &N,
              mclFeval(
                mclValueVarargout(),
                mlxSize,
                mlfIndexRef(mclVa(handles, "handles"), ".temps"),
                NULL));
            mclPrintArray(mclVv(N, "N"), "N");
            /*
             * plot(handles.temps(2:N(2)-1),log(handles.ener(1:N(2)-2)))
             */
            mclPrintAns(
              &ans,
              mlfNPlot(
                0,
                mlfIndexRef(
                  mclVa(handles, "handles"),
                  ".temps(?)",
                  mlfColon(
                    _mxarray39_,
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
                    NULL)),
                mclFeval(
                  mclValueVarargout(),
                  mlxLog,
                  mlfIndexRef(
                    mclVa(handles, "handles"),
                    ".ener(?)",
                    mlfColon(
                      _mxarray0_,
                      mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
                      NULL)),
                  NULL),
                NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray40_, NULL));
            /*
             * ylabel('log(Energy)');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray42_, NULL));
            /*
             * axis([0 param.T min(log(handles.ener(1:N(2)-2)))*0.95 max(log(handles.ener(1:N(2)-2)))*1.05])
             */
            mclPrintAns(
              &ans,
              mlfNAxis(
                0,
                NULL,
                NULL,
                mlfHorzcat(
                  _mxarray18_,
                  mlfIndexRef(mclVv(param, "param"), ".T"),
                  mclMtimes(
                    mlfMin(
                      NULL,
                      mclFeval(
                        mclValueVarargout(),
                        mlxLog,
                        mlfIndexRef(
                          mclVa(handles, "handles"),
                          ".ener(?)",
                          mlfColon(
                            _mxarray0_,
                            mclMinus(
                              mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
                            NULL)),
                        NULL),
                      NULL,
                      NULL),
                    _mxarray44_),
                  mclMtimes(
                    mlfMax(
                      NULL,
                      mclFeval(
                        mclValueVarargout(),
                        mlxLog,
                        mlfIndexRef(
                          mclVa(handles, "handles"),
                          ".ener(?)",
                          mlfColon(
                            _mxarray0_,
                            mclMinus(
                              mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
                            NULL)),
                        NULL),
                      NULL,
                      NULL),
                    _mxarray45_),
                  NULL),
                NULL));
            /*
             * hold on
             */
            mlfHold(_mxarray46_);
            /*
             * [p,s]=polyfit(handles.temps(2:N(2)-1),log(handles.ener(1:N(2)-2)),1)
             */
            mclFeval(
              mlfVarargout(&p, &s, NULL),
              mlxPolyfit,
              mlfIndexRef(
                mclVa(handles, "handles"),
                ".temps(?)",
                mlfColon(
                  _mxarray39_,
                  mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
                  NULL)),
              mclFeval(
                mclValueVarargout(),
                mlxLog,
                mlfIndexRef(
                  mclVa(handles, "handles"),
                  ".ener(?)",
                  mlfColon(
                    _mxarray0_,
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
                    NULL)),
                NULL),
              _mxarray0_,
              NULL);
            mclPrintArray(mclVv(p, "p"), "p");
            mclPrintArray(mclVv(s, "s"), "s");
            /*
             * plog=p(1)*handles.temps(2:N(2)-1)+p(2);
             */
            mlfAssign(
              &plog,
              mclPlus(
                mclFeval(
                  mclValueVarargout(),
                  mlxMtimes,
                  mclIntArrayRef1(mclVv(p, "p"), 1),
                  mlfIndexRef(
                    mclVa(handles, "handles"),
                    ".temps(?)",
                    mlfColon(
                      _mxarray39_,
                      mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
                      NULL)),
                  NULL),
                mclIntArrayRef1(mclVv(p, "p"), 2)));
            /*
             * plot(handles.temps(2:N(2)-1),plog,'red');
             */
            mclAssignAns(
              &ans,
              mlfNPlot(
                0,
                mlfIndexRef(
                  mclVa(handles, "handles"),
                  ".temps(?)",
                  mlfColon(
                    _mxarray39_,
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
                    NULL)),
                mclVv(plog, "plog"),
                _mxarray48_,
                NULL));
            /*
             * hold off
             */
            mlfHold(_mxarray50_);
        /*
         * case 'animation' 
         */
        } else if (mclSwitchCompare(v_, _mxarray52_)) {
            /*
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray25_));
            /*
             * %if handles.solactual==0
             * solu=animstab1d(param.a,param.b,param.n,param.mu,param.T,param.coeffdamp,param.dampa,param.dampb,param.viscosity,handles.u0,handles.u1,handles.axes_sol);
             */
            mlfAssign(
              &solu,
              mclFeval(
                mclValueVarargout(),
                mlxAnimstab1d,
                mlfIndexRef(mclVv(param, "param"), ".a"),
                mlfIndexRef(mclVv(param, "param"), ".b"),
                mlfIndexRef(mclVv(param, "param"), ".n"),
                mlfIndexRef(mclVv(param, "param"), ".mu"),
                mlfIndexRef(mclVv(param, "param"), ".T"),
                mlfIndexRef(mclVv(param, "param"), ".coeffdamp"),
                mlfIndexRef(mclVv(param, "param"), ".dampa"),
                mlfIndexRef(mclVv(param, "param"), ".dampb"),
                mlfIndexRef(mclVv(param, "param"), ".viscosity"),
                mlfIndexRef(mclVa(handles, "handles"), ".u0"),
                mlfIndexRef(mclVa(handles, "handles"), ".u1"),
                mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"),
                NULL));
        /*
         * %    h=(param.b-param.a)/(param.n+1);
         * %    x=[param.a:h:param.b];
         * %    handles.solactual=1;
         * %    handles.x=x;
         * %    handles.solu=solu;
         * %end    
         * %axes(handles.axes_sol);
         * %maximo=max(max(handles.solu));
         * %minimo=min(min(handles.solu));
         * %for i=1:length(handles.solu(1,:))
         * %   plot(handles.x,handles.solu(:,i));
         * %   axis([param.a param.b minimo maximo]);
         * %   pause(.1);
         * %end
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * guidata(hObject,handles)
     */
    mclPrintAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(val);
    mxDestroyArray(str);
    mxDestroyArray(param);
    mxDestroyArray(ans);
    mxDestroyArray(N);
    mxDestroyArray(p);
    mxDestroyArray(s);
    mxDestroyArray(plog);
    mxDestroyArray(solu);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes on button press in sol_push.
     */
}

/*
 * The function "Mstab_1d_sol_push_Callback" is the implementation version of
 * the "stab_1d/sol_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 220-246). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol_push_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_sol_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * plog = NULL;
    mxArray * s = NULL;
    mxArray * p = NULL;
    mxArray * N = NULL;
    mxArray * ans = NULL;
    mxArray * temps = NULL;
    mxArray * ener = NULL;
    mxArray * param = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to sol_push (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * param=getappdata(gcbf,'data');
     */
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray25_));
    /*
     * 
     * [ener temps]=stab1dcalcul(param.a,param.b,param.n,param.mu,param.T,param.coeffdamp,param.dampa,param.dampb,param.viscosity,handles.u0,handles.u1);
     */
    mclFeval(
      mlfVarargout(&ener, &temps, NULL),
      mlxStab1dcalcul,
      mlfIndexRef(mclVv(param, "param"), ".a"),
      mlfIndexRef(mclVv(param, "param"), ".b"),
      mlfIndexRef(mclVv(param, "param"), ".n"),
      mlfIndexRef(mclVv(param, "param"), ".mu"),
      mlfIndexRef(mclVv(param, "param"), ".T"),
      mlfIndexRef(mclVv(param, "param"), ".coeffdamp"),
      mlfIndexRef(mclVv(param, "param"), ".dampa"),
      mlfIndexRef(mclVv(param, "param"), ".dampb"),
      mlfIndexRef(mclVv(param, "param"), ".viscosity"),
      mlfIndexRef(mclVa(handles, "handles"), ".u0"),
      mlfIndexRef(mclVa(handles, "handles"), ".u1"),
      NULL);
    /*
     * axes(handles.axes_sol);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
    /*
     * N=size(temps)
     */
    mlfAssign(&N, mlfSize(mclValueVarargout(), mclVv(temps, "temps"), NULL));
    mclPrintArray(mclVv(N, "N"), "N");
    /*
     * plot(temps(2:N(2)-1),log(ener(1:N(2)-2)))
     */
    mclPrintAns(
      &ans,
      mlfNPlot(
        0,
        mclArrayRef1(
          mclVv(temps, "temps"),
          mlfColon(
            _mxarray39_,
            mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
            NULL)),
        mlfLog(
          mclArrayRef1(
            mclVv(ener, "ener"),
            mlfColon(
              _mxarray0_,
              mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
              NULL))),
        NULL));
    /*
     * xlabel('time');
     */
    mclAssignAns(&ans, mlfNXlabel(0, _mxarray40_, NULL));
    /*
     * ylabel('log(Energy)');
     */
    mclAssignAns(&ans, mlfNYlabel(0, _mxarray42_, NULL));
    /*
     * axis([0 param.T min(log(ener(1:N(2)-2)))*0.95 max(log(ener(1:N(2)-2)))*1.05])
     */
    mclPrintAns(
      &ans,
      mlfNAxis(
        0,
        NULL,
        NULL,
        mlfHorzcat(
          _mxarray18_,
          mlfIndexRef(mclVv(param, "param"), ".T"),
          mclMtimes(
            mlfMin(
              NULL,
              mlfLog(
                mclArrayRef1(
                  mclVv(ener, "ener"),
                  mlfColon(
                    _mxarray0_,
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
                    NULL))),
              NULL,
              NULL),
            _mxarray44_),
          mclMtimes(
            mlfMax(
              NULL,
              mlfLog(
                mclArrayRef1(
                  mclVv(ener, "ener"),
                  mlfColon(
                    _mxarray0_,
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
                    NULL))),
              NULL,
              NULL),
            _mxarray45_),
          NULL),
        NULL));
    /*
     * hold on
     */
    mlfHold(_mxarray46_);
    /*
     * [p,s]=polyfit(temps(2:N(2)-1),log(ener(1:N(2)-2)),1)
     */
    mlfAssign(
      &p,
      mlfNPolyfit(
        2,
        &s,
        NULL,
        mclArrayRef1(
          mclVv(temps, "temps"),
          mlfColon(
            _mxarray39_,
            mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
            NULL)),
        mlfLog(
          mclArrayRef1(
            mclVv(ener, "ener"),
            mlfColon(
              _mxarray0_,
              mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray39_),
              NULL))),
        _mxarray0_));
    mclPrintArray(mclVv(p, "p"), "p");
    mclPrintArray(mclVv(s, "s"), "s");
    /*
     * plog=p(1)*temps(2:N(2)-1)+p(2);
     */
    mlfAssign(
      &plog,
      mclPlus(
        mclMtimes(
          mclIntArrayRef1(mclVv(p, "p"), 1),
          mclArrayRef1(
            mclVv(temps, "temps"),
            mlfColon(
              _mxarray39_,
              mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
              NULL))),
        mclIntArrayRef1(mclVv(p, "p"), 2)));
    /*
     * plot(temps(2:N(2)-1),plog,'red');
     */
    mclAssignAns(
      &ans,
      mlfNPlot(
        0,
        mclArrayRef1(
          mclVv(temps, "temps"),
          mlfColon(
            _mxarray39_,
            mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
            NULL)),
        mclVv(plog, "plog"),
        _mxarray48_,
        NULL));
    /*
     * handles.solactual=0;
     */
    mlfIndexAssign(&handles, ".solactual", _mxarray18_);
    /*
     * hold off
     */
    mlfHold(_mxarray50_);
    /*
     * 
     * handles.temps=temps;
     */
    mlfIndexAssign(&handles, ".temps", mclVv(temps, "temps"));
    /*
     * handles.ener=ener;
     */
    mlfIndexAssign(&handles, ".ener", mclVv(ener, "ener"));
    /*
     * guidata(hObject,handles)
     */
    mclPrintAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(param);
    mxDestroyArray(ener);
    mxDestroyArray(temps);
    mxDestroyArray(ans);
    mxDestroyArray(N);
    mxDestroyArray(p);
    mxDestroyArray(s);
    mxDestroyArray(plog);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mstab_1d_pop_met_CreateFcn" is the implementation version of
 * the "stab_1d/pop_met_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 246-260). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_met_CreateFcn(hObject, eventdata, handles)
 */
static void Mstab_1d_pop_met_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pop_met (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    empty - handles not created until after all CreateFcns called
     * 
     * % Hint: popupmenu controls usually have a white background on Windows.
     * %       See ISPC and COMPUTER.
     * if ispc
     */
    if (mlfTobool(mlfIspc())) {
        /*
         * set(hObject,'BackgroundColor','white');
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray27_, _mxarray29_, NULL));
    /*
     * else
     */
    } else {
        /*
         * set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0,
            mclVa(hObject, "hObject"),
            _mxarray27_,
            mlfNGet(1, _mxarray18_, _mxarray31_, NULL),
            NULL));
    /*
     * end
     */
    }
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes on selection change in pop_met.
     */
}

/*
 * The function "Mstab_1d_pop_met_Callback" is the implementation version of
 * the "stab_1d/pop_met_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 260-285). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_met_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_pop_met_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mxArray * str = NULL;
    mxArray * val = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pop_met (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: contents = get(hObject,'String') returns pop_met contents as cell array
     * %        contents{get(hObject,'Value')} returns selected item from pop_met
     * 
     * val = get(hObject,'Value');
     */
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray33_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray35_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray54_)) {
            /*
             * case 'diferencias finitas' % User selects peaks
             * handles.file = 'difcent';
             */
            mlfIndexAssign(&handles, ".file", _mxarray14_);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * guidata(hObject,handles)
     */
    mclPrintAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(val);
    mxDestroyArray(str);
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % % --- Executes on button press in push_cambcf.
     * % function push_cambcf_Callback(hObject, eventdata, handles)
     * % % hObject    handle to push_cambcf (see GCBO)
     * % % eventdata  reserved - to be defined in a future version of MATLAB
     * % % handles    structure with handles and user data (see GUIDATA)
     * % 
     * % %edit datos.m
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mstab_1d_pop_in_CreateFcn" is the implementation version of
 * the "stab_1d/pop_in_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 285-299). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_in_CreateFcn(hObject, eventdata, handles)
 */
static void Mstab_1d_pop_in_CreateFcn(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pop_in (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    empty - handles not created until after all CreateFcns called
     * 
     * % Hint: popupmenu controls usually have a white background on Windows.
     * %       See ISPC and COMPUTER.
     * if ispc
     */
    if (mlfTobool(mlfIspc())) {
        /*
         * set(hObject,'BackgroundColor','white');
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray27_, _mxarray29_, NULL));
    /*
     * else
     */
    } else {
        /*
         * set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0,
            mclVa(hObject, "hObject"),
            _mxarray27_,
            mlfNGet(1, _mxarray18_, _mxarray31_, NULL),
            NULL));
    /*
     * end
     */
    }
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes on selection change in pop_in.
     */
}

/*
 * The function "Mstab_1d_pop_in_Callback" is the implementation version of the
 * "stab_1d/pop_in_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 299-335). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_in_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_pop_in_Callback(mxArray * hObject,
                                     mxArray * eventdata,
                                     mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mxArray * u1 = NULL;
    mxArray * u0 = NULL;
    mxArray * str = NULL;
    mxArray * val = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * param = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pop_in (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: contents = get(hObject,'String') returns pop_in contents as cell array
     * %        contents{get(hObject,'Value')} returns selected item from pop_in
     * 
     * param=getappdata(gcbf,'data');
     */
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray25_));
    /*
     * h=(param.b-param.a)/(param.n+1);
     */
    mlfAssign(
      &h,
      mclMrdivide(
        mclFeval(
          mclValueVarargout(),
          mlxMinus,
          mlfIndexRef(mclVv(param, "param"), ".b"),
          mlfIndexRef(mclVv(param, "param"), ".a"),
          NULL),
        mclFeval(
          mclValueVarargout(),
          mlxPlus,
          mlfIndexRef(mclVv(param, "param"), ".n"),
          _mxarray0_,
          NULL)));
    /*
     * x=[param.a:h:param.b];
     */
    mlfAssign(
      &x,
      mclFeval(
        mclValueVarargout(),
        mlxColon,
        mlfIndexRef(mclVv(param, "param"), ".a"),
        mclVv(h, "h"),
        mlfIndexRef(mclVv(param, "param"), ".b"),
        NULL));
    /*
     * val = get(hObject,'Value');
     */
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray33_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray35_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray56_)) {
            /*
             * case 'Example1' % User selects difcent
             * [u0 u1]=data1(x);
             */
            mlfAssign(&u0, mlfData1(&u1, mclVv(x, "x")));
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example2' 
         */
        } else if (mclSwitchCompare(v_, _mxarray58_)) {
            /*
             * [u0 u1]=data2(x); 
             */
            mlfAssign(&u0, mlfData2(&u1, mclVv(x, "x")));
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example3'
         */
        } else if (mclSwitchCompare(v_, _mxarray60_)) {
            /*
             * [u0 u1]=data3(x);
             */
            mlfAssign(&u0, mlfData3(&u1, mclVv(x, "x")));
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example4'
         */
        } else if (mclSwitchCompare(v_, _mxarray62_)) {
            /*
             * [u0 u1]=data4(x);
             */
            mlfAssign(&u0, mlfData4(&u1, mclVv(x, "x")));
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * end;
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * axes(handles.axes_u0);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u0"), NULL));
    /*
     * plot(x,u0);
     */
    mclAssignAns(&ans, mlfNPlot(0, mclVv(x, "x"), mclVv(u0, "u0"), NULL));
    /*
     * axes(handles.axes_u1);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u1"), NULL));
    /*
     * plot(x,u1);
     */
    mclAssignAns(&ans, mlfNPlot(0, mclVv(x, "x"), mclVv(u1, "u1"), NULL));
    /*
     * handles.u0=u0;
     */
    mlfIndexAssign(&handles, ".u0", mclVv(u0, "u0"));
    /*
     * handles.u1=u1;
     */
    mlfIndexAssign(&handles, ".u1", mclVv(u1, "u1"));
    /*
     * guidata(hObject,handles)
     */
    mclPrintAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(param);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(val);
    mxDestroyArray(str);
    mxDestroyArray(u0);
    mxDestroyArray(u1);
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes on button press in pushbutton7.
     */
}

/*
 * The function "Mstab_1d_pushbutton7_Callback" is the implementation version
 * of the "stab_1d/pushbutton7_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_1d.m" (lines 335-345). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton7_Callback(hObject, eventdata, handles)
 */
static void Mstab_1d_pushbutton7_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_1d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pushbutton7 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * close
     */
    mclPrintAns(&ans, mlfNClose(0, NULL));
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * 
     * 
     * 
     */
}
