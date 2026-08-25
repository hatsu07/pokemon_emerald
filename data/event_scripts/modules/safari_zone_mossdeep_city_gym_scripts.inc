	@ data/maps/MossdeepCity_Gym/scripts.inc:417 MossdeepCity_Gym_Text_SamanthaDefeat (+2 aliases)
	.globl MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts
MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts: @ 0x08260743
	.string "まいりました……!{EOS}"
	.if (. - MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts) > 0xa
	.error "MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts) < 0xa
	.space 0xa - (. - MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts)
	.endif
