	@ data/text/match_call.inc:877 MatchCall_Text_Norman_Preparing
	.globl gText_Rom_26BE92
gText_Rom_26BE92: @ 0x0826BE92
	.string "パパ『せや! うりゃ! どりゃー!\p……お {PLAYER}か!\pわたしは いま ポケモンと いっしょに\nトレーニングの まっさいちゅうだ!"
	.byte EOS
	.if (. - gText_Rom_26BE92) > 0x41
	.error "gText_Rom_26BE92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BE92) < 0x41
	.space 0x41 - (. - gText_Rom_26BE92)
	.endif
