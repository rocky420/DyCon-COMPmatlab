/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "paramcont2d.h"
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

static mxChar _array23_[15] = { 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray22_;

static mxChar _array25_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray24_;
static mxArray * _mxarray26_;

static mxChar _array28_[31] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray27_;

static mxChar _array30_[6] = { 'S', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray29_;

static mxChar _array32_[22] = { 'I', 'n', 'p', 'u', 't', ' ', 'm', 'u',
                                's', 't', ' ', 'b', 'e', ' ', 'a', ' ',
                                'n', 'u', 'm', 'b', 'e', 'r' };
static mxArray * _mxarray31_;

static mxChar _array34_[5] = { 'E', 'r', 'r', 'o', 'r' };
static mxArray * _mxarray33_;

void InitializeModule_paramcont2d(void) {
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
    _mxarray22_ = mclInitializeString(15, _array23_);
    _mxarray24_ = mclInitializeString(5, _array25_);
    _mxarray26_ = mclInitializeDouble(0.0);
    _mxarray27_ = mclInitializeString(31, _array28_);
    _mxarray29_ = mclInitializeString(6, _array30_);
    _mxarray31_ = mclInitializeString(22, _array32_);
    _mxarray33_ = mclInitializeString(5, _array34_);
}

void TerminateModule_paramcont2d(void) {
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
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

static void mlfParamcont2d_paramcont2d_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  ...);
static void mlxParamcont2d_paramcont2d_OpeningFcn(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]);
static mxArray * mlfParamcont2d_paramcont2d_OutputFcn(mlfVarargoutList * varargout,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles);
static void mlxParamcont2d_paramcont2d_OutputFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfParamcont2d_pushbutton1_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxParamcont2d_pushbutton1_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfParamcont2d_edit1_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxParamcont2d_edit1_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfParamcont2d_edit1_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void mlxParamcont2d_edit1_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static void mlfParamcont2d_edit2_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxParamcont2d_edit2_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfParamcont2d_edit2_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void mlxParamcont2d_edit2_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static void mlfParamcont2d_edit3_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxParamcont2d_edit3_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfParamcont2d_edit3_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void mlxParamcont2d_edit3_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static void mlfParamcont2d_edit4_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxParamcont2d_edit4_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfParamcont2d_edit4_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void mlxParamcont2d_edit4_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static void mlfParamcont2d_edit5_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxParamcont2d_edit5_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfParamcont2d_edit5_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void mlxParamcont2d_edit5_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static void mlfParamcont2d_edit6_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void mlxParamcont2d_edit6_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]);
static void mlfParamcont2d_edit6_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void mlxParamcont2d_edit6_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static mxArray * Mparamcont2d(int nargout_, mxArray * varargin);
static void Mparamcont2d_paramcont2d_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                mxArray * varargin);
static mxArray * Mparamcont2d_paramcont2d_OutputFcn(int nargout_,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles);
static void Mparamcont2d_pushbutton1_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mparamcont2d_edit1_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mparamcont2d_edit1_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void Mparamcont2d_edit2_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mparamcont2d_edit2_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void Mparamcont2d_edit3_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mparamcont2d_edit3_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void Mparamcont2d_edit4_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mparamcont2d_edit4_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void Mparamcont2d_edit5_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mparamcont2d_edit5_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);
static void Mparamcont2d_edit6_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void Mparamcont2d_edit6_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles);

static mexFunctionTableEntry local_function_table_[15]
  = { { "paramcont2d_OpeningFcn",
        mlxParamcont2d_paramcont2d_OpeningFcn, -4, 0, NULL },
      { "paramcont2d_OutputFcn",
        mlxParamcont2d_paramcont2d_OutputFcn, 3, -1, NULL },
      { "pushbutton1_Callback",
        mlxParamcont2d_pushbutton1_Callback, 3, 0, NULL },
      { "edit1_CreateFcn", mlxParamcont2d_edit1_CreateFcn, 3, 0, NULL },
      { "edit1_Callback", mlxParamcont2d_edit1_Callback, 3, 0, NULL },
      { "edit2_CreateFcn", mlxParamcont2d_edit2_CreateFcn, 3, 0, NULL },
      { "edit2_Callback", mlxParamcont2d_edit2_Callback, 3, 0, NULL },
      { "edit3_CreateFcn", mlxParamcont2d_edit3_CreateFcn, 3, 0, NULL },
      { "edit3_Callback", mlxParamcont2d_edit3_Callback, 3, 0, NULL },
      { "edit4_CreateFcn", mlxParamcont2d_edit4_CreateFcn, 3, 0, NULL },
      { "edit4_Callback", mlxParamcont2d_edit4_Callback, 3, 0, NULL },
      { "edit5_CreateFcn", mlxParamcont2d_edit5_CreateFcn, 3, 0, NULL },
      { "edit5_Callback", mlxParamcont2d_edit5_Callback, 3, 0, NULL },
      { "edit6_CreateFcn", mlxParamcont2d_edit6_CreateFcn, 3, 0, NULL },
      { "edit6_Callback", mlxParamcont2d_edit6_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_paramcont2d
  = { 15, local_function_table_ };

/*
 * The function "mlfNParamcont2d" contains the nargout interface for the
 * "paramcont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\paramcont2d.m" (lines
 * 1-47). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNParamcont2d(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mparamcont2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfParamcont2d" contains the normal interface for the
 * "paramcont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\paramcont2d.m" (lines
 * 1-47). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfParamcont2d(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mparamcont2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVParamcont2d" contains the void interface for the
 * "paramcont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\paramcont2d.m" (lines
 * 1-47). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVParamcont2d(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mparamcont2d(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxParamcont2d" contains the feval interface for the
 * "paramcont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\paramcont2d.m" (lines
 * 1-47). The feval function calls the implementation version of paramcont2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxParamcont2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mparamcont2d(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfParamcont2d_paramcont2d_OpeningFcn" contains the normal
 * interface for the "paramcont2d/paramcont2d_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 47-80). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_paramcont2d_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mparamcont2d_paramcont2d_OpeningFcn(hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxParamcont2d_paramcont2d_OpeningFcn" contains the feval
 * interface for the "paramcont2d/paramcont2d_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 47-80). The
 * feval function calls the implementation version of
 * paramcont2d/paramcont2d_OpeningFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParamcont2d_paramcont2d_OpeningFcn(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/paramcont2d_OpeningFcn Line: 4"
            "7 Column: 1 The function \"paramcont2d/paramcont2d_OpeningFcn\" "
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
    Mparamcont2d_paramcont2d_OpeningFcn(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfParamcont2d_paramcont2d_OutputFcn" contains the normal
 * interface for the "paramcont2d/paramcont2d_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 80-96). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfParamcont2d_paramcont2d_OutputFcn(mlfVarargoutList * varargout,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mparamcont2d_paramcont2d_OutputFcn(
          nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxParamcont2d_paramcont2d_OutputFcn" contains the feval
 * interface for the "paramcont2d/paramcont2d_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 80-96). The
 * feval function calls the implementation version of
 * paramcont2d/paramcont2d_OutputFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParamcont2d_paramcont2d_OutputFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/paramcont2d_OutputFcn Line: 8"
            "0 Column: 1 The function \"paramcont2d/paramcont2d_OutputFcn\" "
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
      = Mparamcont2d_paramcont2d_OutputFcn(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_pushbutton1_Callback" contains the normal
 * interface for the "paramcont2d/pushbutton1_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 96-105). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_pushbutton1_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_pushbutton1_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_pushbutton1_Callback" contains the feval
 * interface for the "paramcont2d/pushbutton1_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 96-105). The
 * feval function calls the implementation version of
 * paramcont2d/pushbutton1_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxParamcont2d_pushbutton1_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/pushbutton1_Callback Line: 96"
            " Column: 1 The function \"paramcont2d/pushbutton1_Callback\" wa"
            "s called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/pushbutton1_Callback Line: 9"
            "6 Column: 1 The function \"paramcont2d/pushbutton1_Callback\" "
            "was called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mparamcont2d_pushbutton1_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit1_CreateFcn" contains the normal interface
 * for the "paramcont2d/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 105-118). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit1_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit1_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit1_CreateFcn" contains the feval interface
 * for the "paramcont2d/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 105-118). The
 * feval function calls the implementation version of
 * paramcont2d/edit1_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit1_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit1_CreateFcn Line: 105 "
            "Column: 1 The function \"paramcont2d/edit1_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit1_CreateFcn Line: 105"
            " Column: 1 The function \"paramcont2d/edit1_CreateFcn\" was"
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
    Mparamcont2d_edit1_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit1_Callback" contains the normal interface
 * for the "paramcont2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 118-137). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit1_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit1_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit1_Callback" contains the feval interface
 * for the "paramcont2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 118-137). The
 * feval function calls the implementation version of
 * paramcont2d/edit1_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit1_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit1_Callback Line: 118 "
            "Column: 1 The function \"paramcont2d/edit1_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit1_Callback Line: 118 "
            "Column: 1 The function \"paramcont2d/edit1_Callback\" was c"
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
    Mparamcont2d_edit1_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit2_CreateFcn" contains the normal interface
 * for the "paramcont2d/edit2_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 137-150). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit2_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit2_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit2_CreateFcn" contains the feval interface
 * for the "paramcont2d/edit2_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 137-150). The
 * feval function calls the implementation version of
 * paramcont2d/edit2_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit2_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit2_CreateFcn Line: 137 "
            "Column: 1 The function \"paramcont2d/edit2_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit2_CreateFcn Line: 137"
            " Column: 1 The function \"paramcont2d/edit2_CreateFcn\" was"
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
    Mparamcont2d_edit2_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit2_Callback" contains the normal interface
 * for the "paramcont2d/edit2_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 150-168). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit2_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit2_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit2_Callback" contains the feval interface
 * for the "paramcont2d/edit2_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 150-168). The
 * feval function calls the implementation version of
 * paramcont2d/edit2_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit2_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit2_Callback Line: 150 "
            "Column: 1 The function \"paramcont2d/edit2_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit2_Callback Line: 150 "
            "Column: 1 The function \"paramcont2d/edit2_Callback\" was c"
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
    Mparamcont2d_edit2_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit3_CreateFcn" contains the normal interface
 * for the "paramcont2d/edit3_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 168-181). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit3_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit3_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit3_CreateFcn" contains the feval interface
 * for the "paramcont2d/edit3_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 168-181). The
 * feval function calls the implementation version of
 * paramcont2d/edit3_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit3_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit3_CreateFcn Line: 168 "
            "Column: 1 The function \"paramcont2d/edit3_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit3_CreateFcn Line: 168"
            " Column: 1 The function \"paramcont2d/edit3_CreateFcn\" was"
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
    Mparamcont2d_edit3_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit3_Callback" contains the normal interface
 * for the "paramcont2d/edit3_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 181-199). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit3_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit3_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit3_Callback" contains the feval interface
 * for the "paramcont2d/edit3_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 181-199). The
 * feval function calls the implementation version of
 * paramcont2d/edit3_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit3_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit3_Callback Line: 181 "
            "Column: 1 The function \"paramcont2d/edit3_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit3_Callback Line: 181 "
            "Column: 1 The function \"paramcont2d/edit3_Callback\" was c"
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
    Mparamcont2d_edit3_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit4_CreateFcn" contains the normal interface
 * for the "paramcont2d/edit4_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 199-212). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit4_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit4_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit4_CreateFcn" contains the feval interface
 * for the "paramcont2d/edit4_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 199-212). The
 * feval function calls the implementation version of
 * paramcont2d/edit4_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit4_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit4_CreateFcn Line: 199 "
            "Column: 1 The function \"paramcont2d/edit4_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit4_CreateFcn Line: 199"
            " Column: 1 The function \"paramcont2d/edit4_CreateFcn\" was"
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
    Mparamcont2d_edit4_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit4_Callback" contains the normal interface
 * for the "paramcont2d/edit4_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 212-230). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit4_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit4_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit4_Callback" contains the feval interface
 * for the "paramcont2d/edit4_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 212-230). The
 * feval function calls the implementation version of
 * paramcont2d/edit4_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit4_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit4_Callback Line: 212 "
            "Column: 1 The function \"paramcont2d/edit4_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit4_Callback Line: 212 "
            "Column: 1 The function \"paramcont2d/edit4_Callback\" was c"
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
    Mparamcont2d_edit4_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit5_CreateFcn" contains the normal interface
 * for the "paramcont2d/edit5_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 230-243). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit5_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit5_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit5_CreateFcn" contains the feval interface
 * for the "paramcont2d/edit5_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 230-243). The
 * feval function calls the implementation version of
 * paramcont2d/edit5_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit5_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit5_CreateFcn Line: 230 "
            "Column: 1 The function \"paramcont2d/edit5_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit5_CreateFcn Line: 230"
            " Column: 1 The function \"paramcont2d/edit5_CreateFcn\" was"
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
    Mparamcont2d_edit5_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit5_Callback" contains the normal interface
 * for the "paramcont2d/edit5_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 243-262). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit5_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit5_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit5_Callback" contains the feval interface
 * for the "paramcont2d/edit5_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 243-262). The
 * feval function calls the implementation version of
 * paramcont2d/edit5_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit5_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit5_Callback Line: 243 "
            "Column: 1 The function \"paramcont2d/edit5_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit5_Callback Line: 243 "
            "Column: 1 The function \"paramcont2d/edit5_Callback\" was c"
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
    Mparamcont2d_edit5_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit6_CreateFcn" contains the normal interface
 * for the "paramcont2d/edit6_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 262-275). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit6_CreateFcn(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit6_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit6_CreateFcn" contains the feval interface
 * for the "paramcont2d/edit6_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 262-275). The
 * feval function calls the implementation version of
 * paramcont2d/edit6_CreateFcn through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit6_CreateFcn(int nlhs,
                                           mxArray * plhs[],
                                           int nrhs,
                                           mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit6_CreateFcn Line: 262 "
            "Column: 1 The function \"paramcont2d/edit6_CreateFcn\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit6_CreateFcn Line: 262"
            " Column: 1 The function \"paramcont2d/edit6_CreateFcn\" was"
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
    Mparamcont2d_edit6_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfParamcont2d_edit6_Callback" contains the normal interface
 * for the "paramcont2d/edit6_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 275-296). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfParamcont2d_edit6_Callback(mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mparamcont2d_edit6_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxParamcont2d_edit6_Callback" contains the feval interface
 * for the "paramcont2d/edit6_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 275-296). The
 * feval function calls the implementation version of
 * paramcont2d/edit6_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxParamcont2d_edit6_Callback(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit6_Callback Line: 275 "
            "Column: 1 The function \"paramcont2d/edit6_Callback\" was c"
            "alled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: paramcont2d/edit6_Callback Line: 275 "
            "Column: 1 The function \"paramcont2d/edit6_Callback\" was c"
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
    Mparamcont2d_edit6_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mparamcont2d" is the implementation version of the
 * "paramcont2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\paramcont2d.m" (lines
 * 1-47). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = paramcont2d(varargin)
 */
static mxArray * Mparamcont2d(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % PARAMCONT2D M-file for paramcont2d.fig
     * %      PARAMCONT2D, by itself, creates a new PARAMCONT2D or raises the existing
     * %      singleton*.
     * %
     * %      H = PARAMCONT2D returns the handle to a new PARAMCONT2D or the handle to
     * %      the existing singleton*.
     * %
     * %      PARAMCONT2D('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in PARAMCONT2D.M with the given input arguments.
     * %
     * %      PARAMCONT2D('Property','Value',...) creates a new PARAMCONT2D or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before paramcont2d_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to paramcont2d_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help paramcont2d
     * 
     * % Last Modified by GUIDE v2.5 10-Aug-2004 16:42:00
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
        mxCreateString("paramcont2d"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxParamcont2d_paramcont2d_OpeningFcn, "paramcont2d_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxParamcont2d_paramcont2d_OutputFcn, "paramcont2d_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @paramcont2d_OpeningFcn, ...
     * 'gui_OutputFcn',  @paramcont2d_OutputFcn, ...
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
     * % --- Executes just before paramcont2d is made visible.
     */
}

/*
 * The function "Mparamcont2d_paramcont2d_OpeningFcn" is the implementation
 * version of the "paramcont2d/paramcont2d_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 47-80). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function paramcont2d_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mparamcont2d_paramcont2d_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
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
     * % varargin   command line arguments to paramcont2d (see VARARGIN)
     * 
     * datos=varargin{1};
     */
    mlfAssign(
      &datos, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
    /*
     * handles.a=datos.a;
     */
    mlfIndexAssign(&handles, ".a", mlfIndexRef(mclVv(datos, "datos"), ".a"));
    /*
     * handles.b=datos.b;
     */
    mlfIndexAssign(&handles, ".b", mlfIndexRef(mclVv(datos, "datos"), ".b"));
    /*
     * handles.n=datos.n;
     */
    mlfIndexAssign(&handles, ".n", mlfIndexRef(mclVv(datos, "datos"), ".n"));
    /*
     * handles.mu=datos.mu;
     */
    mlfIndexAssign(&handles, ".mu", mlfIndexRef(mclVv(datos, "datos"), ".mu"));
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
     * 
     * set(handles.edit1,'string',datos.a);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit1"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".a"),
        NULL));
    /*
     * set(handles.edit2,'string',datos.b);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit2"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".b"),
        NULL));
    /*
     * set(handles.edit3,'string',datos.n);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit3"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".n"),
        NULL));
    /*
     * set(handles.edit4,'string',datos.mu);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit4"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".mu"),
        NULL));
    /*
     * set(handles.edit5,'string',datos.T);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit5"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".T"),
        NULL));
    /*
     * set(handles.edit6,'string',datos.eps);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfIndexRef(mclVa(handles, "handles"), ".edit6"),
        _mxarray14_,
        mlfIndexRef(mclVv(datos, "datos"), ".eps"),
        NULL));
    /*
     * 
     * % Choose default command line output for paramcont2d
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
     * % UIWAIT makes paramcont2d wait for user response (see UIRESUME)
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
 * The function "Mparamcont2d_paramcont2d_OutputFcn" is the implementation
 * version of the "paramcont2d/paramcont2d_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 80-96). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = paramcont2d_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mparamcont2d_paramcont2d_OutputFcn(int nargout_,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
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
      _mxarray16_,
      mlfIndexRef(mclVa(handles, "handles"), ".a"));
    /*
     * varargout{3} = handles.b;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray17_,
      mlfIndexRef(mclVa(handles, "handles"), ".b"));
    /*
     * varargout{4} = handles.n;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray18_,
      mlfIndexRef(mclVa(handles, "handles"), ".n"));
    /*
     * varargout{5} = handles.mu;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray19_,
      mlfIndexRef(mclVa(handles, "handles"), ".mu"));
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
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
    /*
     * 
     * % --- Executes on button press in pushbutton1.
     */
}

/*
 * The function "Mparamcont2d_pushbutton1_Callback" is the implementation
 * version of the "paramcont2d/pushbutton1_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 96-105). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton1_Callback(hObject, eventdata, handles)
 */
static void Mparamcont2d_pushbutton1_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pushbutton1 (see GCBO)
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
 * The function "Mparamcont2d_edit1_CreateFcn" is the implementation version of
 * the "paramcont2d/edit1_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 105-118). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_CreateFcn(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit1_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
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
            0, mclVa(hObject, "hObject"), _mxarray22_, _mxarray24_, NULL));
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
            _mxarray22_,
            mlfNGet(1, _mxarray26_, _mxarray27_, NULL),
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
 * The function "Mparamcont2d_edit1_Callback" is the implementation version of
 * the "paramcont2d/edit1_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 118-137). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit1_Callback(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit1_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit1 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit1 as text
     * %        str2double(get(hObject,'String')) returns contents of edit1 as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL)));
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
            0, mclVa(hObject, "hObject"), _mxarray29_, _mxarray26_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray31_, _mxarray33_, NULL));
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
 * The function "Mparamcont2d_edit2_CreateFcn" is the implementation version of
 * the "paramcont2d/edit2_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 137-150). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit2_CreateFcn(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit2_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit2 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray22_, _mxarray24_, NULL));
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
            _mxarray22_,
            mlfNGet(1, _mxarray26_, _mxarray27_, NULL),
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
 * The function "Mparamcont2d_edit2_Callback" is the implementation version of
 * the "paramcont2d/edit2_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 150-168). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit2_Callback(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit2_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit2 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit2 as text
     * %        str2double(get(hObject,'String')) returns contents of edit2 as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL)));
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
            0, mclVa(hObject, "hObject"), _mxarray29_, _mxarray26_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray31_, _mxarray33_, NULL));
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
 * The function "Mparamcont2d_edit3_CreateFcn" is the implementation version of
 * the "paramcont2d/edit3_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 168-181). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit3_CreateFcn(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit3_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit3 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray22_, _mxarray24_, NULL));
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
            _mxarray22_,
            mlfNGet(1, _mxarray26_, _mxarray27_, NULL),
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
 * The function "Mparamcont2d_edit3_Callback" is the implementation version of
 * the "paramcont2d/edit3_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 181-199). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit3_Callback(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit3_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit3 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit3 as text
     * %        str2double(get(hObject,'String')) returns contents of edit3 as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL)));
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
            0, mclVa(hObject, "hObject"), _mxarray29_, _mxarray26_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray31_, _mxarray33_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * handles.n=valor;
     */
    mlfIndexAssign(&handles, ".n", mclVv(valor, "valor"));
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
 * The function "Mparamcont2d_edit4_CreateFcn" is the implementation version of
 * the "paramcont2d/edit4_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 199-212). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit4_CreateFcn(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit4_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit4 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray22_, _mxarray24_, NULL));
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
            _mxarray22_,
            mlfNGet(1, _mxarray26_, _mxarray27_, NULL),
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
 * The function "Mparamcont2d_edit4_Callback" is the implementation version of
 * the "paramcont2d/edit4_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 212-230). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit4_Callback(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit4_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit4 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit4 as text
     * %        str2double(get(hObject,'String')) returns contents of edit4 as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL)));
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
            0, mclVa(hObject, "hObject"), _mxarray29_, _mxarray26_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray31_, _mxarray33_, NULL));
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
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mparamcont2d_edit5_CreateFcn" is the implementation version of
 * the "paramcont2d/edit5_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 230-243). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit5_CreateFcn(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit5_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit5 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray22_, _mxarray24_, NULL));
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
            _mxarray22_,
            mlfNGet(1, _mxarray26_, _mxarray27_, NULL),
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
 * The function "Mparamcont2d_edit5_Callback" is the implementation version of
 * the "paramcont2d/edit5_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 243-262). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit5_Callback(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit5_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit5 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit5 as text
     * %        str2double(get(hObject,'String')) returns contents of edit5 as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL)));
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
            0, mclVa(hObject, "hObject"), _mxarray29_, _mxarray26_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray31_, _mxarray33_, NULL));
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
     * 
     * % --- Executes during object creation, after setting all properties.
     */
}

/*
 * The function "Mparamcont2d_edit6_CreateFcn" is the implementation version of
 * the "paramcont2d/edit6_CreateFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 262-275). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit6_CreateFcn(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit6_CreateFcn(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit6 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray22_, _mxarray24_, NULL));
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
            _mxarray22_,
            mlfNGet(1, _mxarray26_, _mxarray27_, NULL),
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
 * The function "Mparamcont2d_edit6_Callback" is the implementation version of
 * the "paramcont2d/edit6_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\paramcont2d.m" (lines 275-296). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit6_Callback(hObject, eventdata, handles)
 */
static void Mparamcont2d_edit6_Callback(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_paramcont2d);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit6 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit6 as text
     * %        str2double(get(hObject,'String')) returns contents of edit6 as a double
     * 
     * valor=str2double(get(hObject,'String'));
     */
    mlfAssign(
      &valor,
      mlfStr2double(mlfNGet(1, mclVa(hObject, "hObject"), _mxarray29_, NULL)));
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
            0, mclVa(hObject, "hObject"), _mxarray29_, _mxarray26_, NULL));
        /*
         * errordlg('Input must be a number','Error');
         */
        mclAssignAns(
          &ans,
          mlfNErrordlg(0, mclAnsVarargout(), _mxarray31_, _mxarray33_, NULL));
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
     * 
     * 
     * 
     * 
     */
}
