	@ data/text/match_call.inc:163 MatchCall_SameRouteBattleRequestText12
	.globl gText_Rom_2661E8
gText_Rom_2661E8: @ 0x082661E8
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lいま どこに いるのかな?\p{STR_VAR_2} か! すぐ ちかく じゃな\nこれから わしと しょうぶ せんか?\pまっておるぞ じゃあの$"
	.if (. - gText_Rom_2661E8) > 0x4d
	.error "gText_Rom_2661E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2661E8) < 0x4d
	.space 0x4d - (. - gText_Rom_2661E8)
	.endif
