	@ data/maps/Route110/scripts.inc:865 Route110_Text_ChallengeReactionBest
	.globl gText_Rom_1E9C4A
gText_Rom_1E9C4A: @ 0x081E9C4A
	.string "ブラボー!! すばらしい!!\pきみは じてんしゃを こころから\nあいしている! たましいを ゆさぶられたよ!{EOS}"
	.if (. - gText_Rom_1E9C4A) > 0x37
	.error "gText_Rom_1E9C4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9C4A) < 0x37
	.space 0x37 - (. - gText_Rom_1E9C4A)
	.endif
