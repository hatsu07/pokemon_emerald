	@ data/text/shoal_cave.inc:16 ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell
	.globl gText_Rom_264111
gText_Rom_264111: @ 0x08264111
	.string "お! あさせのしおと あさせのかいがら!\nりょうも じゅうぶんだ!\pこれで かいがらのすず\nつくっても いいかね?$"
	.if (. - gText_Rom_264111) > 0x3a
	.error "gText_Rom_264111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264111) < 0x3a
	.space 0x3a - (. - gText_Rom_264111)
	.endif
