	@ data/maps/FortreeCity_Mart/scripts.inc:40 FortreeCity_Mart_Text_SuperRepelBetter
	.globl FortreeCity_Mart_Text_SuperRepelBetter
FortreeCity_Mart_Text_SuperRepelBetter: @ 0x08204E0B
	.string "シルバースプレーは\nききめ ながもち! こうか ばつぐん!\pつまり むしよけスプレー よりも\nすごい ってことね!{EOS}"
	.if (. - FortreeCity_Mart_Text_SuperRepelBetter) > 0x3a
	.error "FortreeCity_Mart_Text_SuperRepelBetter may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Mart_Text_SuperRepelBetter) < 0x3a
	.space 0x3a - (. - FortreeCity_Mart_Text_SuperRepelBetter)
	.endif
	@ data/maps/FortreeCity_Mart/scripts.inc:43 FortreeCity_Mart_Text_StockUpOnItems
	.globl FortreeCity_Mart_Text_StockUpOnItems
FortreeCity_Mart_Text_StockUpOnItems: @ 0x08204E45
	.string "もしも ってことが あるかも しれないし\nどうぐは おおめに かうように してるのよ{EOS}"
	.if (. - FortreeCity_Mart_Text_StockUpOnItems) > 0x2b
	.error "FortreeCity_Mart_Text_StockUpOnItems may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Mart_Text_StockUpOnItems) < 0x2b
	.space 0x2b - (. - FortreeCity_Mart_Text_StockUpOnItems)
	.endif
	@ data/maps/FortreeCity_Mart/scripts.inc:46 FortreeCity_Mart_Text_RareCandyMakesMonGrow
	.globl FortreeCity_Mart_Text_RareCandyMakesMonGrow
FortreeCity_Mart_Text_RareCandyMakesMonGrow: @ 0x08204E70
	.string "ふしぎなアメを あげると\nポケモン いっきに そだって\lレベルが あがっちゃうんだ!{EOS}"
	.if (. - FortreeCity_Mart_Text_RareCandyMakesMonGrow) > 0x2b
	.error "FortreeCity_Mart_Text_RareCandyMakesMonGrow may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Mart_Text_RareCandyMakesMonGrow) < 0x2b
	.space 0x2b - (. - FortreeCity_Mart_Text_RareCandyMakesMonGrow)
	.endif
	@ analyzed canonical ROM range 0x08204E9B-0x08204F52
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08204E9B: @ 0x08204E9B
	.byte 0x00
.globl EventScript_JP_08204E9C
EventScript_JP_08204E9C: @ 0x08204E9C
	lock
	faceplayer
	checkflag 0x0108
	goto_if 0x01, EventScript_JP_08204F3F
	checkflag 0x0076
	call_if 0x00, EventScript_JP_08204F33
	loadword 0x00, FortreeCity_House2_Text_CoinInWhichHand
	callstd 0x04
	multichoice 0x15, 0x08, 0x36, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08204F49
	loadword 0x00, FortreeCity_House2_Text_CorrectTryAgainWhichHand_Copy_Rom_204FD5
	callstd 0x04
	multichoice 0x15, 0x08, 0x36, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08204F49
	loadword 0x00, FortreeCity_House2_Text_CorrectTryAgainWhichHand_Copy_Rom_205013
	callstd 0x04
	multichoice 0x15, 0x08, 0x36, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08204F49
	loadword 0x00, FortreeCity_House2_Text_YourHiddenPowerHasAwoken
	callstd 0x04
	setorcopyvar 0x8000, 0x012A
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0108
	loadword 0x00, FortreeCity_House2_Text_ExplainHiddenPower
	callstd 0x04
	release
	end
EventScript_08204F33: @ 0x08204F33
EventScript_JP_08204F33: @ 0x08204F33
	loadword 0x00, FortreeCity_House2_Text_HiddenPowersArousedByNature
	callstd 0x04
	setflag 0x0076
	return
EventScript_08204F3F: @ 0x08204F3F
EventScript_JP_08204F3F: @ 0x08204F3F
	loadword 0x00, FortreeCity_House2_Text_ExplainHiddenPower
	callstd 0x04
	release
	end
EventScript_08204F49: @ 0x08204F49
EventScript_JP_08204F49: @ 0x08204F49
	loadword 0x00, FortreeCity_House2_Text_YouGuessedWrong
	callstd 0x04
	release
	end
