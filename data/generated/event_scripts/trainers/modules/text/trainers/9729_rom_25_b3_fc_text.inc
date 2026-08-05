	@ data/text/trainers.inc:740 Route110_Text_AnthonyDefeated (+1 aliases)
	.globl gText_Rom_25B3FC
gText_Rom_25B3FC: @ 0x0825B3FC
	.string "オー マイ ガッ!$"
	.if (. - gText_Rom_25B3FC) > 0xa
	.error "gText_Rom_25B3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B3FC) < 0xa
	.space 0xa - (. - gText_Rom_25B3FC)
	.endif
