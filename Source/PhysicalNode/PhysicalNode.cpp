/**
 * @file    PhysicalNode.cpp
 * Name:    3G LTE System Simulator
 * @author  Guilherme Silveira Rabelo
 * Date:    03/11/2008
 *
 * This file is part of the undergraduate final project, under the supervision 
 * of Robson Domingos and Paulo Portela.
 * 
 * @author_2  Luiz Gustavo da Silva Carvalho
 * @author_3  Marcos Samuel Santos Ouriques  
 * Date:      09/01/2012 (Month/Day/Year)
 * 
 * This file is also a part of the undergraduate final project, under the supervision 
 * of Andre Noll Barreto.
 */ 



// *****************************************************************************
// Includes
// *****************************************************************************

#include "PhysicalNode.h"

// *****************************************************************************
// Static attributes initialization
// *****************************************************************************


// *****************************************************************************
// Constructors
// *****************************************************************************

PhysicalNode::
PhysicalNode::PhysicalNode()
{
   site_ = 0;
   sector_ = 0;
   id_ = 0;
   
};

// -----------------------------------------------------------------------------

PhysicalNode::
PhysicalNode::~PhysicalNode()
{
   if (device_ != 0 )
   {
      delete device_;
      device_ = 0;
   }
};

// *****************************************************************************
// Interface
// *****************************************************************************

Basic::Position
PhysicalNode::
PhysicalNode::getPosition()
{
   return position_;
};

//------------------------------------------------------------------------------

int
PhysicalNode::
PhysicalNode::getId()
{
   return id_;
};

//------------------------------------------------------------------------------

double
PhysicalNode::
PhysicalNode::getGain( double theta )
{
   return 2.0; //device_->getGain( theta );  
}

//------------------------------------------------------------------------------

int
PhysicalNode::
PhysicalNode::getSite()
{
   return site_; 
}

//------------------------------------------------------------------------------

int
PhysicalNode::
PhysicalNode::getSector()
{
   return sector_; 
}

// *****************************************************************************
// Operators
// *****************************************************************************



// *****************************************************************************
// Protected Methods
// *****************************************************************************



// *****************************************************************************
// Private Methods
// *****************************************************************************





