	@ data/text/trainers.inc:2078 Route119_Text_ChrisIntro (+1 aliases)
	.globl gText_Rom_25EC2D
gText_Rom_25EC2D: @ 0x0825EC2D
	.string "わたしに はなしかけた……\nつまり しょうぶを いどむ つもりだな!\pよーし! なみのり しながら\nつりあげた ポケモンで たたかうぞ!$"
	.if (. - gText_Rom_25EC2D) > 0x45
	.error "gText_Rom_25EC2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC2D) < 0x45
	.space 0x45 - (. - gText_Rom_25EC2D)
	.endif
