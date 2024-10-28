#pragma once

#include <CS2/Classes/CLoopModeGame.h>
#include <CS2/Classes/GlobalVars.h>
#include <CS2/Classes/ClientModeCSNormal.h>
#include <CS2/Classes/CViewRender.h>
#include <CS2/Classes/Entities/CCSPlayerController.h>
#include <CS2/Classes/Glow.h>
#include <CS2/Classes/VMatrix.h>
#include <CS2/Panorama/CPanel2D.h>
#include <Utils/ReturnAddress.h>
#include <Utils/StrongTypeAlias.h>

STRONG_TYPE_ALIAS(MainMenuPanelPointer, cs2::CPanel2D**);
STRONG_TYPE_ALIAS(HudPanelPointer, cs2::CPanel2D**);
STRONG_TYPE_ALIAS(LoopModeGamePointer, cs2::CLoopModeGame**);
STRONG_TYPE_ALIAS(GlobalVarsPointer, cs2::GlobalVars**);
STRONG_TYPE_ALIAS(ClientModePointer, cs2::ClientModeCSNormal*);
STRONG_TYPE_ALIAS(GetWorldSessionInClientMode, ReturnAddress);
STRONG_TYPE_ALIAS(TransformTranslate3dVMT, const void*);
STRONG_TYPE_ALIAS(TransformScale3dVMT, const void*);
STRONG_TYPE_ALIAS(WorldToProjectionMatrixPointer, cs2::VMatrix*);
STRONG_TYPE_ALIAS(ViewToProjectionMatrixPointer, cs2::VMatrix*);
STRONG_TYPE_ALIAS(ViewRenderPointer, cs2::CViewRender**);
STRONG_TYPE_ALIAS(LocalPlayerControllerPointer, cs2::CCSPlayerController**);
STRONG_TYPE_ALIAS(ManageGlowSceneObjectPointer, cs2::ManageGlowSceneObject*);
