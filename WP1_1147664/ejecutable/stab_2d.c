/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "stab_2d.h"
#include "cla.h"
#include "damping2d.h"
#include "data1_2d.h"
#include "data2_2d.h"
#include "data3_2d.h"
#include "data4_2d.h"
#include "grahanimstab2d.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
#include "mesh.h"
#include "paramstab2d.h"
#include "stab2dcalcul.h"
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
static mxArray * _mxarray21_;

static mxChar _array23_[4] = { 'd', 'a', 't', 'a' };
static mxArray * _mxarray22_;
static mxArray * _mxarray24_;
static mxArray * _mxarray25_;
static mxArray * _mxarray26_;
static mxArray * _mxarray27_;
static mxArray * _mxarray28_;
static mxArray * _mxarray29_;
static mxArray * _mxarray30_;
static mxArray * _mxarray31_;
static mxArray * _mxarray32_;

static mxChar _array34_[15] = { 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray33_;

static mxChar _array36_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray35_;

static mxChar _array38_[31] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray37_;

static mxChar _array40_[5] = { 'V', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray39_;

static mxChar _array42_[6] = { 'S', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray41_;

static mxChar _array44_[6] = { 'e', 'n', 'e', 'r', 'g', 'y' };
static mxArray * _mxarray43_;

static mxChar _array46_[4] = { 't', 'i', 'm', 'e' };
static mxArray * _mxarray45_;

static mxChar _array48_[11] = { 'l', 'o', 'g', '(', 'E', 'n',
                                'e', 'r', 'g', 'y', ')' };
static mxArray * _mxarray47_;
static mxArray * _mxarray49_;
static mxArray * _mxarray50_;

static mxChar _array52_[2] = { 'o', 'n' };
static mxArray * _mxarray51_;

static mxChar _array54_[3] = { 'r', 'e', 'd' };
static mxArray * _mxarray53_;

static mxChar _array56_[3] = { 'o', 'f', 'f' };
static mxArray * _mxarray55_;

static mxChar _array58_[9] = { 'a', 'n', 'i', 'm', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray57_;

static mxChar _array60_[7] = { 'd', 'a', 'm', 'p', 'i', 'n', 'g' };
static mxArray * _mxarray59_;

static mxChar _array62_[19] = { 'd', 'i', 'f', 'e', 'r', 'e', 'n',
                                'c', 'i', 'a', 's', ' ', 'f', 'i',
                                'n', 'i', 't', 'a', 's' };
static mxArray * _mxarray61_;

static mxChar _array64_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '1' };
static mxArray * _mxarray63_;

static mxChar _array66_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '2' };
static mxArray * _mxarray65_;

static mxChar _array68_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '3' };
static mxArray * _mxarray67_;

static mxChar _array70_[8] = { 'E', 'x', 'a', 'm', 'p', 'l', 'e', '4' };
static mxArray * _mxarray69_;

void InitializeModule_stab_2d(void) {
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
    _mxarray17_ = mclInitializeDouble(2.0);
    _mxarray18_ = mclInitializeDouble(0.0);
    _mxarray19_ = mclInitializeDouble(40.0);
    _mxarray20_ = mclInitializeDouble(10.0);
    _mxarray21_ = mclInitializeDouble(.1);
    _mxarray22_ = mclInitializeString(4, _array23_);
    _mxarray24_ = mclInitializeDouble(3.0);
    _mxarray25_ = mclInitializeDouble(4.0);
    _mxarray26_ = mclInitializeDouble(5.0);
    _mxarray27_ = mclInitializeDouble(6.0);
    _mxarray28_ = mclInitializeDouble(7.0);
    _mxarray29_ = mclInitializeDouble(8.0);
    _mxarray30_ = mclInitializeDouble(9.0);
    _mxarray31_ = mclInitializeDouble(11.0);
    _mxarray32_ = mclInitializeDouble(12.0);
    _mxarray33_ = mclInitializeString(15, _array34_);
    _mxarray35_ = mclInitializeString(5, _array36_);
    _mxarray37_ = mclInitializeString(31, _array38_);
    _mxarray39_ = mclInitializeString(5, _array40_);
    _mxarray41_ = mclInitializeString(6, _array42_);
    _mxarray43_ = mclInitializeString(6, _array44_);
    _mxarray45_ = mclInitializeString(4, _array46_);
    _mxarray47_ = mclInitializeString(11, _array48_);
    _mxarray49_ = mclInitializeDouble(.95);
    _mxarray50_ = mclInitializeDouble(1.05);
    _mxarray51_ = mclInitializeString(2, _array52_);
    _mxarray53_ = mclInitializeString(3, _array54_);
    _mxarray55_ = mclInitializeString(3, _array56_);
    _mxarray57_ = mclInitializeString(9, _array58_);
    _mxarray59_ = mclInitializeString(7, _array60_);
    _mxarray61_ = mclInitializeString(19, _array62_);
    _mxarray63_ = mclInitializeString(8, _array64_);
    _mxarray65_ = mclInitializeString(8, _array66_);
    _mxarray67_ = mclInitializeString(8, _array68_);
    _mxarray69_ = mclInitializeString(8, _array70_);
}

void TerminateModule_stab_2d(void) {
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray25_);
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

static void mlfStab_2d_stab_2d_OpeningFcn(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles,
                                          ...);
static void mlxStab_2d_stab_2d_OpeningFcn(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static mxArray * mlfStab_2d_stab_2d_OutputFcn(mlfVarargoutList * varargout,
                                              mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxStab_2d_stab_2d_OutputFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_2d_des_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_2d_des_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_2d_par_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_2d_par_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_2d_pop_gra_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_2d_pop_gra_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_2d_pop_gra_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void mlxStab_2d_pop_gra_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static void mlfStab_2d_sol_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_2d_sol_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_2d_pop_met_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxStab_2d_pop_met_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static void mlfStab_2d_pop_met_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void mlxStab_2d_pop_met_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static void mlfStab_2d_edit1_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void mlxStab_2d_edit1_CreateFcn(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]);
static void mlfStab_2d_edit1_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles);
static void mlxStab_2d_edit1_Callback(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]);
static void mlfStab_2d_push_cambcf_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxStab_2d_push_cambcf_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static void mlfStab_2d_pop_in_CreateFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void mlxStab_2d_pop_in_CreateFcn(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static void mlfStab_2d_pop_in_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void mlxStab_2d_pop_in_Callback(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]);
static void mlfStab_2d_pushbutton7_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxStab_2d_pushbutton7_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static mxArray * Mstab_2d(int nargout_, mxArray * varargin);
static void Mstab_2d_stab_2d_OpeningFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles,
                                        mxArray * varargin);
static mxArray * Mstab_2d_stab_2d_OutputFcn(int nargout_,
                                            mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mstab_2d_des_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_2d_par_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_2d_pop_gra_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_2d_pop_gra_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles);
static void Mstab_2d_sol_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_2d_pop_met_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);
static void Mstab_2d_pop_met_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles);
static void Mstab_2d_edit1_CreateFcn(mxArray * hObject,
                                     mxArray * eventdata,
                                     mxArray * handles);
static void Mstab_2d_edit1_Callback(mxArray * hObject,
                                    mxArray * eventdata,
                                    mxArray * handles);
static void Mstab_2d_push_cambcf_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Mstab_2d_pop_in_CreateFcn(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles);
static void Mstab_2d_pop_in_Callback(mxArray * hObject,
                                     mxArray * eventdata,
                                     mxArray * handles);
static void Mstab_2d_pushbutton7_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);

static mexFunctionTableEntry local_function_table_[15]
  = { { "stab_2d_OpeningFcn", mlxStab_2d_stab_2d_OpeningFcn, -4, 0, NULL },
      { "stab_2d_OutputFcn", mlxStab_2d_stab_2d_OutputFcn, 3, -1, NULL },
      { "des_push_Callback", mlxStab_2d_des_push_Callback, 3, 0, NULL },
      { "par_push_Callback", mlxStab_2d_par_push_Callback, 3, 0, NULL },
      { "pop_gra_CreateFcn", mlxStab_2d_pop_gra_CreateFcn, 3, 0, NULL },
      { "pop_gra_Callback", mlxStab_2d_pop_gra_Callback, 3, 0, NULL },
      { "sol_push_Callback", mlxStab_2d_sol_push_Callback, 3, 0, NULL },
      { "pop_met_CreateFcn", mlxStab_2d_pop_met_CreateFcn, 3, 0, NULL },
      { "pop_met_Callback", mlxStab_2d_pop_met_Callback, 3, 0, NULL },
      { "edit1_CreateFcn", mlxStab_2d_edit1_CreateFcn, 3, 0, NULL },
      { "edit1_Callback", mlxStab_2d_edit1_Callback, 3, 0, NULL },
      { "push_cambcf_Callback", mlxStab_2d_push_cambcf_Callback, 3, 0, NULL },
      { "pop_in_CreateFcn", mlxStab_2d_pop_in_CreateFcn, 3, 0, NULL },
      { "pop_in_Callback", mlxStab_2d_pop_in_Callback, 3, 0, NULL },
      { "pushbutton7_Callback",
        mlxStab_2d_pushbutton7_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_stab_2d
  = { 15, local_function_table_ };

/*
 * The function "mlfNStab_2d" contains the nargout interface for the "stab_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 1-48). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNStab_2d(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mstab_2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfStab_2d" contains the normal interface for the "stab_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 1-48). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfStab_2d(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mstab_2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVStab_2d" contains the void interface for the "stab_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 1-48). The void
 * interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVStab_2d(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mstab_2d(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxStab_2d" contains the feval interface for the "stab_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 1-48). The feval
 * function calls the implementation version of stab_2d through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxStab_2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mstab_2d(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfStab_2d_stab_2d_OpeningFcn" contains the normal interface
 * for the "stab_2d/stab_2d_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 48-96). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_stab_2d_OpeningFcn(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles,
                                          ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mstab_2d_stab_2d_OpeningFcn(hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxStab_2d_stab_2d_OpeningFcn" contains the feval interface
 * for the "stab_2d/stab_2d_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 48-96). The feval
 * function calls the implementation version of stab_2d/stab_2d_OpeningFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_stab_2d_OpeningFcn(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/stab_2d_OpeningFcn Line: 48 C"
            "olumn: 1 The function \"stab_2d/stab_2d_OpeningFcn\" was ca"
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
    Mstab_2d_stab_2d_OpeningFcn(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfStab_2d_stab_2d_OutputFcn" contains the normal interface
 * for the "stab_2d/stab_2d_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 96-118). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfStab_2d_stab_2d_OutputFcn(mlfVarargoutList * varargout,
                                              mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mstab_2d_stab_2d_OutputFcn(nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxStab_2d_stab_2d_OutputFcn" contains the feval interface for
 * the "stab_2d/stab_2d_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 96-118). The feval
 * function calls the implementation version of stab_2d/stab_2d_OutputFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_stab_2d_OutputFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/stab_2d_OutputFcn Line: 96 C"
            "olumn: 1 The function \"stab_2d/stab_2d_OutputFcn\" was ca"
            "lled with more than the declared number of inputs (3)."),
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
    mplhs[0] = Mstab_2d_stab_2d_OutputFcn(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_des_push_Callback" contains the normal interface
 * for the "stab_2d/des_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 118-124). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_des_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_des_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_des_push_Callback" contains the feval interface for
 * the "stab_2d/des_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 118-124). The
 * feval function calls the implementation version of stab_2d/des_push_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_des_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/des_push_Callback Line: 118 "
            "Column: 1 The function \"stab_2d/des_push_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/des_push_Callback Line: 118 "
            "Column: 1 The function \"stab_2d/des_push_Callback\" was c"
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
    Mstab_2d_des_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_par_push_Callback" contains the normal interface
 * for the "stab_2d/par_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 124-147). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_par_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_par_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_par_push_Callback" contains the feval interface for
 * the "stab_2d/par_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 124-147). The
 * feval function calls the implementation version of stab_2d/par_push_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_par_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/par_push_Callback Line: 124 "
            "Column: 1 The function \"stab_2d/par_push_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/par_push_Callback Line: 124 "
            "Column: 1 The function \"stab_2d/par_push_Callback\" was c"
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
    Mstab_2d_par_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_pop_gra_CreateFcn" contains the normal interface
 * for the "stab_2d/pop_gra_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 147-161). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_pop_gra_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_pop_gra_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_pop_gra_CreateFcn" contains the feval interface for
 * the "stab_2d/pop_gra_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 147-161). The
 * feval function calls the implementation version of stab_2d/pop_gra_CreateFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_pop_gra_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_gra_CreateFcn Line: 147 "
            "Column: 1 The function \"stab_2d/pop_gra_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_gra_CreateFcn Line: 147 "
            "Column: 1 The function \"stab_2d/pop_gra_CreateFcn\" was c"
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
    Mstab_2d_pop_gra_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_pop_gra_Callback" contains the normal interface for
 * the "stab_2d/pop_gra_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 161-216). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_pop_gra_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_pop_gra_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_pop_gra_Callback" contains the feval interface for
 * the "stab_2d/pop_gra_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 161-216). The
 * feval function calls the implementation version of stab_2d/pop_gra_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_pop_gra_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_gra_Callback Line: 161 C"
            "olumn: 1 The function \"stab_2d/pop_gra_Callback\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_gra_Callback Line: 161 "
            "Column: 1 The function \"stab_2d/pop_gra_Callback\" was c"
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
    Mstab_2d_pop_gra_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_sol_push_Callback" contains the normal interface
 * for the "stab_2d/sol_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 216-242). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_sol_push_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_sol_push_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_sol_push_Callback" contains the feval interface for
 * the "stab_2d/sol_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 216-242). The
 * feval function calls the implementation version of stab_2d/sol_push_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_sol_push_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/sol_push_Callback Line: 216 "
            "Column: 1 The function \"stab_2d/sol_push_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/sol_push_Callback Line: 216 "
            "Column: 1 The function \"stab_2d/sol_push_Callback\" was c"
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
    Mstab_2d_sol_push_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_pop_met_CreateFcn" contains the normal interface
 * for the "stab_2d/pop_met_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 242-256). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_pop_met_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_pop_met_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_pop_met_CreateFcn" contains the feval interface for
 * the "stab_2d/pop_met_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 242-256). The
 * feval function calls the implementation version of stab_2d/pop_met_CreateFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_pop_met_CreateFcn(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_met_CreateFcn Line: 242 "
            "Column: 1 The function \"stab_2d/pop_met_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_met_CreateFcn Line: 242 "
            "Column: 1 The function \"stab_2d/pop_met_CreateFcn\" was c"
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
    Mstab_2d_pop_met_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_pop_met_Callback" contains the normal interface for
 * the "stab_2d/pop_met_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 256-273). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_pop_met_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_pop_met_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_pop_met_Callback" contains the feval interface for
 * the "stab_2d/pop_met_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 256-273). The
 * feval function calls the implementation version of stab_2d/pop_met_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_pop_met_Callback(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_met_Callback Line: 256 C"
            "olumn: 1 The function \"stab_2d/pop_met_Callback\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_met_Callback Line: 256 "
            "Column: 1 The function \"stab_2d/pop_met_Callback\" was c"
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
    Mstab_2d_pop_met_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_edit1_CreateFcn" contains the normal interface for
 * the "stab_2d/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 273-286). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_edit1_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_edit1_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_edit1_CreateFcn" contains the feval interface for
 * the "stab_2d/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 273-286). The
 * feval function calls the implementation version of stab_2d/edit1_CreateFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_edit1_CreateFcn(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/edit1_CreateFcn Line: 273 C"
            "olumn: 1 The function \"stab_2d/edit1_CreateFcn\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/edit1_CreateFcn Line: 273 C"
            "olumn: 1 The function \"stab_2d/edit1_CreateFcn\" was cal"
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
    Mstab_2d_edit1_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_edit1_Callback" contains the normal interface for
 * the "stab_2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 286-295). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_edit1_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_edit1_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_edit1_Callback" contains the feval interface for
 * the "stab_2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 286-295). The
 * feval function calls the implementation version of stab_2d/edit1_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_edit1_Callback(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/edit1_Callback Line: 286 C"
            "olumn: 1 The function \"stab_2d/edit1_Callback\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/edit1_Callback Line: 286 C"
            "olumn: 1 The function \"stab_2d/edit1_Callback\" was cal"
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
    Mstab_2d_edit1_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_push_cambcf_Callback" contains the normal interface
 * for the "stab_2d/push_cambcf_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 295-303). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_push_cambcf_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_push_cambcf_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_push_cambcf_Callback" contains the feval interface
 * for the "stab_2d/push_cambcf_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 295-303). The
 * feval function calls the implementation version of
 * stab_2d/push_cambcf_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxStab_2d_push_cambcf_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/push_cambcf_Callback Line: 295"
            " Column: 1 The function \"stab_2d/push_cambcf_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/push_cambcf_Callback Line: 295"
            " Column: 1 The function \"stab_2d/push_cambcf_Callback\" was"
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
    Mstab_2d_push_cambcf_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_pop_in_CreateFcn" contains the normal interface for
 * the "stab_2d/pop_in_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 303-317). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_pop_in_CreateFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_pop_in_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_pop_in_CreateFcn" contains the feval interface for
 * the "stab_2d/pop_in_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 303-317). The
 * feval function calls the implementation version of stab_2d/pop_in_CreateFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_pop_in_CreateFcn(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_in_CreateFcn Line: 303 C"
            "olumn: 1 The function \"stab_2d/pop_in_CreateFcn\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_in_CreateFcn Line: 303 "
            "Column: 1 The function \"stab_2d/pop_in_CreateFcn\" was c"
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
    Mstab_2d_pop_in_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_pop_in_Callback" contains the normal interface for
 * the "stab_2d/pop_in_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 317-356). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_pop_in_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_pop_in_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_pop_in_Callback" contains the feval interface for
 * the "stab_2d/pop_in_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 317-356). The
 * feval function calls the implementation version of stab_2d/pop_in_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxStab_2d_pop_in_Callback(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_in_Callback Line: 317 C"
            "olumn: 1 The function \"stab_2d/pop_in_Callback\" was cal"
            "led with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pop_in_Callback Line: 317 C"
            "olumn: 1 The function \"stab_2d/pop_in_Callback\" was cal"
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
    Mstab_2d_pop_in_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfStab_2d_pushbutton7_Callback" contains the normal interface
 * for the "stab_2d/pushbutton7_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 356-363). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfStab_2d_pushbutton7_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mstab_2d_pushbutton7_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxStab_2d_pushbutton7_Callback" contains the feval interface
 * for the "stab_2d/pushbutton7_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 356-363). The
 * feval function calls the implementation version of
 * stab_2d/pushbutton7_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxStab_2d_pushbutton7_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pushbutton7_Callback Line: 356"
            " Column: 1 The function \"stab_2d/pushbutton7_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab_2d/pushbutton7_Callback Line: 356"
            " Column: 1 The function \"stab_2d/pushbutton7_Callback\" was"
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
    Mstab_2d_pushbutton7_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mstab_2d" is the implementation version of the "stab_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 1-48). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function varargout = stab_2d(varargin)
 */
static mxArray * Mstab_2d(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % STAB_2D M-file for stab_2d.fig
     * %      STAB_2D, by itself, creates a new STAB_2D or raises the existing
     * %      singleton*.
     * %
     * %      H = STAB_2D returns the handle to a new STAB_2D or the handle to
     * %      the existing singleton*.
     * %
     * %      STAB_2D('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in STAB_2D.M with the given input arguments.
     * %
     * %      STAB_2D('Property','Value',...) creates a new STAB_2D or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before stab_2d_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to stab_2d_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help stab_2d
     * 
     * % Last Modified by GUIDE v2.5 10-Aug-2004 14:36:13
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
        mxCreateString("stab_2d"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxStab_2d_stab_2d_OpeningFcn, "stab_2d_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxStab_2d_stab_2d_OutputFcn, "stab_2d_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @stab_2d_OpeningFcn, ...
     * 'gui_OutputFcn',  @stab_2d_OutputFcn, ...
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
     * % --- Executes just before stab_2d is made visible.
     */
}

/*
 * The function "Mstab_2d_stab_2d_OpeningFcn" is the implementation version of
 * the "stab_2d/stab_2d_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 48-96). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function stab_2d_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mstab_2d_stab_2d_OpeningFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles,
                                        mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
     * % varargin   command line arguments to stab_2d (see VARARGIN)
     * handles.output=hObject;
     */
    mlfIndexAssign(&handles, ".output", mclVa(hObject, "hObject"));
    /*
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
     * data.T = 40.;
     */
    mlfIndexAssign(&data, ".T", _mxarray19_);
    /*
     * data.coeffdamp=10;
     */
    mlfIndexAssign(&data, ".coeffdamp", _mxarray20_);
    /*
     * data.dampband=0.1;
     */
    mlfIndexAssign(&data, ".dampband", _mxarray21_);
    /*
     * data.viscosity=0.;
     */
    mlfIndexAssign(&data, ".viscosity", _mxarray18_);
    /*
     * setappdata(hObject, 'data', data);
     */
    mlfSetappdata(
      mclVa(hObject, "hObject"), _mxarray22_, mclVv(data, "data"), NULL);
    /*
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
     * % Variable que permite saber si se ha realizado el calculo necesario para
     * % dibujar la solucion 
     * handles.solactual=0;
     */
    mlfIndexAssign(&handles, ".solactual", _mxarray18_);
    /*
     * 
     * % Choose default command line output for stab_2d
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
    /*
     * 
     * % UIWAIT makes stab_2d wait for user response (see UIRESUME)
     * uiwait(handles.figure1);
     */
    mclFeval(
      mclAnsVarargout(),
      mlxUiwait,
      mlfIndexRef(mclVa(handles, "handles"), ".figure1"),
      NULL);
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
     * 
     * % --- Outputs from this function are returned to the command line.
     */
}

/*
 * The function "Mstab_2d_stab_2d_OutputFcn" is the implementation version of
 * the "stab_2d/stab_2d_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 96-118). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = stab_2d_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mstab_2d_stab_2d_OutputFcn(int nargout_,
                                            mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
    /*
     * varargout{2} = handles.a;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray17_,
      mlfIndexRef(mclVa(handles, "handles"), ".a"));
    /*
     * varargout{3} = handles.b;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray24_,
      mlfIndexRef(mclVa(handles, "handles"), ".b"));
    /*
     * varargout{4} = handles.n;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray25_,
      mlfIndexRef(mclVa(handles, "handles"), ".n"));
    /*
     * varargout{5} = handles.mu;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray26_,
      mlfIndexRef(mclVa(handles, "handles"), ".mu"));
    /*
     * varargout{6} = handles.T;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray27_,
      mlfIndexRef(mclVa(handles, "handles"), ".T"));
    /*
     * varargout{7} = handles.coeffdamp;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray28_,
      mlfIndexRef(mclVa(handles, "handles"), ".coeffdamp"));
    /*
     * varargout{8} = handles.dampband;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray29_,
      mlfIndexRef(mclVa(handles, "handles"), ".dampband"));
    /*
     * varargout{9} =  handles.viscosity;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray30_,
      mlfIndexRef(mclVa(handles, "handles"), ".viscosity"));
    /*
     * varargout{10} = handles.u0;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray20_,
      mlfIndexRef(mclVa(handles, "handles"), ".u0"));
    /*
     * varargout{11} = handles.u1;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray31_,
      mlfIndexRef(mclVa(handles, "handles"), ".u1"));
    /*
     * varargout{12} =  handles.axes_sol;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray32_,
      mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"));
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
 * The function "Mstab_2d_des_push_Callback" is the implementation version of
 * the "stab_2d/des_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 118-124). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function des_push_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_des_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
 * The function "Mstab_2d_par_push_Callback" is the implementation version of
 * the "stab_2d/par_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 124-147). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function par_push_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_par_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
    mlfAssign(&data, mlfGetappdata(mlfGcbf(), _mxarray22_));
    /*
     * %paramet=[data.n data.l data.a data.b data.T data.ep];
     * [h1 data.a data.b data.n data.mu data.T data.coeffdamp data.dampband data.viscosity]=paramstab2d(data);
     */
    mlfNParamstab2d(
      0,
      mlfIndexVarargout(
        &h1, "",
        &data, ".a",
        &data, ".b",
        &data, ".n",
        &data, ".mu",
        &data, ".T",
        &data, ".coeffdamp",
        &data, ".dampband",
        &data, ".viscosity",
        NULL),
      mclVv(data, "data"),
      NULL);
    /*
     * delete(h1);
     */
    mlfDelete(mclVv(h1, "h1"), NULL);
    /*
     * handles.a=data.a;
     */
    mlfIndexAssign(&handles, ".a", mlfIndexRef(mclVv(data, "data"), ".a"));
    /*
     * handles.b=data.b;
     */
    mlfIndexAssign(&handles, ".b", mlfIndexRef(mclVv(data, "data"), ".b"));
    /*
     * handles.n=data.n;
     */
    mlfIndexAssign(&handles, ".n", mlfIndexRef(mclVv(data, "data"), ".n"));
    /*
     * handles.mu=data.mu;
     */
    mlfIndexAssign(&handles, ".mu", mlfIndexRef(mclVv(data, "data"), ".mu"));
    /*
     * handles.T=data.T;
     */
    mlfIndexAssign(&handles, ".T", mlfIndexRef(mclVv(data, "data"), ".T"));
    /*
     * handles.coeffdamp=data.coeffdamp;
     */
    mlfIndexAssign(
      &handles, ".coeffdamp", mlfIndexRef(mclVv(data, "data"), ".coeffdamp"));
    /*
     * handles.dampband=data.dampband;
     */
    mlfIndexAssign(
      &handles, ".dampband", mlfIndexRef(mclVv(data, "data"), ".dampband"));
    /*
     * handles.viscosity=data.viscosity;
     */
    mlfIndexAssign(
      &handles, ".viscosity", mlfIndexRef(mclVv(data, "data"), ".viscosity"));
    /*
     * 
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    /*
     * 
     * setappdata(gcbf,'data',data);
     */
    mlfSetappdata(mlfGcbf(), _mxarray22_, mclVv(data, "data"), NULL);
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
 * The function "Mstab_2d_pop_gra_CreateFcn" is the implementation version of
 * the "stab_2d/pop_gra_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 147-161). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_CreateFcn(hObject, eventdata, handles)
 */
static void Mstab_2d_pop_gra_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
            0, mclVa(hObject, "hObject"), _mxarray33_, _mxarray35_, NULL));
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
            _mxarray33_,
            mlfNGet(1, _mxarray18_, _mxarray37_, NULL),
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
 * The function "Mstab_2d_pop_gra_Callback" is the implementation version of
 * the "stab_2d/pop_gra_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 161-216). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_gra_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_pop_gra_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
    mxArray * solu = NULL;
    mxArray * data = NULL;
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
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray39_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray41_, NULL));
    /*
     * 
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray43_)) {
            /*
             * case 'energy' % User selects peaks
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray22_));
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
                    _mxarray17_,
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
                      mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
                      NULL)),
                  NULL),
                NULL));
            /*
             * xlabel('time');
             */
            mclAssignAns(&ans, mlfNXlabel(0, _mxarray45_, NULL));
            /*
             * ylabel('log(Energy)');
             */
            mclAssignAns(&ans, mlfNYlabel(0, _mxarray47_, NULL));
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
                              mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
                            NULL)),
                        NULL),
                      NULL,
                      NULL),
                    _mxarray49_),
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
                              mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
                            NULL)),
                        NULL),
                      NULL,
                      NULL),
                    _mxarray50_),
                  NULL),
                NULL));
            /*
             * hold on
             */
            mlfHold(_mxarray51_);
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
                  _mxarray17_,
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
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
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
                      _mxarray17_,
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
                    _mxarray17_,
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
                    NULL)),
                mclVv(plog, "plog"),
                _mxarray53_,
                NULL));
            /*
             * hold off
             */
            mlfHold(_mxarray55_);
        /*
         * case 'animation' 
         */
        } else if (mclSwitchCompare(v_, _mxarray57_)) {
            /*
             * %    param=getappdata(gcbf,'data');
             * %    data=getappdata(gcbf,'data');
             * data=guidata(gcbf);
             */
            mlfAssign(&data, mlfNGuidata(1, mlfGcbf(), NULL));
            /*
             * %if handles.solactual==0
             * grahanimstab2d(data);
             */
            mclAssignAns(
              &ans,
              mlfNGrahanimstab2d(
                0, mclAnsVarargout(), mclVv(data, "data"), NULL));
        /*
         * 
         * %        solu=animstab2d(param.a,param.b,param.n,param.mu,param.T,param.coeffdamp,param.dampband,param.viscosity,handles.u0,handles.u1,handles.axes_sol);
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
         * case 'damping'
         */
        } else if (mclSwitchCompare(v_, _mxarray59_)) {
            /*
             * param=getappdata(gcbf,'data');
             */
            mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray22_));
            /*
             * solu=damping2d(param.a,param.b,param.n,param.dampband,handles.axes_sol);
             */
            mlfAssign(
              &solu,
              mclFeval(
                mclValueVarargout(),
                mlxDamping2d,
                mlfIndexRef(mclVv(param, "param"), ".a"),
                mlfIndexRef(mclVv(param, "param"), ".b"),
                mlfIndexRef(mclVv(param, "param"), ".n"),
                mlfIndexRef(mclVv(param, "param"), ".dampband"),
                mlfIndexRef(mclVa(handles, "handles"), ".axes_sol"),
                NULL));
        /*
         * 
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
    mxDestroyArray(data);
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
 * The function "Mstab_2d_sol_push_Callback" is the implementation version of
 * the "stab_2d/sol_push_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 216-242). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol_push_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_sol_push_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
    mxArray * plog = NULL;
    mxArray * s = NULL;
    mxArray * p = NULL;
    mxArray * N = NULL;
    mxArray * temps = NULL;
    mxArray * ener = NULL;
    mxArray * param = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to sol_push (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * uiresume; 
     */
    mlfUiresume(NULL);
    /*
     * param=getappdata(gcbf,'data');
     */
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray22_));
    /*
     * 
     * [ener temps]=stab2dcalcul(param.a,param.b,param.n,param.mu,param.T,param.coeffdamp,param.dampband,param.viscosity,handles.u0,handles.u1);
     */
    mclFeval(
      mlfVarargout(&ener, &temps, NULL),
      mlxStab2dcalcul,
      mlfIndexRef(mclVv(param, "param"), ".a"),
      mlfIndexRef(mclVv(param, "param"), ".b"),
      mlfIndexRef(mclVv(param, "param"), ".n"),
      mlfIndexRef(mclVv(param, "param"), ".mu"),
      mlfIndexRef(mclVv(param, "param"), ".T"),
      mlfIndexRef(mclVv(param, "param"), ".coeffdamp"),
      mlfIndexRef(mclVv(param, "param"), ".dampband"),
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
            _mxarray17_,
            mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
            NULL)),
        mlfLog(
          mclArrayRef1(
            mclVv(ener, "ener"),
            mlfColon(
              _mxarray0_,
              mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
              NULL))),
        NULL));
    /*
     * xlabel('time');
     */
    mclAssignAns(&ans, mlfNXlabel(0, _mxarray45_, NULL));
    /*
     * ylabel('log(Energy)');
     */
    mclAssignAns(&ans, mlfNYlabel(0, _mxarray47_, NULL));
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
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
                    NULL))),
              NULL,
              NULL),
            _mxarray49_),
          mclMtimes(
            mlfMax(
              NULL,
              mlfLog(
                mclArrayRef1(
                  mclVv(ener, "ener"),
                  mlfColon(
                    _mxarray0_,
                    mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
                    NULL))),
              NULL,
              NULL),
            _mxarray50_),
          NULL),
        NULL));
    /*
     * hold on
     */
    mlfHold(_mxarray51_);
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
            _mxarray17_,
            mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
            NULL)),
        mlfLog(
          mclArrayRef1(
            mclVv(ener, "ener"),
            mlfColon(
              _mxarray0_,
              mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray17_),
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
              _mxarray17_,
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
            _mxarray17_,
            mclMinus(mclIntArrayRef1(mclVv(N, "N"), 2), _mxarray0_),
            NULL)),
        mclVv(plog, "plog"),
        _mxarray53_,
        NULL));
    /*
     * handles.solactual=0;
     */
    mlfIndexAssign(&handles, ".solactual", _mxarray18_);
    /*
     * hold off
     */
    mlfHold(_mxarray55_);
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
    mxDestroyArray(ans);
    mxDestroyArray(param);
    mxDestroyArray(ener);
    mxDestroyArray(temps);
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
 * The function "Mstab_2d_pop_met_CreateFcn" is the implementation version of
 * the "stab_2d/pop_met_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 242-256). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_met_CreateFcn(hObject, eventdata, handles)
 */
static void Mstab_2d_pop_met_CreateFcn(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
            0, mclVa(hObject, "hObject"), _mxarray33_, _mxarray35_, NULL));
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
            _mxarray33_,
            mlfNGet(1, _mxarray18_, _mxarray37_, NULL),
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
 * The function "Mstab_2d_pop_met_Callback" is the implementation version of
 * the "stab_2d/pop_met_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 256-273). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_met_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_pop_met_Callback(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray39_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray41_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray61_)) {
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
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mstab_2d_edit1_CreateFcn" is the implementation version of the
 * "stab_2d/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 273-286). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_CreateFcn(hObject, eventdata, handles)
 */
static void Mstab_2d_edit1_CreateFcn(mxArray * hObject,
                                     mxArray * eventdata,
                                     mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
            0, mclVa(hObject, "hObject"), _mxarray33_, _mxarray35_, NULL));
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
            _mxarray33_,
            mlfNGet(1, _mxarray18_, _mxarray37_, NULL),
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
 * The function "Mstab_2d_edit1_Callback" is the implementation version of the
 * "stab_2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 286-295). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_edit1_Callback(mxArray * hObject,
                                    mxArray * eventdata,
                                    mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
 * The function "Mstab_2d_push_cambcf_Callback" is the implementation version
 * of the "stab_2d/push_cambcf_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 295-303). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function push_cambcf_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_push_cambcf_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
 * The function "Mstab_2d_pop_in_CreateFcn" is the implementation version of
 * the "stab_2d/pop_in_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 303-317). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_in_CreateFcn(hObject, eventdata, handles)
 */
static void Mstab_2d_pop_in_CreateFcn(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
            0, mclVa(hObject, "hObject"), _mxarray33_, _mxarray35_, NULL));
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
            _mxarray33_,
            mlfNGet(1, _mxarray18_, _mxarray37_, NULL),
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
 * The function "Mstab_2d_pop_in_Callback" is the implementation version of the
 * "stab_2d/pop_in_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 317-356). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pop_in_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_pop_in_Callback(mxArray * hObject,
                                     mxArray * eventdata,
                                     mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
    mlfAssign(&param, mlfGetappdata(mlfGcbf(), _mxarray22_));
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
    mlfAssign(&val, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray39_, NULL));
    /*
     * str = get(hObject, 'String');
     */
    mlfAssign(&str, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray41_, NULL));
    /*
     * switch str{val};
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(str, "str"), "{?}", mclVv(val, "val")));
        if (mclSwitchCompare(v_, _mxarray63_)) {
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
        } else if (mclSwitchCompare(v_, _mxarray65_)) {
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
        } else if (mclSwitchCompare(v_, _mxarray67_)) {
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
        } else if (mclSwitchCompare(v_, _mxarray69_)) {
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
 * The function "Mstab_2d_pushbutton7_Callback" is the implementation version
 * of the "stab_2d/pushbutton7_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\stab_2d.m" (lines 356-363). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton7_Callback(hObject, eventdata, handles)
 */
static void Mstab_2d_pushbutton7_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab_2d);
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
     */
}
