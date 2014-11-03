/***************************************************************
 * Name:      wxWorkbenchMain.cpp
 * Purpose:   Code for Application Frame
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

#include "wxWorkbenchMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


wxWorkbenchFrame::wxWorkbenchFrame(wxFrame *frame) : GUIFrame(frame)
{
    statusBar->SetStatusText("Enumerating fonts...", 0);
    EnumerateFonts();
    statusBar->SetStatusText("Play with the widgets", 0);
}

wxWorkbenchFrame::~wxWorkbenchFrame()
{
}

void wxWorkbenchFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void wxWorkbenchFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void wxWorkbenchFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void wxWorkbenchFrame::OnFontChanged( wxFontPickerEvent& event )
{

    wxFont font = m_fontPicker1->GetSelectedFont();
    m_slider1->SetValue(font.GetPointSize());

    int j= m_choice1->FindString(font.GetFaceName());
    m_choice1->SetSelection(j);

    bool bold = (wxFONTWEIGHT_BOLD == font.GetWeight());
    m_checkBox1->SetValue(bold);

    UpdateLabel();
}

void wxWorkbenchFrame::OnBoldChecked( wxCommandEvent& event )
{
    wxFont font = m_fontPicker1->GetSelectedFont();
    if (m_checkBox1->IsChecked())
    {
        font.SetWeight(wxFONTWEIGHT_BOLD);
    }
    else
    {
        font.SetWeight(wxFONTWEIGHT_NORMAL);
    }
    m_fontPicker1->SetSelectedFont(font);

    UpdateLabel();
}

void wxWorkbenchFrame::OnScrollSize( wxScrollEvent& event )
{
    wxFont font = m_fontPicker1->GetSelectedFont();
    font.SetPointSize(m_slider1->GetValue());
    m_fontPicker1->SetSelectedFont(font);

    UpdateLabel();
}

void wxWorkbenchFrame::OnChoiceChanged( wxCommandEvent& event )
{
    wxFont font = m_fontPicker1->GetSelectedFont();
    font.SetFaceName(m_choice1->GetString(m_choice1->GetSelection()));
    m_fontPicker1->SetSelectedFont(font);

    UpdateLabel();
}

void wxWorkbenchFrame::OnComboBoxChange( wxCommandEvent& event )
{
    UpdateLabel();
}

void wxWorkbenchFrame::OnDateChanged( wxCalendarEvent& event )
{
}

void wxWorkbenchFrame::OnGoGo( wxCommandEvent& event )
{
}

void wxWorkbenchFrame::EnumerateFonts()
{
    wxFontEnumerator fonts;
    wxArrayString sfonts = fonts.GetFacenames();
    m_choice1->Append(sfonts);

    int j= m_choice1->FindString(m_fontPicker1->GetSelectedFont().GetFaceName());
    m_choice1->SetSelection(j);

    m_comboBox1->Clear();
    m_comboBox1->Append("Matt Gradwohl");
    m_comboBox1->SetSelection(0);
    m_comboBox1->Append("8334 - 208th Ave NE");
    m_comboBox1->Append("Redmond, WA 98053");
    m_comboBox1->Append("425 785-4817");
    m_comboBox1->Append("matt@uppercutwoodworks.com");
    m_comboBox1->Append("@uppercutwood");

    UpdateLabel();
}

void wxWorkbenchFrame::UpdateLabel()
{
    m_staticText1->SetFont(m_fontPicker1->GetSelectedFont());
    m_staticText1->SetLabel(m_comboBox1->GetString(m_comboBox1->GetSelection()));
}
