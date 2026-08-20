	@ data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc:136 BattleFrontier_BattlePalaceCorridor_Text_MonDifferentWhenCornered
	.globl gText_Rom_22B0CE
gText_Rom_22B0CE: @ 0x0822B0CE
	.string "せいかくとは ふしぎな ものだ……\pおいつめられる ことで ガラッと\nこうどうが かわる ものも おる……{EOS}"
	.if (. - gText_Rom_22B0CE) > 0x36
	.error "gText_Rom_22B0CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B0CE) < 0x36
	.space 0x36 - (. - gText_Rom_22B0CE)
	.endif
