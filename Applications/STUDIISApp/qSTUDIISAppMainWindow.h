/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSTUDIISAppMainWindow_h
#define __qSTUDIISAppMainWindow_h

// STUDIIS includes
#include "qSTUDIISAppExport.h"
class qSTUDIISAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_STUDIIS_APP_EXPORT qSTUDIISAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qSTUDIISAppMainWindow(QWidget *parent=0);
  virtual ~qSTUDIISAppMainWindow();

public slots:
  void on_HelpAboutSTUDIISAppAction_triggered();

protected:
  qSTUDIISAppMainWindow(qSTUDIISAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qSTUDIISAppMainWindow);
  Q_DISABLE_COPY(qSTUDIISAppMainWindow);
};

#endif
