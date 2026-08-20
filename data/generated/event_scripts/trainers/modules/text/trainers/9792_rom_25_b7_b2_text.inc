	@ data/text/trainers.inc:830 Route110_Text_EdwinRematchDefeated (+1 aliases)
	.globl gText_Rom_25B7B2
gText_Rom_25B7B2: @ 0x0825B7B2
	.string "キミの ポケモン\nうらやましいな……{EOS}"
	.if (. - gText_Rom_25B7B2) > 0x13
	.error "gText_Rom_25B7B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B7B2) < 0x13
	.space 0x13 - (. - gText_Rom_25B7B2)
	.endif
