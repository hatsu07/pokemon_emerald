	@ asm/mystery_event_script.s:625 MEScrCmd_enableresetrtc
	.globl gText_Rom_5FCB59
gText_Rom_5FCB59: @ 0x085FCB59
	.string "ずかんに　ぜんこくモードが\nついか　された！$"
	.if (. - gText_Rom_5FCB59) > 0x17
	.error "gText_Rom_5FCB59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB59) < 0x17
	.space 0x17 - (. - gText_Rom_5FCB59)
	.endif
