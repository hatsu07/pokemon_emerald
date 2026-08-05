	@ src/data/text/match_call_messages.h:226 gText_MatchCallNinjaBoy_Lao_Strategy
	.globl gText_Rom_5F3290
gText_Rom_5F3290: @ 0x085F3290
	.string "どく こうげきで くるしめる$"
	.if (. - gText_Rom_5F3290) > 0xf
	.error "gText_Rom_5F3290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3290) < 0xf
	.space 0xf - (. - gText_Rom_5F3290)
	.endif
