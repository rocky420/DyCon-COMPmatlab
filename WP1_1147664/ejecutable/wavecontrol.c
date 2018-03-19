/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "wavecontrol.h"
#include "cont_exacto.h"
#include "exact_cont2d.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "libmatlbm.h"
#include "libmwsglm.h"
#include "stab_1d.h"
#include "stab_2d.h"
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

void InitializeModule_wavecontrol(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
}

void TerminateModule_wavecontrol(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static void mlfWavecontrol_wavecontrol_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  ...);
static void mlxWavecontrol_wavecontrol_OpeningFcn(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]);
static mxArray * mlfWavecontrol_wavecontrol_OutputFcn(mlfVarargoutList * varargout,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles);
static void mlxWavecontrol_wavecontrol_OutputFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]);
static void mlfWavecontrol_push_control_1d_Callback(mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles);
static void mlxWavecontrol_push_control_1d_Callback(int nlhs,
                                                    mxArray * plhs[],
                                                    int nrhs,
                                                    mxArray * prhs[]);
static void mlfWavecontrol_pushbutton6_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxWavecontrol_pushbutton6_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfWavecontrol_pushbutton7_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxWavecontrol_pushbutton7_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfWavecontrol_pushbutton8_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxWavecontrol_pushbutton8_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static void mlfWavecontrol_pushbutton9_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void mlxWavecontrol_pushbutton9_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]);
static mxArray * Mwavecontrol(int nargout_, mxArray * varargin);
static void Mwavecontrol_wavecontrol_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                mxArray * varargin);
static mxArray * Mwavecontrol_wavecontrol_OutputFcn(int nargout_,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles);
static void Mwavecontrol_push_control_1d_Callback(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles);
static void Mwavecontrol_pushbutton6_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mwavecontrol_pushbutton7_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mwavecontrol_pushbutton8_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void Mwavecontrol_pushbutton9_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);

static mexFunctionTableEntry local_function_table_[7]
  = { { "wavecontrol_OpeningFcn",
        mlxWavecontrol_wavecontrol_OpeningFcn, -4, 0, NULL },
      { "wavecontrol_OutputFcn",
        mlxWavecontrol_wavecontrol_OutputFcn, 3, -1, NULL },
      { "push_control_1d_Callback",
        mlxWavecontrol_push_control_1d_Callback, 3, 0, NULL },
      { "pushbutton6_Callback",
        mlxWavecontrol_pushbutton6_Callback, 3, 0, NULL },
      { "pushbutton7_Callback",
        mlxWavecontrol_pushbutton7_Callback, 3, 0, NULL },
      { "pushbutton8_Callback",
        mlxWavecontrol_pushbutton8_Callback, 3, 0, NULL },
      { "pushbutton9_Callback",
        mlxWavecontrol_pushbutton9_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_wavecontrol
  = { 7, local_function_table_ };

/*
 * The function "mlfNWavecontrol" contains the nargout interface for the
 * "wavecontrol" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\wavecontrol.m" (lines
 * 1-49). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNWavecontrol(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwavecontrol(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfWavecontrol" contains the normal interface for the
 * "wavecontrol" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\wavecontrol.m" (lines
 * 1-49). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfWavecontrol(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwavecontrol(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVWavecontrol" contains the void interface for the
 * "wavecontrol" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\wavecontrol.m" (lines
 * 1-49). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWavecontrol(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mwavecontrol(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxWavecontrol" contains the feval interface for the
 * "wavecontrol" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\wavecontrol.m" (lines
 * 1-49). The feval function calls the implementation version of wavecontrol
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWavecontrol(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mwavecontrol(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfWavecontrol_wavecontrol_OpeningFcn" contains the normal
 * interface for the "wavecontrol/wavecontrol_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 49-67). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfWavecontrol_wavecontrol_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mwavecontrol_wavecontrol_OpeningFcn(hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxWavecontrol_wavecontrol_OpeningFcn" contains the feval
 * interface for the "wavecontrol/wavecontrol_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 49-67). The
 * feval function calls the implementation version of
 * wavecontrol/wavecontrol_OpeningFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxWavecontrol_wavecontrol_OpeningFcn(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/wavecontrol_OpeningFcn Line: 4"
            "9 Column: 1 The function \"wavecontrol/wavecontrol_OpeningFcn\" "
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
    Mwavecontrol_wavecontrol_OpeningFcn(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfWavecontrol_wavecontrol_OutputFcn" contains the normal
 * interface for the "wavecontrol/wavecontrol_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 67-78). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWavecontrol_wavecontrol_OutputFcn(mlfVarargoutList * varargout,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mwavecontrol_wavecontrol_OutputFcn(
          nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxWavecontrol_wavecontrol_OutputFcn" contains the feval
 * interface for the "wavecontrol/wavecontrol_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 67-78). The
 * feval function calls the implementation version of
 * wavecontrol/wavecontrol_OutputFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxWavecontrol_wavecontrol_OutputFcn(int nlhs,
                                                 mxArray * plhs[],
                                                 int nrhs,
                                                 mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/wavecontrol_OutputFcn Line: 6"
            "7 Column: 1 The function \"wavecontrol/wavecontrol_OutputFcn\" "
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
      = Mwavecontrol_wavecontrol_OutputFcn(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfWavecontrol_push_control_1d_Callback" contains the normal
 * interface for the "wavecontrol/push_control_1d_Callback" M-function from
 * file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 78-87). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfWavecontrol_push_control_1d_Callback(mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mwavecontrol_push_control_1d_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxWavecontrol_push_control_1d_Callback" contains the feval
 * interface for the "wavecontrol/push_control_1d_Callback" M-function from
 * file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 78-87). The
 * feval function calls the implementation version of
 * wavecontrol/push_control_1d_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxWavecontrol_push_control_1d_Callback(int nlhs,
                                                    mxArray * plhs[],
                                                    int nrhs,
                                                    mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/push_control_1d_Callback Line: 7"
            "8 Column: 1 The function \"wavecontrol/push_control_1d_Callback\" "
            "was called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/push_control_1d_Callback Line: "
            "78 Column: 1 The function \"wavecontrol/push_control_1d_Callback"
            "\" was called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mwavecontrol_push_control_1d_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfWavecontrol_pushbutton6_Callback" contains the normal
 * interface for the "wavecontrol/pushbutton6_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 87-97). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfWavecontrol_pushbutton6_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mwavecontrol_pushbutton6_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxWavecontrol_pushbutton6_Callback" contains the feval
 * interface for the "wavecontrol/pushbutton6_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 87-97). The
 * feval function calls the implementation version of
 * wavecontrol/pushbutton6_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxWavecontrol_pushbutton6_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton6_Callback Line: 87"
            " Column: 1 The function \"wavecontrol/pushbutton6_Callback\" wa"
            "s called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton6_Callback Line: 8"
            "7 Column: 1 The function \"wavecontrol/pushbutton6_Callback\" "
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
    Mwavecontrol_pushbutton6_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfWavecontrol_pushbutton7_Callback" contains the normal
 * interface for the "wavecontrol/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 97-105). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfWavecontrol_pushbutton7_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mwavecontrol_pushbutton7_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxWavecontrol_pushbutton7_Callback" contains the feval
 * interface for the "wavecontrol/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 97-105). The
 * feval function calls the implementation version of
 * wavecontrol/pushbutton7_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxWavecontrol_pushbutton7_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton7_Callback Line: 97"
            " Column: 1 The function \"wavecontrol/pushbutton7_Callback\" wa"
            "s called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton7_Callback Line: 9"
            "7 Column: 1 The function \"wavecontrol/pushbutton7_Callback\" "
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
    Mwavecontrol_pushbutton7_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfWavecontrol_pushbutton8_Callback" contains the normal
 * interface for the "wavecontrol/pushbutton8_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 105-114). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfWavecontrol_pushbutton8_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mwavecontrol_pushbutton8_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxWavecontrol_pushbutton8_Callback" contains the feval
 * interface for the "wavecontrol/pushbutton8_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 105-114). The
 * feval function calls the implementation version of
 * wavecontrol/pushbutton8_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxWavecontrol_pushbutton8_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton8_Callback Line: 10"
            "5 Column: 1 The function \"wavecontrol/pushbutton8_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton8_Callback Line: 10"
            "5 Column: 1 The function \"wavecontrol/pushbutton8_Callback\" w"
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
    Mwavecontrol_pushbutton8_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfWavecontrol_pushbutton9_Callback" contains the normal
 * interface for the "wavecontrol/pushbutton9_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 114-132). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfWavecontrol_pushbutton9_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mwavecontrol_pushbutton9_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxWavecontrol_pushbutton9_Callback" contains the feval
 * interface for the "wavecontrol/pushbutton9_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 114-132). The
 * feval function calls the implementation version of
 * wavecontrol/pushbutton9_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxWavecontrol_pushbutton9_Callback(int nlhs,
                                                mxArray * plhs[],
                                                int nrhs,
                                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton9_Callback Line: 11"
            "4 Column: 1 The function \"wavecontrol/pushbutton9_Callback\" w"
            "as called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavecontrol/pushbutton9_Callback Line: 11"
            "4 Column: 1 The function \"wavecontrol/pushbutton9_Callback\" w"
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
    Mwavecontrol_pushbutton9_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mwavecontrol" is the implementation version of the
 * "wavecontrol" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\wavecontrol.m" (lines
 * 1-49). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = wavecontrol(varargin)
 */
static mxArray * Mwavecontrol(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % PRINCIPAL M-file for principal.fig
     * %      PRINCIPAL, by itself, creates a new PRINCIPAL or raises the existing
     * %      singleton*.
     * %
     * %      H = PRINCIPAL returns the handle to a new PRINCIPAL or the handle to
     * %      the existing singleton*.
     * %
     * %      PRINCIPAL('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in PRINCIPAL.M with the given input arguments.
     * %
     * %      PRINCIPAL('Property','Value',...) creates a new PRINCIPAL or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before principal_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to principal_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help principal
     * 
     * % Last Modified by GUIDE v2.5 17-Aug-2004 11:17:43
     * 
     * % Begin initialization code - DO NOT EDIT
     * 
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
        mxCreateString("wavecontrol"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxWavecontrol_wavecontrol_OpeningFcn, "wavecontrol_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxWavecontrol_wavecontrol_OutputFcn, "wavecontrol_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @wavecontrol_OpeningFcn, ...
     * 'gui_OutputFcn',  @wavecontrol_OutputFcn, ...
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
     * % --- Executes just before principal is made visible.
     */
}

/*
 * The function "Mwavecontrol_wavecontrol_OpeningFcn" is the implementation
 * version of the "wavecontrol/wavecontrol_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 49-67). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function wavecontrol_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mwavecontrol_wavecontrol_OpeningFcn(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles,
                                                mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    mclCopyArray(&varargin);
    /*
     * % This function has no output args, see OutputFcn.
     * % hObject    handle to figure
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * % varargin   command line arguments to principal (see VARARGIN)
     * 
     * % Choose default command line output for principal
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
    mxDestroyArray(ans);
    mxDestroyArray(varargin);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % UIWAIT makes principal wait for user response (see UIRESUME)
     * % uiwait(handles.figure1);
     * 
     * 
     * % --- Outputs from this function are returned to the command line.
     */
}

/*
 * The function "Mwavecontrol_wavecontrol_OutputFcn" is the implementation
 * version of the "wavecontrol/wavecontrol_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 67-78). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = wavecontrol_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mwavecontrol_wavecontrol_OutputFcn(int nargout_,
                                                    mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
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
     * % --- Executes on button press in push_control_1d.
     */
}

/*
 * The function "Mwavecontrol_push_control_1d_Callback" is the implementation
 * version of the "wavecontrol/push_control_1d_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 78-87). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function push_control_1d_Callback(hObject, eventdata, handles)
 */
static void Mwavecontrol_push_control_1d_Callback(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to push_control_1d (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * %run cont_exacto
     * cont_exacto
     */
    mclPrintAns(&ans, mlfNCont_exacto(0, mclAnsVarargout(), NULL));
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes on button press in pushbutton6.
     */
}

/*
 * The function "Mwavecontrol_pushbutton6_Callback" is the implementation
 * version of the "wavecontrol/pushbutton6_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 87-97). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton6_Callback(hObject, eventdata, handles)
 */
static void Mwavecontrol_pushbutton6_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pushbutton6 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * %run exact_cont2d
     * exact_cont2d
     */
    mclPrintAns(&ans, mlfNExact_cont2d(0, mclAnsVarargout(), NULL));
    mxDestroyArray(ans);
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
 * The function "Mwavecontrol_pushbutton7_Callback" is the implementation
 * version of the "wavecontrol/pushbutton7_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 97-105). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton7_Callback(hObject, eventdata, handles)
 */
static void Mwavecontrol_pushbutton7_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
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
     * % --- Executes on button press in pushbutton8.
     */
}

/*
 * The function "Mwavecontrol_pushbutton8_Callback" is the implementation
 * version of the "wavecontrol/pushbutton8_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 105-114). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton8_Callback(hObject, eventdata, handles)
 */
static void Mwavecontrol_pushbutton8_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pushbutton8 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * %run stab_1d 
     * stab_1d 
     */
    mclPrintAns(&ans, mlfNStab_1d(0, mclAnsVarargout(), NULL));
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --- Executes on button press in pushbutton9.
     */
}

/*
 * The function "Mwavecontrol_pushbutton9_Callback" is the implementation
 * version of the "wavecontrol/pushbutton9_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\wavecontrol.m" (lines 114-132). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function pushbutton9_Callback(hObject, eventdata, handles)
 */
static void Mwavecontrol_pushbutton9_Callback(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavecontrol);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to pushbutton9 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * %run stab_2d
     * stab_2d
     */
    mclPrintAns(&ans, mlfNStab_2d(0, mclAnsVarargout(), NULL));
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % % --------------------------------------------------------------------
     * % function About_Callback(hObject, eventdata, handles)
     * % % hObject    handle to About (see GCBO)
     * % % eventdata  reserved - to be defined in a future version of MATLAB
     * % % handles    structure with handles and user data (see GUIDATA)
     * % 
     * % run about
     * % %about
     * 
     * 
     */
}
