/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "error2.h"
#include "gui_mainfcn.h"
#include "guidata.h"
#include "libmatlbm.h"
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

void InitializeModule_error2(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
}

void TerminateModule_error2(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static void mlfError2_error2_OpeningFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles,
                                        ...);
static void mlxError2_error2_OpeningFcn(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static mxArray * mlfError2_error2_OutputFcn(mlfVarargoutList * varargout,
                                            mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void mlxError2_error2_OutputFcn(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]);
static void mlfError2_push_acep_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles);
static void mlxError2_push_acep_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static mxArray * Merror2(int nargout_, mxArray * varargin);
static void Merror2_error2_OpeningFcn(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles,
                                      mxArray * varargin);
static mxArray * Merror2_error2_OutputFcn(int nargout_,
                                          mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles);
static void Merror2_push_acep_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles);

static mexFunctionTableEntry local_function_table_[3]
  = { { "error2_OpeningFcn", mlxError2_error2_OpeningFcn, -4, 0, NULL },
      { "error2_OutputFcn", mlxError2_error2_OutputFcn, 3, -1, NULL },
      { "push_acep_Callback", mlxError2_push_acep_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_error2
  = { 3, local_function_table_ };

/*
 * The function "mlfNError2" contains the nargout interface for the "error2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 1-48). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNError2(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Merror2(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfError2" contains the normal interface for the "error2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 1-48). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfError2(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Merror2(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVError2" contains the void interface for the "error2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 1-48). The void
 * interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVError2(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Merror2(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxError2" contains the feval interface for the "error2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 1-48). The feval
 * function calls the implementation version of error2 through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxError2(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Merror2(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfError2_error2_OpeningFcn" contains the normal interface for
 * the "error2/error2_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 48-66). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfError2_error2_OpeningFcn(mxArray * hObject,
                                        mxArray * eventdata,
                                        mxArray * handles,
                                        ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Merror2_error2_OpeningFcn(hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxError2_error2_OpeningFcn" contains the feval interface for
 * the "error2/error2_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 48-66). The feval
 * function calls the implementation version of error2/error2_OpeningFcn
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxError2_error2_OpeningFcn(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: error2/error2_OpeningFcn Line: 48 C"
            "olumn: 1 The function \"error2/error2_OpeningFcn\" was ca"
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
    Merror2_error2_OpeningFcn(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfError2_error2_OutputFcn" contains the normal interface for
 * the "error2/error2_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 66-76). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfError2_error2_OutputFcn(mlfVarargoutList * varargout,
                                            mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Merror2_error2_OutputFcn(nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxError2_error2_OutputFcn" contains the feval interface for
 * the "error2/error2_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 66-76). The feval
 * function calls the implementation version of error2/error2_OutputFcn through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxError2_error2_OutputFcn(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: error2/error2_OutputFcn Line: 66 C"
            "olumn: 1 The function \"error2/error2_OutputFcn\" was ca"
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
    mplhs[0] = Merror2_error2_OutputFcn(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfError2_push_acep_Callback" contains the normal interface
 * for the "error2/push_acep_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 76-82). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfError2_push_acep_Callback(mxArray * hObject,
                                         mxArray * eventdata,
                                         mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Merror2_push_acep_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxError2_push_acep_Callback" contains the feval interface for
 * the "error2/push_acep_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 76-82). The feval
 * function calls the implementation version of error2/push_acep_Callback
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxError2_push_acep_Callback(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: error2/push_acep_Callback Line: 76 C"
            "olumn: 1 The function \"error2/push_acep_Callback\" was ca"
            "lled with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: error2/push_acep_Callback Line: 76 C"
            "olumn: 1 The function \"error2/push_acep_Callback\" was ca"
            "lled with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Merror2_push_acep_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Merror2" is the implementation version of the "error2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 1-48). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function varargout = error2(varargin)
 */
static mxArray * Merror2(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_error2);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % ERROR2 M-file for error2.fig
     * %      ERROR2, by itself, creates a new ERROR2 or raises the existing
     * %      singleton*.
     * %
     * %      H = ERROR2 returns the handle to a new ERROR2 or the handle to
     * %      the existing singleton*.
     * %
     * %      ERROR2('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in ERROR2.M with the given input arguments.
     * %
     * %      ERROR2('Property','Value',...) creates a new ERROR2 or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before error2_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to error2_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help error2
     * 
     * % Last Modified by GUIDE v2.5 21-May-2004 12:09:50
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
        mxCreateString("error2"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxError2_error2_OpeningFcn, "error2_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxError2_error2_OutputFcn, "error2_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @error2_OpeningFcn, ...
     * 'gui_OutputFcn',  @error2_OutputFcn, ...
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
     * % --- Executes just before error2 is made visible.
     */
}

/*
 * The function "Merror2_error2_OpeningFcn" is the implementation version of
 * the "error2/error2_OpeningFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 48-66). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function error2_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Merror2_error2_OpeningFcn(mxArray * hObject,
                                      mxArray * eventdata,
                                      mxArray * handles,
                                      mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_error2);
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
     * % varargin   command line arguments to error2 (see VARARGIN)
     * 
     * % Choose default command line output for error2
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
     * % UIWAIT makes error2 wait for user response (see UIRESUME)
     * uiwait(handles.figure1);
     */
    mclFeval(
      mclAnsVarargout(),
      mlxUiwait,
      mlfIndexRef(mclVa(handles, "handles"), ".figure1"),
      NULL);
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
 * The function "Merror2_error2_OutputFcn" is the implementation version of the
 * "error2/error2_OutputFcn" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 66-76). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function varargout = error2_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Merror2_error2_OutputFcn(int nargout_,
                                          mxArray * hObject,
                                          mxArray * eventdata,
                                          mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_error2);
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
     * % --- Executes on button press in push_acep.
     */
}

/*
 * The function "Merror2_push_acep_Callback" is the implementation version of
 * the "error2/push_acep_Callback" M-function from file "c:\documents and
 * settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\error2.m" (lines 76-82). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function push_acep_Callback(hObject, eventdata, handles)
 */
static void Merror2_push_acep_Callback(mxArray * hObject,
                                       mxArray * eventdata,
                                       mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_error2);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to push_acep (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * uiresume
     */
    mlfUiresume(NULL);
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
}
