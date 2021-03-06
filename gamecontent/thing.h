//////////////////////////////////////////////////////////////////////
// Yet Another Tibia Client
//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////

#ifndef __YATC_THING_H__
#define __YATC_THING_H__

#include <stdlib.h>
#include "../stdinttypes.h"
#include "../thingui.h"

class Item;
class Creature;

class Thing : virtual public ThingUI {
public:
	Thing(){};
	virtual ~Thing(){};

	static void deleteThing(Thing* thing){
		if(!thing->getCreature()){
			delete thing;
		}
	}

	virtual uint32_t getID() const = 0;
	virtual uint32_t getOrder() const = 0;

	virtual Item* getItem(){return NULL;}
	virtual Creature* getCreature(){return NULL;}

	virtual const Item* getItem() const {return NULL;}
	virtual const Creature* getCreature() const {return NULL;}

	virtual uint8_t getMapColor() const { return 0; }
};

#endif
