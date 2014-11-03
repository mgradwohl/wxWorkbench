/***************************************************************
 * Name:      wxWorkbenchMain.h
 * Purpose:   Defines Application Frame
 * Author:    Matt Gradwohl (mattgr@msn.com)
 * Created:   2014-10-21
 * Copyright: Matt Gradwohl (uppercutwoodworks.com)
 * License:
 **************************************************************/

#ifndef WXWORKBENCHMAIN_H
#define WXWORKBENCHMAIN_H

#include <wx/msgdlg.h>
#include <wx/fontenum.h>

#include "wxWorkbenchApp.h"

#include "GUIFrame.h"

class wxWorkbenchFrame: public GUIFrame
{
    public:
        wxWorkbenchFrame(wxFrame *frame);
        ~wxWorkbenchFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
   		virtual void OnFontChanged( wxFontPickerEvent& event );
		virtual void OnBoldChecked( wxCommandEvent& event );
        virtual void OnScrollSize( wxScrollEvent& event );

		virtual void OnChoiceChanged( wxCommandEvent& event );
		virtual void OnComboBoxChange( wxCommandEvent& event );
		virtual void OnDateChanged( wxCalendarEvent& event );
		virtual void OnGoGo( wxCommandEvent& event );
		void EnumerateFonts();
		void UpdateLabel();
};

#endif // WXWORKBENCHMAIN_H
