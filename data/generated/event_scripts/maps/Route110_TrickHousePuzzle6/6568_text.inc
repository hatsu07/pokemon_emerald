	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:63 Route110_TrickHousePuzzle6_Text_BennyPostBattle
	.globl gText_Rom_23FE47
gText_Rom_23FE47: @ 0x0823FE47
	.string "てへへ… ズルしようと したから\nまけちゃったの かな……{EOS}"
	.if (. - gText_Rom_23FE47) > 0x1e
	.error "gText_Rom_23FE47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE47) < 0x1e
	.space 0x1e - (. - gText_Rom_23FE47)
	.endif
