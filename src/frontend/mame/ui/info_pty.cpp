// license:BSD-3-Clause
// copyright-holders:F.Ulivi
/***************************************************************************

    ui/info_pty.cpp

    Information screen on pseudo terminals

***************************************************************************/

#include "emu.h"
#include "ui/menu.h"
#include "ui/info_pty.h"

ui_menu_pty_info::ui_menu_pty_info(mame_ui_manager &mui, render_container *container) :
	ui_menu(mui, container)
{
}

ui_menu_pty_info::~ui_menu_pty_info()
{
}

void ui_menu_pty_info::populate()
{
	item_append(_("Pseudo terminals"), nullptr, MENU_FLAG_DISABLE, nullptr);
	item_append("", nullptr, MENU_FLAG_DISABLE, nullptr);

	for (device_pty_interface &pty : pty_interface_iterator(machine().root_device()))
	{
		const char *port_name = pty.device().owner()->tag() + 1;
		if (pty.is_open())
			item_append(port_name, pty.slave_name(), MENU_FLAG_DISABLE, nullptr);
		else
			item_append(port_name, _("[failed]"), MENU_FLAG_DISABLE, nullptr);
		item_append("", nullptr, MENU_FLAG_DISABLE, nullptr);
	}
}

void ui_menu_pty_info::handle()
{
	process(0);
}
