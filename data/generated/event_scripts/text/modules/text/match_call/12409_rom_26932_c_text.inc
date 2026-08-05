	@ data/text/match_call.inc:505 MatchCall_BattleDomeText6
	.globl gText_Rom_26932C
gText_Rom_26932C: @ 0x0826932C
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}かいも\lゆうしょう したんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_26932C) > 0x4f
	.error "gText_Rom_26932C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26932C) < 0x4f
	.space 0x4f - (. - gText_Rom_26932C)
	.endif
