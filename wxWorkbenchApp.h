/***************************************************************
 * Name:      wxWorkbenchApp.h
 * Purpose:   Defines Application Class
 * Author:    Matt Gradwohl (mattgr@msn.com)
 * Created:   2014-10-21
 * Copyright: Matt Gradwohl (uppercutwoodworks.com)
 * License:
 **************************************************************/

#ifndef WXWORKBENCHAPP_H
#define WXWORKBENCHAPP_H

#include <wx/app.h>

class wxWorkbenchApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // WXWORKBENCHAPP_H
