	@ data/text/match_call.inc:268 MatchCall_PersonalizedText19
	.globl gText_Rom_267091
gText_Rom_267091: @ 0x08267091
	.string "キャンプの たつじん\n{STR_VAR_1} だ!\pま こないだ ぼくが まけちゃったのは\nぼくの せんもんが キャンプだからね\lしかたが なかったのさ!\pかっても まけても\nキャンプで ポケモンしょうぶ するの\lぼく だいすき なんだ!\pまたこんど あいてを たのむよ\nあ キャンプも いっしょに しようぜ!$"
	.if (. - gText_Rom_267091) > 0x93
	.error "gText_Rom_267091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267091) < 0x93
	.space 0x93 - (. - gText_Rom_267091)
	.endif
