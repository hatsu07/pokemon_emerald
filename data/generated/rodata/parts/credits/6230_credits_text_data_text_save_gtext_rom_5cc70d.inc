	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_Rom_5CC70D
gText_Rom_5CC70D: @ 0x085CC70D
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください$"
	.if (. - gText_Rom_5CC70D) > 0x24
	.error "gText_Rom_5CC70D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC70D) < 0x24
	.space 0x24 - (. - gText_Rom_5CC70D)
	.endif
