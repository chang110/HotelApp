#pragma once
#include"StdAfx.h"
class CHotelWindowWnd : public CWindowWnd, public INotifyUI
{
public:
	CHotelWindowWnd();
	~CHotelWindowWnd();

public:
	virtual void Notify(TNotifyUI& msg);
	LPCTSTR GetWindowClassName() const { return _T("HotelWindowWnd"); };
	void OnFinalMessage(HWND /*hWnd*/) { delete this; };

	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnNcActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
private:
	void Init();

public:
	CPaintManagerUI m_pm;
};

