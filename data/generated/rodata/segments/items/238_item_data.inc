	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl gText_Rom_5CB021
gText_Rom_5CB021: @ 0x085CB021
	.string "びょう$"
	.if (. - gText_Rom_5CB021) > 0x4
	.error "gText_Rom_5CB021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB021) < 0x4
	.space 0x4 - (. - gText_Rom_5CB021)
	.endif
	.globl gUnknown_85CB025
gUnknown_85CB025: @ 0x085CB025

