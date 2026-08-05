	@ src/data/text/match_call_messages.h:137 gText_MatchCallSchoolKid_Karen_Pokemon
	.globl gText_Rom_5F2EC6
gText_Rom_5F2EC6: @ 0x085F2EC6
	.string "ポケモンは なんでも すき!$"
	.if (. - gText_Rom_5F2EC6) > 0xf
	.error "gText_Rom_5F2EC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EC6) < 0xf
	.space 0xf - (. - gText_Rom_5F2EC6)
	.endif
