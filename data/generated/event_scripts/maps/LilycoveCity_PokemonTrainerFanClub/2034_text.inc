	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:632 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool
	.globl gText_Rom_209116
gText_Rom_209116: @ 0x08209116
	.string "{STR_VAR_1}って かっこいいよねー\nぼく あくしゅ してほしいなー{EOS}"
	.if (. - gText_Rom_209116) > 0x1e
	.error "gText_Rom_209116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209116) < 0x1e
	.space 0x1e - (. - gText_Rom_209116)
	.endif
