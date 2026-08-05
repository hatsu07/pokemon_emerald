	@ src/data/text/match_call_messages.h:309 gText_MatchCallHiker_Trent_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F362E
gText_Rom_5F362E: @ 0x085F362E
	.string "ひとつきまえから けいかく$"
	.if (. - gText_Rom_5F362E) != 0xe
	.error "gText_Rom_5F362E must retain its original byte length"
	.endif
