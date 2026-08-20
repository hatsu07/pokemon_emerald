	@ data/maps/MossdeepCity_Gym/scripts.inc:483 MossdeepCity_Gym_Text_NicholasPostBattle
	.globl gText_Rom_20BE1B
gText_Rom_20BE1B: @ 0x0820BE1B
	.string "よし! つぎは\nスペシャルポケモンまけないパワー でも\lかいはつ するかな?{EOS}"
	.if (. - gText_Rom_20BE1B) > 0x27
	.error "gText_Rom_20BE1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BE1B) < 0x27
	.space 0x27 - (. - gText_Rom_20BE1B)
	.endif
