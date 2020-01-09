
/* Generated data (by glib-mkenums) */

#include "grl-type-builtins.h"
#include "./grl-source.h"
/* enumerations from "./grl-source.h" */
GType
grl_supported_ops_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { GRL_OP_NONE, "GRL_OP_NONE", "none" },
            { GRL_OP_RESOLVE, "GRL_OP_RESOLVE", "resolve" },
            { GRL_OP_BROWSE, "GRL_OP_BROWSE", "browse" },
            { GRL_OP_SEARCH, "GRL_OP_SEARCH", "search" },
            { GRL_OP_QUERY, "GRL_OP_QUERY", "query" },
            { GRL_OP_STORE, "GRL_OP_STORE", "store" },
            { GRL_OP_STORE_PARENT, "GRL_OP_STORE_PARENT", "store-parent" },
            { GRL_OP_STORE_METADATA, "GRL_OP_STORE_METADATA", "store-metadata" },
            { GRL_OP_REMOVE, "GRL_OP_REMOVE", "remove" },
            { GRL_OP_MEDIA_FROM_URI, "GRL_OP_MEDIA_FROM_URI", "media-from-uri" },
            { GRL_OP_NOTIFY_CHANGE, "GRL_OP_NOTIFY_CHANGE", "notify-change" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("GrlSupportedOps"), values);
    }
    return etype;
}

GType
grl_source_change_type_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GRL_CONTENT_CHANGED, "GRL_CONTENT_CHANGED", "changed" },
            { GRL_CONTENT_ADDED, "GRL_CONTENT_ADDED", "added" },
            { GRL_CONTENT_REMOVED, "GRL_CONTENT_REMOVED", "removed" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GrlSourceChangeType"), values);
    }
    return etype;
}

/* enumerations from "./grl-caps.h" */
GType
grl_type_filter_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { GRL_TYPE_FILTER_NONE, "GRL_TYPE_FILTER_NONE", "none" },
            { GRL_TYPE_FILTER_AUDIO, "GRL_TYPE_FILTER_AUDIO", "audio" },
            { GRL_TYPE_FILTER_VIDEO, "GRL_TYPE_FILTER_VIDEO", "video" },
            { GRL_TYPE_FILTER_IMAGE, "GRL_TYPE_FILTER_IMAGE", "image" },
            { GRL_TYPE_FILTER_ALL, "GRL_TYPE_FILTER_ALL", "all" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("GrlTypeFilter"), values);
    }
    return etype;
}

/* enumerations from "./grl-operation-options.h" */
GType
grl_resolution_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { GRL_RESOLVE_NORMAL, "GRL_RESOLVE_NORMAL", "normal" },
            { GRL_RESOLVE_FULL, "GRL_RESOLVE_FULL", "full" },
            { GRL_RESOLVE_IDLE_RELAY, "GRL_RESOLVE_IDLE_RELAY", "idle-relay" },
            { GRL_RESOLVE_FAST_ONLY, "GRL_RESOLVE_FAST_ONLY", "fast-only" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("GrlResolutionFlags"), values);
    }
    return etype;
}

GType
grl_write_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { GRL_WRITE_NORMAL, "GRL_WRITE_NORMAL", "normal" },
            { GRL_WRITE_FULL, "GRL_WRITE_FULL", "full" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("GrlWriteFlags"), values);
    }
    return etype;
}

/* enumerations from "./data/grl-media.h" */
GType
grl_media_serialize_type_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GRL_MEDIA_SERIALIZE_BASIC, "GRL_MEDIA_SERIALIZE_BASIC", "basic" },
            { GRL_MEDIA_SERIALIZE_PARTIAL, "GRL_MEDIA_SERIALIZE_PARTIAL", "partial" },
            { GRL_MEDIA_SERIALIZE_FULL, "GRL_MEDIA_SERIALIZE_FULL", "full" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GrlMediaSerializeType"), values);
    }
    return etype;
}

GType
grl_media_type_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { GRL_MEDIA_TYPE_NONE, "GRL_MEDIA_TYPE_NONE", "none" },
            { GRL_MEDIA_TYPE_AUDIO, "GRL_MEDIA_TYPE_AUDIO", "audio" },
            { GRL_MEDIA_TYPE_VIDEO, "GRL_MEDIA_TYPE_VIDEO", "video" },
            { GRL_MEDIA_TYPE_IMAGE, "GRL_MEDIA_TYPE_IMAGE", "image" },
            { GRL_MEDIA_TYPE_ALL, "GRL_MEDIA_TYPE_ALL", "all" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("GrlMediaType"), values);
    }
    return etype;
}



/* Generated data ends here */

