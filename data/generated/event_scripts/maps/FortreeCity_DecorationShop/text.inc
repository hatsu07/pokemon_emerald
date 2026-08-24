	@ data/maps/FortreeCity_DecorationShop/scripts.inc:56 FortreeCity_DecorationShop_Text_MerchandiseSentToPC
	.globl FortreeCity_DecorationShop_Text_MerchandiseSentToPC
FortreeCity_DecorationShop_Text_MerchandiseSentToPC: @ 0x0820545C
	.string "ここで かった ものは\nパソコンに とどけられる!\pなんと すばらしい! ついでに わしも\nいえまで とどけて くれないものか{EOS}"
	.if (. - FortreeCity_DecorationShop_Text_MerchandiseSentToPC) > 0x40
	.error "FortreeCity_DecorationShop_Text_MerchandiseSentToPC may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_DecorationShop_Text_MerchandiseSentToPC) < 0x40
	.space 0x40 - (. - FortreeCity_DecorationShop_Text_MerchandiseSentToPC)
	.endif
	@ data/maps/FortreeCity_DecorationShop/scripts.inc:59 FortreeCity_DecorationShop_Text_BuyingDeskForDolls
	.globl FortreeCity_DecorationShop_Text_BuyingDeskForDolls
FortreeCity_DecorationShop_Text_BuyingDeskForDolls: @ 0x0820549C
	.string "すてきな つくえを かって そのうえに\nかわいい ぬいぐるみを ならべるんだ!\pそうしないと ひみつきちに おくとき\nつちで よごれたり トゲが ささって\lぬいぐるみが かわいそう だもん!{EOS}"
	.if (. - FortreeCity_DecorationShop_Text_BuyingDeskForDolls) > 0x60
	.error "FortreeCity_DecorationShop_Text_BuyingDeskForDolls may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_DecorationShop_Text_BuyingDeskForDolls) < 0x60
	.space 0x60 - (. - FortreeCity_DecorationShop_Text_BuyingDeskForDolls)
	.endif
	@ analyzed canonical ROM range 0x082054FC-0x082055D7
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_082054FD
EventScript_JP_082054FD: @ 0x082054FD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820555E
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_08205537
	loadword 0x00, LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_08205537: @ 0x08205537
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_0820555E: @ 0x0820555E
	loadword 0x00, LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
.globl EventScript_JP_08205585
EventScript_JP_08205585: @ 0x08205585
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, FortreeCity_DecorationShop_Movement_FaceRight_LockFacingDirection_WalkLeft_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0001, FortreeCity_DecorationShop_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, FortreeCity_DecorationShop_Movement_FaceDown_WalkDown_FaceUp
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
FortreeCity_DecorationShop_Movement_FaceRight_LockFacingDirection_WalkLeft_UnlockFacingDirection: @ 0x082055CD
	@ object movement sequence
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
FortreeCity_DecorationShop_Movement_WalkUp: @ 0x082055D2
	@ object movement sequence
	walk_up
	step_end
FortreeCity_DecorationShop_Movement_FaceDown_WalkDown_FaceUp: @ 0x082055D4
	@ object movement sequence
	face_down
	walk_down
	face_up
	step_end
