	@ data/maps/VictoryRoad_B1F/scripts.inc:47 VictoryRoad_B1F_Text_MichelleIntro (+1 aliases)
	.globl gText_Rom_219AA3
gText_Rom_219AA3: @ 0x08219AA3
	.string "ここは ゴール じゃないの\nポケモンリーグへの つうかてん よ!"
	.byte EOS
	.if (. - gText_Rom_219AA3) > 0x21
	.error "gText_Rom_219AA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AA3) < 0x21
	.space 0x21 - (. - gText_Rom_219AA3)
	.endif
