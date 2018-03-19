/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "parametros.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
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

static mxChar _array15_[6] = { 's', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;
static mxArray * _mxarray24_;

static mxChar _array26_[15] = { 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray25_;

static mxChar _array28_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray27_;
static mxArray * _mxarray29_;

static mxChar _array31_[31] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray30_;

static mxChar _array33_[6] = { 'S', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray32_;

static mxChar _array35_[22] = { 'I', 'n', 'p', 'u', 't', ' ', 'm', 'u',
                                's', 't', ' ', 'b', 'e', ' ', 'a', ' ',
                                'n', 'u', 'm', 'b', 'e', 'r' };
static mxArray * _mxarray34_;

static mxChar _array37_[5] = { 'E', 'r', 'r', 'o', 'r' };
static mxArray * _mxarray36_;

void InitializeModule_parametros(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
    _mxarray14_ = mclInitializeString(6, _array15_);
    _mxarray16_ = mclInitializeDouble(2.0);
    _mxarray17_ = mclInitializeDouble(3.0);
    _mxarray18_ = mclInitializeDouble(4.0);
    _mxarray19_ = mclInitializeDouble(5.0);
    _mxarray20_ = mclInitializeDouble(6.0);
    _mxarray21_ = mclInitializeDouble(7.0);
    _mxarray22_ = mclInitializeDouble(8.0);
    _mxarray23_ = mclInitializeDouble(9.0);
    _mxarray24_ = mclInitializeDouble(10.0);
    _mxarray25_ = mclInitializeString(15, _array26_);
    _mxarray27_ = mclInitializeString(5, _array28_);
    _mxarray29_ = mclInitializeDouble(0.0);
    _mxarray30_ = mclInitializeString(31, _array31_);
    _mxarray32_ = mclInitializeString(6, _array33_);
    _mxarray34_ = mclInitializeString(22, _array35_);
    _mxarray36_ = mclInitializeString(5, _array37_);
}

void TerminateModule_parametros(void) {
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
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

static void mlfParametros_parametros_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                ...);
static void mlxParametros_parametros_OpeningFcn(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static mxArray * mlfParametros_parametros_OutputFcn(mlfVarargoutList * varargout,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles);
static void mlxParametros_parametros_OutputFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]);
static void mlfParametros_push_aceptar_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxParametros_push_aceptar_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfParametros_editptos_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxParametros_editptos_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfParametros_editptos_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxParametros_editptos_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]);
static void mlfParametros_edit_extiz_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void mlxParametros_edit_extiz_CreateFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]);
static void mlfParametros_edit_extiz_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxParametros_edit_extiz_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfParametros_edit_extde_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void mlxParametros_edit_extde_CreateFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]);
static void mlfParametros_edit_extde_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxParametros_edit_extde_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfParametros_edit_tiempo_CreateFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxParametros_edit_tiempo_CreateFcn(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfParametros_edit_tiempo_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void mlxParametros_edit_tiempo_Callback(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]);
static void mlfParametros_edit_tolera_CreateFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxParametros_edit_tolera_CreateFcn(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfParametros_edit_tolera_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void mlxParametros_edit_tolera_Callback(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]);
static void mlfParametros_edit_courant_CreateFcn(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles);
static void mlxParametros_edit_courant_CreateFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfParametros_edit_courant_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxParametros_edit_courant_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfParametros_edit_beta_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxParametros_edit_beta_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfParametros_edit_beta_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxParametros_edit_beta_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfParametros_edit_gamma_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void mlxParametros_edit_gamma_CreateFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]);
static void mlfParametros_edit_gamma_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxParametros_edit_gamma_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfParametros_edit_masa_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxParametros_edit_masa_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfParametros_edit_masa_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxParametros_edit_masa_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static mxArray * Mparametros(int nargout_, mxArray * varargin);
static void Mparametros_parametros_OpeningFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles,
                                              mxArray * varargin);
static mxArray * Mparametros_parametros_OutputFcn(int nargout_,
                                                  mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles);
static void Mparametros_push_aceptar_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mparametros_editptos_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mparametros_editptos_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Mparametros_edit_extiz_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void Mparametros_edit_extiz_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mparametros_edit_extde_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void Mparametros_edit_extde_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mparametros_edit_tiempo_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mparametros_edit_tiempo_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void Mparametros_edit_tolera_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mparametros_edit_tolera_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void Mparametros_edit_courant_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles);
static void Mparametros_edit_courant_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mparametros_edit_beta_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mparametros_edit_beta_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mparametros_edit_gamma_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void Mparametros_edit_gamma_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mparametros_edit_masa_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Mparametros_edit_masa_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);

static mexFunctionTableEntry local_function_table_[21]
  = { { "parametros_OpeningFcn",
        mlxParametros_parametros_OpeningFcn, -4, 0, NULL },
      { "parametros_OutputFcn",
        mlxParametros_parametros_OutputFcn, 3, -1, NULL },
      { "push_aceptar_Callback",
        mlxParametros_push_aceptar_Callback, 3, 0, NULL },
      { "editptos_CreateFcn", mlxParametros_editptos_CreateFcn, 3, 0, NULL },
      { "editptos_Callback", mlxParametros_editptos_Callback, 3, 0, NULL },
      { "edit_extiz_CreateFcn",
        mlxParametros_edit_extiz_CreateFcn, 3, 0, NULL },
      { "edit_extiz_Callback", mlxParametros_edit_extiz_Callback, 3, 0, NULL },
      { "edit_extde_CreateFcn",
        mlxParametros_edit_extde_CreateFcn, 3, 0, NULL },
      { "edit_extde_Callback", mlxParametros_edit_extde_Callback, 3, 0, NULL },
      { "edit_tiempo_CreateFcn",
        mlxParametros_edit_tiempo_CreateFcn, 3, 0, NULL },
      { "edit_tiempo_Callback",
        mlxParametros_edit_tiempo_Callback, 3, 0, NULL },
      { "edit_tolera_CreateFcn",
        mlxParametros_edit_tolera_CreateFcn, 3, 0, NULL },
      { "edit_tolera_Callback",
        mlxParametros_edit_tolera_Callback, 3, 0, NULL },
      { "edit_courant_CreateFcn",
        mlxParametros_edit_courant_CreateFcn, 3, 0, NULL },
      { "edit_courant_Callback",
        mlxParametros_edit_courant_Callback, 3, 0, NULL },
      { "edit_beta_CreateFcn", mlxParametros_edit_beta_CreateFcn, 3, 0, NULL },
      { "edit_beta_Callback", mlxParametros_edit_beta_Callback, 3, 0, NULL },
      { "edit_gamma_CreateFcn",
        mlxParametros_edit_gamma_CreateFcn, 3, 0, NULL },
      { "edit_gamma_Callback", mlxParametros_edit_gamma_Callback, 3, 0, NULL },
      { "edit_masa_CreateFcn", mlxParametros_edit_masa_CreateFcn, 3, 0, NULL },
      { "edit_masa_Callback", mlxParametros_edit_masa_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_parametros
  = { 21, local_function_table_ };

/*
 * The function "mlfNParametros" contains the nargout interface for the
 * "parametros" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\parametros.m" (lines
 * 1-48). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNParametros(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mparametros(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfParametros" contains the normal interface for the
 * "parametros" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\parametros.m" (lines
 * 1-48). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfParametros(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mparametros(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVParametros" contains the void interface for the
 * "parametros" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\parametros.m" (lines
 * 1-48). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVParametros(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mparametros(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxParametros" contains the feval interface for the
 * "parametros" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\parametros.m" (lines
 * 1-48). The feval function calls the implementation version of parametros
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxParametros(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mparametros(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfParametros_parametros_OpeningFcn" contains the normal
 * interface for the "parametros/parametros_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 48-88). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_parametros_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mparametros_parametros_OpeningFcn(hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxParametros_parametros_OpeningFcn" contains the feval
 * interface for the "parametros/parametros_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 48-88). The
 * feval function calls the implementation version of
 * parametros/parametros_OpeningFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_parametros_OpeningFcn(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/parametros_OpeningFcn Line: 48"
            " Column: 1 The function \"parametros/parametros_OpeningFcn\" wa"
            "s called with more than the declared number of outputs (0)."),
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
    Mparametros_parametros_OpeningFcn(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfParametros_parametros_OutputFcn" contains the normal
 * interface for the "parametros/parametros_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 88-110). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfParametros_parametros_OutputFcn(mlfVarargoutList * varargout,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mparametros_parametros_OutputFcn(nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxParametros_parametros_OutputFcn" contains the feval
 * interface for the "parametros/parametros_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 88-110). The
 * feval function calls the implementation version of
 * parametros/parametros_OutputFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_parametros_OutputFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/parametros_OutputFcn Line: 88"
            " Column: 1 The function \"parametros/parametros_OutputFcn\" wa"
            "s called with more than the declared number of inputs (3)."),
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
      = Mparametros_parametros_OutputFcn(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_push_aceptar_Callback" contains the normal
 * interface for the "parametros/push_aceptar_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 110-119). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_push_aceptar_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_push_aceptar_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_push_aceptar_Callback" contains the feval
 * interface for the "parametros/push_aceptar_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 110-119). The
 * feval function calls the implementation version of
 * parametros/push_aceptar_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_push_aceptar_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/push_aceptar_Callback Line: 11"
            "0 Column: 1 The function \"parametros/push_aceptar_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/push_aceptar_Callback Line: 11"
            "0 Column: 1 The function \"parametros/push_aceptar_Callback\" w"
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
    Mparametros_push_aceptar_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_editptos_CreateFcn" contains the normal
 * interface for the "parametros/editptos_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 119-133). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_editptos_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_editptos_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_editptos_CreateFcn" contains the feval interface
 * for the "parametros/editptos_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 119-133). The
 * feval function calls the implementation version of
 * parametros/editptos_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParametros_editptos_CreateFcn(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/editptos_CreateFcn Line: 119"
            " Column: 1 The function \"parametros/editptos_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/editptos_CreateFcn Line: 119"
            " Column: 1 The function \"parametros/editptos_CreateFcn\" was"
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
    Mparametros_editptos_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_editptos_Callback" contains the normal interface
 * for the "parametros/editptos_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 133-153). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_editptos_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_editptos_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_editptos_Callback" contains the feval interface
 * for the "parametros/editptos_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 133-153). The
 * feval function calls the implementation version of
 * parametros/editptos_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParametros_editptos_Callback(int nlhs,
                                            mxArray * plhs[],
                                            int nrhs,
                                            mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/editptos_Callback Line: 133"
            " Column: 1 The function \"parametros/editptos_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/editptos_Callback Line: 133"
            " Column: 1 The function \"parametros/editptos_Callback\" was"
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
    Mparametros_editptos_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_extiz_CreateFcn" contains the normal
 * interface for the "parametros/edit_extiz_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 153-168). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_extiz_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_extiz_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_extiz_CreateFcn" contains the feval
 * interface for the "parametros/edit_extiz_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 153-168). The
 * feval function calls the implementation version of
 * parametros/edit_extiz_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_extiz_CreateFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extiz_CreateFcn Line: 15"
            "3 Column: 1 The function \"parametros/edit_extiz_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extiz_CreateFcn Line: 15"
            "3 Column: 1 The function \"parametros/edit_extiz_CreateFcn\" w"
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
    Mparametros_edit_extiz_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_extiz_Callback" contains the normal
 * interface for the "parametros/edit_extiz_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 168-187). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_extiz_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_extiz_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_extiz_Callback" contains the feval
 * interface for the "parametros/edit_extiz_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 168-187). The
 * feval function calls the implementation version of
 * parametros/edit_extiz_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_extiz_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extiz_Callback Line: 168"
            " Column: 1 The function \"parametros/edit_extiz_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extiz_Callback Line: 16"
            "8 Column: 1 The function \"parametros/edit_extiz_Callback\" w"
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
    Mparametros_edit_extiz_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_extde_CreateFcn" contains the normal
 * interface for the "parametros/edit_extde_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 187-202). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_extde_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_extde_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_extde_CreateFcn" contains the feval
 * interface for the "parametros/edit_extde_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 187-202). The
 * feval function calls the implementation version of
 * parametros/edit_extde_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_extde_CreateFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extde_CreateFcn Line: 18"
            "7 Column: 1 The function \"parametros/edit_extde_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extde_CreateFcn Line: 18"
            "7 Column: 1 The function \"parametros/edit_extde_CreateFcn\" w"
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
    Mparametros_edit_extde_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_extde_Callback" contains the normal
 * interface for the "parametros/edit_extde_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 202-220). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_extde_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_extde_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_extde_Callback" contains the feval
 * interface for the "parametros/edit_extde_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 202-220). The
 * feval function calls the implementation version of
 * parametros/edit_extde_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_extde_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extde_Callback Line: 202"
            " Column: 1 The function \"parametros/edit_extde_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_extde_Callback Line: 20"
            "2 Column: 1 The function \"parametros/edit_extde_Callback\" w"
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
    Mparametros_edit_extde_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_tiempo_CreateFcn" contains the normal
 * interface for the "parametros/edit_tiempo_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 220-235). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_tiempo_CreateFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_tiempo_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_tiempo_CreateFcn" contains the feval
 * interface for the "parametros/edit_tiempo_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 220-235). The
 * feval function calls the implementation version of
 * parametros/edit_tiempo_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_tiempo_CreateFcn(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tiempo_CreateFcn Line: 22"
            "0 Column: 1 The function \"parametros/edit_tiempo_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tiempo_CreateFcn Line: 22"
            "0 Column: 1 The function \"parametros/edit_tiempo_CreateFcn\" w"
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
    Mparametros_edit_tiempo_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_tiempo_Callback" contains the normal
 * interface for the "parametros/edit_tiempo_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 235-253). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_tiempo_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_tiempo_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_tiempo_Callback" contains the feval
 * interface for the "parametros/edit_tiempo_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 235-253). The
 * feval function calls the implementation version of
 * parametros/edit_tiempo_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_tiempo_Callback(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tiempo_Callback Line: 23"
            "5 Column: 1 The function \"parametros/edit_tiempo_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tiempo_Callback Line: 23"
            "5 Column: 1 The function \"parametros/edit_tiempo_Callback\" w"
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
    Mparametros_edit_tiempo_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_tolera_CreateFcn" contains the normal
 * interface for the "parametros/edit_tolera_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 253-268). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_tolera_CreateFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_tolera_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_tolera_CreateFcn" contains the feval
 * interface for the "parametros/edit_tolera_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 253-268). The
 * feval function calls the implementation version of
 * parametros/edit_tolera_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_tolera_CreateFcn(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tolera_CreateFcn Line: 25"
            "3 Column: 1 The function \"parametros/edit_tolera_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tolera_CreateFcn Line: 25"
            "3 Column: 1 The function \"parametros/edit_tolera_CreateFcn\" w"
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
    Mparametros_edit_tolera_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_tolera_Callback" contains the normal
 * interface for the "parametros/edit_tolera_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 268-286). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_tolera_Callback(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_tolera_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_tolera_Callback" contains the feval
 * interface for the "parametros/edit_tolera_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 268-286). The
 * feval function calls the implementation version of
 * parametros/edit_tolera_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_tolera_Callback(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tolera_Callback Line: 26"
            "8 Column: 1 The function \"parametros/edit_tolera_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_tolera_Callback Line: 26"
            "8 Column: 1 The function \"parametros/edit_tolera_Callback\" w"
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
    Mparametros_edit_tolera_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_courant_CreateFcn" contains the normal
 * interface for the "parametros/edit_courant_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 286-301). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_courant_CreateFcn(mxArray * hObject,
                                                 mxArray * eventdata,
                                                 mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_courant_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_courant_CreateFcn" contains the feval
 * interface for the "parametros/edit_courant_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 286-301). The
 * feval function calls the implementation version of
 * parametros/edit_courant_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_courant_CreateFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_courant_CreateFcn Line: 28"
            "6 Column: 1 The function \"parametros/edit_courant_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_courant_CreateFcn Line: 2"
            "86 Column: 1 The function \"parametros/edit_courant_CreateFcn\""
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
    Mparametros_edit_courant_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_courant_Callback" contains the normal
 * interface for the "parametros/edit_courant_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 301-320). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_courant_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_courant_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_courant_Callback" contains the feval
 * interface for the "parametros/edit_courant_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 301-320). The
 * feval function calls the implementation version of
 * parametros/edit_courant_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_courant_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_courant_Callback Line: 30"
            "1 Column: 1 The function \"parametros/edit_courant_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_courant_Callback Line: 30"
            "1 Column: 1 The function \"parametros/edit_courant_Callback\" w"
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
    Mparametros_edit_courant_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_beta_CreateFcn" contains the normal
 * interface for the "parametros/edit_beta_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 320-335). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_beta_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_beta_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_beta_CreateFcn" contains the feval
 * interface for the "parametros/edit_beta_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 320-335). The
 * feval function calls the implementation version of
 * parametros/edit_beta_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_beta_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_beta_CreateFcn Line: 320"
            " Column: 1 The function \"parametros/edit_beta_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_beta_CreateFcn Line: 32"
            "0 Column: 1 The function \"parametros/edit_beta_CreateFcn\" w"
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
    Mparametros_edit_beta_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_beta_Callback" contains the normal
 * interface for the "parametros/edit_beta_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 335-353). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_beta_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_beta_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_beta_Callback" contains the feval interface
 * for the "parametros/edit_beta_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 335-353). The
 * feval function calls the implementation version of
 * parametros/edit_beta_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParametros_edit_beta_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_beta_Callback Line: 335"
            " Column: 1 The function \"parametros/edit_beta_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_beta_Callback Line: 335"
            " Column: 1 The function \"parametros/edit_beta_Callback\" was"
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
    Mparametros_edit_beta_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_gamma_CreateFcn" contains the normal
 * interface for the "parametros/edit_gamma_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 353-368). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_gamma_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_gamma_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_gamma_CreateFcn" contains the feval
 * interface for the "parametros/edit_gamma_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 353-368). The
 * feval function calls the implementation version of
 * parametros/edit_gamma_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_gamma_CreateFcn(int nlhs,
                                               mxArray * plhs[],
                                               int nrhs,
                                               mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_gamma_CreateFcn Line: 35"
            "3 Column: 1 The function \"parametros/edit_gamma_CreateFcn\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_gamma_CreateFcn Line: 35"
            "3 Column: 1 The function \"parametros/edit_gamma_CreateFcn\" w"
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
    Mparametros_edit_gamma_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_gamma_Callback" contains the normal
 * interface for the "parametros/edit_gamma_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 368-386). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_gamma_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_gamma_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_gamma_Callback" contains the feval
 * interface for the "parametros/edit_gamma_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 368-386). The
 * feval function calls the implementation version of
 * parametros/edit_gamma_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_gamma_Callback(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_gamma_Callback Line: 368"
            " Column: 1 The function \"parametros/edit_gamma_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_gamma_Callback Line: 36"
            "8 Column: 1 The function \"parametros/edit_gamma_Callback\" w"
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
    Mparametros_edit_gamma_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_masa_CreateFcn" contains the normal
 * interface for the "parametros/edit_masa_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 386-401). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_masa_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_masa_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_masa_CreateFcn" contains the feval
 * interface for the "parametros/edit_masa_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 386-401). The
 * feval function calls the implementation version of
 * parametros/edit_masa_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParametros_edit_masa_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_masa_CreateFcn Line: 386"
            " Column: 1 The function \"parametros/edit_masa_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_masa_CreateFcn Line: 38"
            "6 Column: 1 The function \"parametros/edit_masa_CreateFcn\" w"
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
    Mparametros_edit_masa_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParametros_edit_masa_Callback" contains the normal
 * interface for the "parametros/edit_masa_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 401-417). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParametros_edit_masa_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparametros_edit_masa_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParametros_edit_masa_Callback" contains the feval interface
 * for the "parametros/edit_masa_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 401-417). The
 * feval function calls the implementation version of
 * parametros/edit_masa_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParametros_edit_masa_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_masa_Callback Line: 401"
            " Column: 1 The function \"parametros/edit_masa_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parametros/edit_masa_Callback Line: 401"
            " Column: 1 The function \"parametros/edit_masa_Callback\" was"
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
    Mparametros_edit_masa_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mparametros" is the implementation version of the "parametros"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 1-48). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = parametros(varargin)
 */
static mxArray * Mparametros(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % PARAMETROS M-file for parametros.fig
     * %      PARAMETROS, by itself, creates a new PARAMETROS or raises the existing
     * %      singleton*.
     * %
     * %      H = PARAMETROS returns the handle to a new PARAMETROS or the handle to
     * %      the existing singleton*.
     * %
     * %      PARAMETROS('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in PARAMETROS.M with the given input arguments.
     * %
     * %      PARAMETROS('Property','Value',...) creates a new PARAMETROS or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before parametros_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to parametros_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help parametros
     * 
     * % Last Modified by GUIDE v2.5 21-May-2004 00:17:39
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
        mxCreateString("parametros"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxParametros_parametros_OpeningFcn, "parametros_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxParametros_parametros_OutputFcn, "parametros_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @parametros_OpeningFcn, ...
     * 'gui_OutputFcn',  @parametros_OutputFcn, ...
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
     * % --- Executes just before parametros is made visible.
     */
}

/*
 * The function "Mparametros_parametros_OpeningFcn" is the implementation
 * version of the "parametros/parametros_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 48-88). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function parametros_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mparametros_parametros_OpeningFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles,
                                              mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * datos = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    mclCopyArray(&varargin);
    /*
     * % This function has no output args, see OutputFcn.
     * % hObject    handle to figure
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * % varargin   command line arguments to parametros (see VARARGIN)
     * 
     * datos=varargin{1};
     */
    mlfAssign(
      &datos, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
    /*
     * handles.n=datos.n;
     */
    mlfIndexAssign(&handles, ".n", mlfIndexRef(mclVv(datos, "datos"), ".n"));
    /*
     * handles.a=datos.a;
     */
    mlfIndexAssign(&handles, ".a", mlfIndexRef(mclVv(datos, "datos"), ".a"));
    /*
     * handles.b=datos.b;
     */
    mlfIndexAssign(&handles, ".b", mlfIndexRef(mclVv(datos, "datos"), ".b"));
    /*
     * handles.T=datos.T;
     */
    mlfIndexAssign(&handles, ".T", mlfIndexRef(mclVv(datos, "datos"), ".T"));
    /*
     * handles.eps=datos.eps;
     */
    mlfIndexAssign(
      &handles, ".eps", mlfIndexRef(mclVv(datos, "datos"), ".eps"));
    /*
     * handles.mu=datos.mu;
     */
    mlfIndexAssign(&handles, ".mu", mlfIndexRef(mclVv(datos, "datos"), ".mu"));
    /*
     * handles.beta=datos.beta;
     */
    mlfIndexAssign(
      &handles, ".beta", mlfIndexRef(mclVv(datos, "datos"), ".beta"));
    /*
     * handles.gamma=datos.gamma;
     */
    mlfIndexAssign(
      &handles, ".gamma", mlfIndexRef(mclVv(datos, "datos"), ".gamma"));
    /*
     * handles.masa=datos.masa;
     */
    mlfIndexAssign(
      &handles, ".masa", mlfIndexRef(mclVv(datos, "datos"), ".masa"));
    /*
     * 
     * set(handles.editptos,'string',datos.n);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".editptos"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".n"),
        NULL));
    /*
     * set(handles.edit_extiz,'string',datos.a);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_extiz"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".a"),
        NULL));
    /*
     * set(handles.edit_extde,'string',datos.b);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_extde"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".b"),
        NULL));
    /*
     * set(handles.edit_tiempo,'string',datos.T);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_tiempo"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".T"),
        NULL));
    /*
     * set(handles.edit_tolera,'string',datos.eps);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_tolera"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".eps"),
        NULL));
    /*
     * set(handles.edit_courant,'string',datos.mu);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_courant"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".mu"),
        NULL));
    /*
     * set(handles.edit_beta,'string',datos.beta);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_beta"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".beta"),
        NULL));
    /*
     * set(handles.edit_gamma,'string',datos.gamma);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_gamma"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".gamma"),
        NULL));
    /*
     * set(handles.edit_masa,'string',datos.masa);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit_masa"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".masa"),
        NULL));
    /*
     * 
     * 
     * % Choose default command line output for parametros
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
     * % UIWAIT makes parametros wait for user response (see UIRESUME)
     * uiwait(handles.figure1);
     */
    mclFeval(
      mclAnsVarargout(),
      mlxUiwait,
      mlfIndexRef(mclVa(handles, "handles"), ".figure1"),
      NULL);
    mxDestroyArray(datos);
    mxDestroyArray(ans);
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
 * The function "Mparametros_parametros_OutputFcn" is the implementation
 * version of the "parametros/parametros_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 88-110). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = parametros_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mparametros_parametros_OutputFcn(int nargout_,
                                                  mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
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
     * 
     * varargout{1} = handles.output;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray0_,
      mlfIndexRef(mclVa(handles, "handles"), ".output"));
    /*
     * varargout{2} = handles.n;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray16_,
      mlfIndexRef(mclVa(handles, "handles"), ".n"));
    /*
     * varargout{3} = handles.mu;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray17_,
      mlfIndexRef(mclVa(handles, "handles"), ".mu"));
    /*
     * varargout{4} = handles.a;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray18_,
      mlfIndexRef(mclVa(handles, "handles"), ".a"));
    /*
     * varargout{5} = handles.b;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray19_,
      mlfIndexRef(mclVa(handles, "handles"), ".b"));
    /*
     * varargout{6} = handles.T;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray20_,
      mlfIndexRef(mclVa(handles, "handles"), ".T"));
    /*
     * varargout{7} = handles.eps;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray21_,
      mlfIndexRef(mclVa(handles, "handles"), ".eps"));
    /*
     * varargout{8} = handles.beta;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray22_,
      mlfIndexRef(mclVa(handles, "handles"), ".beta"));
    /*
     * varargout{9} = handles.gamma;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray23_,
      mlfIndexRef(mclVa(handles, "handles"), ".gamma"));
    /*
     * varargout{10} = handles.masa;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray24_,
      mlfIndexRef(mclVa(handles, "handles"), ".masa"));
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
    /*
     * 
     * 
     * 
     * % --- Executes on button press in push_aceptar.
     */
}

/*
 * The function "Mparametros_push_aceptar_Callback" is the implementation
 * version of the "parametros/push_aceptar_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 110-119). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function push_aceptar_Callback(hObject, eventdata, handles)
 */
static void Mparametros_push_aceptar_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to push_aceptar (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * uiresume;
     */
    mlfUiresume(NULL);
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
 * The function "Mparametros_editptos_CreateFcn" is the implementation version
 * of the "parametros/editptos_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 119-133). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function editptos_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_editptos_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to editptos (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
     */
}

/*
 * The function "Mparametros_editptos_Callback" is the implementation version
 * of the "parametros/editptos_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 133-153). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function editptos_Callback(hObject, eventdata, handles)
 */
static void Mparametros_editptos_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * ptos = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to editptos (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of editptos as text
     * %        str2double(get(hObject,'String')) returns contents of editptos as a double
     * 
     * 
     * ptos=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &ptos,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(ptos)
     */
    if (mlfTobool(mlfIsnan(mclVv(ptos, "ptos")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.n=ptos;
     */
    mlfIndexAssign(&handles, ".n", mclVv(ptos, "ptos"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(ptos);
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
 * The function "Mparametros_edit_extiz_CreateFcn" is the implementation
 * version of the "parametros/edit_extiz_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 153-168). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_extiz_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_extiz_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_extiz (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_extiz_Callback" is the implementation version
 * of the "parametros/edit_extiz_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 168-187). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_extiz_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_extiz_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_extiz (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_extiz as text
     * %        str2double(get(hObject,'String')) returns contents of edit_extiz as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.a=valor;
     */
    mlfIndexAssign(&handles, ".a", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
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
 * The function "Mparametros_edit_extde_CreateFcn" is the implementation
 * version of the "parametros/edit_extde_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 187-202). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_extde_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_extde_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_extde (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_extde_Callback" is the implementation version
 * of the "parametros/edit_extde_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 202-220). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_extde_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_extde_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_extde (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_extde as text
     * %        str2double(get(hObject,'String')) returns contents of edit_extde as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.b=valor;
     */
    mlfIndexAssign(&handles, ".b", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
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
 * The function "Mparametros_edit_tiempo_CreateFcn" is the implementation
 * version of the "parametros/edit_tiempo_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 220-235). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_tiempo_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_tiempo_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_tiempo (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_tiempo_Callback" is the implementation
 * version of the "parametros/edit_tiempo_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 235-253). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_tiempo_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_tiempo_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_tiempo (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_tiempo as text
     * %        str2double(get(hObject,'String')) returns contents of edit_tiempo as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.T=valor;
     */
    mlfIndexAssign(&handles, ".T", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
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
 * The function "Mparametros_edit_tolera_CreateFcn" is the implementation
 * version of the "parametros/edit_tolera_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 253-268). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_tolera_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_tolera_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_tolera (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_tolera_Callback" is the implementation
 * version of the "parametros/edit_tolera_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 268-286). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_tolera_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_tolera_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_tolera (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_tolera as text
     * %        str2double(get(hObject,'String')) returns contents of edit_tolera as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.eps=valor;
     */
    mlfIndexAssign(&handles, ".eps", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
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
 * The function "Mparametros_edit_courant_CreateFcn" is the implementation
 * version of the "parametros/edit_courant_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 286-301). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_courant_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_courant_CreateFcn(mxArray * hObject,
                                               mxArray * eventdata,
                                               mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_courant (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_courant_Callback" is the implementation
 * version of the "parametros/edit_courant_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 301-320). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_courant_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_courant_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_courant (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_courant as text
     * %        str2double(get(hObject,'String')) returns contents of edit_courant as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.mu=valor;
     */
    mlfIndexAssign(&handles, ".mu", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
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
 * The function "Mparametros_edit_beta_CreateFcn" is the implementation version
 * of the "parametros/edit_beta_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 320-335). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_beta_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_beta_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_beta (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_beta_Callback" is the implementation version
 * of the "parametros/edit_beta_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 335-353). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_beta_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_beta_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_beta (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_beta as text
     * %        str2double(get(hObject,'String')) returns contents of edit_beta as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.beta=valor;
     */
    mlfIndexAssign(&handles, ".beta", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
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
 * The function "Mparametros_edit_gamma_CreateFcn" is the implementation
 * version of the "parametros/edit_gamma_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 353-368). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_gamma_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_gamma_CreateFcn(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_gamma (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_gamma_Callback" is the implementation version
 * of the "parametros/edit_gamma_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 368-386). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_gamma_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_gamma_Callback(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_gamma (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_gamma as text
     * %        str2double(get(hObject,'String')) returns contents of edit_gamma as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.gamma=valor;
     */
    mlfIndexAssign(&handles, ".gamma", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
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
 * The function "Mparametros_edit_masa_CreateFcn" is the implementation version
 * of the "parametros/edit_masa_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 386-401). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_masa_CreateFcn(hObject, eventdata, handles)
 */
static void Mparametros_edit_masa_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_masa (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray25_, _mxarray27_, NULL));
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
            _mxarray25_,
            mlfNGet(1, _mxarray29_, _mxarray30_, NULL),
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
 * The function "Mparametros_edit_masa_Callback" is the implementation version
 * of the "parametros/edit_masa_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\parametros.m" (lines 401-417). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_masa_Callback(hObject, eventdata, handles)
 */
static void Mparametros_edit_masa_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parametros);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_masa (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_masa as text
     * %        str2double(get(hObject,'String')) returns contents of edit_masa as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray32_, NULL)));
    /*
     * if isnan(valor)
     */
    if (mlfTobool(mlfIsnan(mclVv(valor, "valor")))) {
        /*
         * set(hObject, 'String', 0);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVa(hObject, "hObject"), _mxarray32_, _mxarray29_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray34_, _mxarray36_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.masa=valor;
     */
    mlfIndexAssign(&handles, ".masa", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(valor);
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
}
