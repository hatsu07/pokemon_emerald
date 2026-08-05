	@ data/maps/MossdeepCity_Gym/scripts.inc:516 MossdeepCity_Gym_Text_TateAndLizaPreRematch (+1 aliases)
	.globl gText_Rom_20C186
gText_Rom_20C186: @ 0x0820C186
	.string "フウ『ポケモンは……\nラン『ポケモンは……\pフウ『くみあわせを かえると\nラン『たたかいかたも かわるよね\pフウ『でも ぼくは……\nラン『でも あたしは……\pフウ『いつでも ランと いっしょ!\nラン『いつでも フウと いっしょ!\pフウ『ぼくたちの コンビネーション\nラン『なんどでも みせて あげるわ!$"
	.if (. - gText_Rom_20C186) > 0x98
	.error "gText_Rom_20C186 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C186) < 0x98
	.space 0x98 - (. - gText_Rom_20C186)
	.endif
