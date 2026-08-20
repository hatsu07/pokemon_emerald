	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:617 LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool
	.globl gText_Rom_209015
gText_Rom_209015: @ 0x08209015
	.string "{STR_VAR_1}さん って かっこいい……\pねえ みんなも\nそう おもうでしょー?{EOS}"
	.if (. - gText_Rom_209015) > 0x24
	.error "gText_Rom_209015 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209015) < 0x24
	.space 0x24 - (. - gText_Rom_209015)
	.endif
