#include "script_component.hpp"
/*
 * Author: Salbei
 * Checks if abs can be used.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Caller <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [TARGET, CALLER] call grad_mod_fnc_canUseAbs
 *
 * Public: Yes
 */

params ["_target", "_caller", "_selection"];

if (GVAR(allowABS) == 0) exitWith { false };
if !(_target isKindOf "CAManBase") exitWith { false };

// Allow self treatment check
if (_caller == _target) exitwith {false};

//check if needs medic
if ((GVAR(allowABS) == 1) && {!([_caller, _medicRequired] call FUNC(isMedic))}) exitwith { false };
private _openWounds = _target getVariable ["ace_medical_openWounds", []];
if (count _openWounds == 0) exitWith {false}; // nothing to do here!

private _wounds = [0,0,0,0,0,0];

{
   _x params ["", "", "_bodyPart", "_numOpenWounds"];

   switch (_bodyPart) do {
      
      // Head
      case 0: {
         _wounds set [_bodyPart, ((_wounds select _bodyPart) + _numOpenWounds)];
      };

      // Body
      case 1: {
         _wounds set [_bodyPart, ((_wounds select _bodyPart) + _numOpenWounds)];
      };

      // Left Arm
      case 2: {
         _wounds set [_bodyPart, ((_wounds select _bodyPart) + _numOpenWounds)];
      };

      // Right Arm
      case 3: {
         _wounds set [_bodyPart, ((_wounds select _bodyPart) + _numOpenWounds)];
      };

      // Left Leg
      case 4: {
         _wounds set [_bodyPart, ((_wounds select _bodyPart) + _numOpenWounds)];
      };

      // Right Leg
      case 5: {
         _wounds set [_bodyPart, ((_wounds select _bodyPart) + _numOpenWounds)];
      };
   };
} forEach _openWounds;

if (count (_wounds select _selection) <= 50) exitWith { false };

true