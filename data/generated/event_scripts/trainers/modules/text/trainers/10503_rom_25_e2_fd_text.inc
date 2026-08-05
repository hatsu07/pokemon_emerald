	@ data/text/trainers.inc:1847 Route117_Text_AishaPostBattle
	.globl gText_Rom_25E2FD
gText_Rom_25E2FD: @ 0x0825E2FD
	.string "まけるかな?と しんぱい すると\nよけいに まけちゃうと おもうのよね$"
	.if (. - gText_Rom_25E2FD) > 0x24
	.error "gText_Rom_25E2FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E2FD) < 0x24
	.space 0x24 - (. - gText_Rom_25E2FD)
	.endif
