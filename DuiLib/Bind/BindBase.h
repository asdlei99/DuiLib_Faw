﻿#ifndef __BIND_BASE_H__
#define __BIND_BASE_H__

#pragma once



namespace DuiLib {
	class BindCtrlBase {
		//friend class WindowImplBase;
	public:
		BindCtrlBase (CControlUI *_ctrl): m_ctrl (_ctrl) {}
		BindCtrlBase (faw::string_t ctrl_name): m_ctrl_name (ctrl_name) {}
		virtual ~BindCtrlBase () {}

	protected:
		virtual faw::string_t GetClassType () const = 0;
		virtual void binded () {}
		CControlUI *m_ctrl = nullptr;
		faw::string_t m_ctrl_name;

		//static CPaintManagerUI *s_pm;
	private:
		//static std::map<faw::string_t, BindCtrlBase*> s_bind_ctrls;
		//static void init_binding (CPaintManagerUI *pm);
	};



	//template <typename T>
	//class BindVarBase: public BindCtrlBase {
	//public:
	//	BindVarBase (faw::string_t ctrl_name): BindCtrlBase (ctrl_name) {}
	//	virtual ~BindVarBase () = default;
	//	faw::string_t GetVarType () const;

	//	// 访问函数（未完成）
	//	//void operator= (T &o);
	//	//T &operator() ();

	//protected:
	//	void binded () override;
	//};
}

#endif //__BIND_BASE_H__
