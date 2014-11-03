/***************************************************************
 * Name:      wxWorkbenchApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Matt Gradwohl (mattgr@msn.com)
 * Created:   2014-10-21
 * Copyright: Matt Gradwohl (uppercutwoodworks.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxWorkbenchApp.h"
#include "wxWorkbenchMain.h"

IMPLEMENT_APP(wxWorkbenchApp);

bool wxWorkbenchApp::OnInit()
{
    wxWorkbenchFrame* frame = new wxWorkbenchFrame(0L);
    
    frame->Show();
    
    return true;
}
