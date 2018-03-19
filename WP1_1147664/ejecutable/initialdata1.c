/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "initialdata1.h"
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
static mxArray * _mxarray14_;
static mxArray * _mxarray15_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;
static mxArray * _mxarray24_;
static mxArray * _mxarray25_;

static mxChar _array27_[15] = { 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray26_;

static mxChar _array29_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray28_;
static mxArray * _mxarray30_;

static mxChar _array32_[31] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray31_;

static mxChar _array34_[6] = { 'S', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray33_;

static mxChar _array36_[9] = { 's', 'i', 'n', '(', 'p', 'i', '*', 'x', ')' };
static mxArray * _mxarray35_;

static mxChar _array38_[13] = { '-', 'p', 'i', '*', 's', 'i', 'n',
                                '(', 'p', 'i', '*', 'x', ')' };
static mxArray * _mxarray37_;

void InitializeModule_initialdata1(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(8, _array2_);
    _mxarray3_ = mclInitializeString(13, _array4_);
    _mxarray5_ = mclInitializeString(14, _array6_);
    _mxarray7_ = mclInitializeString(13, _array8_);
    _mxarray9_ = mclInitializeString(13, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(12, _array13_);
    _mxarray14_ = mclInitializeDouble(2.0);
    _mxarray15_ = mclInitializeDouble(3.0);
    _mxarray16_ = mclInitializeDouble(4.0);
    _mxarray17_ = mclInitializeDouble(5.0);
    _mxarray18_ = mclInitializeDouble(6.0);
    _mxarray19_ = mclInitializeDouble(7.0);
    _mxarray20_ = mclInitializeDouble(8.0);
    _mxarray21_ = mclInitializeDouble(9.0);
    _mxarray22_ = mclInitializeDouble(10.0);
    _mxarray23_ = mclInitializeDouble(11.0);
    _mxarray24_ = mclInitializeDouble(12.0);
    _mxarray25_ = mclInitializeDouble(13.0);
    _mxarray26_ = mclInitializeString(15, _array27_);
    _mxarray28_ = mclInitializeString(5, _array29_);
    _mxarray30_ = mclInitializeDouble(0.0);
    _mxarray31_ = mclInitializeString(31, _array32_);
    _mxarray33_ = mclInitializeString(6, _array34_);
    _mxarray35_ = mclInitializeString(9, _array36_);
    _mxarray37_ = mclInitializeString(13, _array38_);
}

void TerminateModule_initialdata1(void) {
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
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
    mxDestroyArray(_mxarray15_);
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

static void mlfInitialdata1_initialdata1_OpeningFcn(mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles,
                                                    ...);
static void mlxInitialdata1_initialdata1_OpeningFcn(int nlhs,
                                                    mxArray * plhs[],
                                                    int nrhs,
                                                    mxArray * prhs[]);
static mxArray * mlfInitialdata1_initialdata1_OutputFcn(mlfVarargoutList * varargout,
                                                        mxArray * hObject,
                                                        mxArray * eventdata,
                                                        mxArray * handles);
static void mlxInitialdata1_initialdata1_OutputFcn(int nlhs,
                                                   mxArray * plhs[],
                                                   int nrhs,
                                                   mxArray * prhs[]);
static void mlfInitialdata1_push_aceptar_Callback(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles);
static void mlxInitialdata1_push_aceptar_Callback(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]);
static void mlfInitialdata1_edit_u0_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxInitialdata1_edit_u0_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfInitialdata1_edit_u0_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxInitialdata1_edit_u0_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static void mlfInitialdata1_edit_u1_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles);
static void mlxInitialdata1_edit_u1_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]);
static void mlfInitialdata1_edit_u1_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles);
static void mlxInitialdata1_edit_u1_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]);
static mxArray * Minitialdata1(int nargout_, mxArray * varargin);
static void Minitialdata1_initialdata1_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  mxArray * varargin);
static mxArray * Minitialdata1_initialdata1_OutputFcn(int nargout_,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles);
static void Minitialdata1_push_aceptar_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles);
static void Minitialdata1_edit_u0_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Minitialdata1_edit_u0_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);
static void Minitialdata1_edit_u1_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles);
static void Minitialdata1_edit_u1_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles);

static mexFunctionTableEntry local_function_table_[7]
  = { { "initialdata1_OpeningFcn",
        mlxInitialdata1_initialdata1_OpeningFcn, -4, 0, NULL },
      { "initialdata1_OutputFcn",
        mlxInitialdata1_initialdata1_OutputFcn, 3, -1, NULL },
      { "push_aceptar_Callback",
        mlxInitialdata1_push_aceptar_Callback, 3, 0, NULL },
      { "edit_u0_CreateFcn", mlxInitialdata1_edit_u0_CreateFcn, 3, 0, NULL },
      { "edit_u0_Callback", mlxInitialdata1_edit_u0_Callback, 3, 0, NULL },
      { "edit_u1_CreateFcn", mlxInitialdata1_edit_u1_CreateFcn, 3, 0, NULL },
      { "edit_u1_Callback", mlxInitialdata1_edit_u1_Callback, 3, 0, NULL } };

_mexLocalFunctionTable _local_function_table_initialdata1
  = { 7, local_function_table_ };

/*
 * The function "mlfNInitialdata1" contains the nargout interface for the
 * "initialdata1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\initialdata1.m" (lines
 * 1-48). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNInitialdata1(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Minitialdata1(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfInitialdata1" contains the normal interface for the
 * "initialdata1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\initialdata1.m" (lines
 * 1-48). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfInitialdata1(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Minitialdata1(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVInitialdata1" contains the void interface for the
 * "initialdata1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\initialdata1.m" (lines
 * 1-48). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVInitialdata1(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Minitialdata1(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxInitialdata1" contains the feval interface for the
 * "initialdata1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\initialdata1.m" (lines
 * 1-48). The feval function calls the implementation version of initialdata1
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxInitialdata1(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Minitialdata1(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfInitialdata1_initialdata1_OpeningFcn" contains the normal
 * interface for the "initialdata1/initialdata1_OpeningFcn" M-function from
 * file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 48-84). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static void mlfInitialdata1_initialdata1_OpeningFcn(mxArray * hObject,
                                                    mxArray * eventdata,
                                                    mxArray * handles,
                                                    ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, handles, 0);
    mlfEnterNewContext(0, -4, hObject, eventdata, handles, varargin);
    Minitialdata1_initialdata1_OpeningFcn(
      hObject, eventdata, handles, varargin);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxInitialdata1_initialdata1_OpeningFcn" contains the feval
 * interface for the "initialdata1/initialdata1_OpeningFcn" M-function from
 * file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 48-84). The
 * feval function calls the implementation version of
 * initialdata1/initialdata1_OpeningFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxInitialdata1_initialdata1_OpeningFcn(int nlhs,
                                                    mxArray * plhs[],
                                                    int nrhs,
                                                    mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/initialdata1_OpeningFcn Line: 4"
            "8 Column: 1 The function \"initialdata1/initialdata1_OpeningFcn\" "
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
    Minitialdata1_initialdata1_OpeningFcn(
      mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mxDestroyArray(mprhs[3]);
}

/*
 * The function "mlfInitialdata1_initialdata1_OutputFcn" contains the normal
 * interface for the "initialdata1/initialdata1_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 84-108). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfInitialdata1_initialdata1_OutputFcn(mlfVarargoutList * varargout,
                                                        mxArray * hObject,
                                                        mxArray * eventdata,
                                                        mxArray * handles) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Minitialdata1_initialdata1_OutputFcn(
          nargout, hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxInitialdata1_initialdata1_OutputFcn" contains the feval
 * interface for the "initialdata1/initialdata1_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 84-108). The
 * feval function calls the implementation version of
 * initialdata1/initialdata1_OutputFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxInitialdata1_initialdata1_OutputFcn(int nlhs,
                                                   mxArray * plhs[],
                                                   int nrhs,
                                                   mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/initialdata1_OutputFcn Line: 8"
            "4 Column: 1 The function \"initialdata1/initialdata1_OutputFcn\" "
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
      = Minitialdata1_initialdata1_OutputFcn(
          nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfInitialdata1_push_aceptar_Callback" contains the normal
 * interface for the "initialdata1/push_aceptar_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 108-117).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfInitialdata1_push_aceptar_Callback(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Minitialdata1_push_aceptar_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxInitialdata1_push_aceptar_Callback" contains the feval
 * interface for the "initialdata1/push_aceptar_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 108-117). The
 * feval function calls the implementation version of
 * initialdata1/push_aceptar_Callback through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxInitialdata1_push_aceptar_Callback(int nlhs,
                                                  mxArray * plhs[],
                                                  int nrhs,
                                                  mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/push_aceptar_Callback Line: 1"
            "08 Column: 1 The function \"initialdata1/push_aceptar_Callback\""
            " was called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/push_aceptar_Callback Line: 1"
            "08 Column: 1 The function \"initialdata1/push_aceptar_Callback\""
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
    Minitialdata1_push_aceptar_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfInitialdata1_edit_u0_CreateFcn" contains the normal
 * interface for the "initialdata1/edit_u0_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 117-132).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfInitialdata1_edit_u0_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Minitialdata1_edit_u0_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxInitialdata1_edit_u0_CreateFcn" contains the feval
 * interface for the "initialdata1/edit_u0_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 117-132). The
 * feval function calls the implementation version of
 * initialdata1/edit_u0_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxInitialdata1_edit_u0_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u0_CreateFcn Line: 117"
            " Column: 1 The function \"initialdata1/edit_u0_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u0_CreateFcn Line: 11"
            "7 Column: 1 The function \"initialdata1/edit_u0_CreateFcn\" w"
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
    Minitialdata1_edit_u0_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfInitialdata1_edit_u0_Callback" contains the normal
 * interface for the "initialdata1/edit_u0_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 132-149).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfInitialdata1_edit_u0_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Minitialdata1_edit_u0_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxInitialdata1_edit_u0_Callback" contains the feval interface
 * for the "initialdata1/edit_u0_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 132-149). The
 * feval function calls the implementation version of
 * initialdata1/edit_u0_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxInitialdata1_edit_u0_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u0_Callback Line: 132"
            " Column: 1 The function \"initialdata1/edit_u0_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u0_Callback Line: 132"
            " Column: 1 The function \"initialdata1/edit_u0_Callback\" was"
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
    Minitialdata1_edit_u0_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfInitialdata1_edit_u1_CreateFcn" contains the normal
 * interface for the "initialdata1/edit_u1_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 149-164).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfInitialdata1_edit_u1_CreateFcn(mxArray * hObject,
                                              mxArray * eventdata,
                                              mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Minitialdata1_edit_u1_CreateFcn(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxInitialdata1_edit_u1_CreateFcn" contains the feval
 * interface for the "initialdata1/edit_u1_CreateFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 149-164). The
 * feval function calls the implementation version of
 * initialdata1/edit_u1_CreateFcn through this function. This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static void mlxInitialdata1_edit_u1_CreateFcn(int nlhs,
                                              mxArray * plhs[],
                                              int nrhs,
                                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u1_CreateFcn Line: 149"
            " Column: 1 The function \"initialdata1/edit_u1_CreateFcn\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u1_CreateFcn Line: 14"
            "9 Column: 1 The function \"initialdata1/edit_u1_CreateFcn\" w"
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
    Minitialdata1_edit_u1_CreateFcn(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfInitialdata1_edit_u1_Callback" contains the normal
 * interface for the "initialdata1/edit_u1_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 164-179).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfInitialdata1_edit_u1_Callback(mxArray * hObject,
                                             mxArray * eventdata,
                                             mxArray * handles) {
    mlfEnterNewContext(0, 3, hObject, eventdata, handles);
    Minitialdata1_edit_u1_Callback(hObject, eventdata, handles);
    mlfRestorePreviousContext(0, 3, hObject, eventdata, handles);
}

/*
 * The function "mlxInitialdata1_edit_u1_Callback" contains the feval interface
 * for the "initialdata1/edit_u1_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 164-179). The
 * feval function calls the implementation version of
 * initialdata1/edit_u1_Callback through this function. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxInitialdata1_edit_u1_Callback(int nlhs,
                                             mxArray * plhs[],
                                             int nrhs,
                                             mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u1_Callback Line: 164"
            " Column: 1 The function \"initialdata1/edit_u1_Callback\" was"
            " called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: initialdata1/edit_u1_Callback Line: 164"
            " Column: 1 The function \"initialdata1/edit_u1_Callback\" was"
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
    Minitialdata1_edit_u1_Callback(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Minitialdata1" is the implementation version of the
 * "initialdata1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\initialdata1.m" (lines
 * 1-48). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = initialdata1(varargin)
 */
static mxArray * Minitialdata1(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * ans = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_State = NULL;
    mxArray * gui_Singleton = NULL;
    mclCopyArray(&varargin);
    /*
     * % INITIALDATA1 M-file for initialdata1.fig
     * %      INITIALDATA1, by itself, creates a new INITIALDATA1 or raises the existing
     * %      singleton*.
     * %
     * %      H = INITIALDATA1 returns the handle to a new INITIALDATA1 or the handle to
     * %      the existing singleton*.
     * %
     * %      INITIALDATA1('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in INITIALDATA1.M with the given input arguments.
     * %
     * %      INITIALDATA1('Property','Value',...) creates a new INITIALDATA1 or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before initialdata1_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to initialdata1_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * %
     * % See also: GUIDE, GUIDATA, GUIHANDLES
     * 
     * % Edit the above text to modify the response to help initialdata1
     * 
     * % Last Modified by GUIDE v2.5 07-Jul-2005 22:36:18
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
        mxCreateString("initialdata1"),
        _mxarray3_,
        mclVv(gui_Singleton, "gui_Singleton"),
        _mxarray5_,
        mclCreateSimpleFunctionHandle(
          mlxInitialdata1_initialdata1_OpeningFcn, "initialdata1_OpeningFcn"),
        _mxarray7_,
        mclCreateSimpleFunctionHandle(
          mlxInitialdata1_initialdata1_OutputFcn, "initialdata1_OutputFcn"),
        _mxarray9_,
        _mxarray11_,
        _mxarray12_,
        _mxarray11_,
        NULL));
    /*
     * 'gui_Singleton',  gui_Singleton, ...
     * 'gui_OpeningFcn', @initialdata1_OpeningFcn, ...
     * 'gui_OutputFcn',  @initialdata1_OutputFcn, ...
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
     * % --- Executes just before initialdata1 is made visible.
     */
}

/*
 * The function "Minitialdata1_initialdata1_OpeningFcn" is the implementation
 * version of the "initialdata1/initialdata1_OpeningFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 48-84). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function initialdata1_OpeningFcn(hObject, eventdata, handles, varargin)
 */
static void Minitialdata1_initialdata1_OpeningFcn(mxArray * hObject,
                                                  mxArray * eventdata,
                                                  mxArray * handles,
                                                  mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
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
     * % varargin   command line arguments to initialdata1 (see VARARGIN)
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
     * handles.u0=datos.u0;
     */
    mlfIndexAssign(&handles, ".u0", mlfIndexRef(mclVv(datos, "datos"), ".u0"));
    /*
     * handles.u1=datos.u1;
     */
    mlfIndexAssign(&handles, ".u1", mlfIndexRef(mclVv(datos, "datos"), ".u1"));
    /*
     * handles.x=datos.x;
     */
    mlfIndexAssign(&handles, ".x", mlfIndexRef(mclVv(datos, "datos"), ".x"));
    /*
     * 
     * % set(handles.edit_u0,'string',datos.gamma);
     * % set(handles.edit_u1,'string',datos.masa);
     * 
     * 
     * % Choose default command line output for initialdata1
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
     * % UIWAIT makes initialdata1 wait for user response (see UIRESUME)
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
 * The function "Minitialdata1_initialdata1_OutputFcn" is the implementation
 * version of the "initialdata1/initialdata1_OutputFcn" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 84-108). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = initialdata1_OutputFcn(hObject, eventdata, handles)
 */
static mxArray * Minitialdata1_initialdata1_OutputFcn(int nargout_,
                                                      mxArray * hObject,
                                                      mxArray * eventdata,
                                                      mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
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
      _mxarray14_,
      mlfIndexRef(mclVa(handles, "handles"), ".n"));
    /*
     * varargout{3} = handles.mu;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray15_,
      mlfIndexRef(mclVa(handles, "handles"), ".mu"));
    /*
     * varargout{4} = handles.a;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray16_,
      mlfIndexRef(mclVa(handles, "handles"), ".a"));
    /*
     * varargout{5} = handles.b;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray17_,
      mlfIndexRef(mclVa(handles, "handles"), ".b"));
    /*
     * varargout{6} = handles.T;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray18_,
      mlfIndexRef(mclVa(handles, "handles"), ".T"));
    /*
     * varargout{7} = handles.eps;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray19_,
      mlfIndexRef(mclVa(handles, "handles"), ".eps"));
    /*
     * varargout{8} = handles.beta;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray20_,
      mlfIndexRef(mclVa(handles, "handles"), ".beta"));
    /*
     * varargout{9} = handles.gamma;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray21_,
      mlfIndexRef(mclVa(handles, "handles"), ".gamma"));
    /*
     * varargout{10} = handles.masa;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray22_,
      mlfIndexRef(mclVa(handles, "handles"), ".masa"));
    /*
     * varargout{11} = handles.u0;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray23_,
      mlfIndexRef(mclVa(handles, "handles"), ".u0"));
    /*
     * varargout{12} = handles.u1;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray24_,
      mlfIndexRef(mclVa(handles, "handles"), ".u1"));
    /*
     * varargout{13} = handles.x;
     */
    mlfIndexAssign(
      &varargout,
      "{?}",
      _mxarray25_,
      mlfIndexRef(mclVa(handles, "handles"), ".x"));
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
    /*
     * 
     * 
     * % --- Executes on button press in push_aceptar.
     */
}

/*
 * The function "Minitialdata1_push_aceptar_Callback" is the implementation
 * version of the "initialdata1/push_aceptar_Callback" M-function from file
 * "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 108-117). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function push_aceptar_Callback(hObject, eventdata, handles)
 */
static void Minitialdata1_push_aceptar_Callback(mxArray * hObject,
                                                mxArray * eventdata,
                                                mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
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
 * The function "Minitialdata1_edit_u0_CreateFcn" is the implementation version
 * of the "initialdata1/edit_u0_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 117-132). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_u0_CreateFcn(hObject, eventdata, handles)
 */
static void Minitialdata1_edit_u0_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_u0 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray26_, _mxarray28_, NULL));
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
            _mxarray26_,
            mlfNGet(1, _mxarray30_, _mxarray31_, NULL),
            NULL));
    /*
     * end
     */
    }
    /*
     * 
     * set(hObject,'String','sin(pi*x)');
     */
    mclAssignAns(
      &ans,
      mlfNSet(0, mclVa(hObject, "hObject"), _mxarray33_, _mxarray35_, NULL));
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
 * The function "Minitialdata1_edit_u0_Callback" is the implementation version
 * of the "initialdata1/edit_u0_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 132-149). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_u0_Callback(hObject, eventdata, handles)
 */
static void Minitialdata1_edit_u0_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mxArray * x = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_u0 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_u0 as text
     * %        str2double(get(hObject,'String')) returns contents of edit_u0 as a double
     * x=handles.x;
     */
    mlfAssign(&x, mlfIndexRef(mclVa(handles, "handles"), ".x"));
    /*
     * valor=get(hObject,'String');
     */
    mlfAssign(&valor, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray33_, NULL));
    /*
     * 
     * valor=vectorize(valor);
     */
    mlfAssign(&valor, mlfVectorize(mclVv(valor, "valor")));
    /*
     * valor=eval(valor,[]);
     */
    mlfAssign(
      &valor, mlfEval(mclValueVarargout(), mclVv(valor, "valor"), _mxarray11_));
    /*
     * 
     * handles.u0=valor;
     */
    mlfIndexAssign(&handles, ".u0", mclVv(valor, "valor"));
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(x);
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
 * The function "Minitialdata1_edit_u1_CreateFcn" is the implementation version
 * of the "initialdata1/edit_u1_CreateFcn" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 149-164). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_u1_CreateFcn(hObject, eventdata, handles)
 */
static void Minitialdata1_edit_u1_CreateFcn(mxArray * hObject,
                                            mxArray * eventdata,
                                            mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
    mxArray * ans = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_u1 (see GCBO)
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
            0, mclVa(hObject, "hObject"), _mxarray26_, _mxarray28_, NULL));
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
            _mxarray26_,
            mlfNGet(1, _mxarray30_, _mxarray31_, NULL),
            NULL));
    /*
     * end
     */
    }
    /*
     * 
     * set(hObject,'String','-pi*sin(pi*x)');
     */
    mclAssignAns(
      &ans,
      mlfNSet(0, mclVa(hObject, "hObject"), _mxarray33_, _mxarray37_, NULL));
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
 * The function "Minitialdata1_edit_u1_Callback" is the implementation version
 * of the "initialdata1/edit_u1_Callback" M-function from file "c:\documents
 * and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\initialdata1.m" (lines 164-179). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function edit_u1_Callback(hObject, eventdata, handles)
 */
static void Minitialdata1_edit_u1_Callback(mxArray * hObject,
                                           mxArray * eventdata,
                                           mxArray * handles) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_initialdata1);
    mxArray * ans = NULL;
    mxArray * valor = NULL;
    mxArray * x = NULL;
    mclCopyArray(&hObject);
    mclCopyArray(&eventdata);
    mclCopyArray(&handles);
    /*
     * % hObject    handle to edit_u1 (see GCBO)
     * % eventdata  reserved - to be defined in a future version of MATLAB
     * % handles    structure with handles and user data (see GUIDATA)
     * 
     * % Hints: get(hObject,'String') returns contents of edit_u1 as text
     * %        str2double(get(hObject,'String')) returns contents of edit_u1 as a double
     * x=handles.x;
     */
    mlfAssign(&x, mlfIndexRef(mclVa(handles, "handles"), ".x"));
    /*
     * valor=get(hObject,'String');
     */
    mlfAssign(&valor, mlfNGet(1, mclVa(hObject, "hObject"), _mxarray33_, NULL));
    /*
     * 
     * valor=vectorize(valor);  
     */
    mlfAssign(&valor, mlfVectorize(mclVv(valor, "valor")));
    /*
     * valor=eval(valor,[]);
     */
    mlfAssign(
      &valor, mlfEval(mclValueVarargout(), mclVv(valor, "valor"), _mxarray11_));
    /*
     * 
     * handles.u1=valor
     */
    mlfIndexAssign(&handles, ".u1", mclVv(valor, "valor"));
    mclPrintArray(mclVa(handles, "handles"), "handles");
    /*
     * guidata(hObject,handles);
     */
    mclAssignAns(
      &ans,
      mlfNGuidata(0, mclVa(hObject, "hObject"), mclVa(handles, "handles")));
    mxDestroyArray(x);
    mxDestroyArray(valor);
    mxDestroyArray(ans);
    mxDestroyArray(handles);
    mxDestroyArray(eventdata);
    mxDestroyArray(hObject);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
}
