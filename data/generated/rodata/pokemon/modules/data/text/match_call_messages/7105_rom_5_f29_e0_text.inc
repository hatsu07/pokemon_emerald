	@ src/data/text/match_call_messages.h:22 gText_MatchCallTuber_Ricky_Pokemon
	.globl gText_Rom_5F29E0
gText_Rom_5F29E0: @ 0x085F29E0
	.string "みずポケモンは ともだち!$"
	.if (. - gText_Rom_5F29E0) > 0xe
	.error "gText_Rom_5F29E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29E0) < 0xe
	.space 0xe - (. - gText_Rom_5F29E0)
	.endif
