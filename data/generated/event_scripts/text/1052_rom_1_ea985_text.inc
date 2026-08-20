
	@ trainerbattle-cfg:0x1EA495 TrainerBattleText_1EA985
	.globl gText_Rom_1EA985
gText_Rom_1EA985: @ 0x081EA985
	.string "たはーっ！\nおもっていたより　つよいんだね　きみは！{EOS}"
	.if (. - gText_Rom_1EA985) > 0x1b
	.error "gText_Rom_1EA985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA985) < 0x1b
	.space 0x1b - (. - gText_Rom_1EA985)
	.endif
