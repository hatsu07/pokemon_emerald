	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:736 BattleFrontier_BattlePikeRoomNormal_Text_Silence (+2 aliases)
	.globl BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts
BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts: @ 0x0826215E
	.string "…… …… ……\n…… …… ……{EOS}"
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts) > 0x12
	.error "BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts) < 0x12
	.space 0x12 - (. - BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts)
	.endif
