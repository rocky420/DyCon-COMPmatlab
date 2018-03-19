function varargout = stop1(varargin)
% STOP1 M-file for stop1.fig
%      STOP1, by itself, creates a new STOP1 or raises the existing
%      singleton*.
%
%      H = STOP1 returns the handle to a new STOP1 or the handle to
%      the existing singleton*.
%
%      STOP1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in STOP1.M with the given input arguments.
%
%      STOP1('Property','Value',...) creates a new STOP1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before stop1_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to stop1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help stop1

% Last Modified by GUIDE v2.5 21-May-2004 12:09:50

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @stop1_OpeningFcn, ...
                   'gui_OutputFcn',  @stop1_OutputFcn, ...
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


% --- Executes just before stop1 is made visible.
function stop1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to stop1 (see VARARGIN)

% Choose default command line output for stop1
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes stop1 wait for user response (see UIRESUME)
uiwait(handles.figure1);

% --- Outputs from this function are returned to the command line.
function varargout = stop1_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in push_acep.
function push_acep_Callback(hObject, eventdata, handles)
% hObject    handle to push_acep (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
delete
