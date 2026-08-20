	@ data/text/trainers.inc:251 Route104_Text_WinstonPostBattle
	.globl gText_Rom_25A05F
gText_Rom_25A05F: @ 0x0825A05F
	.string "おかねじゃ かてない ものが ある……\nそれが ポケモンなんだね……{EOS}"
	.if (. - gText_Rom_25A05F) > 0x23
	.error "gText_Rom_25A05F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A05F) < 0x23
	.space 0x23 - (. - gText_Rom_25A05F)
	.endif
