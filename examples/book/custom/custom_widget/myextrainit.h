/* gtkmm example Copyright (C) 2017 gtkmm development team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTKMM_CUSTOM_WIDGET_MYEXTRAINIT_H
#define GTKMM_CUSTOM_WIDGET_MYEXTRAINIT_H

#include <glibmm/extraclassinit.h>
#include <glibmm/ustring.h>

// Calls gtk_widget_class_set_css_name() in the class init function
// and gtk_set_has_window() in the instance init function.
class MyExtraInit : public Glib::ExtraClassInit
{
public:
  MyExtraInit(const Glib::ustring& css_name);

private:
  Glib::ustring m_css_name;
};

#endif //GTKMM_CUSTOM_WIDGET_MYEXTRAINIT_H
