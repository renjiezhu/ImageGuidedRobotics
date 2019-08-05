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

#ifndef __qImageGuidedRoboticsAppMainWindow_h
#define __qImageGuidedRoboticsAppMainWindow_h

// ImageGuidedRobotics includes
#include "qImageGuidedRoboticsAppExport.h"
class qImageGuidedRoboticsAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_IMAGEGUIDEDROBOTICS_APP_EXPORT qImageGuidedRoboticsAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qImageGuidedRoboticsAppMainWindow(QWidget *parent=0);
  virtual ~qImageGuidedRoboticsAppMainWindow();

public slots:
  void on_HelpAboutImageGuidedRoboticsAppAction_triggered();

protected:
  qImageGuidedRoboticsAppMainWindow(qImageGuidedRoboticsAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qImageGuidedRoboticsAppMainWindow);
  Q_DISABLE_COPY(qImageGuidedRoboticsAppMainWindow);
};

#endif
