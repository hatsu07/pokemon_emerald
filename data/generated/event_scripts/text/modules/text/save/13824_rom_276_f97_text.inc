	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_Rom_276F97
gText_Rom_276F97: @ 0x08276F97
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください$"
	.if (. - gText_Rom_276F97) > 0x24
	.error "gText_Rom_276F97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276F97) < 0x24
	.space 0x24 - (. - gText_Rom_276F97)
	.endif
