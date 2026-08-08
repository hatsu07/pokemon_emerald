	@ data/maps/MagmaHideout_2F_2R/scripts.inc:45 MagmaHideout_2F_2R_Text_Grunt6PostBattle
	.globl gText_Rom_21C54E
gText_Rom_21C54E: @ 0x0821C54E
	.string "こんなところに いると\nうみが こいしく なったり しないか?"
	.byte EOS
	.if (. - gText_Rom_21C54E) > 0x20
	.error "gText_Rom_21C54E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C54E) < 0x20
	.space 0x20 - (. - gText_Rom_21C54E)
	.endif
