	@ data/text/trainers.inc:2429 Route123_Text_CameronPostBattle
	.globl gText_Rom_25FAD8
gText_Rom_25FAD8: @ 0x0825FAD8
	.string "サイキックとは きもちの つよさ\nきみには まけないと おもっていたのに……$"
	.if (. - gText_Rom_25FAD8) > 0x27
	.error "gText_Rom_25FAD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FAD8) < 0x27
	.space 0x27 - (. - gText_Rom_25FAD8)
	.endif
