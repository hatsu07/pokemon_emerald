	.globl gUnknown_85AB055
gUnknown_85AB055: @ 0x085AB055

	@ asm/battle_message.s:3005 ChooseTypeOfMoveUsedString
	.globl gText_Rom_5AB055
gText_Rom_5AB055: @ 0x085AB055
	.string "！$"
	.if (. - gText_Rom_5AB055) > 0x2
	.error "gText_Rom_5AB055 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB055) < 0x2
	.space 0x2 - (. - gText_Rom_5AB055)
	.endif

