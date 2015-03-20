/* main.c generated by valac 0.26.1, the Vala compiler
 * generated from main.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>
#include <config.h>
#include <unique/unique.h>
#include <stdio.h>
#include <gio/gio.h>


#define TYPE_PANEL_ABSTRACT_WINDOW (panel_abstract_window_get_type ())
#define PANEL_ABSTRACT_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_ABSTRACT_WINDOW, PanelAbstractWindow))
#define PANEL_ABSTRACT_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_ABSTRACT_WINDOW, PanelAbstractWindowClass))
#define IS_PANEL_ABSTRACT_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_ABSTRACT_WINDOW))
#define IS_PANEL_ABSTRACT_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_ABSTRACT_WINDOW))
#define PANEL_ABSTRACT_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_ABSTRACT_WINDOW, PanelAbstractWindowClass))

typedef struct _PanelAbstractWindow PanelAbstractWindow;
typedef struct _PanelAbstractWindowClass PanelAbstractWindowClass;

#define TYPE_PANEL_MENU_BOX (panel_menu_box_get_type ())
#define PANEL_MENU_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_MENU_BOX, PanelMenuBox))
#define PANEL_MENU_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_MENU_BOX, PanelMenuBoxClass))
#define IS_PANEL_MENU_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_MENU_BOX))
#define IS_PANEL_MENU_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_MENU_BOX))
#define PANEL_MENU_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_MENU_BOX, PanelMenuBoxClass))

typedef struct _PanelMenuBox PanelMenuBox;
typedef struct _PanelMenuBoxClass PanelMenuBoxClass;
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define TYPE_PANEL_SESSION_MANAGER (panel_session_manager_get_type ())
#define PANEL_SESSION_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_SESSION_MANAGER, PanelSessionManager))
#define PANEL_SESSION_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_SESSION_MANAGER, PanelSessionManagerClass))
#define IS_PANEL_SESSION_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_SESSION_MANAGER))
#define IS_PANEL_SESSION_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_SESSION_MANAGER))
#define PANEL_SESSION_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_SESSION_MANAGER, PanelSessionManagerClass))

typedef struct _PanelSessionManager PanelSessionManager;
typedef struct _PanelSessionManagerClass PanelSessionManagerClass;
#define _panel_session_manager_unref0(var) ((var == NULL) ? NULL : (var = (panel_session_manager_unref (var), NULL)))

#define TYPE_PANEL_SHELL (panel_shell_get_type ())
#define PANEL_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_SHELL, PanelShell))
#define PANEL_SHELL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_SHELL, PanelShellClass))
#define IS_PANEL_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_SHELL))
#define IS_PANEL_SHELL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_SHELL))
#define PANEL_SHELL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_SHELL, PanelShellClass))

typedef struct _PanelShell PanelShell;
typedef struct _PanelShellClass PanelShellClass;

#define TYPE_PANEL_DESKTOP (panel_desktop_get_type ())
#define PANEL_DESKTOP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_DESKTOP, PanelDesktop))
#define PANEL_DESKTOP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_DESKTOP, PanelDesktopClass))
#define IS_PANEL_DESKTOP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_DESKTOP))
#define IS_PANEL_DESKTOP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_DESKTOP))
#define PANEL_DESKTOP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_DESKTOP, PanelDesktopClass))

typedef struct _PanelDesktop PanelDesktop;
typedef struct _PanelDesktopClass PanelDesktopClass;

#define TYPE_PANEL_WINDOW_HOST (panel_window_host_get_type ())
#define PANEL_WINDOW_HOST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_WINDOW_HOST, PanelWindowHost))
#define PANEL_WINDOW_HOST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_WINDOW_HOST, PanelWindowHostClass))
#define IS_PANEL_WINDOW_HOST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_WINDOW_HOST))
#define IS_PANEL_WINDOW_HOST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_WINDOW_HOST))
#define PANEL_WINDOW_HOST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_WINDOW_HOST, PanelWindowHostClass))

typedef struct _PanelWindowHost PanelWindowHost;
typedef struct _PanelWindowHostClass PanelWindowHostClass;

struct _Block1Data {
	int _ref_count_;
	PanelMenuBox* menu_box;
};



gint _vala_main (gchar** args, int args_length1);
GType panel_abstract_window_get_type (void) G_GNUC_CONST;
GType panel_menu_box_get_type (void) G_GNUC_CONST;
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
gpointer panel_session_manager_ref (gpointer instance);
void panel_session_manager_unref (gpointer instance);
GParamSpec* param_spec_panel_session_manager (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_panel_session_manager (GValue* value, gpointer v_object);
void value_take_panel_session_manager (GValue* value, gpointer v_object);
gpointer value_get_panel_session_manager (const GValue* value);
GType panel_session_manager_get_type (void) G_GNUC_CONST;
PanelSessionManager* panel_session_manager_getInstance (void);
static void __lambda11_ (void);
static void ___lambda11__gbus_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self);
static void __lambda12_ (void);
static void ___lambda12__gbus_name_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self);
static void __lambda13_ (void);
static void ___lambda13__gbus_name_lost_callback (GDBusConnection* connection, const gchar* name, gpointer self);
GType panel_shell_get_type (void) G_GNUC_CONST;
PanelShell* panel_shell_new (void);
PanelShell* panel_shell_construct (GType object_type);
GType panel_desktop_get_type (void) G_GNUC_CONST;
PanelDesktop* panel_desktop_new (void);
PanelDesktop* panel_desktop_construct (GType object_type);
GType panel_window_host_get_type (void) G_GNUC_CONST;
PanelWindowHost* panel_window_host_new (void);
PanelWindowHost* panel_window_host_construct (GType object_type);
PanelMenuBox* panel_menu_box_new (void);
PanelMenuBox* panel_menu_box_construct (GType object_type);
static void __lambda74_ (Block1Data* _data1_);
void panel_menu_box_try_hide (PanelMenuBox* self);
static void ___lambda74__panel_window_host_menu_clicked (PanelWindowHost* _sender, gpointer self);
static void __lambda75_ (Block1Data* _data1_);
static void ___lambda75__panel_window_host_dialog_opened (PanelWindowHost* _sender, gpointer self);
static void __lambda76_ (Block1Data* _data1_);
static void ___lambda76__panel_desktop_desktop_clicked (PanelDesktop* _sender, gpointer self);
static void __lambda77_ (Block1Data* _data1_);
static void ___lambda77__panel_window_host_windows_visible (PanelWindowHost* _sender, gpointer self);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_g_object_unref0 (_data1_->menu_box);
		g_slice_free (Block1Data, _data1_);
	}
}


static void __lambda11_ (void) {
}


static void ___lambda11__gbus_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	__lambda11_ ();
}


static void __lambda12_ (void) {
}


static void ___lambda12__gbus_name_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	__lambda12_ ();
}


static void __lambda13_ (void) {
	FILE* _tmp0_ = NULL;
	_tmp0_ = stderr;
	fprintf (_tmp0_, "Unable to claim Panel from gnome-session");
}


static void ___lambda13__gbus_name_lost_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	__lambda13_ ();
}


static void __lambda74_ (Block1Data* _data1_) {
	PanelMenuBox* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	_tmp0_ = _data1_->menu_box;
	_tmp1_ = gtk_widget_get_visible ((GtkWidget*) _tmp0_);
	_tmp2_ = _tmp1_;
	if (_tmp2_) {
		PanelMenuBox* _tmp3_ = NULL;
		_tmp3_ = _data1_->menu_box;
		panel_menu_box_try_hide (_tmp3_);
	} else {
		PanelMenuBox* _tmp4_ = NULL;
		_tmp4_ = _data1_->menu_box;
		gtk_widget_show ((GtkWidget*) _tmp4_);
	}
}


static void ___lambda74__panel_window_host_menu_clicked (PanelWindowHost* _sender, gpointer self) {
	__lambda74_ (self);
}


static void __lambda75_ (Block1Data* _data1_) {
	PanelMenuBox* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	_tmp0_ = _data1_->menu_box;
	_tmp1_ = gtk_widget_get_visible ((GtkWidget*) _tmp0_);
	_tmp2_ = _tmp1_;
	if (_tmp2_) {
		PanelMenuBox* _tmp3_ = NULL;
		_tmp3_ = _data1_->menu_box;
		panel_menu_box_try_hide (_tmp3_);
	}
}


static void ___lambda75__panel_window_host_dialog_opened (PanelWindowHost* _sender, gpointer self) {
	__lambda75_ (self);
}


static void __lambda76_ (Block1Data* _data1_) {
	PanelMenuBox* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	_tmp0_ = _data1_->menu_box;
	_tmp1_ = gtk_widget_get_visible ((GtkWidget*) _tmp0_);
	_tmp2_ = _tmp1_;
	if (_tmp2_) {
		PanelMenuBox* _tmp3_ = NULL;
		_tmp3_ = _data1_->menu_box;
		panel_menu_box_try_hide (_tmp3_);
	}
}


static void ___lambda76__panel_desktop_desktop_clicked (PanelDesktop* _sender, gpointer self) {
	__lambda76_ (self);
}


static void __lambda77_ (Block1Data* _data1_) {
	PanelMenuBox* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	_tmp0_ = _data1_->menu_box;
	_tmp1_ = gtk_widget_get_visible ((GtkWidget*) _tmp0_);
	_tmp2_ = _tmp1_;
	if (_tmp2_) {
		PanelMenuBox* _tmp3_ = NULL;
		_tmp3_ = _data1_->menu_box;
		panel_menu_box_try_hide (_tmp3_);
	}
}


static void ___lambda77__panel_window_host_windows_visible (PanelWindowHost* _sender, gpointer self) {
	__lambda77_ (self);
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	Block1Data* _data1_;
	gchar* id = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	UniqueApp* app = NULL;
	const gchar* _tmp2_ = NULL;
	UniqueApp* _tmp3_ = NULL;
	UniqueApp* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	PanelSessionManager* _tmp7_ = NULL;
	PanelSessionManager* _tmp8_ = NULL;
	PanelShell* shell = NULL;
	PanelShell* _tmp9_ = NULL;
	PanelDesktop* d = NULL;
	PanelDesktop* _tmp10_ = NULL;
	PanelDesktop* _tmp11_ = NULL;
	PanelWindowHost* w = NULL;
	PanelWindowHost* _tmp12_ = NULL;
	PanelWindowHost* _tmp13_ = NULL;
	PanelMenuBox* _tmp14_ = NULL;
	PanelWindowHost* _tmp15_ = NULL;
	PanelWindowHost* _tmp16_ = NULL;
	PanelDesktop* _tmp17_ = NULL;
	PanelWindowHost* _tmp18_ = NULL;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	bindtextdomain (GETTEXT_PACKAGE, LOCALEDIR);
	bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
	textdomain (GETTEXT_PACKAGE);
	gtk_init (&args_length1, &args);
	_tmp0_ = g_getenv ("DESKTOP_AUTOSTART_ID");
	_tmp1_ = g_strdup (_tmp0_);
	id = _tmp1_;
	_tmp2_ = id;
	_tmp3_ = unique_app_new ("id.or.blankonlinux.Manokwari", _tmp2_);
	app = _tmp3_;
	_tmp4_ = app;
	_tmp5_ = unique_app_is_running (_tmp4_);
	if (_tmp5_) {
		FILE* _tmp6_ = NULL;
		_tmp6_ = stdout;
		fprintf (_tmp6_, "Manokwari is already running.\n");
		result = 0;
		_g_object_unref0 (app);
		_g_free0 (id);
		block1_data_unref (_data1_);
		_data1_ = NULL;
		return result;
	}
	_tmp7_ = panel_session_manager_getInstance ();
	_tmp8_ = _tmp7_;
	_panel_session_manager_unref0 (_tmp8_);
	g_bus_own_name_with_closures (G_BUS_TYPE_SESSION, "org.gnome.Panel", 0, (GClosure*) ((___lambda11__gbus_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) ___lambda11__gbus_acquired_callback, NULL, NULL)), (GClosure*) ((___lambda12__gbus_name_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) ___lambda12__gbus_name_acquired_callback, NULL, NULL)), (GClosure*) ((___lambda13__gbus_name_lost_callback == NULL) ? NULL : g_cclosure_new ((GCallback) ___lambda13__gbus_name_lost_callback, NULL, NULL)));
	_tmp9_ = panel_shell_new ();
	shell = _tmp9_;
	_tmp10_ = panel_desktop_new ();
	g_object_ref_sink (_tmp10_);
	d = _tmp10_;
	_tmp11_ = d;
	gtk_widget_show ((GtkWidget*) _tmp11_);
	_tmp12_ = panel_window_host_new ();
	g_object_ref_sink (_tmp12_);
	w = _tmp12_;
	_tmp13_ = w;
	gtk_widget_show ((GtkWidget*) _tmp13_);
	_tmp14_ = panel_menu_box_new ();
	g_object_ref_sink (_tmp14_);
	_data1_->menu_box = _tmp14_;
	_tmp15_ = w;
	g_signal_connect_data (_tmp15_, "menu-clicked", (GCallback) ___lambda74__panel_window_host_menu_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp16_ = w;
	g_signal_connect_data (_tmp16_, "dialog-opened", (GCallback) ___lambda75__panel_window_host_dialog_opened, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp17_ = d;
	g_signal_connect_data (_tmp17_, "desktop-clicked", (GCallback) ___lambda76__panel_desktop_desktop_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp18_ = w;
	g_signal_connect_data (_tmp18_, "windows-visible", (GCallback) ___lambda77__panel_window_host_windows_visible, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	gtk_main ();
	result = 0;
	_g_object_unref0 (w);
	_g_object_unref0 (d);
	_g_object_unref0 (shell);
	_g_object_unref0 (app);
	_g_free0 (id);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return result;
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	return _vala_main (argv, argc);
}



