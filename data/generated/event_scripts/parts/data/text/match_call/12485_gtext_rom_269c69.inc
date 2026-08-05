	@ data/text/match_call.inc:604 MatchCall_BattlePyramidText11
	.globl gText_Rom_269C69
gText_Rom_269C69: @ 0x08269C69
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}だんも のぼったんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ できない?\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_269C69) > 0x59
	.error "gText_Rom_269C69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269C69) < 0x59
	.space 0x59 - (. - gText_Rom_269C69)
	.endif
