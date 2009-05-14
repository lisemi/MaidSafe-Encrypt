/*
 * copyright maidsafe.net limited 2008
 * The following source code is property of maidsafe.net limited and
 * is not meant for external use. The use of this code is governed
 * by the license file LICENSE.TXT found in the root of this directory and also
 * on www.maidsafe.net.
 *
 * You are not free to copy, amend or otherwise use this source code without
 * explicit written permission of the board of directors of maidsafe.net
 *
 *  Created on: Nov 13, 2008
 *      Author: Team
 */
#ifndef GUI_MESSAGE_MAIN_H_
#define GUI_MESSAGE_MAIN_H_

#include <wx/panel.h>

class MessageMain: public wxPanel {
  public:
    MessageMain(wxWindow* parent, wxWindowID id = wxID_ANY,
      const wxPoint& pos = wxDefaultPosition,
      const wxSize& size = wxDefaultSize);
};

#endif  // GUI_MESSAGE_MAIN_H_
