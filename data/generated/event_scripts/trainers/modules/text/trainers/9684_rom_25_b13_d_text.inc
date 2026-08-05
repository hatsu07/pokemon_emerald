	@ data/text/trainers.inc:674 Route109_Text_CarterPostBattle
	.globl gText_Rom_25B13D
gText_Rom_25B13D: @ 0x0825B13D
	.string "たしかに きみは おおもの だな!\nいや きっと おおものに なるぞ!$"
	.if (. - gText_Rom_25B13D) > 0x24
	.error "gText_Rom_25B13D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B13D) < 0x24
	.space 0x24 - (. - gText_Rom_25B13D)
	.endif
