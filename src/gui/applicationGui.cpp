////////////////////////////////////////////////////////////////////////////////
#include "applicationGui.hpp"
////////////////////////////////////////////////////////////////////////////////
ApplicationGui* gAppGui = nullptr;
////////////////////////////////////////////////////////////////////////////////
ApplicationGui::ApplicationGui()
    : Application()
{
    gAppGui = this;
}
////////////////////////////////////////////////////////////////////////////////
ApplicationGui::~ApplicationGui()
{
    // already done in Application
    //delete m_controllerGui;
}
////////////////////////////////////////////////////////////////////////////////
ControllerGui& ApplicationGui::getControllerGui()
{
    return *m_controllerGui;
}
////////////////////////////////////////////////////////////////////////////////
void ApplicationGui::setControllerGui(ControllerGui* cont)
{
    setController(cont);
    m_controllerGui = cont;
}
////////////////////////////////////////////////////////////////////////////////
osg::ref_ptr<OsgScene> ApplicationGui::getOsgScene()
{
    return m_osgScene;
}
////////////////////////////////////////////////////////////////////////////////
TreeView* ApplicationGui::getTreeView()
{
    return m_treeView;
}
////////////////////////////////////////////////////////////////////////////////
void ApplicationGui::setOsgScene(osg::ref_ptr<OsgScene> scene)
{
    m_osgScene = scene;
}
////////////////////////////////////////////////////////////////////////////////
void ApplicationGui::setTreeView(TreeView* treeview)
{
    m_treeView = treeview;
}
////////////////////////////////////////////////////////////////////////////////
ApplicationGui& appGui()
{
    return *gAppGui;
}
////////////////////////////////////////////////////////////////////////////////
