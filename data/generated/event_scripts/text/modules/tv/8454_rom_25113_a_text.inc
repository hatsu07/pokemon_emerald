	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_25113A
gText_Rom_25113A: @ 0x0825113A
	.string "……はぁー\pポケモンに　リボンって……\nホントに　いい　ざますね！\pウットリ　したところで\nさよなら　ざますー！$"
	.if (. - gText_Rom_25113A) > 0x39
	.error "gText_Rom_25113A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25113A) < 0x39
	.space 0x39 - (. - gText_Rom_25113A)
	.endif
