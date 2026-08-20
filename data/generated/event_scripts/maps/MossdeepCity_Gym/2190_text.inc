	@ data/maps/MossdeepCity_Gym/scripts.inc:372 MossdeepCity_Gym_Text_GymGuideAdvice
	.globl gText_Rom_20B83E
gText_Rom_20B83E: @ 0x0820B83E
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pこのジムの ジムリーダーは\nエスパータイプの ポケモンつかい!\pかくとうタイプや どくタイプの\nポケモンで いどむと\lものすごい ダメージを くらうぞ!\pしかも ばつぐんの\nコンビネーションで せめてくる!\pだから きみも かつために ポケモンとの\nきずなを きばって みせて やれ!{EOS}"
	.if (. - gText_Rom_20B83E) > 0xab
	.error "gText_Rom_20B83E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B83E) < 0xab
	.space 0xab - (. - gText_Rom_20B83E)
	.endif
