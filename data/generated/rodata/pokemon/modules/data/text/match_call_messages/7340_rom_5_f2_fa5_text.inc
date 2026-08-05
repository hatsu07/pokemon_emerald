	@ src/data/text/match_call_messages.h:157 gText_MatchCallPokefan_Miguel_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2FA5
gText_Rom_5F2FA5: @ 0x085F2FA5
	.string "あいを そそいだ ポケモン$"
	.if (. - gText_Rom_5F2FA5) != 0xe
	.error "gText_Rom_5F2FA5 must retain its original byte length"
	.endif
