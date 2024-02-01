#pragma once
#include "ComponentsCommon.h"

namespace illusion
{
#define INIT_INFO(component) namespace component { struct init_info; }
	INIT_INFO(transform); // forward decleration
#undef INIT_INFO
	namespace game_entity 
	{
		struct entity_info
		{
			transform::init_info* transform{ nullptr };
		};

		entity create_game_entity(const entity_info& info);
		void remove_game_entity(entity id);
		bool is_alive(entity e);
	}
}