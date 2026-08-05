	@ data/maps/FortreeCity_Gym/scripts.inc:222 FortreeCity_Gym_Text_DariusIntro (+1 aliases)
	.globl gText_Rom_204851
gText_Rom_204851: @ 0x08204851
	.string "ひこうタイプ って いっても\nいろんな ポケモンが いるんだぜ!\lおまえ それ わかってる?$"
	.if (. - gText_Rom_204851) > 0x2f
	.error "gText_Rom_204851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204851) < 0x2f
	.space 0x2f - (. - gText_Rom_204851)
	.endif
