# Microsoft Developer Studio Generated NMAKE File, Format Version 4.20
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

!IF "$(CFG)" == ""
CFG=FlatCube - Win32 Debug
!MESSAGE No configuration specified.  Defaulting to FlatCube - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "FlatCube - Win32 Release" && "$(CFG)" !=\
 "FlatCube - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE on this makefile
!MESSAGE by defining the macro CFG on the command line.  For example:
!MESSAGE 
!MESSAGE NMAKE /f "FlatCube.mak" CFG="FlatCube - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "FlatCube - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "FlatCube - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 
################################################################################
# Begin Project
# PROP Target_Last_Scanned "FlatCube - Win32 Debug"
CPP=cl.exe
MTL=mktyplib.exe
RSC=rc.exe

!IF  "$(CFG)" == "FlatCube - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
OUTDIR=.\Release
INTDIR=.\Release

ALL : "$(OUTDIR)\FlatCube.exe"

CLEAN : 
	-@erase "$(INTDIR)\FlatCube.obj"
	-@erase "$(INTDIR)\FlatCube.pch"
	-@erase "$(INTDIR)\FlatCube.res"
	-@erase "$(INTDIR)\FlatCubeDoc.obj"
	-@erase "$(INTDIR)\FlatCubeView.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(OUTDIR)\FlatCube.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/FlatCube.pch" /Yu"stdafx.h" /Fo"$(INTDIR)/"\
 /c 
CPP_OBJS=.\Release/
CPP_SBRS=.\.
# ADD BASE MTL /nologo /D "NDEBUG" /win32
# ADD MTL /nologo /D "NDEBUG" /win32
MTL_PROJ=/nologo /D "NDEBUG" /win32 
# ADD BASE RSC /l 0x809 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x809 /d "NDEBUG" /d "_AFXDLL"
RSC_PROJ=/l 0x809 /fo"$(INTDIR)/FlatCube.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/FlatCube.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)/FlatCube.pdb" /machine:I386 /out:"$(OUTDIR)/FlatCube.exe" 
LINK32_OBJS= \
	"$(INTDIR)\FlatCube.obj" \
	"$(INTDIR)\FlatCube.res" \
	"$(INTDIR)\FlatCubeDoc.obj" \
	"$(INTDIR)\FlatCubeView.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\FlatCube.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "FlatCube - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
OUTDIR=.\Debug
INTDIR=.\Debug

ALL : "$(OUTDIR)\FlatCube.exe"

CLEAN : 
	-@erase "$(INTDIR)\FlatCube.obj"
	-@erase "$(INTDIR)\FlatCube.pch"
	-@erase "$(INTDIR)\FlatCube.res"
	-@erase "$(INTDIR)\FlatCubeDoc.obj"
	-@erase "$(INTDIR)\FlatCubeView.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc40.idb"
	-@erase "$(INTDIR)\vc40.pdb"
	-@erase "$(OUTDIR)\FlatCube.exe"
	-@erase "$(OUTDIR)\FlatCube.ilk"
	-@erase "$(OUTDIR)\FlatCube.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/FlatCube.pch" /Yu"stdafx.h"\
 /Fo"$(INTDIR)/" /Fd"$(INTDIR)/" /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.\.
# ADD BASE MTL /nologo /D "_DEBUG" /win32
# ADD MTL /nologo /D "_DEBUG" /win32
MTL_PROJ=/nologo /D "_DEBUG" /win32 
# ADD BASE RSC /l 0x809 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x809 /d "_DEBUG" /d "_AFXDLL"
RSC_PROJ=/l 0x809 /fo"$(INTDIR)/FlatCube.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/FlatCube.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)/FlatCube.pdb" /debug /machine:I386\
 /out:"$(OUTDIR)/FlatCube.exe" 
LINK32_OBJS= \
	"$(INTDIR)\FlatCube.obj" \
	"$(INTDIR)\FlatCube.res" \
	"$(INTDIR)\FlatCubeDoc.obj" \
	"$(INTDIR)\FlatCubeView.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\FlatCube.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.c{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

################################################################################
# Begin Target

# Name "FlatCube - Win32 Release"
# Name "FlatCube - Win32 Debug"

!IF  "$(CFG)" == "FlatCube - Win32 Release"

!ELSEIF  "$(CFG)" == "FlatCube - Win32 Debug"

!ENDIF 

################################################################################
# Begin Source File

SOURCE=.\ReadMe.txt

!IF  "$(CFG)" == "FlatCube - Win32 Release"

!ELSEIF  "$(CFG)" == "FlatCube - Win32 Debug"

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\FlatCube.cpp
DEP_CPP_FLATC=\
	".\FlatCube.h"\
	".\FlatCubeDoc.h"\
	".\FlatCubeView.h"\
	".\MainFrm.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FlatCube.obj" : $(SOURCE) $(DEP_CPP_FLATC) "$(INTDIR)"\
 "$(INTDIR)\FlatCube.pch"


# End Source File
################################################################################
# Begin Source File

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "FlatCube - Win32 Release"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/FlatCube.pch" /Yc"stdafx.h" /Fo"$(INTDIR)/"\
 /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\FlatCube.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ELSEIF  "$(CFG)" == "FlatCube - Win32 Debug"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/FlatCube.pch" /Yc"stdafx.h"\
 /Fo"$(INTDIR)/" /Fd"$(INTDIR)/" /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\FlatCube.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\MainFrm.cpp
DEP_CPP_MAINF=\
	".\FlatCube.h"\
	".\MainFrm.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"\
 "$(INTDIR)\FlatCube.pch"


# End Source File
################################################################################
# Begin Source File

SOURCE=.\FlatCubeDoc.cpp
DEP_CPP_FLATCU=\
	".\FlatCube.h"\
	".\FlatCubeDoc.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FlatCubeDoc.obj" : $(SOURCE) $(DEP_CPP_FLATCU) "$(INTDIR)"\
 "$(INTDIR)\FlatCube.pch"


# End Source File
################################################################################
# Begin Source File

SOURCE=.\FlatCubeView.cpp
DEP_CPP_FLATCUB=\
	".\FlatCube.h"\
	".\FlatCubeDoc.h"\
	".\FlatCubeView.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FlatCubeView.obj" : $(SOURCE) $(DEP_CPP_FLATCUB) "$(INTDIR)"\
 "$(INTDIR)\FlatCube.pch"


# End Source File
################################################################################
# Begin Source File

SOURCE=.\FlatCube.rc
DEP_RSC_FLATCUBE=\
	".\res\bitmap1.bmp"\
	".\res\bmp00001.bmp"\
	".\res\bmp00002.bmp"\
	".\res\bmp00003.bmp"\
	".\res\bmp00004.bmp"\
	".\res\bmp00005.bmp"\
	".\res\cup_1.bmp"\
	".\res\cup_down.bmp"\
	".\res\cup_focu.bmp"\
	".\res\cup_up1.bmp"\
	".\res\cup_up2.bmp"\
	".\res\cup_up3.bmp"\
	".\res\FlatCube.ico"\
	".\res\FlatCube.rc2"\
	".\res\FlatCubeDoc.ico"\
	".\res\Toolbar.bmp"\
	

"$(INTDIR)\FlatCube.res" : $(SOURCE) $(DEP_RSC_FLATCUBE) "$(INTDIR)"
   $(RSC) $(RSC_PROJ) $(SOURCE)


# End Source File
# End Target
# End Project
################################################################################
