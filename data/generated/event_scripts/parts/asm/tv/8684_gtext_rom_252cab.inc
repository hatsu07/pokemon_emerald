	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_252CAB
gText_Rom_252CAB: @ 0x08252CAB
	.string "『ポケモン　たいせん　そくほう！』\pさきほど　おこなわれた　ポケモンバトルの\nけっかを　おつたえします"
	.byte EOS
	.if (. - gText_Rom_252CAB) != 0x34
	.error "gText_Rom_252CAB must retain its original byte length"
	.endif
