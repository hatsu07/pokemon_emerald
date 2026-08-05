	@ data/text/trainers.inc:2582 Route124_Text_SpencerIntro (+1 aliases)
	.globl gText_Rom_2600D9
gText_Rom_2600D9: @ 0x082600D9
	.string "おっと みちに まよったのか?\pわたしの ポケモンに かてたら\nみずさき あんないにんに なってあげようか?$"
	.if (. - gText_Rom_2600D9) > 0x37
	.error "gText_Rom_2600D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2600D9) < 0x37
	.space 0x37 - (. - gText_Rom_2600D9)
	.endif
