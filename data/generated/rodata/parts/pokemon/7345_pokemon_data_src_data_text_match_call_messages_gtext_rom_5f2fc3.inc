	@ src/data/text/match_call_messages.h:159 gText_MatchCallPokefan_Miguel_Intro2
	.globl gText_Rom_5F2FC3
gText_Rom_5F2FC3: @ 0x085F2FC3
	.string "きずく ことが だいじだよ!$"
	.if (. - gText_Rom_5F2FC3) > 0xf
	.error "gText_Rom_5F2FC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FC3) < 0xf
	.space 0xf - (. - gText_Rom_5F2FC3)
	.endif
