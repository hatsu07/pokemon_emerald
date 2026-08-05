	@ data/text/match_call.inc:283 MatchCall_PersonalizedText24
	.globl gText_Rom_2672C6
gText_Rom_2672C6: @ 0x082672C6
	.string "{STR_VAR_1}です\n{PLAYER}{KUN}は げんきそう ですな\pせかい かっこくを まわった わたしですが\nこの ちほうを たいへん きにいりました\lとうぶん いる つもりですよ\pそういう わけ ですから\nまた あえるかも しれませんね\pあなたの みごとな わざ\nわすれては おりませんよ\lまた おあいてを おねがいしますね$"
	.if (. - gText_Rom_2672C6) > 0x98
	.error "gText_Rom_2672C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2672C6) < 0x98
	.space 0x98 - (. - gText_Rom_2672C6)
	.endif
