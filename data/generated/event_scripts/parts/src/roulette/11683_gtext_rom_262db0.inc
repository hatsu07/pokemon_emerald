	@ src/roulette.c:429 Roulette_Text_BoardWillBeCleared
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262DB0
gText_Rom_262DB0: @ 0x08262DB0
	.string "だいの うえの たまを\nクリア します$"
	.if (. - gText_Rom_262DB0) != 0x14
	.error "gText_Rom_262DB0 must retain its original byte length"
	.endif
