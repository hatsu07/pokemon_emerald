	@ data/text/save.inc:6 gText_AlreadySavedFile (+1 aliases)
	.globl gText_Rom_5CC6ED
gText_Rom_5CC6ED: @ 0x085CC6ED
	.string "まえに かかれた レポートに\nうえから かいても いいですか?{EOS}"
	.if (. - gText_Rom_5CC6ED) > 0x20
	.error "gText_Rom_5CC6ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC6ED) < 0x20
	.space 0x20 - (. - gText_Rom_5CC6ED)
	.endif

	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_Rom_5CC70D
gText_Rom_5CC70D: @ 0x085CC70D
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください{EOS}"
	.if (. - gText_Rom_5CC70D) > 0x24
	.error "gText_Rom_5CC70D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC70D) < 0x24
	.space 0x24 - (. - gText_Rom_5CC70D)
	.endif
