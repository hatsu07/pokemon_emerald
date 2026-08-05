	@ src/strings.c:819 gText_BattlePyramidDesc
	.globl gText_Rom_5CCC9D
gText_Rom_5CCC9D: @ 0x085CCC9D
	.string "ちょうじょうを めざし ぼうけんする。\nゆうきを ためされる。$"
	.if (. - gText_Rom_5CCC9D) > 0x20
	.error "gText_Rom_5CCC9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC9D) < 0x20
	.space 0x20 - (. - gText_Rom_5CCC9D)
	.endif
