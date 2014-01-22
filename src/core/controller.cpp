////////////////////////////////////////////////////////////////////////////////
#include "controller.hpp"
#include "application.hpp"
////////////////////////////////////////////////////////////////////////////////
namespace vcity
{
////////////////////////////////////////////////////////////////////////////////
Controller::Controller()
{

}
////////////////////////////////////////////////////////////////////////////////
void Controller::reset()
{

}
////////////////////////////////////////////////////////////////////////////////
void Controller::addNode(const URI& URI)
{

}
////////////////////////////////////////////////////////////////////////////////
void Controller::deleteNode(const URI& URI)
{

}
////////////////////////////////////////////////////////////////////////////////
void Controller::addLayer(const std::string& name)
{

}
////////////////////////////////////////////////////////////////////////////////
void Controller::deleteLayer(const vcity::URI& URI)
{

}
////////////////////////////////////////////////////////////////////////////////
void Controller::setLayerName(const vcity::URI& uri, const std::string& name)
{
    Layer* layer = app().getScene().getLayer(uri);
    if(layer)
    {
        layer->setName(name);
    }
}
////////////////////////////////////////////////////////////////////////////////
void Controller::addTile(const vcity::URI& uriLayer, vcity::Tile& tile)
{
    app().getScene().addTile(uriLayer, &tile);
}
////////////////////////////////////////////////////////////////////////////////
//void Controller::deleteTile(const vcity::URI& uri);
////////////////////////////////////////////////////////////////////////////////
void Controller::setTileName(const vcity::URI& uri, const std::string& name)
{
    Tile* tile = app().getScene().getTile(uri);
    if(tile)
    {
        tile->setName(name);
    }
}
////////////////////////////////////////////////////////////////////////////////
} // namespace vcity
////////////////////////////////////////////////////////////////////////////////
