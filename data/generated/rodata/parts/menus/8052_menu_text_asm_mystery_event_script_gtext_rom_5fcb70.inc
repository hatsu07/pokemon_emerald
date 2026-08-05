	@ asm/mystery_event_script.s:648 MEScrCmd_addrareword
	.globl gText_Rom_5FCB70
gText_Rom_5FCB70: @ 0x085FCB70
	.string "めずらしい　ことばを　ついかしました$"
	.if (. - gText_Rom_5FCB70) > 0x13
	.error "gText_Rom_5FCB70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB70) < 0x13
	.space 0x13 - (. - gText_Rom_5FCB70)
	.endif
