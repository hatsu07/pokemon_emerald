	@ data/maps/SootopolisCity/scripts.inc:1405 SootopolisCity_Text_FlyingMonStoppedRampage
	.globl gText_Rom_1E2DAA
gText_Rom_1E2DAA: @ 0x081E2DAA
	.string "そらから きた ポケモンが\nあばれていた 2ひきを\lおとなしく させちゃった……{EOS}"
	.if (. - gText_Rom_1E2DAA) > 0x29
	.error "gText_Rom_1E2DAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2DAA) < 0x29
	.space 0x29 - (. - gText_Rom_1E2DAA)
	.endif
