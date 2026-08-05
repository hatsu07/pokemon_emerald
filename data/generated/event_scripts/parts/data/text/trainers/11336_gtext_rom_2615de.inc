	@ data/text/trainers.inc:3083 Route129_Text_ReedDefeat (+1 aliases)
	.globl gText_Rom_2615DE
gText_Rom_2615DE: @ 0x082615DE
	.string "まけた まけたよ\nとっとと おわろうぜ!$"
	.if (. - gText_Rom_2615DE) > 0x15
	.error "gText_Rom_2615DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2615DE) < 0x15
	.space 0x15 - (. - gText_Rom_2615DE)
	.endif
