	@ src/data/text/match_call_messages.h:73 gText_MatchCallPokeManiac_Steve_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C0F
gText_Rom_5F2C0F: @ 0x085F2C0F
	.string "おおきくて たくましい$"
	.if (. - gText_Rom_5F2C0F) != 0xc
	.error "gText_Rom_5F2C0F must retain its original byte length"
	.endif
