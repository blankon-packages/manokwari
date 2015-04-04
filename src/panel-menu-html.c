/* panel-menu-html.c generated by valac 0.26.1, the Vala compiler
 * generated from panel-menu-html.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <webkit/webkit.h>
#include <stdlib.h>
#include <string.h>
#include <config.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <JavaScriptCore/JavaScript.h>


#define TYPE_PANEL_MENU_HTML (panel_menu_html_get_type ())
#define PANEL_MENU_HTML(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PANEL_MENU_HTML, PanelMenuHTML))
#define PANEL_MENU_HTML_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PANEL_MENU_HTML, PanelMenuHTMLClass))
#define IS_PANEL_MENU_HTML(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PANEL_MENU_HTML))
#define IS_PANEL_MENU_HTML_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PANEL_MENU_HTML))
#define PANEL_MENU_HTML_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PANEL_MENU_HTML, PanelMenuHTMLClass))

typedef struct _PanelMenuHTML PanelMenuHTML;
typedef struct _PanelMenuHTMLClass PanelMenuHTMLClass;
typedef struct _PanelMenuHTMLPrivate PanelMenuHTMLPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _0(var) ((var == NULL) ? NULL : (var = ( (var), NULL)))
#define _JSStringRelease0(var) ((var == NULL) ? NULL : (var = (JSStringRelease (var), NULL)))

struct _PanelMenuHTML {
	WebKitWebView parent_instance;
	PanelMenuHTMLPrivate * priv;
};

struct _PanelMenuHTMLClass {
	WebKitWebViewClass parent_class;
};


static gpointer panel_menu_html_parent_class = NULL;

GType panel_menu_html_get_type (void) G_GNUC_CONST;
enum  {
	PANEL_MENU_HTML_DUMMY_PROPERTY
};
static gchar* panel_menu_html_translate_uri (PanelMenuHTML* self, const gchar* old);
static gchar* panel_menu_html_translate_theme (PanelMenuHTML* self, const gchar* old);
gchar* utils_get_icon_path (const gchar* name, gint size);
PanelMenuHTML* panel_menu_html_new (void);
PanelMenuHTML* panel_menu_html_construct (GType object_type);
static void __lambda60_ (PanelMenuHTML* self, WebKitWebFrame* frame, WebKitWebResource* resource, WebKitNetworkRequest* request, WebKitNetworkResponse* response);
static void ___lambda60__webkit_web_view_resource_request_starting (WebKitWebView* _sender, WebKitWebFrame* p0, WebKitWebResource* p1, WebKitNetworkRequest* p2, WebKitNetworkResponse* p3, gpointer self);
static void __lambda61_ (PanelMenuHTML* self, WebKitWebFrame* frame, void* context);
void panel_xdg_data_setup_js_class (void* context);
void utils_setup_js_class (void* context);
void panel_places_setup_js_class (void* context);
void panel_session_manager_setup_js_class (void* context);
void panel_user_setup_js_class (void* context);
static void ___lambda61__webkit_web_view_window_object_cleared (WebKitWebView* _sender, WebKitWebFrame* frame, void* context, void* window_object, gpointer self);
void panel_menu_html_start (PanelMenuHTML* self);
void panel_menu_html_triggerShowAnimation (PanelMenuHTML* self);
void panel_menu_html_triggerHideAnimation (PanelMenuHTML* self);
gboolean panel_menu_html_handleEsc (PanelMenuHTML* self);


static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	{
		GRegex* regex = NULL;
		const gchar* _tmp0_ = NULL;
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		GRegex* _tmp3_ = NULL;
		GRegex* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GRegex* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		_tmp0_ = old;
		_tmp1_ = g_regex_escape_string (_tmp0_, -1);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_regex_new (_tmp2_, 0, 0, &_inner_error_);
		_tmp4_ = _tmp3_;
		_g_free0 (_tmp2_);
		regex = _tmp4_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch17_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp6_ = regex;
		_tmp7_ = replacement;
		_tmp8_ = g_regex_replace_literal (_tmp6_, self, (gssize) (-1), 0, _tmp7_, 0, &_inner_error_);
		_tmp5_ = _tmp8_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch17_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp9_ = _tmp5_;
		_tmp5_ = NULL;
		result = _tmp9_;
		_g_free0 (_tmp5_);
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally17;
	__catch17_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally17:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static gchar* panel_menu_html_translate_uri (PanelMenuHTML* self, const gchar* old) {
	gchar* result = NULL;
	gchar* uri = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	_tmp0_ = old;
	_tmp1_ = string_replace (_tmp0_, "http://system", "file://" SYSTEM_PATH "/");
	uri = _tmp1_;
	result = uri;
	return result;
}


static gchar* panel_menu_html_translate_theme (PanelMenuHTML* self, const gchar* old) {
	gchar* result = NULL;
	gchar* uri = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	_tmp0_ = old;
	_tmp1_ = string_replace (_tmp0_, "theme://", "");
	_tmp2_ = _tmp1_;
	_tmp3_ = utils_get_icon_path (_tmp2_, 24);
	_tmp4_ = _tmp3_;
	_tmp5_ = g_strdup_printf ("file://%s", _tmp4_);
	_tmp6_ = _tmp5_;
	_g_free0 (_tmp4_);
	_g_free0 (_tmp2_);
	uri = _tmp6_;
	result = uri;
	return result;
}


static void __lambda60_ (PanelMenuHTML* self, WebKitWebFrame* frame, WebKitWebResource* resource, WebKitNetworkRequest* request, WebKitNetworkResponse* response) {
	WebKitWebResource* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	g_return_if_fail (frame != NULL);
	g_return_if_fail (resource != NULL);
	g_return_if_fail (request != NULL);
	_tmp0_ = resource;
	_tmp1_ = webkit_web_resource_get_uri (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = g_str_has_prefix (_tmp2_, "theme://");
	if (_tmp3_) {
		WebKitNetworkRequest* _tmp4_ = NULL;
		WebKitWebResource* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		_tmp4_ = request;
		_tmp5_ = resource;
		_tmp6_ = webkit_web_resource_get_uri (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp8_ = panel_menu_html_translate_theme (self, _tmp7_);
		_tmp9_ = _tmp8_;
		webkit_network_request_set_uri (_tmp4_, _tmp9_);
		_g_free0 (_tmp9_);
	} else {
		gchar* uri = NULL;
		WebKitWebResource* _tmp10_ = NULL;
		const gchar* _tmp11_ = NULL;
		const gchar* _tmp12_ = NULL;
		gchar* _tmp13_ = NULL;
		WebKitNetworkRequest* _tmp14_ = NULL;
		const gchar* _tmp15_ = NULL;
		_tmp10_ = resource;
		_tmp11_ = webkit_web_resource_get_uri (_tmp10_);
		_tmp12_ = _tmp11_;
		_tmp13_ = panel_menu_html_translate_uri (self, _tmp12_);
		uri = _tmp13_;
		_tmp14_ = request;
		_tmp15_ = uri;
		webkit_network_request_set_uri (_tmp14_, _tmp15_);
		_g_free0 (uri);
	}
}


static void ___lambda60__webkit_web_view_resource_request_starting (WebKitWebView* _sender, WebKitWebFrame* p0, WebKitWebResource* p1, WebKitNetworkRequest* p2, WebKitNetworkResponse* p3, gpointer self) {
	__lambda60_ ((PanelMenuHTML*) self, p0, p1, p2, p3);
}


static void __lambda61_ (PanelMenuHTML* self, WebKitWebFrame* frame, void* context) {
	void* _tmp0_ = NULL;
	void* _tmp1_ = NULL;
	void* _tmp2_ = NULL;
	void* _tmp3_ = NULL;
	void* _tmp4_ = NULL;
	g_return_if_fail (frame != NULL);
	_tmp0_ = context;
	panel_xdg_data_setup_js_class ((void*) _tmp0_);
	_tmp1_ = context;
	utils_setup_js_class ((void*) _tmp1_);
	_tmp2_ = context;
	panel_places_setup_js_class ((void*) _tmp2_);
	_tmp3_ = context;
	panel_session_manager_setup_js_class ((void*) _tmp3_);
	_tmp4_ = context;
	panel_user_setup_js_class ((void*) _tmp4_);
}


static void ___lambda61__webkit_web_view_window_object_cleared (WebKitWebView* _sender, WebKitWebFrame* frame, void* context, void* window_object, gpointer self) {
	__lambda61_ ((PanelMenuHTML*) self, frame, context);
}


PanelMenuHTML* panel_menu_html_construct (GType object_type) {
	PanelMenuHTML * self = NULL;
	GdkScreen* _tmp0_ = NULL;
	GdkVisual* _tmp1_ = NULL;
	GdkRGBA c = {0};
	GdkRGBA _tmp2_ = {0};
	WebKitWebSettings* settings = NULL;
	WebKitWebSettings* _tmp3_ = NULL;
	WebKitWebSettings* _tmp4_ = NULL;
	WebKitWebSettings* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	WebKitWebSettings* _tmp8_ = NULL;
	self = (PanelMenuHTML*) g_object_new (object_type, NULL);
	_tmp0_ = gdk_screen_get_default ();
	_tmp1_ = gdk_screen_get_rgba_visual (_tmp0_);
	gtk_widget_set_visual ((GtkWidget*) self, _tmp1_);
	memset (&c, 0, sizeof (GdkRGBA));
	c.red = 0.0;
	c.blue = 0.0;
	c.green = 0.0;
	c.alpha = 0.0;
	_tmp2_ = c;
	gtk_widget_override_background_color ((GtkWidget*) self, GTK_STATE_FLAG_NORMAL, &_tmp2_);
	gtk_widget_set_app_paintable ((GtkWidget*) self, TRUE);
	webkit_web_view_set_transparent ((WebKitWebView*) self, TRUE);
	_tmp3_ = webkit_web_settings_new ();
	settings = _tmp3_;
	_tmp4_ = settings;
	g_object_set (_tmp4_, "enable-file-access-from-file-uris", TRUE, NULL);
	_tmp5_ = settings;
	g_object_set (_tmp5_, "enable-universal-access-from-file-uris", TRUE, NULL);
	_tmp6_ = g_getenv ("MANOKWARI_DEBUG");
	if (_tmp6_ == NULL) {
		WebKitWebSettings* _tmp7_ = NULL;
		_tmp7_ = settings;
		g_object_set (_tmp7_, "enable-default-context-menu", FALSE, NULL);
	}
	_tmp8_ = settings;
	webkit_web_view_set_settings ((WebKitWebView*) self, _tmp8_);
	g_signal_connect_object ((WebKitWebView*) self, "resource-request-starting", (GCallback) ___lambda60__webkit_web_view_resource_request_starting, self, 0);
	g_signal_connect_object ((WebKitWebView*) self, "window-object-cleared", (GCallback) ___lambda61__webkit_web_view_window_object_cleared, self, 0);
	_g_object_unref0 (settings);
	return self;
}


PanelMenuHTML* panel_menu_html_new (void) {
	return panel_menu_html_construct (TYPE_PANEL_MENU_HTML);
}


void panel_menu_html_start (PanelMenuHTML* self) {
	g_return_if_fail (self != NULL);
	webkit_web_view_load_uri ((WebKitWebView*) self, "http://system/menu.html");
}


void panel_menu_html_triggerShowAnimation (PanelMenuHTML* self) {
	void* context = NULL;
	WebKitWebFrame* _tmp0_ = NULL;
	void* _tmp1_ = NULL;
	void* s = NULL;
	void* _tmp2_ = NULL;
	void* _tmp3_ = NULL;
	void* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = webkit_web_view_get_focused_frame ((WebKitWebView*) self);
	_tmp1_ = webkit_web_frame_get_global_context (_tmp0_);
	context = _tmp1_;
	_tmp2_ = JSStringCreateWithUTF8CString ("menu.prepareShow()");
	s = _tmp2_;
	_tmp3_ = JSEvaluateScript (context, s, NULL, NULL, 0, NULL);
	_tmp4_ = _tmp3_;
	_0 (_tmp4_);
	_JSStringRelease0 (s);
}


void panel_menu_html_triggerHideAnimation (PanelMenuHTML* self) {
	void* context = NULL;
	WebKitWebFrame* _tmp0_ = NULL;
	void* _tmp1_ = NULL;
	void* s = NULL;
	void* _tmp2_ = NULL;
	void* _tmp3_ = NULL;
	void* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = webkit_web_view_get_focused_frame ((WebKitWebView*) self);
	_tmp1_ = webkit_web_frame_get_global_context (_tmp0_);
	context = _tmp1_;
	_tmp2_ = JSStringCreateWithUTF8CString ("menu.prepareHide()");
	s = _tmp2_;
	_tmp3_ = JSEvaluateScript (context, s, NULL, NULL, 0, NULL);
	_tmp4_ = _tmp3_;
	_0 (_tmp4_);
	_JSStringRelease0 (s);
}


gboolean panel_menu_html_handleEsc (PanelMenuHTML* self) {
	gboolean result = FALSE;
	void* context = NULL;
	WebKitWebFrame* _tmp0_ = NULL;
	void* _tmp1_ = NULL;
	void* s = NULL;
	void* _tmp2_ = NULL;
	void* r = NULL;
	void* _tmp3_ = NULL;
	void* _tmp4_ = NULL;
	void* _tmp5_ = NULL;
	void* _tmp6_ = NULL;
	void* _tmp7_ = NULL;
	gboolean _tmp8_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = webkit_web_view_get_focused_frame ((WebKitWebView*) self);
	_tmp1_ = webkit_web_frame_get_global_context (_tmp0_);
	context = _tmp1_;
	_tmp2_ = JSStringCreateWithUTF8CString ("menu.handleEsc()");
	s = _tmp2_;
	_tmp3_ = context;
	_tmp4_ = s;
	_tmp5_ = JSEvaluateScript (_tmp3_, _tmp4_, NULL, NULL, 0, NULL);
	r = _tmp5_;
	_tmp6_ = r;
	_tmp7_ = context;
	_tmp8_ = JSValueIsBoolean (_tmp7_, _tmp6_);
	if (_tmp8_) {
		void* _tmp9_ = NULL;
		void* _tmp10_ = NULL;
		gboolean _tmp11_ = FALSE;
		_tmp9_ = r;
		_tmp10_ = context;
		_tmp11_ = JSValueToBoolean (_tmp10_, _tmp9_);
		result = _tmp11_;
		_0 (r);
		_JSStringRelease0 (s);
		return result;
	}
	result = FALSE;
	_0 (r);
	_JSStringRelease0 (s);
	return result;
}


static void panel_menu_html_class_init (PanelMenuHTMLClass * klass) {
	panel_menu_html_parent_class = g_type_class_peek_parent (klass);
}


static void panel_menu_html_instance_init (PanelMenuHTML * self) {
}


GType panel_menu_html_get_type (void) {
	static volatile gsize panel_menu_html_type_id__volatile = 0;
	if (g_once_init_enter (&panel_menu_html_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PanelMenuHTMLClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) panel_menu_html_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PanelMenuHTML), 0, (GInstanceInitFunc) panel_menu_html_instance_init, NULL };
		GType panel_menu_html_type_id;
		panel_menu_html_type_id = g_type_register_static (WEBKIT_TYPE_WEB_VIEW, "PanelMenuHTML", &g_define_type_info, 0);
		g_once_init_leave (&panel_menu_html_type_id__volatile, panel_menu_html_type_id);
	}
	return panel_menu_html_type_id__volatile;
}


