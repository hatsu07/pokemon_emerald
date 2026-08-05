	@ src/data/text/match_call_messages.h:229 gText_MatchCallNinjaBoy_Lao_Intro2
	.globl gText_Rom_5F32B6
gText_Rom_5F32B6: @ 0x085F32B6
	.string "まいにち しゅぎょうで ござる$"
	.if (. - gText_Rom_5F32B6) > 0x10
	.error "gText_Rom_5F32B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32B6) < 0x10
	.space 0x10 - (. - gText_Rom_5F32B6)
	.endif
