	@ data/text/match_call.inc:589 MatchCall_BattlePyramidText6
	.globl gText_Rom_269AFA
gText_Rom_269AFA: @ 0x08269AFA
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}だんも\lかちぬいたんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_269AFA) > 0x4c
	.error "gText_Rom_269AFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269AFA) < 0x4c
	.space 0x4c - (. - gText_Rom_269AFA)
	.endif
