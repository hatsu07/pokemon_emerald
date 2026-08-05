	@ data/maps/RustboroCity_Gym/scripts.inc:167 RustboroCity_Gym_Text_MarcDefeat (+1 aliases)
	.globl gText_Rom_2026DB
gText_Rom_2026DB: @ 0x082026DB
	.string "おおーっ!\nいきの いい ちょうせんしゃ だな!$"
	.if (. - gText_Rom_2026DB) > 0x19
	.error "gText_Rom_2026DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2026DB) < 0x19
	.space 0x19 - (. - gText_Rom_2026DB)
	.endif
