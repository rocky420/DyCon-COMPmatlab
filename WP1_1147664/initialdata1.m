function varargout = initialdata1(varargin)
% INITIALDATA1 M-file for initialdata1.fig
%      INITIALDATA1, by itself, creates a new INITIALDATA1 or raises the existing
%      singleton*.
%
%      H = INITIALDATA1 returns the handle to a new INITIALDATA1 or the handle to
%      the existing singleton*.
%
%      INITIALDATA1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in INITIALDATA1.M with the given input arguments.
%
%      INITIALDATA1('Property','Value',...) creates a new INITIALDATA1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before initialdata1_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to initialdata1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help initialdata1

% Last Modified by GUIDE v2.5 07-Jul-2005 22:36:18

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @initialdata1_OpeningFcn, ...
                   'gui_OutputFcn',  @initialdata1_OutputFcn, ...
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


% --- Executes just before initialdata1 is made visible.
function initialdata1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to initialdata1 (see VARARGIN)

datos=varargin{1};
handles.n=datos.n;
handles.a=datos.a;
handles.b=datos.b;
handles.T=datos.T;
handles.eps=datos.eps;
handles.mu=datos.mu;
handles.beta=datos.beta;
handles.gamma=datos.gamma;
handles.masa=datos.masa;
handles.u0=datos.u0;
handles.u1=datos.u1;
handles.x=datos.x;

% set(handles.edit_u0,'string',datos.gamma);
% set(handles.edit_u1,'string',datos.masa);


% Choose default command line output for initialdata1
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes initialdata1 wait for user response (see UIRESUME)
uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = initialdata1_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure

varargout{1} = handles.output;
varargout{2} = handles.n;
varargout{3} = handles.mu;
varargout{4} = handles.a;
varargout{5} = handles.b;
varargout{6} = handles.T;
varargout{7} = handles.eps;
varargout{8} = handles.beta;
varargout{9} = handles.gamma;
varargout{10} = handles.masa;
varargout{11} = handles.u0;
varargout{12} = handles.u1;
varargout{13} = handles.x;


% --- Executes on button press in push_aceptar.
function push_aceptar_Callback(hObject, eventdata, handles)
% hObject    handle to push_aceptar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

uiresume;


% --- Executes during object creation, after setting all properties.
function edit_u0_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_u0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

set(hObject,'String','sin(pi*x)');

function edit_u0_Callback(hObject, eventdata, handles)
% hObject    handle to edit_u0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_u0 as text
%        str2double(get(hObject,'String')) returns contents of edit_u0 as a double
x=handles.x;
valor=get(hObject,'String');

valor=vectorize(valor);
valor=eval(valor,[]);

handles.u0=valor;
guidata(hObject,handles);

% --- Executes during object creation, after setting all properties.
function edit_u1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_u1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

set(hObject,'String','-pi*sin(pi*x)');

function edit_u1_Callback(hObject, eventdata, handles)
% hObject    handle to edit_u1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_u1 as text
%        str2double(get(hObject,'String')) returns contents of edit_u1 as a double
x=handles.x;
valor=get(hObject,'String');
       
valor=vectorize(valor);  
valor=eval(valor,[]);

handles.u1=valor
guidata(hObject,handles);
