	@ data/text/match_call.inc:760 MatchCall_Text_May11
	.globl gText_Rom_26AFF8
gText_Rom_26AFF8: @ 0x0826AFF8
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pふねが なくても ポケモンの わざで\nうみのうえを わたって いけるって\lすごいよね!\pでも それだけじゃなくて\nポケモンと いっしょに うみのそこに\lもぐれちゃう わざも あるんだって!"
	.byte EOS
	.if (. - gText_Rom_26AFF8) > 0x6e
	.error "gText_Rom_26AFF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AFF8) < 0x6e
	.space 0x6e - (. - gText_Rom_26AFF8)
	.endif
