	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:247 Route119_WeatherInstitute_2F_Text_ShellyIntro (+1 aliases)
	.globl gText_Rom_2418B8
gText_Rom_2418B8: @ 0x082418B8
	.string "オーッホッホ!\pわれわれ アクアだんの\nじゃまを しようと いうの!?\pもう こわいものしらず といおうか\nただの おろかものと いおうか……\pかわいすぎて にくらしく なっちゃう!\nやっつけて あげるわね!{EOS}"
	.if (. - gText_Rom_2418B8) > 0x69
	.error "gText_Rom_2418B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2418B8) < 0x69
	.space 0x69 - (. - gText_Rom_2418B8)
	.endif
