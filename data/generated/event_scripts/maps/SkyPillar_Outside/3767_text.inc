	@ data/maps/SkyPillar_Outside/scripts.inc:142 SkyPillar_Outside_Text_OpenedDoorToSkyPillar
	.globl gText_Rom_21BD56
gText_Rom_21BD56: @ 0x0821BD56
	.string "ミクリ『やっ ごめん ごめん!\pあんまり あわてた ものだから\nきみを おいてきて しまったよ!\pしまっていた そらのはしらの とびらは\nわたしが あけて おいた\p{PLAYER}{KUN} さあ いこう!"
	.byte EOS
	.if (. - gText_Rom_21BD56) > 0x5f
	.error "gText_Rom_21BD56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BD56) < 0x5f
	.space 0x5f - (. - gText_Rom_21BD56)
	.endif
