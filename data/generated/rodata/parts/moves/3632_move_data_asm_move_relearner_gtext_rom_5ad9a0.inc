	@ asm/move_relearner.s:1028 HideHeartSpritesAndShowTeachMoveText
	.globl gText_Rom_5AD9A0
gText_Rom_5AD9A0: @ 0x085AD9A0
	.string "{0xFD}{0x02}に　どのわざを　おぼえさせる？$"
	.if (. - gText_Rom_5AD9A0) > 0x12
	.error "gText_Rom_5AD9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9A0) < 0x12
	.space 0x12 - (. - gText_Rom_5AD9A0)
	.endif
