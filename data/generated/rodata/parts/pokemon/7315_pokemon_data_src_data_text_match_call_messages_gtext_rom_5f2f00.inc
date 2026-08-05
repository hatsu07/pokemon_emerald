	@ src/data/text/match_call_messages.h:142 gText_MatchCallSchoolKid_Jerry_Pokemon
	.globl gText_Rom_5F2F00
gText_Rom_5F2F00: @ 0x085F2F00
	.string "かしこそうな ポケモン!$"
	.if (. - gText_Rom_5F2F00) > 0xd
	.error "gText_Rom_5F2F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F00) < 0xd
	.space 0xd - (. - gText_Rom_5F2F00)
	.endif
