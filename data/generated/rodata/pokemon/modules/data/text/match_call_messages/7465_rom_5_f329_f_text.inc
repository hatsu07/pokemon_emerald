	@ src/data/text/match_call_messages.h:227 gText_MatchCallNinjaBoy_Lao_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F329F
gText_Rom_5F329F: @ 0x085F329F
	.string "どくどくしい ポケモン$"
	.if (. - gText_Rom_5F329F) != 0xc
	.error "gText_Rom_5F329F must retain its original byte length"
	.endif
