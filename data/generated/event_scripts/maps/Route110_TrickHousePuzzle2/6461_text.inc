	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:126 Route110_TrickHousePuzzle2_Text_GeorgiaDefeat (+1 aliases)
	.globl gText_Rom_23E29B
gText_Rom_23E29B: @ 0x0823E29B
	.string "ポケモンしょうぶは\nけんきゅう ぶそく だったわーっ!{EOS}"
	.if (. - gText_Rom_23E29B) > 0x1c
	.error "gText_Rom_23E29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E29B) < 0x1c
	.space 0x1c - (. - gText_Rom_23E29B)
	.endif
