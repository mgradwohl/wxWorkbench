///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 29 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFrame__
#define __GUIFrame__

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/gauge.h>
#include <wx/fontpicker.h>
#include <wx/slider.h>
#include <wx/choice.h>
#include <wx/combobox.h>
#include <wx/checkbox.h>
#include <wx/sizer.h>
#include <wx/calctrl.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define idMenuQuit 1000
#define idMenuAbout 1001

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* mbar;
		wxMenu* fileMenu;
		wxMenu* helpMenu;
		wxStatusBar* statusBar;
		wxGauge* m_gauge1;
		wxFontPickerCtrl* m_fontPicker1;
		wxSlider* m_slider1;
		wxChoice* m_choice1;
		wxComboBox* m_comboBox1;
		wxCheckBox* m_checkBox1;
		wxCalendarCtrl* m_calendar1;
		wxStaticBitmap* m_bitmap1;
		wxButton* m_button1;
		wxStaticText* m_staticText1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFontChanged( wxFontPickerEvent& event ) { event.Skip(); }
		virtual void OnScrollSize( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnChoiceChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnComboBoxChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBoldChecked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDateChanged( wxCalendarEvent& event ) { event.Skip(); }
		virtual void OnGoGo( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxWorkbench"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 693,617 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxTAB_TRAVERSAL );
		~GUIFrame();
	
};

#endif //__GUIFrame__
