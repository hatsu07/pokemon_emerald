	@ data/maps/MossdeepCity_Gym/scripts.inc:486 MossdeepCity_Gym_Text_TateAndLizaIntro (+1 aliases)
	.globl gText_Rom_20BE42
gText_Rom_20BE42: @ 0x0820BE42
	.string "フウ『へへへ…… ジムリーダーが\pラン『ふふふ…… ジムリーダーが\pフウ『ふたりも いるんで おどろいた?\nラン『ふたりも いるんで おどろいた?\pフウ『ぼくたち ふたご!\nラン『あたしたち ふたご!\pフウ『なにも ことばに しなくても\nラン『おたがいの かんがえて いることが\pフウ『あたまの なかに うかぶから\nラン『つうじあうことが できるのヨ!\pフウ『そんな ぼくたちの コンビネーション\nラン『きみに やぶることが できる?$"
	.if (. - gText_Rom_20BE42) > 0xda
	.error "gText_Rom_20BE42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BE42) < 0xda
	.space 0xda - (. - gText_Rom_20BE42)
	.endif
