	@ data/maps/VictoryRoad_1F/scripts.inc:148 VictoryRoad_1F_Text_AlbertIntro (+1 aliases)
	.globl gText_Rom_2197F2
gText_Rom_2197F2: @ 0x082197F2
	.string "せっかく ここまで きたんだ\nいまさら まけるなんて ありえないよ!"
	.byte EOS
	.if (. - gText_Rom_2197F2) > 0x23
	.error "gText_Rom_2197F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197F2) < 0x23
	.space 0x23 - (. - gText_Rom_2197F2)
	.endif
