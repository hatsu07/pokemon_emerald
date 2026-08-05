	@ data/text/match_call.inc:430 MatchCall_BattleFrontierStreakText9 (+1 aliases)
	.globl gText_Rom_269020
gText_Rom_269020: @ 0x08269020
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\pきいたわよ! {STR_VAR_2}で\n{STR_VAR_3}れんしょうも したって!\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269020) > 0x44
	.error "gText_Rom_269020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269020) < 0x44
	.space 0x44 - (. - gText_Rom_269020)
	.endif
