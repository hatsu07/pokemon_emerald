	@ data/text/shoal_cave.inc:37 ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell
	.globl gText_Rom_2641E5
gText_Rom_2641E5: @ 0x082641E5
	.string "そうかね……\nかいがらのすず つくりたかった……$"
	.if (. - gText_Rom_2641E5) > 0x19
	.error "gText_Rom_2641E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2641E5) < 0x19
	.space 0x19 - (. - gText_Rom_2641E5)
	.endif
