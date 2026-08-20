
	@ trainerbattle-cfg:0x1EA4F2 TrainerBattleText_1EAA09
	.globl gText_Rom_1EAA09
gText_Rom_1EAA09: @ 0x081EAA09
	.string "んまーっ！\nあなたって　なんて　つよいのかしら！{EOS}"
	.if (. - gText_Rom_1EAA09) > 0x19
	.error "gText_Rom_1EAA09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA09) < 0x19
	.space 0x19 - (. - gText_Rom_1EAA09)
	.endif
