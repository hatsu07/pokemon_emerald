	@ data/text/match_call.inc:382 MatchCall_PersonalizedText57
	.globl gText_Rom_268449
gText_Rom_268449: @ 0x08268449
	.string "はっ ほっ はっ ほっ\pやあ! {STR_VAR_1}です! はっ ほっ\pやま……のぼり しながらの おしゃべりも\nなかなか どうして…… はっ ほっ\lトレーニングに なるなあ\pふっ くっ……\nおっと のぼりが きつく なってきた\lま また こんど…… ゆっくり はなそう!\lはっ ほっ はっ……$"
	.if (. - gText_Rom_268449) > 0x8c
	.error "gText_Rom_268449 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268449) < 0x8c
	.space 0x8c - (. - gText_Rom_268449)
	.endif
