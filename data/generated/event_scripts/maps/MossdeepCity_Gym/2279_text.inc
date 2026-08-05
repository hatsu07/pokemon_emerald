	@ data/maps/MossdeepCity_Gym/scripts.inc:504 MossdeepCity_Gym_Text_TateAndLizaPostBattle
	.globl gText_Rom_20C075
gText_Rom_20C075: @ 0x0820C075
	.string "フウ『きょうだいの きずな より\nきみと ポケモンとの きずなの ほうが\lはるかに つよかった みたいだね……\pラン『あなたなら もっと つよくなれる!\nたたかった あたしたちには わかるわ!$"
	.if (. - gText_Rom_20C075) > 0x61
	.error "gText_Rom_20C075 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C075) < 0x61
	.space 0x61 - (. - gText_Rom_20C075)
	.endif
