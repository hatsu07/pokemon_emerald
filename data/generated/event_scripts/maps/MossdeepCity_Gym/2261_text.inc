	@ data/maps/MossdeepCity_Gym/scripts.inc:477 MossdeepCity_Gym_Text_NicholasIntro (+1 aliases)
	.globl gText_Rom_20BDE8
gText_Rom_20BDE8: @ 0x0820BDE8
	.string "うぉーっし! おれの\nスーパーポケモンしょうぶつよいパワー を\lうけて みろーっ!{EOS}"
	.if (. - gText_Rom_20BDE8) > 0x2a
	.error "gText_Rom_20BDE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BDE8) < 0x2a
	.space 0x2a - (. - gText_Rom_20BDE8)
	.endif
