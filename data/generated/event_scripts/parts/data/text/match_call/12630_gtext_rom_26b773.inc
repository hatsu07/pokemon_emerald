	@ data/text/match_call.inc:820 MatchCall_Text_Wally1
	.globl gText_Rom_26B773
gText_Rom_26B773: @ 0x0826B773
	.string "ミツル『あっ {PLAYER}さん!\pさいきんは からだの ぐあいも\nずいぶん よくなって きたし\pぼくも はやく {PLAYER}さん みたいな\nトレーナーに なりたいな!"
	.byte EOS
	.if (. - gText_Rom_26B773) > 0x4c
	.error "gText_Rom_26B773 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B773) < 0x4c
	.space 0x4c - (. - gText_Rom_26B773)
	.endif
