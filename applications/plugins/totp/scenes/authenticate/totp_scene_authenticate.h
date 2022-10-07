#ifndef _TOTP_SCENE_AUTHENTICATE_H_
#define _TOTP_SCENE_AUTHENTICATE_H_

#include <gui/gui.h>
#include <furi.h>
#include <furi_hal.h>
#include "../../types/plugin_state.h"
#include "../../types/plugin_event.h"

void totp_scene_authenticate_init(PluginState* plugin_state);
void totp_scene_authenticate_activate(PluginState* plugin_state);
void totp_scene_authenticate_render(Canvas* const canvas, PluginState* plugin_state);
bool totp_scene_authenticate_handle_event(PluginEvent* const event, PluginState* plugin_state);
void totp_scene_authenticate_deactivate(PluginState* plugin_state);
void totp_scene_authenticate_free(PluginState* plugin_state);

#endif