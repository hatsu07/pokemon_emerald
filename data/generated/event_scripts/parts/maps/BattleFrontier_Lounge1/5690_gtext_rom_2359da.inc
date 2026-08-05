	@ data/maps/BattleFrontier_Lounge1/scripts.inc:198 BattleFrontier_Lounge1_Text_NoTimeForMyAdvice
	.globl gText_Rom_2359DA
gText_Rom_2359DA: @ 0x082359DA
	.string "なんじゃい!\nわしの あどばいすは いらんと いうのか!\pじんせいの せんぱいの おしえは\nだまって きく もんじゃぞ!!"
	.byte EOS
	.if (. - gText_Rom_2359DA) > 0x3e
	.error "gText_Rom_2359DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2359DA) < 0x3e
	.space 0x3e - (. - gText_Rom_2359DA)
	.endif
