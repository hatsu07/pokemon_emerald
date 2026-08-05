	@ data/text/match_call.inc:805 MatchCall_Text_Brendan11
	.globl gText_Rom_26B585
gText_Rom_26B585: @ 0x0826B585
	.string "ユウキ『なあなあ {PLAYER}!\pふねが なくても ポケモンの わざで\nうみのうえを わたって いけるって\lなんだか すごくないか!?\pしかも ポケモンと いっしょに\nうみのそこに もぐれる わざも あるって!\pポケモンって なんでも できるんだなー!"
	.byte EOS
	.if (. - gText_Rom_26B585) > 0x7b
	.error "gText_Rom_26B585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B585) < 0x7b
	.space 0x7b - (. - gText_Rom_26B585)
	.endif
