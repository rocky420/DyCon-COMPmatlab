/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "cont_exacto.h"
#include "mwservices.h"
#include "cla.h"
#include "data0.h"
#include "data1.h"
#include "data2.h"
#include "data3.h"
#include "data4.h"
#include "dibujo_sol.h"
#include "difcent.h"
#include "elftos.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "initialdata1.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
#include "parametros.h"
#include "surf.h"
#include "xlabel.h"
#include "ylabel.h"
#include "zlabel.h"
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
static mxArray * _mxarray21_;

static mxChar _array23_[9] = { 's', 'i', 'n', '(', 'p', 'i', '*', 'x', ')' };
static mxArray * _mxarray22_;

static mxChar _array25_[13] = { '-', 'p', 'i', '*', 's', 'i', 'n',
                                '(', 'p', 'i', '*', 'x', ')' };
static mxArray * _mxarray24_;

static mxChar _array27_[4] = { 'd', 'a', 't', 'a' };
static mxArray * _mxarray26_;

static mxChar _array29_[15] = { 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray28_;

static mxChar _array31_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray30_;

static mxChar _array33_[31] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray32_;

static mxChar _array35_[5] = { 'V', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray34_;

static mxChar _array37_[6] = { 'S', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray36_;

static mxChar _array39_[7] = { 'c', 'o', 'n', 't', 'r', 'o', 'l' };
static mxArray * _mxarray38_;

static mxChar _array41_[4] = { 't', 'i', 'm', 'e' };
static mxArray * _mxarray40_;

static mxChar _array43_[8] = { 's', 'o', 'l', 'u', 't', 'i', 'o', 'n' };
static mxArray * _mxarray42_;

static mxChar _array45_[1] = { 'x' };
static mxArray * _mxarray44_;

static double _array47_[2] = { 137.0, 30.0 };
static mxArray * _mxarray46_;

static mxChar _array49_[9] = { 'a', 'n', 'i', 'm', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray48_;
static mxArray * _mxarray50_;
static mxArray * _mxarray51_;

static mxChar _array53_[7] = { 'r', 'e', 's', 'i', 'd', 'u', 'e' };
static mxArray * _mxarray52_;

static mxChar _array55_[20] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ',
                                'o', 'f', ' ', 'i', 't', 'e', 'r',
                                'a', 't', 'i', 'o', 'n', 's' };
static mxArray * _mxarray54_;

static mxChar _array57_[15] = { 'l', 'o', 'g', '.', ' ', 'o', 'f', ' ',
                                'r', 'e', 's', 'i', 'd', 'u', 'e' };
static mxArray * _mxarray56_;

static mxChar _array59_[6] = { 'e', 'l', 'f', 't', 'o', 's' };
static mxArray * _mxarray58_;

static mxChar _array61_[3] = { 'e', 'f', 'm' };
static mxArray * _mxarray60_;
static mxArray * _mxarray62_;

static mxChar _array64_[18] = { 'F', 'i', 'n', 'i', 't', 'e', ' ', 'd', 'i',
                                'f', 'f', 'e', 'r', 'e', 'n', 'c', 'e', 's' };
static mxArray * _mxarray63_;

static mxChar _array66_[15] = { 'F', 'i', 'n', 'i', 't', 'e', ' ', 'e',
                                'l', 'e', 'm', 'e', 'n', 't', 's' };
static mxArray * _mxarray65_;

static mxChar _array68_[21] = { 'M', 'i', 'x', 'e', 'd', ' ', 'f',
                                'i', 'n', 'i', 't', 'e', ' ', 'e',
                                'l', 'e', 'm', 'e', 'n', 't', 's' };
static mxArray * _mxarray67_;

static mxChar _array70_[9] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', ' ', '1' };
static mxArray * _mxarray69_;

static mxChar _array72_[9] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', ' ', '2' };
static mxArray * _mxarray71_;

static mxChar _array74_[9] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', ' ', '3' };
static mxArray * _mxarray73_;

static mxChar _array76_[9] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', ' ', '4' };
static mxArray * _mxarray75_;

void InitializeModule_cont_exacto(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
    _mxarray14_ = mclInitializeString(7, _array15_);
    _mxarray16_ = mclInitializeDouble(40.0);
    _mxarray17_ = mclInitializeDouble(.9);
    _mxarray18_ = mclInitializeDouble(0.0);
    _mxarray19_ = mclInitializeDouble(2.4);
    _mxarray20_ = mclInitializeDouble(.0001);
    _mxarray21_ = mclInitializeDouble(.5);
    _mxarray22_ = mclInitializeString(9, _array23_);
    _mxarray24_ = mclInitializeString(13, _array25_);
    _mxarray26_ = mclInitializeString(4, _array27_);
    _mxarray28_ = mclInitializeString(15, _array29_);
    _mxarray30_ = mclInitializeString(5, _array31_);
    _mxarray32_ = mclInitializeString(31, _array33_);
    _mxarray34_ = mclInitializeString(5, _array35_);
    _mxarray36_ = mclInitializeString(6, _array37_);
    _mxarray38_ = mclInitializeString(7, _array39_);
    _mxarray40_ = mclInitializeString(4, _array41_);
    _mxarray42_ = mclInitializeString(8, _array43_);
    _mxarray44_ = mclInitializeString(1, _array45_);
    _mxarray46_ = mclInitializeDoubleVector(1, 2, _array47_);
    _mxarray48_ = mclInitializeString(9, _array49_);
    _mxarray50_ = mclInitializeDouble(2.0);
    _mxarray51_ = mclInitializeDouble(.1);
    _mxarray52_ = mclInitializeString(7, _array53_);
    _mxarray54_ = mclInitializeString(20, _array55_);
    _mxarray56_ = mclInitializeString(15, _array57_);
    _mxarray58_ = mclInitializeString(6, _array59_);
    _mxarray60_ = mclInitializeString(3, _array61_);
    _mxarray62_ = mclInitializeDouble(.25);
    _mxarray63_ = mclInitializeString(18, _array64_);
    _mxarray65_ = mclInitializeString(15, _array66_);
    _mxarray67_ = mclInitializeString(21, _array68_);
    _mxarray69_ = mclInitializeString(9, _array70_);
    _mxarray71_ = mclInitializeString(9, _array72_);
    _mxarray73_ = mclInitializeString(9, _array74_);
    _mxarray75_ = mclInitializeString(9, _array76_);
}

void TerminateModule_cont_exacto(void) {
    mxDestroyArray(_mxarray75_);
    mxDestroyArray(_mxarray73_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
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

static void mlfCont_exacto_cont_exacto_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  ...);
static void mlxCont_exacto_cont_exacto_OpeningFcn(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]);
static mxArray * mlfCont_exacto_cont_exacto_OutputFcn(mlfVarargoutList * varargout,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles);
static void mlxCont_exacto_cont_exacto_OutputFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfCont_exacto_des_push_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxCont_exacto_des_push_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfCont_exacto_par_push_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxCont_exacto_par_push_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfCont_exacto_push_cambcf_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxCont_exacto_push_cambcf_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfCont_exacto_pop_gra_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxCont_exacto_pop_gra_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfCont_exacto_pop_gra_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxCont_exacto_pop_gra_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static void mlfCont_exacto_sol_push_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxCont_exacto_sol_push_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfCont_exacto_pop_met_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxCont_exacto_pop_met_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfCont_exacto_pop_met_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxCont_exacto_pop_met_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static void mlfCont_exacto_edit1_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxCont_exacto_edit1_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfCont_exacto_edit1_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void mlxCont_exacto_edit1_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static void mlfCont_exacto_popup_datos_CreateFcn(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles);
static void mlxCont_exacto_popup_datos_CreateFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfCont_exacto_popup_datos_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxCont_exacto_popup_datos_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfCont_exacto_pushbutton7_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxCont_exacto_pushbutton7_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static mxArray * Mcont_exacto(int nargout_, mxArray * varargin);
static void Mcont_exacto_cont_exacto_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                mxArray * varargin);
static mxArray * Mcont_exacto_cont_exacto_OutputFcn(int nargout_,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles);
static void Mcont_exacto_des_push_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mcont_exacto_par_push_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mcont_exacto_push_cambcf_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mcont_exacto_pop_gra_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mcont_exacto_pop_gra_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Mcont_exacto_sol_push_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mcont_exacto_pop_met_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mcont_exacto_pop_met_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Mcont_exacto_edit1_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mcont_exacto_edit1_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void Mcont_exacto_popup_datos_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void Mcont_exacto_popup_datos_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mcont_exacto_pushbutton7_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);

static mexFunctionTableEntry local_function_table_[15]
  = { { "cont_exacto_OpeningFcn",
        mlxCont_exacto_cont_exacto_OpeningFcn, -4, 0, NULL },
      { "cont_exacto_OutputFcn",
        mlxCont_exacto_cont_exacto_OutputFcn, 3, -1, NULL },
      { "des_push_Callback", mlxCont_exacto_des_push_Callback, 3, 0, NULL },
      { "par_push_Callback", mlxCont_exacto_par_push_Callback, 3, 0, NULL },
      { "push_cambcf_Callback",
        mlxCont_exacto_push_cambcf_Callback, 3, 0, NULL },
      { "pop_gra_CreateFcn", mlxCont_exacto_pop_gra_CreateFcn, 3, 0, NULL },
      { "pop_gra_Callback", mlxCont_exacto_pop_gra_Callback, 3, 0, NULL },
      { "sol_push_Callback", mlxCont_exacto_sol_push_Callback, 3, 0, NULL },
      { "pop_met_CreateFcn", mlxCont_exacto_pop_met_CreateFcn, 3, 0, NULL },
      { "pop_met_Callback", mlxCont_exacto_pop_met_Callback, 3, 0, NULL },
      { "edit1_CreateFcn", mlxCont_exacto_edit1_CreateFcn, 3, 0, NULL },
      { "edit1_Callback", mlxCont_exacto_edit1_Callback, 3, 0, NULL },
      { "popup_datos_CreateFcn",
        mlxCont_exacto_popup_datos_CreateFcn, 3, 0, NULL },
      { "popup_datos_Callback",
        mlxCont_exacto_popup_datos_Callback, 3, 0, NULL },
      { "pushbutton7_Callback",
        mlxCont_exacto_pushbutton7_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_cont_exacto
  = { 15, local_function_table_ };

/*
 * The function "mlfNCont_exacto" contains the nargout interface for the
 * "cont_exacto" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\cont_exacto.m" (lines
 * 1-48). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNCont_exacto(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mcont_exacto(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfCont_exacto" contains the normal interface for the
 * "cont_exacto" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\cont_exacto.m" (lines
 * 1-48). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfCont_exacto(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mcont_exacto(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVCont_exacto" contains the void interface for the
 * "cont_exacto" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\cont_exacto.m" (lines
 * 1-48). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVCont_exacto(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mcont_exacto(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxCont_exacto" contains the feval interface for the
 * "cont_exacto" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\cont_exacto.m" (lines
 * 1-48). The feval function calls the implementation version of cont_exacto
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxCont_exacto(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mcont_exacto(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfCont_exacto_cont_exacto_OpeningFcn" contains the normal
 * interface for the "cont_exacto/cont_exacto_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 48-104). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_cont_exacto_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mcont_exacto_cont_exacto_OpeningFcn(hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxCont_exacto_cont_exacto_OpeningFcn" contains the feval
 * interface for the "cont_exacto/cont_exacto_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 48-104). The
 * feval function calls the implementation version of
 * cont_exacto/cont_exacto_OpeningFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxCont_exacto_cont_exacto_OpeningFcn(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/cont_exacto_OpeningFcn Line: 4"
            "8 Column: 1 The function \"cont_exacto/cont_exacto_OpeningFcn\" "
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
    Mcont_exacto_cont_exacto_OpeningFcn(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfCont_exacto_cont_exacto_OutputFcn" contains the normal
 * interface for the "cont_exacto/cont_exacto_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 104-115). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfCont_exacto_cont_exacto_OutputFcn(mlfVarargoutList * varargout,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mcont_exacto_cont_exacto_OutputFcn(
          nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxCont_exacto_cont_exacto_OutputFcn" contains the feval
 * interface for the "cont_exacto/cont_exacto_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 104-115). The
 * feval function calls the implementation version of
 * cont_exacto/cont_exacto_OutputFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxCont_exacto_cont_exacto_OutputFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/cont_exacto_OutputFcn Line: 1"
            "04 Column: 1 The function \"cont_exacto/cont_exacto_OutputFcn\""
            " was called with more than the declared number of inputs (3)."),
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
      = Mcont_exacto_cont_exacto_OutputFcn(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_des_push_Callback" contains the normal
 * interface for the "cont_exacto/des_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 115-124). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_des_push_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_des_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_des_push_Callback" contains the feval interface
 * for the "cont_exacto/des_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 115-124). The
 * feval function calls the implementation version of
 * cont_exacto/des_push_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_des_push_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/des_push_Callback Line: 115"
            " Column: 1 The function \"cont_exacto/des_push_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/des_push_Callback Line: 115"
            " Column: 1 The function \"cont_exacto/des_push_Callback\" was"
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
    Mcont_exacto_des_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_par_push_Callback" contains the normal
 * interface for the "cont_exacto/par_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 124-138). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_par_push_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_par_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_par_push_Callback" contains the feval interface
 * for the "cont_exacto/par_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 124-138). The
 * feval function calls the implementation version of
 * cont_exacto/par_push_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_par_push_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/par_push_Callback Line: 124"
            " Column: 1 The function \"cont_exacto/par_push_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/par_push_Callback Line: 124"
            " Column: 1 The function \"cont_exacto/par_push_Callback\" was"
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
    Mcont_exacto_par_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_push_cambcf_Callback" contains the normal
 * interface for the "cont_exacto/push_cambcf_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 138-186). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_push_cambcf_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_push_cambcf_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_push_cambcf_Callback" contains the feval
 * interface for the "cont_exacto/push_cambcf_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 138-186). The
 * feval function calls the implementation version of
 * cont_exacto/push_cambcf_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxCont_exacto_push_cambcf_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/push_cambcf_Callback Line: 13"
            "8 Column: 1 The function \"cont_exacto/push_cambcf_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/push_cambcf_Callback Line: 13"
            "8 Column: 1 The function \"cont_exacto/push_cambcf_Callback\" w"
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
    Mcont_exacto_push_cambcf_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_pop_gra_CreateFcn" contains the normal
 * interface for the "cont_exacto/pop_gra_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 186-201). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_pop_gra_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_pop_gra_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_pop_gra_CreateFcn" contains the feval interface
 * for the "cont_exacto/pop_gra_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 186-201). The
 * feval function calls the implementation version of
 * cont_exacto/pop_gra_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_pop_gra_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_gra_CreateFcn Line: 186"
            " Column: 1 The function \"cont_exacto/pop_gra_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_gra_CreateFcn Line: 186"
            " Column: 1 The function \"cont_exacto/pop_gra_CreateFcn\" was"
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
    Mcont_exacto_pop_gra_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_pop_gra_Callback" contains the normal interface
 * for the "cont_exacto/pop_gra_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 201-287). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_pop_gra_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_pop_gra_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_pop_gra_Callback" contains the feval interface
 * for the "cont_exacto/pop_gra_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 201-287). The
 * feval function calls the implementation version of
 * cont_exacto/pop_gra_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_pop_gra_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_gra_Callback Line: 201"
            " Column: 1 The function \"cont_exacto/pop_gra_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_gra_Callback Line: 201"
            " Column: 1 The function \"cont_exacto/pop_gra_Callback\" was"
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
    Mcont_exacto_pop_gra_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_sol_push_Callback" contains the normal
 * interface for the "cont_exacto/sol_push_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 287-333). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_sol_push_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_sol_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_sol_push_Callback" contains the feval interface
 * for the "cont_exacto/sol_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 287-333). The
 * feval function calls the implementation version of
 * cont_exacto/sol_push_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_sol_push_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/sol_push_Callback Line: 287"
            " Column: 1 The function \"cont_exacto/sol_push_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/sol_push_Callback Line: 287"
            " Column: 1 The function \"cont_exacto/sol_push_Callback\" was"
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
    Mcont_exacto_sol_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_pop_met_CreateFcn" contains the normal
 * interface for the "cont_exacto/pop_met_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 333-348). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_pop_met_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_pop_met_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_pop_met_CreateFcn" contains the feval interface
 * for the "cont_exacto/pop_met_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 333-348). The
 * feval function calls the implementation version of
 * cont_exacto/pop_met_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_pop_met_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_met_CreateFcn Line: 333"
            " Column: 1 The function \"cont_exacto/pop_met_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_met_CreateFcn Line: 333"
            " Column: 1 The function \"cont_exacto/pop_met_CreateFcn\" was"
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
    Mcont_exacto_pop_met_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_pop_met_Callback" contains the normal interface
 * for the "cont_exacto/pop_met_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 348-370). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_pop_met_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_pop_met_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_pop_met_Callback" contains the feval interface
 * for the "cont_exacto/pop_met_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 348-370). The
 * feval function calls the implementation version of
 * cont_exacto/pop_met_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_pop_met_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_met_Callback Line: 348"
            " Column: 1 The function \"cont_exacto/pop_met_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pop_met_Callback Line: 348"
            " Column: 1 The function \"cont_exacto/pop_met_Callback\" was"
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
    Mcont_exacto_pop_met_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_edit1_CreateFcn" contains the normal interface
 * for the "cont_exacto/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 370-385). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_edit1_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_edit1_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_edit1_CreateFcn" contains the feval interface
 * for the "cont_exacto/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 370-385). The
 * feval function calls the implementation version of
 * cont_exacto/edit1_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_edit1_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/edit1_CreateFcn Line: 370 "
            "Column: 1 The function \"cont_exacto/edit1_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/edit1_CreateFcn Line: 370"
            " Column: 1 The function \"cont_exacto/edit1_CreateFcn\" was"
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
    Mcont_exacto_edit1_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_edit1_Callback" contains the normal interface
 * for the "cont_exacto/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 385-411). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_edit1_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_edit1_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_edit1_Callback" contains the feval interface
 * for the "cont_exacto/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 385-411). The
 * feval function calls the implementation version of
 * cont_exacto/edit1_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxCont_exacto_edit1_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/edit1_Callback Line: 385 "
            "Column: 1 The function \"cont_exacto/edit1_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/edit1_Callback Line: 385 "
            "Column: 1 The function \"cont_exacto/edit1_Callback\" was c"
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
    Mcont_exacto_edit1_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_popup_datos_CreateFcn" contains the normal
 * interface for the "cont_exacto/popup_datos_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 411-426). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_popup_datos_CreateFcn(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_popup_datos_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_popup_datos_CreateFcn" contains the feval
 * interface for the "cont_exacto/popup_datos_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 411-426). The
 * feval function calls the implementation version of
 * cont_exacto/popup_datos_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxCont_exacto_popup_datos_CreateFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/popup_datos_CreateFcn Line: 41"
            "1 Column: 1 The function \"cont_exacto/popup_datos_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/popup_datos_CreateFcn Line: 4"
            "11 Column: 1 The function \"cont_exacto/popup_datos_CreateFcn\""
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
    Mcont_exacto_popup_datos_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_popup_datos_Callback" contains the normal
 * interface for the "cont_exacto/popup_datos_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 426-464). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_popup_datos_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_popup_datos_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_popup_datos_Callback" contains the feval
 * interface for the "cont_exacto/popup_datos_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 426-464). The
 * feval function calls the implementation version of
 * cont_exacto/popup_datos_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxCont_exacto_popup_datos_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/popup_datos_Callback Line: 42"
            "6 Column: 1 The function \"cont_exacto/popup_datos_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/popup_datos_Callback Line: 42"
            "6 Column: 1 The function \"cont_exacto/popup_datos_Callback\" w"
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
    Mcont_exacto_popup_datos_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfCont_exacto_pushbutton7_Callback" contains the normal
 * interface for the "cont_exacto/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 464-472). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfCont_exacto_pushbutton7_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mcont_exacto_pushbutton7_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxCont_exacto_pushbutton7_Callback" contains the feval
 * interface for the "cont_exacto/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 464-472). The
 * feval function calls the implementation version of
 * cont_exacto/pushbutton7_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxCont_exacto_pushbutton7_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pushbutton7_Callback Line: 46"
            "4 Column: 1 The function \"cont_exacto/pushbutton7_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_exacto/pushbutton7_Callback Line: 46"
            "4 Column: 1 The function \"cont_exacto/pushbutton7_Callback\" w"
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
    Mcont_exacto_pushbutton7_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mcont_exacto" is the implementation version of the
 * "cont_exacto" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\cont_exacto.m" (lines
 * 1-48). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = cont_exacto(varargin)
 */
static mxArray * Mcont_exacto(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % CONT_EXACTO M-file for cont_exacto.fig
     * %      CONT_EXACTO, by itself, creates a new CONT_EXACTO or raises the existing
     * %      singleton*.
     * %
     * %      H = CONT_EXACTO returns the handle to a new CONT_EXACTO or the handle to
     * %      the existing singleton*.
     * %
     * %      CONT_EXACTO('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in CONT_EXACTO.M with the given input arguments.
     * %
     * %      CONT_EXACTO('Property','Value',...) creates a new CONT_EXACTO or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before cont_exacto_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to cont_exacto_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help cont_exacto
     * 
     * % Last Modified by GUIDE v2.5 08-Jul-2004 09:39:16
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
        mxCreateString("cont_exacto"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxCont_exacto_cont_exacto_OpeningFcn, "cont_exacto_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxCont_exacto_cont_exacto_OutputFcn, "cont_exacto_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @cont_exacto_OpeningFcn, ...
     * 'gui_OutputFcn',  @cont_exacto_OutputFcn, ...
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
     * % --- Executes just before cont_exacto is made visible.
     */
}

/*
 * The function "Mcont_exacto_cont_exacto_OpeningFcn" is the implementation
 * version of the "cont_exacto/cont_exacto_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 48-104). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function cont_exacto_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mcont_exacto_cont_exacto_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
    mxArray * G = NULL;
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
     * % varargin   command line arguments to cont_exacto (see VARARGIN)
     * 
     * 
     * % Method of resolution for fault
     * handles.file = 'difcent';
     */
    mlfIndexAssign(&handles, ".file", _mxarray14_);
    /*
     * 
     * % Parameters of the program for fault
     * data.n = 40;
     */
    mlfIndexAssign(&data, ".n", _mxarray16_);
    /*
     * data.mu = 0.9
     */
    mlfIndexAssign(&data, ".mu", _mxarray17_);
    mclPrintArray(mclVv(data, "data"), "data");
    /*
     * data.a = 0;
     */
    mlfIndexAssign(&data, ".a", _mxarray18_);
    /*
     * data.b = 1;
     */
    mlfIndexAssign(&data, ".b", _mxarray0_);
    /*
     * data.T = 2.4;
     */
    mlfIndexAssign(&data, ".T", _mxarray19_);
    /*
     * data.eps=1.e-4
     */
    mlfIndexAssign(&data, ".eps", _mxarray20_);
    mclPrintArray(mclVv(data, "data"), "data");
    /*
     * data.masa=0;
     */
    mlfIndexAssign(&data, ".masa", _mxarray18_);
    /*
     * data.beta=0;
     */
    mlfIndexAssign(&data, ".beta", _mxarray18_);
    /*
     * data.gamma=0.5;
     */
    mlfIndexAssign(&data, ".gamma", _mxarray21_);
    /*
     * % setappdata(hObject, 'data', data);
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
     * [u0 u1]=data0(x);
     */
    mlfAssign(&u0, mlfData0(&u1, mclVv(x, "x")));
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
     * G=[0 ones(1,data.n) 0];
     */
    mlfAssign(
      &G,
      mlfHorzcat(
        _mxarray18_,
        mlfOnes(_mxarray0_, mlfIndexRef(mclVv(data, "data"), ".n"), NULL),
        _mxarray18_,
        NULL));
    /*
     * handles.u0=u0(G>0);
     */
    mlfIndexAssign(
      &handles,
      ".u0",
      mclArrayRef1(mclVv(u0, "u0"), mclGt(mclVv(G, "G"), _mxarray18_)));
    /*
     * handles.u1=u1(G>0);
     */
    mlfIndexAssign(
      &handles,
      ".u1",
      mclArrayRef1(mclVv(u1, "u1"), mclGt(mclVv(G, "G"), _mxarray18_)));
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
    mlfIndexAssign(&data, ".u0", _mxarray22_);
    /*
     * data.u1='-pi*sin(pi*x)';
     */
    mlfIndexAssign(&data, ".u1", _mxarray24_);
    /*
     * data.x=handles.x;
     */
    mlfIndexAssign(&data, ".x", mlfIndexRef(mclVa(handles, "handles"), ".x"));
    /*
     * setappdata(hObject, 'data', data);
     */
    mlfSetappdata(
      mclVa(hObject, "hObject"), _mxarray26_, mclVv(data, "data"), NULL);
    /*
     * % Variable that it allows to know if the necessary calculation has 
     * % been realized to draw the solution 
     * handles.solactual=0;
     */
    mlfIndexAssign(&handles, ".solactual", _mxarray18_);
    /*
     * 
     * % Choose default command line output for cont_exacto
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
    mxDestroyArray(G);
    mxDestroyArray(varargin);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % UIWAIT makes cont_exacto wait for user response (see UIRESUME)
     * % uiwait(handles.figure1);
     * 
     * 
     * % --- Outputs from this function are returned to the command line.
     */
}

/*
 * The function "Mcont_exacto_cont_exacto_OutputFcn" is the implementation
 * version of the "cont_exacto/cont_exacto_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 104-115). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = cont_exacto_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mcont_exacto_cont_exacto_OutputFcn(int nargout_,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
 * The function "Mcont_exacto_des_push_Callback" is the implementation version
 * of the "cont_exacto/des_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 115-124). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function des_push_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_des_push_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
     * 
     * 
     * 
     * % --- Executes on button press in par_push.
     */
}

/*
 * The function "Mcont_exacto_par_push_Callback" is the implementation version
 * of the "cont_exacto/par_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 124-138). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function par_push_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_par_push_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
    mlfAssign(&data, mlfGetappdata(mlfGcbf(), _mxarray26_));
    /*
     * %paramet=[data.n data.l data.a data.b data.T data.ep];
     * [h1 data.n data.mu data.a data.b data.T data.eps data.beta data.gamma data.masa]=parametros(data);
     */
    mlfNParametros(
      0,
      mlfIndexVarargout(
        &h1, "",
        &data, ".n",
        &data, ".mu",
        &data, ".a",
        &data, ".b",
        &data, ".T",
        &data, ".eps",
        &data, ".beta",
        &data, ".gamma",
        &data, ".masa",
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
    mlfSetappdata(mlfGcbf(), _mxarray26_, mclVv(data, "data"), NULL);
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
 * The function "Mcont_exacto_push_cambcf_Callback" is the implementation
 * version of the "cont_exacto/push_cambcf_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 138-186). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function push_cambcf_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_push_cambcf_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
    mxArray * G = NULL;
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
    mlfAssign(&data, mlfGetappdata(mlfGcbf(), _mxarray26_));
    /*
     * %paramet=[data.n data.l data.a data.b data.T data.ep];
     * [h1 data.n data.mu data.a data.b data.T data.eps data.beta data.gamma data.masa data.u0 data.u1]=initialdata1(data);
     */
    mlfNInitialdata1(
      0,
      mlfIndexVarargout(
        &h1, "",
        &data, ".n",
        &data, ".mu",
        &data, ".a",
        &data, ".b",
        &data, ".T",
        &data, ".eps",
        &data, ".beta",
        &data, ".gamma",
        &data, ".masa",
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
     * G=[0 ones(1,data.n) 0];
     */
    mlfAssign(
      &G,
      mlfHorzcat(
        _mxarray18_,
        mlfOnes(_mxarray0_, mlfIndexRef(mclVv(data, "data"), ".n"), NULL),
        _mxarray18_,
        NULL));
    /*
     * handles.u0=data.u0(G>0);
     */
    mlfIndexAssign(
      &handles,
      ".u0",
      mlfIndexRef(
        mclVv(data, "data"), ".u0(?)", mclGt(mclVv(G, "G"), _mxarray18_)));
    /*
     * handles.u1=data.u1(G>0);
     */
    mlfIndexAssign(
      &handles,
      ".u1",
      mlfIndexRef(
        mclVv(data, "data"), ".u1(?)", mclGt(mclVv(G, "G"), _mxarray18_)));
    /*
     * setappdata(gcbf,'data',data);
     */
    mlfSetappdata(mlfGcbf(), _mxarray26_, mclVv(data, "data"), NULL);
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(data);
    mxDestroyArray(h1);
    mxDestroyArray(ans);
    mxDestroyArray(G);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * %setappdata(gcbf,'data',data);
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%5
     * 
     * 
     * 
     * % % --- Executes on button press in push_cond.
     * % function push_cond_Callback(hObject, eventdata, handles)
     * % % hObject    handle to push_cond (see GCBO)
     * % % eventdata  reserved - to be defined in a future version of MATLAB
     * % % handles    structure with handles and user data (see GUIDATA)
     * % 
     * % % Drawing of the initial data
     * % 
     * % data=getappdata(gcbf, 'data');
     * % h=(data.b-data.a)/(data.n+1);
     * % x=[data.a:h:data.b];
     * % [u0 u1]=data0(x);
     * % axes(handles.axes_u0);
     * % plot(x,u0);
     * % axes(handles.axes_u1);
     * % plot(x,u1);
     * % G=[0 ones(1,data.n) 0];
     * % handles.u0=u0(G>0);
     * % handles.u1=u1(G>0);
     * % setappdata(gcbf, 'data', data);
     * % guidata(hObject, handles);
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mcont_exacto_pop_gra_CreateFcn" is the implementation version
 * of the "cont_exacto/pop_gra_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 186-201). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_CreateFcn(hObject, eventdata, handles)
 */
static void Mcont_exacto_pop_gra_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
            0, mclVa(hObject, "hObject"), _mxarray28_, _mxarray30_, NULL));
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
            _mxarray28_,
            mlfNGet(1, _mxarray18_, _mxarray32_, NULL),
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
     * 
     * % --- Executes on selection change in pop_gra.
     */
}

/*
 * The function "Mcont_exacto_pop_gra_Callback" is the implementation version
 * of the "cont_exacto/pop_gra_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 201-287). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_pop_gra_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
    mxArray * i = NULL;
    mxArray * paso = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * solu = NULL;
    mxArray * minimo = NULL;
    mxArray * maximo = NULL;
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
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray34_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray36_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray38_)) {
            /*
             * case 'control' % User selects control
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray26_));
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * maximo=max(handles.control);
             */
            mlfAssign(
              &maximo,
              mclFeval(
                mclValueVarargout(),
                mlxMax,
                mlfIndexRef(mclVa(handles, "handles"), ".control"),
                NULL));
            /*
             * minimo=min(handles.control);
             */
            mlfAssign(
              &minimo,
              mclFeval(
                mclValueVarargout(),
                mlxMin,
                mlfIndexRef(mclVa(handles, "handles"), ".control"),
                NULL));
            /*
             * axis([0 param.T minimo maximo]);
             */
            mclAssignAns(
              &ans,
              mlfNAxis(
                0,
                NULL,
                NULL,
                mlfHorzcat(
                  _mxarray18_,
                  mlfIndexRef(mclVv(param, "param"), ".T"),
                  mclVv(minimo, "minimo"),
                  mclVv(maximo, "maximo"),
                  NULL),
                NULL));
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
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray40_, NULL));
            /*
             * ylabel('control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray38_, NULL));
        /*
         * case 'solution' 
         */
        } else if (mclSwitchCompare(v_, _mxarray42_)) {
            /*
             * figure(1)
             */
            mclPrintAns(&ans, mlfNFigure(0, _mxarray0_, NULL));
            /*
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray26_));
            /*
             * if handles.solactual==0
             */
            if (mlfTobool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxEq,
                    mlfIndexRef(mclVa(handles, "handles"), ".solactual"),
                    _mxarray18_,
                    NULL))) {
                /*
                 * solu=dibujo_sol(param.n,param.mu,param.a,param.b,handles.t,handles.control,handles.u0,handles.u1);
                 */
                mlfAssign(
                  &solu,
                  mclFeval(
                    mclValueVarargout(),
                    mlxDibujo_sol,
                    mlfIndexRef(mclVv(param, "param"), ".n"),
                    mlfIndexRef(mclVv(param, "param"), ".mu"),
                    mlfIndexRef(mclVv(param, "param"), ".a"),
                    mlfIndexRef(mclVv(param, "param"), ".b"),
                    mlfIndexRef(mclVa(handles, "handles"), ".t"),
                    mlfIndexRef(mclVa(handles, "handles"), ".control"),
                    mlfIndexRef(mclVa(handles, "handles"), ".u0"),
                    mlfIndexRef(mclVa(handles, "handles"), ".u1"),
                    NULL));
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
                 * handles.x=x;
                 */
                mlfIndexAssign(&handles, ".x", mclVv(x, "x"));
                /*
                 * handles.solu=solu;
                 */
                mlfIndexAssign(&handles, ".solu", mclVv(solu, "solu"));
                /*
                 * handles.solactual=1;
                 */
                mlfIndexAssign(&handles, ".solactual", _mxarray0_);
            /*
             * end
             */
            }
            /*
             * %  axes(handles.axes_sol);
             * surf(handles.t,handles.x,handles.solu);
             */
            mclAssignAns(
              &ans,
              mlfNSurf(
                0,
                mlfIndexRef(mclVa(handles, "handles"), ".t"),
                mlfIndexRef(mclVa(handles, "handles"), ".x"),
                mlfIndexRef(mclVa(handles, "handles"), ".solu"),
                NULL));
            /*
             * maximo=max(max(handles.solu));
             */
            mlfAssign(
              &maximo,
              mlfMax(
                NULL,
                mclFeval(
                  mclValueVarargout(),
                  mlxMax,
                  mlfIndexRef(mclVa(handles, "handles"), ".solu"),
                  NULL),
                NULL,
                NULL));
            /*
             * minimo=min(min(handles.solu));
             */
            mlfAssign(
              &minimo,
              mlfMin(
                NULL,
                mclFeval(
                  mclValueVarargout(),
                  mlxMin,
                  mlfIndexRef(mclVa(handles, "handles"), ".solu"),
                  NULL),
                NULL,
                NULL));
            /*
             * axis([param.T  0 param.a param.b minimo maximo]);
             */
            mclAssignAns(
              &ans,
              mlfNAxis(
                0,
                NULL,
                NULL,
                mlfHorzcat(
                  mlfIndexRef(mclVv(param, "param"), ".T"),
                  _mxarray18_,
                  mlfIndexRef(mclVv(param, "param"), ".a"),
                  mlfIndexRef(mclVv(param, "param"), ".b"),
                  mclVv(minimo, "minimo"),
                  mclVv(maximo, "maximo"),
                  NULL),
                NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray40_, NULL));
            /*
             * ylabel('x');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray44_, NULL));
            /*
             * zlabel('solution');
             */
            mclAssignAns(&ans, mlfNZlabel(0, _mxarray42_, NULL));
            /*
             * view([137 30]);
             */
            mclAssignAns(
              &ans, mlfNView(0, mclAnsVarargout(), _mxarray46_, NULL));
            /*
             * rotate3d;
             */
            mlfRotate3d(NULL, NULL);
        /*
         * case 'animation' 
         */
        } else if (mclSwitchCompare(v_, _mxarray48_)) {
            /*
             * % mov = avifile('contexac1dexample2.avi')  
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray26_));
            /*
             * if handles.solactual==0
             */
            if (mlfTobool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxEq,
                    mlfIndexRef(mclVa(handles, "handles"), ".solactual"),
                    _mxarray18_,
                    NULL))) {
                /*
                 * solu=dibujo_sol(param.n,param.mu,param.a,param.b,handles.t,handles.control,handles.u0,handles.u1);
                 */
                mlfAssign(
                  &solu,
                  mclFeval(
                    mclValueVarargout(),
                    mlxDibujo_sol,
                    mlfIndexRef(mclVv(param, "param"), ".n"),
                    mlfIndexRef(mclVv(param, "param"), ".mu"),
                    mlfIndexRef(mclVv(param, "param"), ".a"),
                    mlfIndexRef(mclVv(param, "param"), ".b"),
                    mlfIndexRef(mclVa(handles, "handles"), ".t"),
                    mlfIndexRef(mclVa(handles, "handles"), ".control"),
                    mlfIndexRef(mclVa(handles, "handles"), ".u0"),
                    mlfIndexRef(mclVa(handles, "handles"), ".u1"),
                    NULL));
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
                 * handles.solactual=1;
                 */
                mlfIndexAssign(&handles, ".solactual", _mxarray0_);
                /*
                 * handles.x=x;
                 */
                mlfIndexAssign(&handles, ".x", mclVv(x, "x"));
                /*
                 * handles.solu=solu;
                 */
                mlfIndexAssign(&handles, ".solu", mclVv(solu, "solu"));
            /*
             * %  F = getframe(gca);
             * %  	mov = addframe(mov,F);
             * end    
             */
            }
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * maximo=2*max(abs(handles.u0));
             */
            mlfAssign(
              &maximo,
              mclMtimes(
                _mxarray50_,
                mlfMax(
                  NULL,
                  mclFeval(
                    mclValueVarargout(),
                    mlxAbs,
                    mlfIndexRef(mclVa(handles, "handles"), ".u0"),
                    NULL),
                  NULL,
                  NULL)));
            /*
             * minimo=-maximo; %min(min(handles.solu));
             */
            mlfAssign(&minimo, mclUminus(mclVv(maximo, "maximo")));
            /*
             * 
             * if (length(handles.solu(1,:))<=40)
             */
            if (mclLengthInt(
                  mlfIndexRef(
                    mclVa(handles, "handles"),
                    ".solu(?,?)",
                    _mxarray0_,
                    mlfCreateColonIndex()))
                <= 40) {
                /*
                 * paso=1;
                 */
                mlfAssign(&paso, _mxarray0_);
            /*
             * else 
             */
            } else {
                /*
                 * paso=floor(length(handles.solu(1,:))/40)
                 */
                mlfAssign(
                  &paso,
                  mlfScalar(
                    svDoubleScalarFloor(
                      svDoubleScalarRdivide(
                        (double) mclLengthInt(
                                   mlfIndexRef(
                                     mclVa(handles, "handles"),
                                     ".solu(?,?)",
                                     _mxarray0_,
                                     mlfCreateColonIndex())),
                        40.0))));
                mclPrintArray(mclVv(paso, "paso"), "paso");
            /*
             * end
             */
            }
            /*
             * 
             * for i=1:paso:length(handles.solu(1,:))
             */
            {
                mclForLoopIterator viter__;
                for (mclForStart(
                       &viter__,
                       _mxarray0_,
                       mclVv(paso, "paso"),
                       mlfScalar(
                         mclLengthInt(
                           mlfIndexRef(
                             mclVa(handles, "handles"),
                             ".solu(?,?)",
                             _mxarray0_,
                             mlfCreateColonIndex()))));
                     mclForNext(&viter__, &i);
                     ) {
                    /*
                     * 
                     * plot(handles.x,handles.solu(:,i));
                     */
                    mclAssignAns(
                      &ans,
                      mlfNPlot(
                        0,
                        mlfIndexRef(mclVa(handles, "handles"), ".x"),
                        mlfIndexRef(
                          mclVa(handles, "handles"),
                          ".solu(?,?)",
                          mlfCreateColonIndex(),
                          mclVv(i, "i")),
                        NULL));
                    /*
                     * axis([param.a param.b minimo maximo]);
                     */
                    mclAssignAns(
                      &ans,
                      mlfNAxis(
                        0,
                        NULL,
                        NULL,
                        mlfHorzcat(
                          mlfIndexRef(mclVv(param, "param"), ".a"),
                          mlfIndexRef(mclVv(param, "param"), ".b"),
                          mclVv(minimo, "minimo"),
                          mclVv(maximo, "maximo"),
                          NULL),
                        NULL));
                    /*
                     * pause(.1);
                     */
                    mlfPause(_mxarray51_);
                /*
                 * %    F = getframe(gca);
                 * %    	mov = addframe(mov,F);
                 * end
                 */
                }
                mclDestroyForLoopIterator(viter__);
            }
            /*
             * %      mov = close(mov);   
             * plot(handles.x,handles.solu(:,length(handles.solu(1,:))));
             */
            mclAssignAns(
              &ans,
              mlfNPlot(
                0,
                mlfIndexRef(mclVa(handles, "handles"), ".x"),
                mlfIndexRef(
                  mclVa(handles, "handles"),
                  ".solu(?,?)",
                  mlfCreateColonIndex(),
                  mlfScalar(
                    mclLengthInt(
                      mlfIndexRef(
                        mclVa(handles, "handles"),
                        ".solu(?,?)",
                        _mxarray0_,
                        mlfCreateColonIndex())))),
                NULL));
            /*
             * axis([param.a param.b minimo maximo]);
             */
            mclAssignAns(
              &ans,
              mlfNAxis(
                0,
                NULL,
                NULL,
                mlfHorzcat(
                  mlfIndexRef(mclVv(param, "param"), ".a"),
                  mlfIndexRef(mclVv(param, "param"), ".b"),
                  mclVv(minimo, "minimo"),
                  mclVv(maximo, "maximo"),
                  NULL),
                NULL));
        /*
         * 
         * case 'residue' % User selects sinc
         */
        } else if (mclSwitchCompare(v_, _mxarray52_)) {
            /*
             * axes(handles.axes_sol);
             */
            mclAssignAns(
              &ans,
              mlfNAxes(
                0, mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"), NULL));
            /*
             * plot(log(handles.resid));
             */
            mclAssignAns(
              &ans,
              mlfNPlot(
                0,
                mclFeval(
                  mclValueVarargout(),
                  mlxLog,
                  mlfIndexRef(mclVa(handles, "handles"), ".resid"),
                  NULL),
                NULL));
            /*
             * xlabel('Number of iterations');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray54_, NULL));
            /*
             * ylabel('log. of residue');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray56_, NULL));
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
    mxDestroyArray(param);
    mxDestroyArray(ans);
    mxDestroyArray(maximo);
    mxDestroyArray(minimo);
    mxDestroyArray(solu);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(paso);
    mxDestroyArray(i);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * 
     * % --- Executes on button press in sol_push.
     */
}

/*
 * The function "Mcont_exacto_sol_push_Callback" is the implementation version
 * of the "cont_exacto/sol_push_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 287-333). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol_push_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_sol_push_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
    mxArray * minimo = NULL;
    mxArray * maximo = NULL;
    mxArray * ans = NULL;
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
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray26_));
    /*
     * switch handles.file;
     */
    {
        mxArray * v_
          = mclInitialize(mlfIndexRef(mclVa(handles, "handles"), ".file"));
        if (mclSwitchCompare(v_, _mxarray14_)) {
            /*
             * case 'difcent' % User selects difcent
             * [control resid t]=difcent(param.a,param.b,param.n,param.T,param.mu,param.eps,handles.u0,handles.u1);
             */
            mclFeval(
              mlfVarargout(&control, &resid, &t, NULL),
              mlxDifcent,
              mlfIndexRef(mclVv(param, "param"), ".a"),
              mlfIndexRef(mclVv(param, "param"), ".b"),
              mlfIndexRef(mclVv(param, "param"), ".n"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              mlfIndexRef(mclVv(param, "param"), ".mu"),
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
             * maximo=max(control);
             */
            mlfAssign(
              &maximo, mlfMax(NULL, mclVv(control, "control"), NULL, NULL));
            /*
             * minimo=min(control);
             */
            mlfAssign(
              &minimo, mlfMin(NULL, mclVv(control, "control"), NULL, NULL));
            /*
             * axis([0 param.T minimo maximo]);
             */
            mclAssignAns(
              &ans,
              mlfNAxis(
                0,
                NULL,
                NULL,
                mlfHorzcat(
                  _mxarray18_,
                  mlfIndexRef(mclVv(param, "param"), ".T"),
                  mclVv(minimo, "minimo"),
                  mclVv(maximo, "maximo"),
                  NULL),
                NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray40_, NULL));
            /*
             * ylabel('control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray38_, NULL));
            /*
             * handles.solactual=0;
             */
            mlfIndexAssign(&handles, ".solactual", _mxarray18_);
        /*
         * case 'elftos' % User selects elftos
         */
        } else if (mclSwitchCompare(v_, _mxarray58_)) {
            /*
             * [control resid t]=elftos(param.a,param.b,param.n,param.T,param.mu,param.eps,param.beta,param.gamma,param.masa,handles.u0,handles.u1);
             */
            mclFeval(
              mlfVarargout(&control, &resid, &t, NULL),
              mlxElftos,
              mlfIndexRef(mclVv(param, "param"), ".a"),
              mlfIndexRef(mclVv(param, "param"), ".b"),
              mlfIndexRef(mclVv(param, "param"), ".n"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              mlfIndexRef(mclVv(param, "param"), ".mu"),
              mlfIndexRef(mclVv(param, "param"), ".eps"),
              mlfIndexRef(mclVv(param, "param"), ".beta"),
              mlfIndexRef(mclVv(param, "param"), ".gamma"),
              mlfIndexRef(mclVv(param, "param"), ".masa"),
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
             * maximo=max(control);
             */
            mlfAssign(
              &maximo, mlfMax(NULL, mclVv(control, "control"), NULL, NULL));
            /*
             * minimo=min(control);
             */
            mlfAssign(
              &minimo, mlfMin(NULL, mclVv(control, "control"), NULL, NULL));
            /*
             * axis([0 param.T minimo maximo]);
             */
            mclAssignAns(
              &ans,
              mlfNAxis(
                0,
                NULL,
                NULL,
                mlfHorzcat(
                  _mxarray18_,
                  mlfIndexRef(mclVv(param, "param"), ".T"),
                  mclVv(minimo, "minimo"),
                  mclVv(maximo, "maximo"),
                  NULL),
                NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray40_, NULL));
            /*
             * ylabel('control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray38_, NULL));
            /*
             * handles.solactual=0;
             */
            mlfIndexAssign(&handles, ".solactual", _mxarray18_);
        /*
         * case 'efm' % User selects efm
         */
        } else if (mclSwitchCompare(v_, _mxarray60_)) {
            /*
             * [control resid t]=elftos(param.a,param.b,param.n,param.T,param.mu,param.eps,.25,.5,.25,handles.u0,handles.u1);
             */
            mclFeval(
              mlfVarargout(&control, &resid, &t, NULL),
              mlxElftos,
              mlfIndexRef(mclVv(param, "param"), ".a"),
              mlfIndexRef(mclVv(param, "param"), ".b"),
              mlfIndexRef(mclVv(param, "param"), ".n"),
              mlfIndexRef(mclVv(param, "param"), ".T"),
              mlfIndexRef(mclVv(param, "param"), ".mu"),
              mlfIndexRef(mclVv(param, "param"), ".eps"),
              _mxarray62_,
              _mxarray21_,
              _mxarray62_,
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
             * maximo=max(control);
             */
            mlfAssign(
              &maximo, mlfMax(NULL, mclVv(control, "control"), NULL, NULL));
            /*
             * minimo=min(control);
             */
            mlfAssign(
              &minimo, mlfMin(NULL, mclVv(control, "control"), NULL, NULL));
            /*
             * axis([0 param.T minimo maximo]);
             */
            mclAssignAns(
              &ans,
              mlfNAxis(
                0,
                NULL,
                NULL,
                mlfHorzcat(
                  _mxarray18_,
                  mlfIndexRef(mclVv(param, "param"), ".T"),
                  mclVv(minimo, "minimo"),
                  mclVv(maximo, "maximo"),
                  NULL),
                NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray40_, NULL));
            /*
             * ylabel('control');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray38_, NULL));
            /*
             * handles.solactual=0;
             */
            mlfIndexAssign(&handles, ".solactual", _mxarray18_);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * handles.t=t;
     */
    mlfIndexAssign(&handles, ".t", mclVv(t, "t"));
    /*
     * handles.control=control;
     */
    mlfIndexAssign(&handles, ".control", mclVv(control, "control"));
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
    mxDestroyArray(ans);
    mxDestroyArray(maximo);
    mxDestroyArray(minimo);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * 
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mcont_exacto_pop_met_CreateFcn" is the implementation version
 * of the "cont_exacto/pop_met_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 333-348). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_met_CreateFcn(hObject, eventdata, handles)
 */
static void Mcont_exacto_pop_met_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
            0, mclVa(hObject, "hObject"), _mxarray28_, _mxarray30_, NULL));
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
            _mxarray28_,
            mlfNGet(1, _mxarray18_, _mxarray32_, NULL),
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
     * 
     * % --- Executes on selection change in pop_met.
     */
}

/*
 * The function "Mcont_exacto_pop_met_Callback" is the implementation version
 * of the "cont_exacto/pop_met_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 348-370). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_met_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_pop_met_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray34_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray36_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray63_)) {
            /*
             * case 'Finite differences' % User selects peaks
             * handles.file = 'difcent';
             */
            mlfIndexAssign(&handles, ".file", _mxarray14_);
        /*
         * case 'Finite elements' % User selects membrane
         */
        } else if (mclSwitchCompare(v_, _mxarray65_)) {
            /*
             * handles.file = 'elftos';
             */
            mlfIndexAssign(&handles, ".file", _mxarray58_);
        /*
         * case 'Mixed finite elements' % User selects sinc
         */
        } else if (mclSwitchCompare(v_, _mxarray67_)) {
            /*
             * handles.file = 'efm';
             */
            mlfIndexAssign(&handles, ".file", _mxarray60_);
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
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mcont_exacto_edit1_CreateFcn" is the implementation version of
 * the "cont_exacto/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 370-385). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_CreateFcn(hObject, eventdata, handles)
 */
static void Mcont_exacto_edit1_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
            0, mclVa(hObject, "hObject"), _mxarray28_, _mxarray30_, NULL));
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
            _mxarray28_,
            mlfNGet(1, _mxarray18_, _mxarray32_, NULL),
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
     * 
     * 
     */
}

/*
 * The function "Mcont_exacto_edit1_Callback" is the implementation version of
 * the "cont_exacto/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 385-411). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_edit1_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
     * 
     * % % --- Executes on button press in push_cambcf.
     * % function push_cambcf_Callback(hObject, eventdata, handles)
     * % % hObject    handle to push_cambcf (see GCBO)
     * % % eventdata  reserved - to be defined in a future version of MATLAB
     * % % handles    structure with handles and user data (see GUIDATA)
     * % data=getappdata(gcbf,'data');
     * % % 
     * % 
     * % initialdata(data);
     * % %[h1 handles.u0 handles.u1]=initialdata(data);%data.u0,data.u1);
     * % %delete(h1);
     * % setappdata(gcbf,'data',data);
     * % 
     * % % edit data0.m
     * 
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mcont_exacto_popup_datos_CreateFcn" is the implementation
 * version of the "cont_exacto/popup_datos_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 411-426). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function popup_datos_CreateFcn(hObject, eventdata, handles)
 */
static void Mcont_exacto_popup_datos_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to popup_datos (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray28_, _mxarray30_, NULL));
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
            _mxarray28_,
            mlfNGet(1, _mxarray18_, _mxarray32_, NULL),
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
     * 
     * % --- Executes on selection change in popup_datos.
     */
}

/*
 * The function "Mcont_exacto_popup_datos_Callback" is the implementation
 * version of the "cont_exacto/popup_datos_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 426-464). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function popup_datos_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_popup_datos_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
    mxArray * G = NULL;
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
     * % hObject    handle to popup_datos (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: contents = get(hObject,'String') returns popup_datos contents as cell array
     * %        contents{get(hObject,'Value')} returns selected item from popup_datos
     * param=getappdata(gcbf,'data');
     */
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray26_));
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
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray34_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray36_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray69_)) {
            /*
             * case 'Example 1' % User selects difcent
             * [u0 u1]=data1(x);
             */
            mlfAssign(&u0, mlfData1(&u1, mclVv(x, "x")));
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example 2' 
         */
        } else if (mclSwitchCompare(v_, _mxarray71_)) {
            /*
             * [u0 u1]=data2(x);
             */
            mlfAssign(&u0, mlfData2(&u1, mclVv(x, "x")));
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example 3'
         */
        } else if (mclSwitchCompare(v_, _mxarray73_)) {
            /*
             * [u0 u1]=data3(x);
             */
            mlfAssign(&u0, mlfData3(&u1, mclVv(x, "x")));
            /*
             * cla
             */
            mclPrintAns(&ans, mlfNCla(0, NULL));
        /*
         * case 'Example 4'
         */
        } else if (mclSwitchCompare(v_, _mxarray75_)) {
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
     * G=[0 ones(1,param.n) 0];
     */
    mlfAssign(
      &G,
      mlfHorzcat(
        _mxarray18_,
        mlfOnes(_mxarray0_, mlfIndexRef(mclVv(param, "param"), ".n"), NULL),
        _mxarray18_,
        NULL));
    /*
     * handles.u0=u0(G>0);
     */
    mlfIndexAssign(
      &handles,
      ".u0",
      mclArrayRef1(mclVv(u0, "u0"), mclGt(mclVv(G, "G"), _mxarray18_)));
    /*
     * handles.u1=u1(G>0);
     */
    mlfIndexAssign(
      &handles,
      ".u1",
      mclArrayRef1(mclVv(u1, "u1"), mclGt(mclVv(G, "G"), _mxarray18_)));
    /*
     * setappdata(gcbf,'data',param);
     */
    mlfSetappdata(mlfGcbf(), _mxarray26_, mclVv(param, "param"), NULL);
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
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
    mxDestroyArray(G);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * 
     * % --- Executes on button press in pushbutton7.
     */
}

/*
 * The function "Mcont_exacto_pushbutton7_Callback" is the implementation
 * version of the "cont_exacto/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_exacto.m" (lines 464-472). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton7_Callback(hObject, eventdata, handles)
 */
static void Mcont_exacto_pushbutton7_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_exacto);
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
     */
}
