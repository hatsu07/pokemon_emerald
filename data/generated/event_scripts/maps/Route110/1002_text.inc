	@ data/maps/Route110/scripts.inc:880 Route110_Text_ChallengeReactionBad
	.globl gText_Rom_1E9CF1
gText_Rom_1E9CF1: @ 0x081E9CF1
	.string "おいおい なんだか\nあぶなっかしい うんてん してるなあ\lもっと れんしゅう しろよな{EOS}"
	.if (. - gText_Rom_1E9CF1) > 0x2c
	.error "gText_Rom_1E9CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9CF1) < 0x2c
	.space 0x2c - (. - gText_Rom_1E9CF1)
	.endif
