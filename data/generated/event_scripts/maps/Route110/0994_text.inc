	@ data/maps/Route110/scripts.inc:859 Route110_Text_CyclingChallengeResultSummary
	.globl gText_Rom_1E9C26
gText_Rom_1E9C26: @ 0x081E9C26
	.string "ぶつかった かいすう\n …… {STR_VAR_1}!\pかかった タイム\n …… {STR_VAR_2}!{EOS}"
	.if (. - gText_Rom_1E9C26) > 0x24
	.error "gText_Rom_1E9C26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9C26) < 0x24
	.space 0x24 - (. - gText_Rom_1E9C26)
	.endif
