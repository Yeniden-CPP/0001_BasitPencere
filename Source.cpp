#include <wx/wx.h>

class Uygulama : public wxApp
{
public:
	bool OnInit()
	{
		wxFrame* pencere = new wxFrame(nullptr, wxID_ANY, "Merhaba", wxDefaultPosition, wxSize(800, 600));
		pencere->Center();
		pencere->Show();
		return true;
	}
};

wxIMPLEMENT_APP(Uygulama);