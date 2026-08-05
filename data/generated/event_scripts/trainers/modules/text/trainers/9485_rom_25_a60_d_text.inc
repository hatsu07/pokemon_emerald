	@ data/text/trainers.inc:383 Route106_Text_ElliotPostBattle
	.globl gText_Rom_25A60D
gText_Rom_25A60D: @ 0x0825A60D
	.string "うみでも かわでも つりは サイコーだ!\nキミも そう おもうだろ!?$"
	.if (. - gText_Rom_25A60D) > 0x24
	.error "gText_Rom_25A60D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A60D) < 0x24
	.space 0x24 - (. - gText_Rom_25A60D)
	.endif
