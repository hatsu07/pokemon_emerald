	@ src/data/text/match_call_messages.h:228 gText_MatchCallNinjaBoy_Lao_Intro1
	.globl gText_Rom_5F32AB
gText_Rom_5F32AB: @ 0x085F32AB
	.string "にんじゃに なるため$"
	.if (. - gText_Rom_5F32AB) > 0xb
	.error "gText_Rom_5F32AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32AB) < 0xb
	.space 0xb - (. - gText_Rom_5F32AB)
	.endif
