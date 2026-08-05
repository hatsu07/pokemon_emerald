	@ data/text/match_call.inc:889 MatchCall_Text_Steven1
	.globl gText_Rom_26BF8E
gText_Rom_26BF8E: @ 0x0826BF8E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pもう キンセツシティには いったかな?\pまちの サイクルショップで\nマッハじてんしゃを てにいれたら\pもういちど いしのどうくつの おくに\nいってみるのも いいね!\pなにか あたらしい はっけんが\nあるかも しれないよ!"
	.byte EOS
	.if (. - gText_Rom_26BF8E) > 0x7c
	.error "gText_Rom_26BF8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF8E) < 0x7c
	.space 0x7c - (. - gText_Rom_26BF8E)
	.endif
