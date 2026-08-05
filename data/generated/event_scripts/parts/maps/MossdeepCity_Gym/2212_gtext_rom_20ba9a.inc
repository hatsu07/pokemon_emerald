	@ data/maps/MossdeepCity_Gym/scripts.inc:405 MossdeepCity_Gym_Text_HannahIntro (+1 aliases)
	.globl gText_Rom_20BA9A
gText_Rom_20BA9A: @ 0x0820BA9A
	.string "あなたが アタシに まけた としても\nおちこまない ことね!\pあなたが よわい わけじゃ なくて\nアタシが つよすぎる からよ!$"
	.if (. - gText_Rom_20BA9A) > 0x41
	.error "gText_Rom_20BA9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BA9A) < 0x41
	.space 0x41 - (. - gText_Rom_20BA9A)
	.endif
