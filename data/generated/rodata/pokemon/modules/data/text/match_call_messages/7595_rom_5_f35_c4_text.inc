	@ src/data/text/match_call_messages.h:299 gText_MatchCallLass_Haley_Intro2
	.globl gText_Rom_5F35C4
gText_Rom_5F35C4: @ 0x085F35C4
	.string "おふろに はいりまーす$"
	.if (. - gText_Rom_5F35C4) > 0xc
	.error "gText_Rom_5F35C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35C4) < 0xc
	.space 0xc - (. - gText_Rom_5F35C4)
	.endif
