	@ data/text/match_call.inc:250 MatchCall_PersonalizedText13
	.globl gText_Rom_266DBC
gText_Rom_266DBC: @ 0x08266DBC
	.string "うふふふふふふ……\nボ ボク {STR_VAR_1}です\pいま めのまえで\n{STR_VAR_2} どうしが たたかってるんだ\lかった ほうを つかまえよう かな?\lうふふふふ……\pじ じゃ いそがしいから\nボクは これで$"
	.if (. - gText_Rom_266DBC) > 0x5e
	.error "gText_Rom_266DBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266DBC) < 0x5e
	.space 0x5e - (. - gText_Rom_266DBC)
	.endif
