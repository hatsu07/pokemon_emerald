	@ data/text/match_call.inc:259 MatchCall_PersonalizedText16
	.globl gText_Rom_266F39
gText_Rom_266F39: @ 0x08266F39
	.string "{STR_VAR_1}だ!\nポケモンに カラテを おしえてたら\lほんとに おれより つよくなっちまって\lおれ まけまくりだ!\pだが おれは ポケモンに まけても\nトレーナー には まけん!\lいつか また おれと しょうぶだ!\lうがー!$"
	.if (. - gText_Rom_266F39) > 0x6d
	.error "gText_Rom_266F39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266F39) < 0x6d
	.space 0x6d - (. - gText_Rom_266F39)
	.endif
