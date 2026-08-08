	@ data/text/trainers.inc:626 Route109_Text_RickyRematchPostBattle
	.globl gText_Rom_25AFB7
gText_Rom_25AFB7: @ 0x0825AFB7
	.string "すなはまで たべると\nなんでも おいしく おもえるよね$"
	.if (. - gText_Rom_25AFB7) > 0x1c
	.error "gText_Rom_25AFB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFB7) < 0x1c
	.space 0x1c - (. - gText_Rom_25AFB7)
	.endif
