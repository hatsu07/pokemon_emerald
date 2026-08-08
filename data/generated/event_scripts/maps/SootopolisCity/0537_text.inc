	@ data/maps/SootopolisCity/scripts.inc:1444 SootopolisCity_Text_NoOrdinaryTourist
	.globl gText_Rom_1E2FFF
gText_Rom_1E2FFF: @ 0x081E2FFF
	.string "ほう!\nわざわざ ルネに やってくるとは\lただの かんこうきゃく じゃ ないな!\pだからといって おかねを はらった\nかんこうきゃく でも ないな……$"
	.if (. - gText_Rom_1E2FFF) > 0x4c
	.error "gText_Rom_1E2FFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FFF) < 0x4c
	.space 0x4c - (. - gText_Rom_1E2FFF)
	.endif
