	@ src/berry_blender.c:314 sText_SavingDontTurnOff2
	.globl gText_Rom_30FBC8
gText_Rom_30FBC8: @ 0x0830FBC8
	.string "ポケモンレポートに かきこんでいます    \nでんげんを きらないで ください      $"
	.if (. - gText_Rom_30FBC8) > 0x2e
	.error "gText_Rom_30FBC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBC8) < 0x2e
	.space 0x2e - (. - gText_Rom_30FBC8)
	.endif
