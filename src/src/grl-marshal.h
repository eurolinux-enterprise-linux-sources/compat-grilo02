
#ifndef __grl_marshal_MARSHAL_H__
#define __grl_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:BOXED,ENUM,BOOLEAN (grl-marshal.list:1) */
extern void grl_marshal_VOID__BOXED_ENUM_BOOLEAN (GClosure     *closure,
                                                  GValue       *return_value,
                                                  guint         n_param_values,
                                                  const GValue *param_values,
                                                  gpointer      invocation_hint,
                                                  gpointer      marshal_data);

G_END_DECLS

#endif /* __grl_marshal_MARSHAL_H__ */

