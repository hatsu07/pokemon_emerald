	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:596 LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather
	.globl gText_Rom_208DDE
gText_Rom_208DDE: @ 0x08208DDE
	.string "きみは ついに あらゆる めんで\nきみの おとうさんを こえたな！\pこの わしが いって いるんだから\nまちがいない！{EOS}"
	.if (. - gText_Rom_208DDE) > 0x3c
	.error "gText_Rom_208DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208DDE) < 0x3c
	.space 0x3c - (. - gText_Rom_208DDE)
	.endif
