	@ src/pokenav_match_call_data.c:654 gText_MatchCallMay_Pokemon
	.globl gText_Rom_5CC846
gText_Rom_5CC846: @ 0x085CC846
	.string "どんな ポケモンでも つかうわ$"
	.if (. - gText_Rom_5CC846) > 0x10
	.error "gText_Rom_5CC846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC846) < 0x10
	.space 0x10 - (. - gText_Rom_5CC846)
	.endif
