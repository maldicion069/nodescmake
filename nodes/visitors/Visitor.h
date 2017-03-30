#pragma once

class Node;
class Group;
class Camera;
class Light;

#include <nodes/api.h>

class Visitor
{
protected:
  Visitor( ) {}
public:
  NODES_API
    virtual ~Visitor( );
  NODES_API
    virtual void reset( void );
  NODES_API
    virtual void traverse( Node* node );
  NODES_API
    virtual void visitNode( Node *node );
  NODES_API
    virtual void visitGroup( Group *group );
  NODES_API
  virtual void visitCamera( Camera *camera );
  NODES_API
  virtual void visitLight( Light* light );
private:
  Visitor( const Visitor& );
  Visitor &operator= ( const Visitor& );
};
