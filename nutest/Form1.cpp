#include "stdafx.h"
#include "Form1.h"

namespace nutest {

	Form1::Form1(void)
	{
		InitializeComponent();

		brow_ = gcnew CefSharp::WinForms::ChromiumWebBrowser();
		brow_->Dock = DockStyle::Fill;
		Controls->Add(brow_);

		brow_->Load("http://ambiesoft.mooo.com/webapp/");
	}
}