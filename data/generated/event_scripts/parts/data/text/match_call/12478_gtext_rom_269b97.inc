	@ data/text/match_call.inc:595 MatchCall_BattlePyramidText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269B97
gText_Rom_269B97: @ 0x08269B97
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}だんも\lかちぬいたんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269B97) != 0x58
	.error "gText_Rom_269B97 must retain its original byte length"
	.endif
