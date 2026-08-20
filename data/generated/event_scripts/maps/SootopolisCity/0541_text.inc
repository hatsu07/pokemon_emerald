	@ data/maps/SootopolisCity/scripts.inc:1450 SootopolisCity_Text_CaveOfOriginPleaseLeave
	.globl gText_Rom_1E305D
gText_Rom_1E305D: @ 0x081E305D
	.string "あなたは なんですかな?\pここは めざめのほこら……\pおくりびやまで しずめられた\nポケモンの たましいが\lよみがえると いわれる ばしょ……\pどうか おひきとり ください{EOS}"
	.if (. - gText_Rom_1E305D) > 0x57
	.error "gText_Rom_1E305D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E305D) < 0x57
	.space 0x57 - (. - gText_Rom_1E305D)
	.endif
