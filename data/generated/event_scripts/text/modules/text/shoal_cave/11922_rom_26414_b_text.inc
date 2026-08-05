	@ data/text/shoal_cave.inc:22 ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway
	.globl gText_Rom_26414B
gText_Rom_26414B: @ 0x0826414B
	.string "かいがらのすず\nさっそく つくらせて もらうよ\p…… …… ……\n…… …… ……\pよし できたっ!$"
	.if (. - gText_Rom_26414B) > 0x33
	.error "gText_Rom_26414B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26414B) < 0x33
	.space 0x33 - (. - gText_Rom_26414B)
	.endif
