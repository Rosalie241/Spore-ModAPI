#ifndef MODAPI_DLL_EXPORT
/****************************************************************************
* Copyright (C) 2019 Eric Mor
*
* This file is part of Spore ModAPI.
*
* Spore ModAPI is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
****************************************************************************/
#include <Spore\Simulator\cSimulatorSpaceGame.h>

namespace Simulator
{

	cPlayerInventory* cSimulatorSpaceGame::GetPlayerInventory() {
		return mpPlayerInventory.get();
	}

	auto_STATIC_METHOD_(cSimulatorSpaceGame, cSimulatorSpaceGame*, Get);

	auto_METHOD_VOID(cSimPlanetHighLOD, DestroyCity, Args(cCity* pCity, uint32_t aggressorEmpireID), Args(pCity, aggressorEmpireID));
}
#endif
