/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "exact_cont2d.h"
#include "animcont_2d.h"
#include "cla.h"
#include "cont_2d.h"
#include "cont_2dmix.h"
#include "cont_bigrid2d.h"
#include "data1_2d.h"
#include "data2_2d.h"
#include "data3_2d.h"
#include "data4_2d.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
#include "mesh.h"
#include "paramcont2d.h"
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

static mxChar _array15_[3] = { 'F', 'D', 'S' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;

static mxChar _array22_[4] = { 'd', 'a', 't', 'a' };
static mxArray * _mxarray21_;

static mxChar _array24_[15] = { 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray23_;

static mxChar _array26_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray25_;

static mxChar _array28_[31] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray27_;

static mxChar _array30_[5] = { 'V', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray29_;

static mxChar _array32_[6] = { 'S', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray31_;

static mxChar _array34_[7] = { 'c', 'o', 'n', 't', 'r', 'o', 'l' };
static mxArray * _mxarray33_;

static mxChar _array36_[4] = { 't', 'i', 'm', 'e' };
static mxArray * _mxarray35_;

static mxChar _array38_[22] = { 'L', '2', ' ', 'n', 'o', 'r', 'm', ' ',
                                'o', 'f', ' ', 't', 'h', 'e', ' ', 'c',
                                'o', 'n', 't', 'r', 'o', 'l' };
static mxArray * _mxarray37_;

static mxChar _array40_[9] = { 'a', 'n', 'i', 'm', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray39_;

static mxChar _array42_[7] = { 'r', 'e', 's', 'i', 'd', 'u', 'e' };
static mxArray * _mxarray41_;

static mxChar _array44_[2] = { 'o', 'n' };
static mxArray * _mxarray43_;

static mxChar _array46_[1] = { 'o' };
static mxArray * _mxarray45_;

static mxChar _array48_[3] = { 'o', 'f', 'f' };
static mxArray * _mxarray47_;

static mxChar _array50_[9] = { 'I', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray49_;

static mxChar _array52_[13] = { 'l', 'o', 'g', '1', '0', '(', 'r',
                                'e', 's', 'i', 'd', 'u', ')' };
static mxArray * _mxarray51_;

static mxChar _array54_[7] = { 'B', 'I', '-', 'G', 'R', 'I', 'D' };
static mxArray * _mxarray53_;

static mxChar _array56_[3] = { 'M', 'I', 'X' };
static mxArray * _mxarray55_;

static mxChar _array58_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '1' };
static mxArray * _mxarray57_;

static mxChar _array60_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '2' };
static mxArray * _mxarray59_;

static mxChar _array62_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '3' };
static mxArray * _mxarray61_;

static mxChar _array64_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '4' };
static mxArray * _mxarray63_;

void InitializeModule_exact_cont2d(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
    _mxarray14_ = mclInitializeString(3, _array15_);
    _mxarray16_ = mclInitializeDouble(21.0);
    _mxarray17_ = mclInitializeDouble(2.0);
    _mxarray18_ = mclInitializeDouble(0.0);
    _mxarray19_ = mclInitializeDouble(3.75);
    _mxarray20_ = mclInitializeDouble(1e-07);
    _mxarray21_ = mclInitializeString(4, _array22_);
    _mxarray23_ = mclInitializeString(15, _array24_);
    _mxarray25_ = mclInitializeString(5, _array26_);
    _mxarray27_ = mclInitializeString(31, _array28_);
    _mxarray29_ = mclInitializeString(5, _array30_);
    _mxarray31_ = mclInitializeString(6, _array32_);
    _mxarray33_ = mclInitializeString(7, _array34_);
    _mxarray35_ = mclInitializeString(4, _array36_);
    _mxarray37_ = mclInitializeString(22, _array38_);
    _mxarray39_ = mclInitializeString(9, _array40_);
    _mxarray41_ = mclInitializeString(7, _array42_);
    _mxarray43_ = mclInitializeString(2, _array44_);
    _mxarray45_ = mclInitializeString(1, _array46_);
    _mxarray47_ = mclInitializeString(3, _array48_);
    _mxarray49_ = mclInitializeString(9, _array50_);
    _mxarray51_ = mclInitializeString(13, _array52_);
    _mxarray53_ = mclInitializeString(7, _array54_);
    _mxarray55_ = mclInitializeString(3, _array56_);
    _mxarray57_ = mclInitializeString(8, _array58_);
    _mxarray59_ = mclInitializeString(8, _array60_);
    _mxarray61_ = mclInitializeString(8, _array62_);
    _mxarray63_ = mclInitializeString(8, _array64_);
}

void TerminateModule_exact_cont2d(void) {
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
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

static void mlfExact_cont2d_exact_cont2d_OpeningFcn(mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles,
                                                    ...);
static void mlxExact_cont2d_exact_cont2d_OpeningFcn(int nlhs,
                                                    mxArray * plhs[],
                                                    int nrhs,
                                                    mxArray * prhs[]);
static mxArray * mlfExact_cont2d_exact_cont2d_OutputFcn(mlfVarargoutList * varargout,
                                                        mxArray * hObject,
                                                        mxArray * eventdata,
                                                        mxArray * handles);
static void mlxExact_cont2d_exact_cont2d_OutputFcn(int nlhs,
                                                   mxArray * plhs[],
                                                   int nrhs,
                                                   mxArray * prhs[]);
static void mlfExact_cont2d_des_push_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxExact_cont2d_des_push_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfExact_cont2d_par_push_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxExact_cont2d_par_push_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfExact_cont2d_pop_gra_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxExact_cont2d_pop_gra_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfExact_cont2d_pop_gra_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxExact_cont2d_pop_gra_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfExact_cont2d_sol_push_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxExact_cont2d_sol_push_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfExact_cont2d_edit1_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxExact_cont2d_edit1_CreateFcn(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static void mlfExact_cont2d_edit1_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxExact_cont2d_edit1_Callback(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfExact_cont2d_push_cambcf_Callback(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles);
static void mlxExact_cont2d_push_cambcf_Callback(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfExact_cont2d_pop_in_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxExact_cont2d_pop_in_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfExact_cont2d_pop_in_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxExact_cont2d_pop_in_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static void mlfExact_cont2d_pushbutton7_Callback(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles);
static void mlxExact_cont2d_pushbutton7_Callback(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfExact_cont2d_popupmenu8_CreateFcn(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles);
static void mlxExact_cont2d_popupmenu8_CreateFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfExact_cont2d_popupmenu8_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxExact_cont2d_popupmenu8_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static mxArray * Mexact_cont2d(int nargout_, mxArray * varargin);
static void Mexact_cont2d_exact_cont2d_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  mxArray * varargin);
static mxArray * Mexact_cont2d_exact_cont2d_OutputFcn(int nargout_,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles);
static void Mexact_cont2d_des_push_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mexact_cont2d_par_push_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mexact_cont2d_pop_gra_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mexact_cont2d_pop_gra_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mexact_cont2d_sol_push_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mexact_cont2d_edit1_CreateFcn(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Mexact_cont2d_edit1_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mexact_cont2d_push_cambcf_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void Mexact_cont2d_pop_in_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mexact_cont2d_pop_in_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Mexact_cont2d_pushbutton7_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void Mexact_cont2d_popupmenu8_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void Mexact_cont2d_popupmenu8_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);

static mexFunctionTableEntry local_function_table_[15]
  = { { "exact_cont2d_OpeningFcn",
        mlxExact_cont2d_exact_cont2d_OpeningFcn, -4, 0, NULL },
      { "exact_cont2d_OutputFcn",
        mlxExact_cont2d_exact_cont2d_OutputFcn, 3, -1, NULL },
      { "des_push_Callback", mlxExact_cont2d_des_push_Callback, 3, 0, NULL },
      { "par_push_Callback", mlxExact_cont2d_par_push_Callback, 3, 0, NULL },
      { "pop_gra_CreateFcn", mlxExact_cont2d_pop_gra_CreateFcn, 3, 0, NULL },
      { "pop_gra_Callback", mlxExact_cont2d_pop_gra_Callback, 3, 0, NULL },
      { "sol_push_Callback", mlxExact_cont2d_sol_push_Callback, 3, 0, NULL },
      { "edit1_CreateFcn", mlxExact_cont2d_edit1_CreateFcn, 3, 0, NULL },
      { "edit1_Callback", mlxExact_cont2d_edit1_Callback, 3, 0, NULL },
      { "push_cambcf_Callback",
        mlxExact_cont2d_push_cambcf_Callback, 3, 0, NULL },
      { "pop_in_CreateFcn", mlxExact_cont2d_pop_in_CreateFcn, 3, 0, NULL },
      { "pop_in_Callback", mlxExact_cont2d_pop_in_Callback, 3, 0, NULL },
      { "pushbutton7_Callback",
        mlxExact_cont2d_pushbutton7_Callback, 3, 0, NULL },
      { "popupmenu8_CreateFcn",
        mlxExact_cont2d_popupmenu8_CreateFcn, 3, 0, NULL },
      { "popupmenu8_Callback",
        mlxExact_cont2d_popupmenu8_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_exact_cont2d
  = { 15, local_function_table_ };

/*
 * The function "mlfNExact_cont2d" contains the nargout interface for the
 * "exact_cont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines
 * 1-47). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNExact_cont2d(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mexact_cont2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfExact_cont2d" contains the normal interface for the
 * "exact_cont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines
 * 1-47). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfExact_cont2d(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mexact_cont2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVExact_cont2d" contains the void interface for the
 * "exact_cont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines
 * 1-47). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVExact_cont2d(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mexact_cont2d(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxExact_cont2d" contains the feval interface for the
 * "exact_cont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines
 * 1-47). The feval function calls the implementation version of exact_cont2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxExact_cont2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mexact_cont2d(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfExact_cont2d_exact_cont2d_OpeningFcn" contains the normal
 * interface for the "exact_cont2d/exact_cont2d_OpeningFcn" M-function from
 * file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 47-93). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfExact_cont2d_exact_cont2d_OpeningFcn(mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles,
                                                    ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mexact_cont2d_exact_cont2d_OpeningFcn(
      hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxExact_cont2d_exact_cont2d_OpeningFcn" contains the feval
 * interface for the "exact_cont2d/exact_cont2d_OpeningFcn" M-function from
 * file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 47-93). The
 * feval function calls the implementation version of
 * exact_cont2d/exact_cont2d_OpeningFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_exact_cont2d_OpeningFcn(int nlhs,
                                                    mxArray * plhs[],
                                                    int nrhs,
                                                    mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/exact_cont2d_OpeningFcn Line: 4"
            "7 Column: 1 The function \"exact_cont2d/exact_cont2d_OpeningFcn\" "
            "was called with more than the declared number of outputs (0)."),
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
    Mexact_cont2d_exact_cont2d_OpeningFcn(
      mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfExact_cont2d_exact_cont2d_OutputFcn" contains the normal
 * interface for the "exact_cont2d/exact_cont2d_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 93-104). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfExact_cont2d_exact_cont2d_OutputFcn(mlfVarargoutList * varargout,
                                                        mxArray * hObject,
                                                        mxArray * eventdata,
                                                        mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mexact_cont2d_exact_cont2d_OutputFcn(
          nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxExact_cont2d_exact_cont2d_OutputFcn" contains the feval
 * interface for the "exact_cont2d/exact_cont2d_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 93-104). The
 * feval function calls the implementation version of
 * exact_cont2d/exact_cont2d_OutputFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_exact_cont2d_OutputFcn(int nlhs,
                                                   mxArray * plhs[],
                                                   int nrhs,
                                                   mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/exact_cont2d_OutputFcn Line: 9"
            "3 Column: 1 The function \"exact_cont2d/exact_cont2d_OutputFcn\" "
            "was called with more than the declared number of inputs (3)."),
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
    mplhs[0]
      = Mexact_cont2d_exact_cont2d_OutputFcn(
          nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_des_push_Callback" contains the normal
 * interface for the "exact_cont2d/des_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 104-110).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_des_push_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_des_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_des_push_Callback" contains the feval
 * interface for the "exact_cont2d/des_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 104-110). The
 * feval function calls the implementation version of
 * exact_cont2d/des_push_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_des_push_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/des_push_Callback Line: 104"
            " Column: 1 The function \"exact_cont2d/des_push_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/des_push_Callback Line: 10"
            "4 Column: 1 The function \"exact_cont2d/des_push_Callback\" w"
            "as called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_des_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_par_push_Callback" contains the normal
 * interface for the "exact_cont2d/par_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 110-122).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_par_push_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_par_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_par_push_Callback" contains the feval
 * interface for the "exact_cont2d/par_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 110-122). The
 * feval function calls the implementation version of
 * exact_cont2d/par_push_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_par_push_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/par_push_Callback Line: 110"
            " Column: 1 The function \"exact_cont2d/par_push_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/par_push_Callback Line: 11"
            "0 Column: 1 The function \"exact_cont2d/par_push_Callback\" w"
            "as called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_par_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_pop_gra_CreateFcn" contains the normal
 * interface for the "exact_cont2d/pop_gra_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 122-136).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_pop_gra_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_pop_gra_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_pop_gra_CreateFcn" contains the feval
 * interface for the "exact_cont2d/pop_gra_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 122-136). The
 * feval function calls the implementation version of
 * exact_cont2d/pop_gra_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_pop_gra_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_gra_CreateFcn Line: 122"
            " Column: 1 The function \"exact_cont2d/pop_gra_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_gra_CreateFcn Line: 12"
            "2 Column: 1 The function \"exact_cont2d/pop_gra_CreateFcn\" w"
            "as called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_pop_gra_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_pop_gra_Callback" contains the normal
 * interface for the "exact_cont2d/pop_gra_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 136-175).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_pop_gra_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_pop_gra_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_pop_gra_Callback" contains the feval interface
 * for the "exact_cont2d/pop_gra_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 136-175). The
 * feval function calls the implementation version of
 * exact_cont2d/pop_gra_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxExact_cont2d_pop_gra_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_gra_Callback Line: 136"
            " Column: 1 The function \"exact_cont2d/pop_gra_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_gra_Callback Line: 136"
            " Column: 1 The function \"exact_cont2d/pop_gra_Callback\" was"
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
    Mexact_cont2d_pop_gra_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_sol_push_Callback" contains the normal
 * interface for the "exact_cont2d/sol_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 175-218).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_sol_push_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_sol_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_sol_push_Callback" contains the feval
 * interface for the "exact_cont2d/sol_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 175-218). The
 * feval function calls the implementation version of
 * exact_cont2d/sol_push_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_sol_push_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/sol_push_Callback Line: 175"
            " Column: 1 The function \"exact_cont2d/sol_push_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/sol_push_Callback Line: 17"
            "5 Column: 1 The function \"exact_cont2d/sol_push_Callback\" w"
            "as called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_sol_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_edit1_CreateFcn" contains the normal interface
 * for the "exact_cont2d/edit1_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 218-231).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_edit1_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_edit1_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_edit1_CreateFcn" contains the feval interface
 * for the "exact_cont2d/edit1_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 218-231). The
 * feval function calls the implementation version of
 * exact_cont2d/edit1_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxExact_cont2d_edit1_CreateFcn(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/edit1_CreateFcn Line: 218"
            " Column: 1 The function \"exact_cont2d/edit1_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/edit1_CreateFcn Line: 218"
            " Column: 1 The function \"exact_cont2d/edit1_CreateFcn\" was"
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
    Mexact_cont2d_edit1_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_edit1_Callback" contains the normal interface
 * for the "exact_cont2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 231-240).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_edit1_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_edit1_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_edit1_Callback" contains the feval interface
 * for the "exact_cont2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 231-240). The
 * feval function calls the implementation version of
 * exact_cont2d/edit1_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxExact_cont2d_edit1_Callback(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/edit1_Callback Line: 231 "
            "Column: 1 The function \"exact_cont2d/edit1_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/edit1_Callback Line: 231"
            " Column: 1 The function \"exact_cont2d/edit1_Callback\" was"
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
    Mexact_cont2d_edit1_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_push_cambcf_Callback" contains the normal
 * interface for the "exact_cont2d/push_cambcf_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 240-248).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_push_cambcf_Callback(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_push_cambcf_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_push_cambcf_Callback" contains the feval
 * interface for the "exact_cont2d/push_cambcf_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 240-248). The
 * feval function calls the implementation version of
 * exact_cont2d/push_cambcf_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_push_cambcf_Callback(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/push_cambcf_Callback Line: 24"
            "0 Column: 1 The function \"exact_cont2d/push_cambcf_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/push_cambcf_Callback Line: 2"
            "40 Column: 1 The function \"exact_cont2d/push_cambcf_Callback\""
            " was called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_push_cambcf_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_pop_in_CreateFcn" contains the normal
 * interface for the "exact_cont2d/pop_in_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 248-262).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_pop_in_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_pop_in_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_pop_in_CreateFcn" contains the feval interface
 * for the "exact_cont2d/pop_in_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 248-262). The
 * feval function calls the implementation version of
 * exact_cont2d/pop_in_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxExact_cont2d_pop_in_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_in_CreateFcn Line: 248"
            " Column: 1 The function \"exact_cont2d/pop_in_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_in_CreateFcn Line: 248"
            " Column: 1 The function \"exact_cont2d/pop_in_CreateFcn\" was"
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
    Mexact_cont2d_pop_in_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_pop_in_Callback" contains the normal interface
 * for the "exact_cont2d/pop_in_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 262-301).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_pop_in_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_pop_in_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_pop_in_Callback" contains the feval interface
 * for the "exact_cont2d/pop_in_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 262-301). The
 * feval function calls the implementation version of
 * exact_cont2d/pop_in_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxExact_cont2d_pop_in_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_in_Callback Line: 262"
            " Column: 1 The function \"exact_cont2d/pop_in_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pop_in_Callback Line: 262"
            " Column: 1 The function \"exact_cont2d/pop_in_Callback\" was"
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
    Mexact_cont2d_pop_in_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_pushbutton7_Callback" contains the normal
 * interface for the "exact_cont2d/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 301-310).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_pushbutton7_Callback(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_pushbutton7_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_pushbutton7_Callback" contains the feval
 * interface for the "exact_cont2d/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 301-310). The
 * feval function calls the implementation version of
 * exact_cont2d/pushbutton7_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_pushbutton7_Callback(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pushbutton7_Callback Line: 30"
            "1 Column: 1 The function \"exact_cont2d/pushbutton7_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/pushbutton7_Callback Line: 3"
            "01 Column: 1 The function \"exact_cont2d/pushbutton7_Callback\""
            " was called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_pushbutton7_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_popupmenu8_CreateFcn" contains the normal
 * interface for the "exact_cont2d/popupmenu8_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 310-324).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_popupmenu8_CreateFcn(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_popupmenu8_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_popupmenu8_CreateFcn" contains the feval
 * interface for the "exact_cont2d/popupmenu8_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 310-324). The
 * feval function calls the implementation version of
 * exact_cont2d/popupmenu8_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_popupmenu8_CreateFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/popupmenu8_CreateFcn Line: 31"
            "0 Column: 1 The function \"exact_cont2d/popupmenu8_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/popupmenu8_CreateFcn Line: 3"
            "10 Column: 1 The function \"exact_cont2d/popupmenu8_CreateFcn\""
            " was called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_popupmenu8_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfExact_cont2d_popupmenu8_Callback" contains the normal
 * interface for the "exact_cont2d/popupmenu8_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 324-342).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfExact_cont2d_popupmenu8_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mexact_cont2d_popupmenu8_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxExact_cont2d_popupmenu8_Callback" contains the feval
 * interface for the "exact_cont2d/popupmenu8_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 324-342). The
 * feval function calls the implementation version of
 * exact_cont2d/popupmenu8_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxExact_cont2d_popupmenu8_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/popupmenu8_Callback Line: 32"
            "4 Column: 1 The function \"exact_cont2d/popupmenu8_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: exact_cont2d/popupmenu8_Callback Line: 32"
            "4 Column: 1 The function \"exact_cont2d/popupmenu8_Callback\" w"
            "as called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mexact_cont2d_popupmenu8_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mexact_cont2d" is the implementation version of the
 * "exact_cont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines
 * 1-47). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = exact_cont2d(varargin)
 */
static mxArray * Mexact_cont2d(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % EXACT_CONT2D M-file for exact_cont2d.fig
     * %      EXACT_CONT2D, by itself, creates a new EXACT_CONT2D or raises the existing
     * %      singleton*.
     * %
     * %      H = EXACT_CONT2D returns the handle to a new EXACT_CONT2D or the handle to
     * %      the existing singleton*.
     * %
     * %      EXACT_CONT2D('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in EXACT_CONT2D.M with the given input arguments.
     * %
     * %      EXACT_CONT2D('Property','Value',...) creates a new EXACT_CONT2D or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before exact_cont2d_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to exact_cont2d_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help exact_cont2d
     * 
     * % Last Modified by GUIDE v2.5 16-Aug-2004 11:58:27
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
        mxCreateString("exact_cont2d"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxExact_cont2d_exact_cont2d_OpeningFcn, "exact_cont2d_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxExact_cont2d_exact_cont2d_OutputFcn, "exact_cont2d_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @exact_cont2d_OpeningFcn, ...
     * 'gui_OutputFcn',  @exact_cont2d_OutputFcn, ...
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
     * % --- Executes just before exact_cont2d is made visible.
     */
}

/*
 * The function "Mexact_cont2d_exact_cont2d_OpeningFcn" is the implementation
 * version of the "exact_cont2d/exact_cont2d_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 47-93). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function exact_cont2d_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mexact_cont2d_exact_cont2d_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mxArray * u1 = NULL;
    mxArray * u0 = NULL;
    mxArray * Y = NULL;
    mxArray * X = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * ans = NULL;
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
     * % varargin   command line arguments to exact_cont2d (see VARARGIN)
     * 
     * 
     * % Method of resolution for fault
     * handles.file = 'FDS'; 
     */
    mlfIndexAssign(&handles, ".file", _mxarray14_);
    /*
     * 
     * % Parameters of the program for fault
     * data.n = 21;
     */
    mlfIndexAssign(&data, ".n", _mxarray16_);
    /*
     * data.mu = 1/sqrt(2);
     */
    mlfIndexAssign(&data, ".mu", mclMrdivide(_mxarray0_, mlfSqrt(_mxarray17_)));
    /*
     * data.a = 0;
     */
    mlfIndexAssign(&data, ".a", _mxarray18_);
    /*
     * data.b = 1;
     */
    mlfIndexAssign(&data, ".b", _mxarray0_);
    /*
     * data.T = 3.75/sqrt(2);
     */
    mlfIndexAssign(&data, ".T", mclMrdivide(_mxarray19_, mlfSqrt(_mxarray17_)));
    /*
     * data.eps=1.e-7;
     */
    mlfIndexAssign(&data, ".eps", _mxarray20_);
    /*
     * setappdata(hObject, 'data', data);
     */
    mlfSetappdata(
      mclVa(hObject, "hObject"), _mxarray21_, mclVv(data, "data"), NULL);
    /*
     * 
     * % Drawing of the initial data for fault
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
     * [X,Y]=meshgrid(x,x);
     */
    mlfAssign(
      &X, mlfNMeshgrid(2, &Y, NULL, mclVv(x, "x"), mclVv(x, "x"), NULL));
    /*
     * Y=flipud(Y);
     */
    mlfAssign(&Y, mlfFlipud(mclVv(Y, "Y")));
    /*
     * [u0 u1]=data1_2d(X,Y,data.T);
     */
    mclFeval(
      mlfVarargout(&u0, &u1, NULL),
      mlxData1_2d,
      mclVv(X, "X"),
      mclVv(Y, "Y"),
      mlfIndexRef(mclVv(data, "data"), ".T"),
      NULL);
    /*
     * axes(handles.axes_u0);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u0"), NULL));
    /*
     * mesh(X,Y,u0);
     */
    mclAssignAns(
      &ans, mlfNMesh(0, mclVv(X, "X"), mclVv(Y, "Y"), mclVv(u0, "u0"), NULL));
    /*
     * axes(handles.axes_u1);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u1"), NULL));
    /*
     * mesh(X,Y,u1);
     */
    mclAssignAns(
      &ans, mlfNMesh(0, mclVv(X, "X"), mclVv(Y, "Y"), mclVv(u1, "u1"), NULL));
    /*
     * % cla
     * % Variable that it allows to know if the necessary calculation has 
     * % been realized to draw the solution 
     * handles.solactual=0;
     */
    mlfIndexAssign(&handles, ".solactual", _mxarray18_);
    /*
     * 
     * % Choose default command line output for exact_cont2d
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
    mxDestroyArray(ans);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(X);
    mxDestroyArray(Y);
    mxDestroyArray(u0);
    mxDestroyArray(u1);
    mxDestroyArray(varargin);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % UIWAIT makes exact_cont2d wait for user response (see UIRESUME)
     * % uiwait(handles.figure1);
     * 
     * 
     * % --- Outputs from this function are returned to the command line.
     */
}

/*
 * The function "Mexact_cont2d_exact_cont2d_OutputFcn" is the implementation
 * version of the "exact_cont2d/exact_cont2d_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 93-104). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = exact_cont2d_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mexact_cont2d_exact_cont2d_OutputFcn(int nargout_,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
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
 * The function "Mexact_cont2d_des_push_Callback" is the implementation version
 * of the "exact_cont2d/des_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 104-110). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function des_push_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_des_push_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
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
 * The function "Mexact_cont2d_par_push_Callback" is the implementation version
 * of the "exact_cont2d/par_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 110-122). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function par_push_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_par_push_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
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
    mlfAssign(&data, mlfGetappdata(mlfGcbf(), _mxarray21_));
    /*
     * %paramet=[data.n data.l data.a data.b data.T data.ep];
     * [h1 data.a data.b data.n data.mu data.T data.eps]=paramcont2d(data);
     */
    mlfNParamcont2d(
      0,
      mlfIndexVarargout(
        &h1, "",
        &data, ".a",
        &data, ".b",
        &data, ".n",
        &data, ".mu",
        &data, ".T",
        &data, ".eps",
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
    mlfSetappdata(mlfGcbf(), _mxarray21_, mclVv(data, "data"), NULL);
    mxDestroyArray(data);
    mxDestroyArray(h1);
    mxDestroyArray(ans);
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
 * The function "Mexact_cont2d_pop_gra_CreateFcn" is the implementation version
 * of the "exact_cont2d/pop_gra_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 122-136). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_CreateFcn(hObject, eventdata, handles)
 */
static void Mexact_cont2d_pop_gra_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
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
            0, mclVa(hObject, "hObject"), _mxarray23_, _mxarray25_, NULL));
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
            _mxarray23_,
            mlfNGet(1, _mxarray18_, _mxarray27_, NULL),
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
 * The function "Mexact_cont2d_pop_gra_Callback" is the implementation version
 * of the "exact_cont2d/pop_gra_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 136-175). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_pop_gra_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mxArray * z2 = NULL;
    mxArray * z1 = NULL;
    mxArray * solu = NULL;
    mxArray * param = NULL;
    mxArray * ans = NULL;
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
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray31_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray33_)) {
            /*
             * case 'control' % User selects peaks
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * plot(handles.t,handles.control);
             */
            mclAssignAns(
              &ans,
              mlfNPlot(
                0,
                mlfIndexRef(mclVa(handles, "handles"), ".t"),
                mlfIndexRef(mclVa(handles, "handles"), ".control"),
                NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray35_, NULL));
            /*
             * ylabel('L2 norm of the control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray37_, NULL));
        /*
         * case 'animation' 
         */
        } else if (mclSwitchCompare(v_, _mxarray39_)) {
            /*
             * 
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray21_));
            /*
             * %switch handles.file;
             * %  case 'FDS' % User selects difcent2d
             * solu=animcont_2d(param.a,param.b,param.n,param.mu,param.T,handles.u0,handles.u1,handles.e0,handles.e1,handles.axes_sol);
             */
            mlfAssign(
              &solu,
              mclFeval(
                mclValueVarargout(),
                mlxAnimcont_2d,
                mlfIndexRef(mclVv(param, "param"), ".a"),
                mlfIndexRef(mclVv(param, "param"), ".b"),
                mlfIndexRef(mclVv(param, "param"), ".n"),
                mlfIndexRef(mclVv(param, "param"), ".mu"),
                mlfIndexRef(mclVv(param, "param"), ".T"),
                mlfIndexRef(mclVa(handles, "handles"), ".u0"),
                mlfIndexRef(mclVa(handles, "handles"), ".u1"),
                mlfIndexRef(mclVa(handles, "handles"), ".e0"),
                mlfIndexRef(mclVa(handles, "handles"), ".e1"),
                mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"),
                NULL));
        /*
         * 
         * %  case 'BI-GRID'     
         * %solu=animcont_bigrid2d(param.a,param.b,param.n,param.cfl,param.T,handles.u0,handles.u1,handles.e0,handles.e1,handles.axes_sol);
         * %end   
         * case 'residue' % User selects sinc
         */
        } else if (mclSwitchCompare(v_, _mxarray41_)) {
            /*
             * [z1,z2]=size(handles.resid);
             */
            mclFeval(
              mlfVarargout(&z1, &z2, NULL),
              mlxSize,
              mlfIndexRef(mclVa(handles, "handles"), ".resid"),
              NULL);
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * plot(1:z1,log10(handles.resid));
             */
            mclAssignAns(
              &ans,
              mlfNPlot(
                0,
                mlfColon(_mxarray0_, mclVv(z1, "z1"), NULL),
                mclFeval(
                  mclValueVarargout(),
                  mlxLog10,
                  mlfIndexRef(mclVa(handles, "handles"), ".resid"),
                  NULL),
                NULL));
            /*
             * hold on
             */
            mlfHold(_mxarray43_);
            /*
             * plot(1:z1,log10(handles.resid),'o');
             */
            mclAssignAns(
              &ans,
              mlfNPlot(
                0,
                mlfColon(_mxarray0_, mclVv(z1, "z1"), NULL),
                mclFeval(
                  mclValueVarargout(),
                  mlxLog10,
                  mlfIndexRef(mclVa(handles, "handles"), ".resid"),
                  NULL),
                _mxarray45_,
                NULL));
            /*
             * hold off
             */
            mlfHold(_mxarray47_);
            /*
             * xlabel('Iteration');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray49_, NULL));
            /*
             * ylabel('log10(residu)');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray51_, NULL));
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
    mxDestroyArray(param);
    mxDestroyArray(solu);
    mxDestroyArray(z1);
    mxDestroyArray(z2);
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
 * The function "Mexact_cont2d_sol_push_Callback" is the implementation version
 * of the "exact_cont2d/sol_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 175-218). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol_push_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_sol_push_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mxArray * ans = NULL;
    mxArray * e1 = NULL;
    mxArray * e0 = NULL;
    mxArray * t = NULL;
    mxArray * resid = NULL;
    mxArray * control = NULL;
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
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray21_));
    /*
     * 
     * switch handles.file;
     */
    {
        mxArray * v_
          = mclInitialize(mlfIndexRef(mclVa(handles, "handles"), ".file"));
        if (mclSwitchCompare(v_, _mxarray14_)) {
            /*
             * case 'FDS' % User selects difcent2d
             * 
             * [control resid t e0 e1]=cont_2d(param.a,param.b,param.n,param.mu,param.T,param.eps,handles.u0,handles.u1);
             */
            mclFeval(
              mlfVarargout(&control, &resid, &t, &e0, &e1, NULL),
              mlxCont_2d,
              mlfIndexRef(mclVv(param, "param"), ".a"),
              mlfIndexRef(mclVv(param, "param"), ".b"),
              mlfIndexRef(mclVv(param, "param"), ".n"),
              mlfIndexRef(mclVv(param, "param"), ".mu"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              mlfIndexRef(mclVv(param, "param"), ".eps"),
              mlfIndexRef(mclVa(handles, "handles"), ".u0"),
              mlfIndexRef(mclVa(handles, "handles"), ".u1"),
              NULL);
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * plot(t,control);
             */
            mclAssignAns(
              &ans,
              mlfNPlot(0, mclVv(t, "t"), mclVv(control, "control"), NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray35_, NULL));
            /*
             * ylabel('L2 norm of the control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray37_, NULL));
            /*
             * handles.solactual=0;
             */
            mlfIndexAssign(&handles, ".solactual", _mxarray18_);
        /*
         * 
         * case 'BI-GRID' % User selects bigrid2d
         */
        } else if (mclSwitchCompare(v_, _mxarray53_)) {
            /*
             * 
             * [control resid t e0 e1]=cont_bigrid2d(param.a,param.b,param.n,param.mu,param.T,param.eps,handles.u0,handles.u1);
             */
            mclFeval(
              mlfVarargout(&control, &resid, &t, &e0, &e1, NULL),
              mlxCont_bigrid2d,
              mlfIndexRef(mclVv(param, "param"), ".a"),
              mlfIndexRef(mclVv(param, "param"), ".b"),
              mlfIndexRef(mclVv(param, "param"), ".n"),
              mlfIndexRef(mclVv(param, "param"), ".mu"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              mlfIndexRef(mclVv(param, "param"), ".eps"),
              mlfIndexRef(mclVa(handles, "handles"), ".u0"),
              mlfIndexRef(mclVa(handles, "handles"), ".u1"),
              NULL);
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * plot(t,control);
             */
            mclAssignAns(
              &ans,
              mlfNPlot(0, mclVv(t, "t"), mclVv(control, "control"), NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray35_, NULL));
            /*
             * ylabel('L2 norm of the control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray37_, NULL));
            /*
             * handles.solactual=0;
             */
            mlfIndexAssign(&handles, ".solactual", _mxarray18_);
        /*
         * case 'MIX' % User selects mix 2d    
         */
        } else if (mclSwitchCompare(v_, _mxarray55_)) {
            /*
             * [control resid t e0 e1]=cont_2dmix(param.a,param.b,param.n,param.mu,param.T,param.eps,handles.u0,handles.u1);
             */
            mclFeval(
              mlfVarargout(&control, &resid, &t, &e0, &e1, NULL),
              mlxCont_2dmix,
              mlfIndexRef(mclVv(param, "param"), ".a"),
              mlfIndexRef(mclVv(param, "param"), ".b"),
              mlfIndexRef(mclVv(param, "param"), ".n"),
              mlfIndexRef(mclVv(param, "param"), ".mu"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              mlfIndexRef(mclVv(param, "param"), ".eps"),
              mlfIndexRef(mclVa(handles, "handles"), ".u0"),
              mlfIndexRef(mclVa(handles, "handles"), ".u1"),
              NULL);
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * plot(t,control);
             */
            mclAssignAns(
              &ans,
              mlfNPlot(0, mclVv(t, "t"), mclVv(control, "control"), NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray35_, NULL));
            /*
             * ylabel('L2 norm of the control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray37_, NULL));
            /*
             * handles.solactual=0;
             */
            mlfIndexAssign(&handles, ".solactual", _mxarray18_);
        /*
         * 
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * handles.t=t;
     */
    mlfIndexAssign(&handles, ".t", mclVv(t, "t"));
    /*
     * handles.control=control;
     */
    mlfIndexAssign(&handles, ".control", mclVv(control, "control"));
    /*
     * handles.e0=e0;
     */
    mlfIndexAssign(&handles, ".e0", mclVv(e0, "e0"));
    /*
     * handles.e1=e1;
     */
    mlfIndexAssign(&handles, ".e1", mclVv(e1, "e1"));
    /*
     * handles.resid=resid;
     */
    mlfIndexAssign(&handles, ".resid", mclVv(resid, "resid"));
    /*
     * guidata(hObject,handles)
     */
    mclPrintAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(param);
    mxDestroyArray(control);
    mxDestroyArray(resid);
    mxDestroyArray(t);
    mxDestroyArray(e0);
    mxDestroyArray(e1);
    mxDestroyArray(ans);
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
 * The function "Mexact_cont2d_edit1_CreateFcn" is the implementation version
 * of the "exact_cont2d/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 218-231). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_CreateFcn(hObject, eventdata, handles)
 */
static void Mexact_cont2d_edit1_CreateFcn(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit1 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    empty - handles not created until after all CreateFcns called
     * 
     * % Hint: edit controls usually have a white background on Windows.
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
            0, mclVa(hObject, "hObject"), _mxarray23_, _mxarray25_, NULL));
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
            _mxarray23_,
            mlfNGet(1, _mxarray18_, _mxarray27_, NULL),
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
     */
}

/*
 * The function "Mexact_cont2d_edit1_Callback" is the implementation version of
 * the "exact_cont2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 231-240). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_edit1_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * % hObject    handle to edit1 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit1 as text
     * %        str2double(get(hObject,'String')) returns contents of edit1 as a double
     * 
     * % --- Executes on button press in push_cambcf.
     */
}

/*
 * The function "Mexact_cont2d_push_cambcf_Callback" is the implementation
 * version of the "exact_cont2d/push_cambcf_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 240-248). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function push_cambcf_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_push_cambcf_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * % hObject    handle to push_cambcf (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * %edit datos.m
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mexact_cont2d_pop_in_CreateFcn" is the implementation version
 * of the "exact_cont2d/pop_in_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 248-262). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_in_CreateFcn(hObject, eventdata, handles)
 */
static void Mexact_cont2d_pop_in_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
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
            0, mclVa(hObject, "hObject"), _mxarray23_, _mxarray25_, NULL));
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
            _mxarray23_,
            mlfNGet(1, _mxarray18_, _mxarray27_, NULL),
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
 * The function "Mexact_cont2d_pop_in_Callback" is the implementation version
 * of the "exact_cont2d/pop_in_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 262-301). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_in_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_pop_in_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mxArray * ans = NULL;
    mxArray * u1 = NULL;
    mxArray * u0 = NULL;
    mxArray * str = NULL;
    mxArray * val = NULL;
    mxArray * Y = NULL;
    mxArray * X = NULL;
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
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray21_));
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
     * [X,Y]=meshgrid(x,x);
     */
    mlfAssign(
      &X, mlfNMeshgrid(2, &Y, NULL, mclVv(x, "x"), mclVv(x, "x"), NULL));
    /*
     * Y=flipud(Y);
     */
    mlfAssign(&Y, mlfFlipud(mclVv(Y, "Y")));
    /*
     * val = get(hObject,'Value');
     */
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray31_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray57_)) {
            /*
             * case 'Example1' % User selects difcent
             * [u0 u1]=data1_2d(X,Y,param.T);
             */
            mclFeval(
              mlfVarargout(&u0, &u1, NULL),
              mlxData1_2d,
              mclVv(X, "X"),
              mclVv(Y, "Y"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              NULL);
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example2' 
         */
        } else if (mclSwitchCompare(v_, _mxarray59_)) {
            /*
             * [u0 u1]=data2_2d(X,Y,param.T); 
             */
            mclFeval(
              mlfVarargout(&u0, &u1, NULL),
              mlxData2_2d,
              mclVv(X, "X"),
              mclVv(Y, "Y"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              NULL);
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example3'
         */
        } else if (mclSwitchCompare(v_, _mxarray61_)) {
            /*
             * [u0 u1]=data3_2d(X,Y,param.T);
             */
            mclFeval(
              mlfVarargout(&u0, &u1, NULL),
              mlxData3_2d,
              mclVv(X, "X"),
              mclVv(Y, "Y"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              NULL);
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example4'
         */
        } else if (mclSwitchCompare(v_, _mxarray63_)) {
            /*
             * [u0 u1]=data4_2d(X,Y,param.T);
             */
            mclFeval(
              mlfVarargout(&u0, &u1, NULL),
              mlxData4_2d,
              mclVv(X, "X"),
              mclVv(Y, "Y"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              NULL);
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
     * 
     * axes(handles.axes_u0);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u0"), NULL));
    /*
     * mesh(X,Y,u0);
     */
    mclAssignAns(
      &ans, mlfNMesh(0, mclVv(X, "X"), mclVv(Y, "Y"), mclVv(u0, "u0"), NULL));
    /*
     * axes(handles.axes_u1);
     */
    mclAssignAns(
      &ans,
      mlfNAxes(0, mlfIndexRef(mclVa(handles, "handles"), ".axes_u1"), NULL));
    /*
     * mesh(X,Y,u1);
     */
    mclAssignAns(
      &ans, mlfNMesh(0, mclVv(X, "X"), mclVv(Y, "Y"), mclVv(u1, "u1"), NULL));
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
    mxDestroyArray(X);
    mxDestroyArray(Y);
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
 * The function "Mexact_cont2d_pushbutton7_Callback" is the implementation
 * version of the "exact_cont2d/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 301-310). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton7_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_pushbutton7_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
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
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mexact_cont2d_popupmenu8_CreateFcn" is the implementation
 * version of the "exact_cont2d/popupmenu8_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 310-324). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function popupmenu8_CreateFcn(hObject, eventdata, handles)
 */
static void Mexact_cont2d_popupmenu8_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to popupmenu8 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray23_, _mxarray25_, NULL));
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
            _mxarray23_,
            mlfNGet(1, _mxarray18_, _mxarray27_, NULL),
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
     * % --- Executes on selection change in popupmenu8.
     */
}

/*
 * The function "Mexact_cont2d_popupmenu8_Callback" is the implementation
 * version of the "exact_cont2d/popupmenu8_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\exact_cont2d.m" (lines 324-342). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function popupmenu8_Callback(hObject, eventdata, handles)
 */
static void Mexact_cont2d_popupmenu8_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_exact_cont2d);
    mxArray * ans = NULL;
    mxArray * str = NULL;
    mxArray * val = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to popupmenu8 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: contents = get(hObject,'String') returns popupmenu8 contents as cell array
     * %        contents{get(hObject,'Value')} returns selected item from popupmenu8
     * 
     * val = get(hObject,'Value');
     */
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray31_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray14_)) {
            /*
             * case 'FDS' % User selects peaks
             * handles.file = 'FDS';
             */
            mlfIndexAssign(&handles, ".file", _mxarray14_);
        /*
         * case 'BI-GRID' % User selects membrane
         */
        } else if (mclSwitchCompare(v_, _mxarray53_)) {
            /*
             * handles.file = 'BI-GRID';
             */
            mlfIndexAssign(&handles, ".file", _mxarray53_);
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
     */
}
