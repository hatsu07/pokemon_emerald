	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl FortreeCity_House4_Text_Wingull_Copy_Rom_20C4A7
FortreeCity_House4_Text_Wingull_Copy_Rom_20C4A7: @ 0x0820C4A7
	.string "キャモメ『ぴひょー!{EOS}"
	.if (. - FortreeCity_House4_Text_Wingull_Copy_Rom_20C4A7) > 0xb
	.error "FortreeCity_House4_Text_Wingull_Copy_Rom_20C4A7 may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House4_Text_Wingull_Copy_Rom_20C4A7) < 0xb
	.space 0xb - (. - FortreeCity_House4_Text_Wingull_Copy_Rom_20C4A7)
	.endif
