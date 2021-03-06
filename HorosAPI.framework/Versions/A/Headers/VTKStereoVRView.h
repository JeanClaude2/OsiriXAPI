#ifdef _STEREO_VISION_

/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - LGPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
 ---------------------------------------------------------------------------
 
 This file is part of the Horos Project.
 
 Current contributors to the project include Alex Bettarini and Danny Weissman.
 
 Horos is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation,  version 3 of the License.
 
 Horos is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with Horos.  If not, see <http://www.gnu.org/licenses/>.

 

 
 ---------------------------------------------------------------------------
 
 This file is part of the Horos Project.
 
 Current contributors to the project include Alex Bettarini and Danny Weissman.
 
 Horos is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation,  version 3 of the License.
 
 Horos is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with Horos.  If not, see <http://www.gnu.org/licenses/>.

=========================================================================*/


#import <Cocoa/Cocoa.h>
#import <AppKit/AppKit.h>

//#import	"VRView+StereoVision.h"
#ifdef __cplusplus
#import "vtkCocoaGLView.h"
#import "VTKViewOSIRIX.h"


//#import "vtkCocoaWindow.h"
#define id Id
#include "vtkCamera.h"

#include "vtkRenderer.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkCocoaRenderWindowInteractor.h"
#include "vtkCocoaRenderWindow.h"

#undef id
#else
typedef char* vtkCocoaWindow;
typedef char* vtkRenderer;
typedef char* vtkRenderWindow;
typedef char* vtkRenderWindowInteractor;
typedef char* vtkCocoaRenderWindowInteractor;
typedef char* vtkCocoaRenderWindow;
typedef char* vtkCamera;

#endif

@class VRView;

@interface VTKStereoVRView : VTKView {
	
	NSCursor					*cursor;
	BOOL						cursorSet;

	VRView						*superVRView;
	
}

//-(id)initWithFrame:(NSRect)frame;
-(id)initWithFrame:(NSRect)frame: (VRView*) aView;
//- (void) convert3Dto2Dpoint:(double*) pt3D :(double*) pt2D;
//- (void)deleteMouseDownTimer;
//- (void)deleteRightMouseDownTimer;
//- (long) getTool: (NSEvent*) event;
//-(void) setCursorForView: (ToolMode) tool;
//-(void) setCurrentTool:(ToolMode) i;
//- (void) flagsChanged:(NSEvent *)event;
//- (void) unselectAllActors;
//- (void) updateProjectionMode: (int) i;
//- (void) unselectAllActors;


@end
#endif