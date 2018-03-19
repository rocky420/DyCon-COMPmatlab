/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "grahanimstab2d.h"
#include "animstab2d.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "libmatlbm.h"
#include "libmwsglm.h"
#include "stop1.h"
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

static mxChar _array15_[15] = { 'F', 'o', 'r', 'e', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray14_;

static double _array17_[3] = { 1.0, 0.0, 1.0 };
static mxArray * _mxarray16_;

void InitializeModule_grahanimstab2d(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
    _mxarray14_ = mclInitializeString(15, _array15_);
    _mxarray16_ = mclInitializeDoubleVector(1, 3, _array17_);
}

void TerminateModule_grahanimstab2d(void) {
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

static void mlfGrahanimstab2d_grahanimstab2d_OpeningFcn(mxArray * hObject,
                                                        mxArray * eventdata,
                                                        mxArray * handles,
                                                        ...);
static void mlxGrahanimstab2d_grahanimstab2d_OpeningFcn(int nlhs,
                                                        mxArray * plhs[],
                                                        int nrhs,
                                                        mxArray * prhs[]);
static mxArray * mlfGrahanimstab2d_grahanimstab2d_OutputFcn(mlfVarargoutList * varargout,
                                                            mxArray * hObject,
                                                            mxArray * eventdata,
                                                            mxArray * handles);
static void mlxGrahanimstab2d_grahanimstab2d_OutputFcn(int nlhs,
                                                       mxArray * plhs[],
                                                       int nrhs,
                                                       mxArray * prhs[]);
static void mlfGrahanimstab2d_stop1_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxGrahanimstab2d_stop1_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfGrahanimstab2d_Untitled_2_Callback(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles);
static void mlxGrahanimstab2d_Untitled_2_Callback(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]);
static mxArray * Mgrahanimstab2d(int nargout_, mxArray * varargin);
static void Mgrahanimstab2d_grahanimstab2d_OpeningFcn(mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles,
                                                      mxArray * varargin);
static mxArray * Mgrahanimstab2d_grahanimstab2d_OutputFcn(int nargout_,
                                                          mxArray * hObject,
                                                          mxArray * eventdata,
                                                          mxArray * handles);
static void Mgrahanimstab2d_stop1_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Mgrahanimstab2d_Untitled_2_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);

static mexFunctionTableEntry local_function_table_[4]
  = { { "grahanimstab2d_OpeningFcn",
        mlxGrahanimstab2d_grahanimstab2d_OpeningFcn, -4, 0, NULL },
      { "grahanimstab2d_OutputFcn",
        mlxGrahanimstab2d_grahanimstab2d_OutputFcn, 3, -1, NULL },
      { "stop1_Callback", mlxGrahanimstab2d_stop1_Callback, 3, 0, NULL },
      { "Untitled_2_Callback",
        mlxGrahanimstab2d_Untitled_2_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_grahanimstab2d
  = { 4, local_function_table_ };

/*
 * The function "mlfNGrahanimstab2d" contains the nargout interface for the
 * "grahanimstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines
 * 1-48). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNGrahanimstab2d(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mgrahanimstab2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfGrahanimstab2d" contains the normal interface for the
 * "grahanimstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines
 * 1-48). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfGrahanimstab2d(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mgrahanimstab2d(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVGrahanimstab2d" contains the void interface for the
 * "grahanimstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines
 * 1-48). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVGrahanimstab2d(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mgrahanimstab2d(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxGrahanimstab2d" contains the feval interface for the
 * "grahanimstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines
 * 1-48). The feval function calls the implementation version of grahanimstab2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxGrahanimstab2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mgrahanimstab2d(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfGrahanimstab2d_grahanimstab2d_OpeningFcn" contains the
 * normal interface for the "grahanimstab2d/grahanimstab2d_OpeningFcn"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 48-86).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfGrahanimstab2d_grahanimstab2d_OpeningFcn(mxArray * hObject,
                                                        mxArray * eventdata,
                                                        mxArray * handles,
                                                        ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Mgrahanimstab2d_grahanimstab2d_OpeningFcn(
      hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxGrahanimstab2d_grahanimstab2d_OpeningFcn" contains the
 * feval interface for the "grahanimstab2d/grahanimstab2d_OpeningFcn"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 48-86). The
 * feval function calls the implementation version of
 * grahanimstab2d/grahanimstab2d_OpeningFcn through this function. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlxGrahanimstab2d_grahanimstab2d_OpeningFcn(int nlhs,
                                                        mxArray * plhs[],
                                                        int nrhs,
                                                        mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grahanimstab2d/grahanimstab2d"
            "_OpeningFcn Line: 48 Column: 1 The function \"graha"
            "nimstab2d/grahanimstab2d_OpeningFcn\" was called wi"
            "th more than the declared number of outputs (0)."),
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
    Mgrahanimstab2d_grahanimstab2d_OpeningFcn(
      mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfGrahanimstab2d_grahanimstab2d_OutputFcn" contains the
 * normal interface for the "grahanimstab2d/grahanimstab2d_OutputFcn"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 86-97).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfGrahanimstab2d_grahanimstab2d_OutputFcn(mlfVarargoutList * varargout,
                                                            mxArray * hObject,
                                                            mxArray * eventdata,
                                                            mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mgrahanimstab2d_grahanimstab2d_OutputFcn(
          nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxGrahanimstab2d_grahanimstab2d_OutputFcn" contains the feval
 * interface for the "grahanimstab2d/grahanimstab2d_OutputFcn" M-function from
 * file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 86-97). The
 * feval function calls the implementation version of
 * grahanimstab2d/grahanimstab2d_OutputFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxGrahanimstab2d_grahanimstab2d_OutputFcn(int nlhs,
                                                       mxArray * plhs[],
                                                       int nrhs,
                                                       mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grahanimstab2d/grahanimstab2"
            "d_OutputFcn Line: 86 Column: 1 The function \"grah"
            "animstab2d/grahanimstab2d_OutputFcn\" was called w"
            "ith more than the declared number of inputs (3)."),
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
      = Mgrahanimstab2d_grahanimstab2d_OutputFcn(
          nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfGrahanimstab2d_stop1_Callback" contains the normal
 * interface for the "grahanimstab2d/stop1_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 97-105).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfGrahanimstab2d_stop1_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mgrahanimstab2d_stop1_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxGrahanimstab2d_stop1_Callback" contains the feval interface
 * for the "grahanimstab2d/stop1_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 97-105).
 * The feval function calls the implementation version of
 * grahanimstab2d/stop1_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxGrahanimstab2d_stop1_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grahanimstab2d/stop1_Callback Line: 97 "
            "Column: 1 The function \"grahanimstab2d/stop1_Callback\" was "
            "called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grahanimstab2d/stop1_Callback Line: 97"
            " Column: 1 The function \"grahanimstab2d/stop1_Callback\" wa"
            "s called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mgrahanimstab2d_stop1_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfGrahanimstab2d_Untitled_2_Callback" contains the normal
 * interface for the "grahanimstab2d/Untitled_2_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 105-113).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfGrahanimstab2d_Untitled_2_Callback(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Mgrahanimstab2d_Untitled_2_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxGrahanimstab2d_Untitled_2_Callback" contains the feval
 * interface for the "grahanimstab2d/Untitled_2_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 105-113).
 * The feval function calls the implementation version of
 * grahanimstab2d/Untitled_2_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxGrahanimstab2d_Untitled_2_Callback(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grahanimstab2d/Untitled_2_Callback Line: 1"
            "05 Column: 1 The function \"grahanimstab2d/Untitled_2_Callback\""
            " was called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grahanimstab2d/Untitled_2_Callback Line: 1"
            "05 Column: 1 The function \"grahanimstab2d/Untitled_2_Callback\""
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
    Mgrahanimstab2d_Untitled_2_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mgrahanimstab2d" is the implementation version of the
 * "grahanimstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines
 * 1-48). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = grahanimstab2d(varargin)
 */
static mxArray * Mgrahanimstab2d(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grahanimstab2d);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % GRAHANIMSTAB2D M-file for grahanimstab2d.fig
     * %      GRAHANIMSTAB2D, by itself, creates a new GRAHANIMSTAB2D or raises the existing
     * %      singleton*.
     * %
     * %      H = GRAHANIMSTAB2D returns the handle to a new GRAHANIMSTAB2D or the handle to
     * %      the existing singleton*.
     * %
     * %      GRAHANIMSTAB2D('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in GRAHANIMSTAB2D.M with the given input arguments.
     * %
     * %      GRAHANIMSTAB2D('Property','Value',...) creates a new GRAHANIMSTAB2D or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before grahanimstab2d_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to grahanimstab2d_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help grahanimstab2d
     * 
     * % Last Modified by GUIDE v2.5 11-Apr-2005 19:15:26
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
        mxCreateString("grahanimstab2d"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxGrahanimstab2d_grahanimstab2d_OpeningFcn,
          "grahanimstab2d_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxGrahanimstab2d_grahanimstab2d_OutputFcn,
          "grahanimstab2d_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @grahanimstab2d_OpeningFcn, ...
     * 'gui_OutputFcn',  @grahanimstab2d_OutputFcn, ...
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
     * % --- Executes just before grahanimstab2d is made visible.
     */
}

/*
 * The function "Mgrahanimstab2d_grahanimstab2d_OpeningFcn" is the
 * implementation version of the "grahanimstab2d/grahanimstab2d_OpeningFcn"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 48-86). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function grahanimstab2d_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Mgrahanimstab2d_grahanimstab2d_OpeningFcn(mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles,
                                                      mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grahanimstab2d);
    mxArray * solu = NULL;
    mxArray * ans = NULL;
    mxArray * datos = NULL;
    mxArray * h = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    mclCopyArray(&varargin);
    /*
     * % This function has no output args, see OutputFcn.
     * % hObject    handle to figure
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * % varargin   command line arguments to grahanimstab2d (see VARARGIN)
     * 
     * % Choose default command line output for grahanimstab2d
     * handles.output = hObject;
     */
    mlfIndexAssign(&handles, ".output", mclVa(hObject, "hObject"));
    /*
     * 
     * h=uimenu('ForegroundColor',[1 0 1])
     */
    mlfAssign(&h, mlfNUimenu(1, _mxarray14_, _mxarray16_, NULL));
    mclPrintArray(mclVv(h, "h"), "h");
    /*
     * 
     * % UIWAIT makes grahanimstab2d wait for user response (see UIRESUME)
     * % uiwait(handles.grahanimstab2d);
     * 
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
     * handles.coeffdamp=datos.coeffdamp;
     */
    mlfIndexAssign(
      &handles, ".coeffdamp", mlfIndexRef(mclVv(datos, "datos"), ".coeffdamp"));
    /*
     * handles.dampband=datos.dampband;
     */
    mlfIndexAssign(
      &handles, ".dampband", mlfIndexRef(mclVv(datos, "datos"), ".dampband"));
    /*
     * handles.viscosity=datos.viscosity;
     */
    mlfIndexAssign(
      &handles, ".viscosity", mlfIndexRef(mclVv(datos, "datos"), ".viscosity"));
    /*
     * handles.u0=datos.u0;
     */
    mlfIndexAssign(&handles, ".u0", mlfIndexRef(mclVv(datos, "datos"), ".u0"));
    /*
     * handles.u1=datos.u1;
     */
    mlfIndexAssign(&handles, ".u1", mlfIndexRef(mclVv(datos, "datos"), ".u1"));
    /*
     * handles.axes_sol=datos.axes_sol;
     */
    mlfIndexAssign(
      &handles, ".axes_sol", mlfIndexRef(mclVv(datos, "datos"), ".axes_sol"));
    /*
     * 
     * handles.output = hObject;
     */
    mlfIndexAssign(&handles, ".output", mclVa(hObject, "hObject"));
    /*
     * 
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    /*
     * 
     * solu=animstab2d(handles.a,handles.b,handles.n,handles.mu,handles.T,handles.coeffdamp, ...
     */
    mlfAssign(
      &solu,
      mclFeval(
        mclValueVarargout(),
        mlxAnimstab2d,
        mlfIndexRef(mclVa(handles, "handles"), ".a"),
        mlfIndexRef(mclVa(handles, "handles"), ".b"),
        mlfIndexRef(mclVa(handles, "handles"), ".n"),
        mlfIndexRef(mclVa(handles, "handles"), ".mu"),
        mlfIndexRef(mclVa(handles, "handles"), ".T"),
        mlfIndexRef(mclVa(handles, "handles"), ".coeffdamp"),
        mlfIndexRef(mclVa(handles, "handles"), ".dampband"),
        mlfIndexRef(mclVa(handles, "handles"), ".viscosity"),
        mlfIndexRef(mclVa(handles, "handles"), ".u0"),
        mlfIndexRef(mclVa(handles, "handles"), ".u1"),
        mlfIndexRef(mclVa(handles, "handles"), ".axes1"),
        mlfIndexRef(mclVa(handles, "handles"), ".axes3"),
        mlfIndexRef(mclVa(handles, "handles"), ".axes2"),
        NULL));
    mxDestroyArray(h);
    mxDestroyArray(datos);
    mxDestroyArray(ans);
    mxDestroyArray(solu);
    mxDestroyArray(varargin);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * handles.dampband,handles.viscosity,handles.u0,handles.u1,handles.axes1,handles.axes3,handles.axes2);
     * 
     * 
     * % --- Outputs from this function are returned to the command line.
     */
}

/*
 * The function "Mgrahanimstab2d_grahanimstab2d_OutputFcn" is the
 * implementation version of the "grahanimstab2d/grahanimstab2d_OutputFcn"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 86-97). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = grahanimstab2d_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Mgrahanimstab2d_grahanimstab2d_OutputFcn(int nargout_,
                                                          mxArray * hObject,
                                                          mxArray * eventdata,
                                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grahanimstab2d);
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
     * % --------------------------------------------------------------------
     */
}

/*
 * The function "Mgrahanimstab2d_stop1_Callback" is the implementation version
 * of the "grahanimstab2d/stop1_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 97-105). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function stop1_Callback(hObject, eventdata, handles)
 */
static void Mgrahanimstab2d_stop1_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grahanimstab2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to stop1 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * stop1
     */
    mclPrintAns(&ans, mlfNStop1(0, mclAnsVarargout(), NULL));
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % --------------------------------------------------------------------
     */
}

/*
 * The function "Mgrahanimstab2d_Untitled_2_Callback" is the implementation
 * version of the "grahanimstab2d/Untitled_2_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grahanimstab2d.m" (lines 105-113).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function Untitled_2_Callback(hObject, eventdata, handles)
 */
static void Mgrahanimstab2d_Untitled_2_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grahanimstab2d);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to Untitled_2 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * %run exit1
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
