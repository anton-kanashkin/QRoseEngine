#pragma once

#include "Engine.hpp"

namespace QRose
{
	class Win32Engine : public Engine
	{
	public:
		Win32Engine(ManagedPtr<EntitiesComponentsService> pEntitiesComponentsService, std::vector<System*> systems);
		virtual ~Win32Engine();

		void PresentScene(const Scene& scene) override;
	};
}