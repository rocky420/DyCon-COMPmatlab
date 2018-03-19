function varargout = modaldlg(varargin)
% MODALDLG M-file for modaldlg.fig
%      MODALDLG, by itself, creates a new MODALDLG or raises the existing
%      singleton*.
%
%      H = MODALDLG returns the handle to a new MODALDLG or the handle to
%      the existing singleton*.
%
%      MODALDLG('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in MODALDLG.M with the given input arguments.
%
%      MODALDLG('Property','Value',...) creates a new MODALDLG or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before modaldlg_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to modaldlg_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help modaldlg

% Last Modified by GUIDE v2.5 19-May-2004 19:29:50

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @modaldlg_OpeningFcn, ...
                   'gui_OutputFcn',  @modaldlg_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin & isstr(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before modaldlg is made visible.
function modaldlg_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to modaldlg (see VARARGIN)

edit datos.m
uiwait

% Choose default command line output for modaldlg
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes modaldlg wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = modaldlg_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in push_aceptar.
function push_aceptar_Callback(hObject, eventdata, handles)
% hObject    handle to push_aceptar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
uiresume
